#pragma once

#include "lokoinc.h"
#include "lokocmd.h"
#include "lokostatus.h"
#include "lokoutils.h"


namespace loko{

class LokoCore{
    public:
        LokoCore();
        ~LokoCore();
        bool Handle(std::string str);
        bool Handle(LokoCmd * cmd);
};

}
