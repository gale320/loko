#include "lokocore.h"
#include "lokolog.h"

using namespace loko;

LokoCore * core;

bool console()
{
    bool ret = false;
    std::string prompt("loko->");
    char tmp[128];
    std::string cmd;
    std::cout << prompt;
    for(;;)
    {
      std::cin.getline(tmp, 128);
      cmd = tmp;
      if(cmd == "quit" || cmd == "exit")
      {
            break;
       }
       else
       {
            core->Handle(cmd);
       }
      std::cout << prompt;
    }
    return ret;

}

int main(int argc, char ** argv)
{
    std::cout << "start application " << std::endl;
    LokoLogInit();
    LOG(INFO) << "start application";
    
    core = new LokoCore();
    console();

    delete core;
    LokoLogDeinit();
    std::cout << "finish application" << std::endl;
    return 0;

}
