#pragma once

#include <mupdf/fitz.h>
#include "lokoinc.h"
#include <stdlib.h>

namespace loko{

class LokoMupdf{
    public:
        LokoMupdf();
        ~LokoMupdf();
        bool SetFile(std::string str);
        bool Open();
        bool GetPage(int num);

    private:
        std::string filename;
    	int page_number, page_count;
        fz_context *ctx;
        fz_document *doc;
        fz_pixmap *pix;
        fz_outline * outline;
        fz_matrix ctm;    
        float zoom, rotate;
        
};

}
