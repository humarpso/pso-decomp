#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_owner__13TObjTombstoneFPv(void *arg0);
void copy_matrix__13TObjTombstoneFPvPv(void* p, void* q);
void handle_6x96(void);
s32 TLobby__sub_80293080();
s32 TObjPlayer__sub_800196EC();
s32 is_flag_set__6TLobbyFv();
s32 is_not_split_screen__13TRaderMapCoreFv();

void copy_matrix__13TObjTombstoneFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); *(f32*)((char*)p + 0x1c) = *(f32*)((char*)q + 0x1c); *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x20); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

void handle_6x96(void) {  }
s32 check_owner__13TObjTombstoneFPv(void *arg0) {
    s32 var_r3;

    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        var_r3 = TLobby__sub_80293080();
    } else {
        var_r3 = is_flag_set__6TLobbyFv();
    }
    if ((var_r3 == 0) || ((s8) M2C_FIELD(arg0, u8 *, 0xC2) != TObjPlayer__sub_800196EC())) {
        return 1;
    }
    return 0;
}

}
