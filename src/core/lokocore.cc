#include "lokocore.h"

namespace loko{

LokoCore::LokoCore()
{
    mupdf = new LokoMupdf;
}

LokoCore::~LokoCore()
{

}

bool LokoCore::Handle(std::string str)
{
    bool ret = false;
    LOG(INFO) << "enter " << __func__;
    boost::shared_ptr<LokoCmd> cmd(new LokoCmd(str));
    ret = Handle(cmd.get());
    return ret;
}

bool LokoCore::Handle(std::string str, LokoBuf, LokoBuf * buf1)
{
    bool ret = false;
    buf = buf1;
    ret = Handle(str);
    return ret;
}


bool LokoCore::Handle(LokoCmd * cmd)
{
    bool ret = false;
    LOG(INFO) << "enter " << __func__;
    std::string cmdStr = cmd->GetCmd();
    if(cmdStr == "open")
    {
        std::string str1 = cmd->GetCmd();
        mupdf->SetFile(str1);
        mupdf->Open();
    }
    else if(cmdStr == "getpage")
    {
        std::string str1 = cmd->GetCmd();
        ret = mupdf->GetPage(std::stoi(str1));
    }
    else if(cmdStr == "getdata")
    {
        std::string str1 = cmd->GetCmd();
        ret = mupdf->GetPage(std::stoi(str1));
    }
    else 
    {
        LOG(WARNING) << "not support this command";
    }

    return ret;
}

}

