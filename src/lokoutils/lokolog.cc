#include "lokolog.h"
#include  <gflags/gflags.h>

namespace loko{

bool LokoLogInit()
{
    bool ret = false;
    gflags::SetUsageMessage("loko");
    //google::ParseCommandLineFlags(&argc, &argv, true);

    google::InitGoogleLogging("loko");

    FLAGS_logtostderr = 1;
    FLAGS_minloglevel = google::INFO;

    FLAGS_colorlogtostderr = true;
    FLAGS_stop_logging_if_full_disk = true;


    return ret;
}

bool LokoLogDeinit()
{
    bool ret = false;

    google::ShutdownGoogleLogging();
    return ret;
}

}
