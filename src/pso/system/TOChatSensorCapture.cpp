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

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK memset(int, int, int);
void run_task__19TOChatSensorCaptureFv(s32 arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void run_task__19TOChatSensorCaptureFv(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r30;
    u8 *temp_r4;
    var_r30 = 0;
    var_r31 = 0;
    do {
        temp_r4 = (u8 *)(arg0 + var_r31);
        temp_r3 = M2C_FIELD(temp_r4, s32 *, 0x1C);
        if (temp_r3 != 0) {
            M2C_FIELD(temp_r4, s32 *, 0x1C) = (s32) (temp_r3 - 1);
            if ((s32) M2C_FIELD(temp_r4, s32 *, 0x1C) == 0) {
                memset((int) (M2C_FIELD(temp_r4, s32 *, 0x2C)), (int) (0), (int) (4));
            }
        }
        var_r30 += 1;
        var_r31 += 4;
    } while (var_r30 != 4);
}
#pragma pop

}
