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
    else 
    {
        LOG(WARNING) << "not support this command";
    }

    return ret;
}

}

