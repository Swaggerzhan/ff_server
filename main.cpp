#include "f1.h"



int main() {

    avformat_network_init();

    test1();

//    AVFormatContext *f;
//
//    char file_name[] = "../test.mp4";
//    avformat_open_input(&f, file_name, nullptr, nullptr);
//
//    printf("bit_rate: %d\n", (int)f->bit_rate);
//
//    printf("nb_stream: %d\n", f->nb_streams);
//
//    AVPacket pkt;
//    av_read_frame(f, &pkt);
//
//    printf("pkt_size: %d\n", pkt.size);
//
//    printf("show_time: %lld\n", pkt.pts);
//    printf("decode_time: %lld\n", pkt.dts);
//    printf("stream_index: %d\n", pkt.stream_index);





    return 0;
}
