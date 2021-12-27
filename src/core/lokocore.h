#pragma once

#include "lokoinc.h"
#include "lokocmd.h"
#include "lokostatus.h"
#include "lokoutils.h"
#include "lokomupdf.h"
#include "lokobuf.h"


namespace loko{

class LokoCore{
    public:
        LokoCore();
        ~LokoCore();
        bool Handle(std::string str);
        bool Handle(std::string str, LokoBuf, LokoBuf * buf1);
        bool Handle(LokoCmd * cmd);
    private:
        LokoMupdf *mupdf;
        LokoBuf * buf;    
};

}

