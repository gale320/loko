#pragma once

#include "lokoinc.h"
#include "lokocmd.h"
#include "lokostatus.h"
#include "lokoutils.h"

namespace loko{

class LokoManage{
    public:
        LokoManage();
        ~LokoManage();
        bool Handle(LokoCmd * cmd);
};

}
