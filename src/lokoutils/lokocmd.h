#pragma once

#include "lokoinc.h"

namespace loko{

class LokoCmd{
    public:
        LokoCmd();
        LokoCmd(std::string str);
        ~LokoCmd();

        std::string Str;
        std::string Cmd;
        std::vector<std::string> strVector;
        std::vector<std::string> Option;
        std::vector<std::string> retVector;

        std::string GetCmd();
        std::vector<std::string> GetOption();
        bool GetResult(std::stringstream &stream);
        bool SetResult(std::stringstream &stream);
        bool ParseCmd(std::string str);

    private:
        int offset;
        std::stringstream outstream;


};

}
