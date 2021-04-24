//
// Created by swagger on 2021/4/24.
//

#ifndef FF_SERVER_FFMPEG_DECODER_H
#define FF_SERVER_FFMPEG_DECODER_H

#include <iostream>
#include <unistd.h>
extern "C"{
#include "libavcodec/avcodec.h"
#include "libavdevice/avdevice.h"
#include "libavformat/avformat.h"
#include "libavutil/avutil.h"
#include "libswscale/swscale.h"
}




class ffmpeg_decoder {
public:
    ffmpeg_decoder(std::string);

    ~ffmpeg_decoder();

    void intialize();

    void playMedia();

    void finalize();

    void setOnframeCallbackFunction(std::function<void(uint8_t *)> func);

    int width;

    int height;

    int GOP;

    int frameRate;

    int bitrate;

    std::function<void(uint8_t *)> onFrame;

private:

    std::string path;

    AVCodecContext  *pCodecCtx;

    AVFormatContext *pFormatCtx;

    AVFrame *pFrameRGB;

    struct SwsContext * img_convert_ctx;

    int videoStream;


};


#endif //FF_SERVER_FFMPEG_DECODER_H
