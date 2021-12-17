#include "lokocmd.h"

namespace loko{

LokoCmd::LokoCmd()
{
    outstream.clear();
}

LokoCmd::LokoCmd(std::string str)
{
    if(!str.empty())
    {
        Str = str;
        ParseCmd(str);
    }

}

LokoCmd::~LokoCmd()
{
    
}

std::string LokoCmd::GetCmd()
{
    std::string str;
    if(strVector.size() >= offset)
    {
        str = strVector.at(offset);
        offset++;
    }
    else
    {
        str = "null";
        LOG(WARNING)<< "LokoCmd no more data";
    }

    return str;
}

std::vector<std::string> LokoCmd::GetOption()
{
    std::vector<std::string> optionVec;
    int len = strVector.size();
    for (int i = offset; i < len; i++) {
            optionVec.push_back(strVector[i]);
    }
    return optionVec;
}

bool LokoCmd::GetResult(std::stringstream &stream)
{
    bool ret = false;
    stream << outstream.str();
   // outstream.clear();
    return ret;
}

bool LokoCmd::SetResult(std::stringstream &stream)
{
    bool ret = false;
    //outstream.clear();
    outstream << stream.str();
    return ret;
}

bool LokoCmd::ParseCmd(std::string str)
{
    bool ret = false;
    if(str.empty())
    {
        LOG(WARNING) << "str is empty";
        return ret;
    }

    LOG(INFO) << "str is " << str;
    if (str.size() < 2)
        return ret;

    //cmd->Clear();

    Str = str;


    boost::split(strVector, str, boost::is_any_of(" "), boost::token_compress_on);

      for (int i = 0; i < strVector.size(); i++) {
            LOG(INFO) << strVector[i];
        }
    offset = 0;
/*

    int len = strVector.size();
    LOG(INFO) << "command len is " << len;
    if (len == 1) {
        Cmd = strVector[0]; 
    }
    else if (len > 2) {
        Cmd = strVector[0];
        for (int i = 1; i < len; i++) {
            Option.push_back(strVector[i]);
        }
    }
 */
    ret = true;

    return ret;
}



}