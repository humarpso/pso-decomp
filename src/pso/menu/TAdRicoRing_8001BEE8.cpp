#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 TObjPlayer__sub_8001BEF8(s32 *arg0, s32 arg1);
}

extern "C" {

void clear_flags__11TAdRicoRingFPvUi(void* p, u32 v);
void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v);
void clear_id__10TObjPlayerFPv(void* p);
void set_flags__10TObjPlayerFPvUi(void* p, u32 v);

void clear_flags__11TAdRicoRingFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x0) &= ~v; }

u8 TObjPlayer__sub_8001BEF8(s32 *arg0, s32 arg1) {
    return (u8) ((*arg0 & arg1) != 0);
}

}
