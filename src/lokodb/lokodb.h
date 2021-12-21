#pragma once

#include "lokoinc.h"
#include "lokocmd.h"
#include "lokoutils.h"
#include "lokostatus.h"

namespace loko{

class LokoDb{
    public:
        LokoDb();
        ~LokoDb();
        virtual bool Create();
        virtual bool Open();
        virtual bool Check();
        virtual bool Handle(LokoCmd *cmd);

};


}
