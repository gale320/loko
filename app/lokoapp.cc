#include "lokocore.h"
#include "lokolog.h"

using namespace loko;

int main(int argc, char ** argv)
{
    std::cout << "start application " << std::endl;
    LokoLogInit();
    LOG(INFO) << "start application";


    LokoLogDeinit();
    std::cout << "finish application" << std::endl;
    return 0;

}
