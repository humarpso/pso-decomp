#include "pso/TOChatSensorCapture.h"

extern "C" void fn_80147A80(void*);
extern s32 lbl_805D58D8;

void TOChatSensorCapture::run_task() {}

TOChatSensorCapture::~TOChatSensorCapture() {
    for (int i = 0; i != 4; i++) {
        fn_80147A80(m_arr[i]);
    }
    lbl_805D58D8 = 0;
}
