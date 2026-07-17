#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 read_byte__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_80222704(void *arg0, s32 arg1);
void TQuestVmDownLoadServer__sub_80222754(void *arg0, s8 arg1);
void TQuestVmDownLoadServer__sub_80222768(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
s32 strlen(s32);

u8 read_byte__22TQuestVmDownLoadServerFPv(void *arg0) {
    u8 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 **, 0x204);
    M2C_FIELD(arg0, u8 **, 0x204) = (u8 *) (temp_r4 + 1);
    return *temp_r4;
}

void TQuestVmDownLoadServer__sub_80222704(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = strlen(arg1);
    TAdSinglePlyChrSelectGC__sub_8039DCE0(M2C_FIELD(arg0, s32 *, 0x208), arg1);
    M2C_FIELD(arg0, s32 *, 0x208) = (s32) (M2C_FIELD(arg0, s32 *, 0x208) + temp_r31);
}

void TQuestVmDownLoadServer__sub_80222754(void *arg0, s8 arg1) {
    s8 *temp_r5;

    temp_r5 = M2C_FIELD(arg0, s8 **, 0x208);
    M2C_FIELD(arg0, s8 **, 0x208) = (s8 *) (temp_r5 + 1);
    *temp_r5 = arg1;
}

void TQuestVmDownLoadServer__sub_80222768(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x204) = arg1;
    M2C_FIELD(arg0, s32 *, 0x208) = arg2;
}

}
