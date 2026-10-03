#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * TWindowMessageLog__ct(void *, M2C_UNK, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TLobby__sub_80269DA4(void *, int);
u8 *fn_8026A9D8(s32 arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_8001DC24();
M2C_UNK append_text_space();
M2C_UNK text_builder_append(M2C_UNK *);
M2C_UNK text_builder_reset();
M2C_UNK *get_active_photon_object__17TWindowMessageLogFv(u16);
M2C_UNK fn_8026A62C(u32, s32);
M2C_UNK TLobby__sub_8026A7B0(M2C_UNK *);
M2C_UNK TLobby__sub_8026A89C();
u32 get_field44__11TWindowCtrlFv();
extern s32 lbl_805D53A0;
extern M2C_UNK lbl_805DD250;
void fn_8026A93C(u16 arg0, M2C_UNK *arg1);
}

extern "C" {

void fn_8026A93C(u16 arg0, M2C_UNK *arg1) {
    s32 temp_r30;
    M2C_UNK *temp_r31;
    if ((s32) arg0 == (s32) lbl_805D53A0) {
        TLobby__sub_8026A7B0(arg1);
    }
    temp_r31 = get_active_photon_object__17TWindowMessageLogFv(arg0);
    text_builder_reset();
    if (temp_r31 != NULL) {
        text_builder_append(temp_r31);
        append_text_space();
        text_builder_append(&lbl_805DD250);
        append_text_space();
    }
    text_builder_append(arg1);
    arg1 = (M2C_UNK *) TLobby__sub_8001DC24();
    TLobby__sub_8026A89C();
    {
        u32 tmp_ad = get_field44__11TWindowCtrlFv();
        if (tmp_ad != 0U) {
            fn_8026A62C(tmp_ad, (s32) arg1);
        }
    }
}

u8 *fn_8026A9D8(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TLobby__sub_80269DA4((void *) (arg1), (int) (0x1E));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x98));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TWindowMessageLog__ct(temp_r3, arg0, arg2));
    }
    return var_r0;
}

}
