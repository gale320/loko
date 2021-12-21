#include "lokodb.h"

namespace loko{

LokoDb::LokoDb()
{

}

LokoDb::~LokoDb()
{


}

bool LokoDb::Handle(LokoCmd *cmd)
{
    bool ret = false;
    LOG(INFO) << "enter " << __func__;

    return ret;
}
   
}