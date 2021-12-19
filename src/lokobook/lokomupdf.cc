#include "lokomupdf.h"

namespace loko{

LokoMupdf::LokoMupdf():zoom(100),rotate(0),page_number(1)
{
    ctx = fz_new_context(NULL, NULL, FZ_STORE_UNLIMITED);
	if (!ctx)
	{
		fprintf(stderr, "cannot create mupdf context\n");
		
	}

    fz_try(ctx)
    fz_register_document_handlers(ctx);
	fz_catch(ctx)
	{
		fprintf(stderr, "cannot register document handlers: %s\n", fz_caught_message(ctx));
		fz_drop_context(ctx);
	}
}

LokoMupdf::~LokoMupdf()
{
    if(ctx && pix)
    {
        fz_drop_pixmap(ctx, pix);
		fz_drop_outline(ctx, outline);
	    fz_drop_document(ctx, doc);
	    fz_drop_context(ctx);
    }
}

bool LokoMupdf::SetFile(std::string str)
{
    bool ret = false;
    LOG(INFO) << "enter " << __func__;
    filename = str;

    return ret; 
}
bool LokoMupdf::Open()
{
    bool ret = false;
    LOG(INFO) << "enter " << __func__;

    fz_try(ctx)
		doc = fz_open_document(ctx, filename.c_str());
	fz_catch(ctx)
	{
		fprintf(stderr, "cannot open document: %s\n", fz_caught_message(ctx));
		fz_drop_context(ctx);
	}
    else 
    {
        ret = true;
    }

    LOG(INFO) << "get page count";
    fz_try(ctx)
	{
		page_count = fz_count_pages(ctx, doc);
		LOG(INFO) << "page count is " << page_count;
	}
	fz_catch(ctx)
	{
		fprintf(stderr, "cannot count number of pages: %s\n", fz_caught_message(ctx));
		fz_drop_document(ctx, doc);
		fz_drop_context(ctx);
		//return EXIT_FAILURE;
	}

	outline = fz_load_outline(ctx, doc);
	if(outline)
	{
		LOG(INFO) << "get outline success"; 
	}


    LOG(INFO) << "leave " << __func__;
    return ret;
}

bool LokoMupdf::GetPage(int num)
{
    bool ret = false;
    LOG(INFO) << "enter " << __func__;
    	fz_try(ctx)
		pix = fz_new_pixmap_from_page_number(ctx, doc, page_number, ctm, fz_device_rgb(ctx), 0);
	fz_catch(ctx)
	{
		fprintf(stderr, "cannot render page: %s\n", fz_caught_message(ctx));
		fz_drop_document(ctx, doc);
		fz_drop_context(ctx);
		return ret;
	}

	/* Print image data in ascii PPM format. */
	printf("P3\n");
	printf("%d %d\n", pix->w, pix->h);
	printf("255\n");

    return ret;
}

}