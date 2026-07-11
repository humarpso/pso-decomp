#include "pso/TOChatSensorCapture.h"

extern "C" void free__11TOBoss4RockFUi(void*);
extern s32 TOChatSensorCapture__data_805D58D8;

void TOChatSensorCapture::run_task() {}

TOChatSensorCapture::~TOChatSensorCapture() {
    for (int i = 0; i != 4; i++) {
        free__11TOBoss4RockFUi(m_arr[i]);
    }
    TOChatSensorCapture__data_805D58D8 = 0;
}
