//
// Created by swagger on 2021/4/25.
//

#ifndef FF_SERVER_F1_H
#define FF_SERVER_F1_H


#include <iostream>
extern "C"{
#include "libavcodec/avcodec.h"
#include "libavdevice/avdevice.h"
#include "libavformat/avformat.h"
#include "libavutil/avutil.h"
}


void test1(){
    AVFormatContext *fmt_ctx = nullptr;
    AVIOContext *avio_ctx = nullptr;

    unsigned char *avio_ctx_buffer = nullptr;
    fmt_ctx = avformat_alloc_context();

    int data_size = sizeof(AVIOContext);

    avio_ctx_buffer = (unsigned char*)av_malloc(data_size);

    avio_ctx = avio_alloc_context(avio_ctx_buffer,
            data_size,
            0,
            nullptr,
            nullptr,
                                  nullptr,
                                  nullptr
            );

    fmt_ctx->pb = avio_ctx;

    avformat_open_input(&fmt_ctx, nullptr, nullptr, nullptr);

    av_dump_format(fmt_ctx, 0, nullptr, 0);



}



#endif //FF_SERVER_F1_H
