#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DA3D8;
s32 TObjPlayer__sub_800D9560(f32 *arg0);
extern u32 lbl_805D5228;
extern s32 lbl_805D522C;
extern u8 lbl_80494A48[];
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
void TObjPlayer__sub_800D9508(void);
}

extern "C" {

void clear_flag_and_notify__10TObjPlayerFv(void);
void destroy_static_lobby__10TObjPlayerFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_803E38FC(M2C_UNK);
M2C_UNK set_chunk_material_override_pair(M2C_UNK, M2C_UNK);

extern u32 lbl_805D5228;

void destroy_static_lobby__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5228 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5228, 1);
        lbl_805D5228 = 0U;
    }
}

extern s32 some_id_805c6f74;

void TObjPlayer__sub_800D9508(void) {
    u8 *p = (u8 *)alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    if (p != 0) {
        p = TLobby__sub_80020004(p, 1, lbl_80494A48, 0, 0, 0);
    }
    lbl_805D5228 = (u32)p;
    lbl_805D522C = 1;
}

s32 TObjPlayer__sub_800D9560(f32 *arg0) {
    return *arg0 > lbl_805DA3D8;
}

void clear_flag_and_notify__10TObjPlayerFv(void) {
    some_id_805c6f74 &= 0xFFFF77DF;
    set_chunk_material_override_pair(0xFF00, 0);
    TObjPlayer__sub_803E38FC(0x2500);
}

}
