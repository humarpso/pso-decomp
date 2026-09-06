#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DA3D8;
s32 TObjPlayer__sub_800D9560(f32 *arg0);
}

extern "C" {

void clear_flag_and_notify__10TObjPlayerFv(void);
void destroy_static_lobby__10TObjPlayerFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_803E38FC(M2C_UNK);
M2C_UNK set_global_pair__10TObjPlayerFii(M2C_UNK, M2C_UNK);

extern u32 lbl_805D5228;

void destroy_static_lobby__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5228 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5228, 1);
        lbl_805D5228 = 0U;
    }
}

extern s32 some_id_805c6f74;

s32 TObjPlayer__sub_800D9560(f32 *arg0) {
    return *arg0 > lbl_805DA3D8;
}

void clear_flag_and_notify__10TObjPlayerFv(void) {
    some_id_805c6f74 &= 0xFFFF77DF;
    set_global_pair__10TObjPlayerFii(0xFF00, 0);
    TObjPlayer__sub_803E38FC(0x2500);
}

}
