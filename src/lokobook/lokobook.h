#pragma once

#include "lokoinc.h"
#include "lokotype.h"
#include "lokoutils.h"
#include "lokostatus.h"

namespace loko {

class LokoBook{
    public:
        LokoBook();
        ~LokoBook();


    private:
        std::string name;
        std::string author;
        std::string sha_str;
        std::string md5_str;

};

}
