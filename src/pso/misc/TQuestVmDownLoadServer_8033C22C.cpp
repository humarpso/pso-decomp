#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 init__22TQuestVmDownLoadServerFPvPvPvPvPv(void *, s32, s32, s32, s32);
s32 poll_memcard_status__15TAdPlayerLoadGCFPv();
s32 TWindowSubComCard__sub_8033C024(void *, s32);
int TWindowSubComCard__sub_8033C178(void* p);
void TWindowSubComCard__sub_8033C198(void);
int TWindowSubComCard__sub_8033C19C(void* p);
void render__16TCheckMemoryCardFv(void);
int TWindowSubComCard__sub_8033BC34(void*, int, int, int, int);
int TWindowSubComCard__sub_8033BF90(void*);

void init_from_keyboard_state__22TQuestVmDownLoadServerFPv(void *arg0) {
    s32 var_r31;
    s32 var_r6;

    if (TKeyBoardControl__sub_8000F8EC() == 0xF) {
        var_r31 = TQuestVmDownLoadServer__sub_8006EF6C(0xA);
        var_r6 = TQuestVmDownLoadServer__sub_8006EF6C(0xE);
        init__22TQuestVmDownLoadServerFPvPvPvPvPv(arg0, var_r31, -2, var_r6, 0);
        return;
    }
    var_r31 = TQuestVmDownLoadServer__sub_8006EF6C(0x62);
    var_r6 = TQuestVmDownLoadServer__sub_8006EF6C(0xE);
    if (M2C_FIELD(arg0, s32 *, 0x28) & 0x20) {
        var_r31 = TQuestVmDownLoadServer__sub_8006EF6C(0x6D);
        var_r6 = TQuestVmDownLoadServer__sub_8006EF6C(0xE);
    }
    init__22TQuestVmDownLoadServerFPvPvPvPvPv(arg0, var_r31, -2, var_r6, 0);
}

}
