#pragma once

namespace loko{

struct _LokoBuf{
    int width;
    int height;
    int stride;
    unsigned char * data;
};

typedef struct _LokoBuf LokoBuf;

}
