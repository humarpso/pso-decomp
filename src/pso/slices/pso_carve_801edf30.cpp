#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* TQuestBgmCtrl__ct(void*, s32);
void* __nw__7TObjectFUl(u32);
extern s32 tl_05;

void fn_801EDF30(void) {
    void* obj = __nw__7TObjectFUl(0x1C);
    if (obj != 0) {
        TQuestBgmCtrl__ct(obj, tl_05);
    }
}

}
