#pragma once

#include <mupdf/fitz.h>
#include "mupdf/pdf.h"
#include "lokoinc.h"
#include "lokobuf.h"
#include <stdlib.h>

namespace loko{

class LokoMupdf{
    public:
        LokoMupdf();
        ~LokoMupdf();
        bool SetFile(std::string str);
        bool Open();
        bool GetPage(int num);
        bool GetPageData(LokoBuf * buf);

    private:
        std::string filename;
    	int page_number, page_count;
        fz_context *ctx;
        fz_document *doc;
        fz_pixmap *pix;
        fz_outline * outline;
        fz_matrix ctm;    
        float zoom, rotate;
        std::string version;
        
};

}
