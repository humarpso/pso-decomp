#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void* p, void* q);
void tick_state_398_timer__11TBoss4Type2FPv(void *arg0);
void TBoss4Type2__sub_80052EE8(void);
void TBoss4Type2__sub_80052EEC(void* p);
s32 TBoss4Type2__sub_800542B0(void * a0 = 0, s32 a1 = 0);

void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }
void tick_state_398_timer__11TBoss4Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_800542B0(arg0, 4);
    }
}
void TBoss4Type2__sub_80052EE8(void) {  }
void TBoss4Type2__sub_80052EEC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
