#pragma once

#include "lokoinc.h"
#include "lokotype.h"
#include "lokoutils.h"
#include "lokostatus.h"
#include "lokocmd.h"

namespace loko {

class LokoBook{
    public:
        LokoBook();
        ~LokoBook();
        bool Handle(LokoCmd * cmd);

    private:
        std::string name;
        std::string path;
        std::string author;
        std::string sha_str;
        std::string md5_str;
        int pagacount;
        int size;
        DocType type;


};

}
