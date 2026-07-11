#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801C9D0C(s32 arg0);
void TObjPlayer__sub_801C9D3C(u32 arg0);
void TObjPlayer__sub_801C9DE0(void *arg0);
void TObjPlayer__sub_801C9E9C(u8 *arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK TObjEnePanarms__sub_800DFB00(void *, s32);
M2C_UNK TObjPlayer__sub_801AF7E0(u32);
s32 TObjPlayer__sub_801D0458();
M2C_UNK TObjPlayer__sub_801D0888(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_801D17C0(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801D17D4(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801D2620(void *);
M2C_UNK TObjPlayer__sub_801D2630();
s32 fn_8001BEF8(s32, M2C_UNK);
M2C_UNK fn_8002AEB8(void *, s32);
M2C_UNK fn_801B4430(u32);
s32 fn_801D8ADC(void *);
s32 is_alive_and_ready__10TObjPlayerFi(u32);
M2C_UNK send_code_49_1__10TObjPlayerFi(u32);
M2C_UNK update_if_ready__15TFontSmallLobbyFPv(s32);

s32 TObjPlayer__sub_801C9D0C(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

s32 obj_isState2_324(u32);
s16 obj_getField1c(u32);

struct Local801C9D3C {
    s16 field0;
    s16 fieldA;
};

void TObjPlayer__sub_801C9D3C(u32 arg0) {
    struct Local801C9D3C sp8;

    if (fn_8001BEF8(arg0 + 0x858, 4) != 0) {
        send_code_49_1__10TObjPlayerFi(arg0);
        if (is_alive_and_ready__10TObjPlayerFi(arg0) != 0) {
            TObjPlayer__sub_801AF7E0(arg0);
        }
    } else {
        fn_801B4430(arg0);
    }
    update_if_ready__15TFontSmallLobbyFPv(arg0 + 0x4AC);
    if ((arg0 == 0U) || (obj_isState2_324(arg0) == 0)) {
        TObjPlayer__sub_801D17C0((M2C_UNK *)&sp8);
        sp8.fieldA = obj_getField1c(arg0);
        TObjPlayer__sub_801D17D4((M2C_UNK *)&sp8);
    }
}

extern const f32 TObjPlayer__data_805DC360;
extern const f32 TObjPlayer__data_805DC36C;
extern const f32 TObjPlayer__data_805DC378;

void TObjPlayer__sub_801C9DE0(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1;
        if (temp_f1 < TObjPlayer__data_805DC36C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            TObjEnePanarms__sub_800DFB00(arg0, TObjPlayer__sub_801D0458());
            TObjPlayer__sub_801D2620(arg0);
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) TObjPlayer__data_805DC378;
        }
        break;
    case 1:
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1_2;
        if (temp_f1_2 < TObjPlayer__data_805DC36C) {
            TObjPlayer__sub_801D2630();
            TObjPlayer__sub_801D0BC0(arg0, 1, 0);
        }
        break;
    }
}

extern const f32 TObjPlayer__data_805DC360;
extern const f32 TObjPlayer__data_805DC36C;
extern const f32 TObjPlayer__data_805DC378;

void TObjPlayer__sub_801C9E9C(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1;
        if (temp_f1 < TObjPlayer__data_805DC36C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            TObjEnePanarms__sub_800DFB00(arg0, TObjPlayer__sub_801D0458());
            TObjPlayer__sub_801D2620(arg0);
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) TObjPlayer__data_805DC378;
        }
        break;
    case 1:
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2B4) - TObjPlayer__data_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1_2;
        if (temp_f1_2 < TObjPlayer__data_805DC36C) {
            TObjPlayer__sub_801D2630();
            fn_8002AEB8(arg0 + 0x644, fn_801D8ADC(arg0));
            TObjPlayer__sub_801D0888(arg0);
        }
        break;
    }
}

}
