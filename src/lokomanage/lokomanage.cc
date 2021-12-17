#include "lokomanage.h"

namespace loko{

LokoManage::LokoManage()
{

}

LokoManage::~LokoManage()
{

}

bool LokoManage::Handle(LokoCmd * cmd)
{
    bool ret = false;
    LOG(INFO) << "enter "  << __func__;

    return ret;
}

}
