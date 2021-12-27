#include "lokoinc.h"
#include "lokostatus.h"
#include "lokocmd.h"

#include "lokocvinc.h"

namespace loko{

class LokoCvCore{
    public:
        LokoCvCore();
        ~LokoCvCore();

        bool Handle(LokoCmd * cmd, cv::Mat matsrc, cv::Mat &matdst);
};

}