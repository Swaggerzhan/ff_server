cmake_minimum_required(VERSION 3.5)
project(ff_server)

set(CMAKE_CXX_STANDARD 14)

include_directories(/usr/local/Cellar/ffmpeg/4.3.1_1/include)

link_directories(/usr/local/Cellar/ffmpeg/4.3.1_1/lib)

set(CMAKE_BUILD_TYPE DEBUG FORCE)

add_executable(ff_server main.cpp
        ffmpeg_decoder.h ffmpeg_decoder.cpp
        )


target_link_libraries(ff_server
        avutil
        avformat
        avfilter
        pthread
        avcodec
        )

