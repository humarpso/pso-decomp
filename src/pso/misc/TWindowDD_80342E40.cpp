#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_80342F84 { s32 v; };

struct DD_80342F84 { u8 pad[0x24]; E_80342F84 arr[1]; };

extern "C" {
s32 is_confirmed__24TShopEquipmentSellWindowFPv(int);
s32 get_result__24TShopEquipmentSellWindowFPv(int);
s32 is_confirmed__18TWindowInputNumberFPv(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
M2C_UNK TWindow__close(int);
M2C_UNK TWindowDD__sub_80341AF8(int);
M2C_UNK TWindowDD__sub_80343108(void *, int, void *, void *);
s32 classify_id__9TWindowDDFs();
M2C_UNK TWindowDD__sub_80347CC8(void *, void *);
M2C_UNK TWindowDD__sub_80347EF4();
M2C_UNK reset_index__9TWindowDDFPv(void *);
M2C_UNK set_field14__9TWindowDDFPvi(void *, int);
s32 TWindowDD__sub_80348D88(void *);
extern void *lbl_80478618[];
u8 TWindowDD__sub_80342F84(u8 *arg0);
}

extern "C" {

void update__9TWindowDDFPv(void *arg0);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_803484C4(void *);

void update__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347B70();
    if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) == 1) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0x14;
            M2C_FIELD(arg0, s32 *, 0x8C) = -0x3C;
            TWindowDD__sub_803435A0(arg0);
            return;
        }
        TWindowDD__sub_803484C4(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_se__9TWindowDDFv();
        TWindowDD__sub_8034330C(arg0);
    }
}
u8 TWindowDD__sub_80342F84(u8 *arg0) {
    s32 temp_r3;
    s32 var_r31;
    u8 *var_r3;
    var_r31 = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) == 0U) {
        TWindowDD__sub_80347EF4();
        temp_r3 = classify_id__9TWindowDDFs();
        if (temp_r3 != 7) {
            TWindowDD__sub_80343108((void *) (arg0), (int) (0), lbl_80478618[temp_r3], (void *) (TWindowDD__sub_80348D88((void *) (arg0 + 0xC4))));
            return 0U;
        }
        return 1U;
    }
    TWindowDD__sub_80347CC8(arg0, arg0 + 0xC4);
    if (((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) || (all_parents_unqueued_for_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x84)) != 0)) {
        set_field14__9TWindowDDFPvi((void *) (arg0 + 0xC4), (int) (get_result__24TShopEquipmentSellWindowFPv((int) (M2C_FIELD(arg0, u32 *, 0x84)))));
        if (is_confirmed__24TShopEquipmentSellWindowFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            var_r31 = 2;
            reset_index__9TWindowDDFPv((void *) (arg0 + 0xC4));
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x84)));
        } else if (is_confirmed__18TWindowInputNumberFPv((int) (M2C_FIELD(arg0, u32 *, 0x84))) != 0) {
            var_r31 = 1;
            TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x84)));
        }
    } else {
        var_r31 = 2;
    }
    if (var_r31 != 0) {
        var_r3 = (u8 *)(arg0 + (M2C_FIELD(arg0, s32 *, 0x20) * 4));
        var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x24));
        TWindowDD__sub_80341AF8((int)(var_r3));
        M2C_FIELD(arg0, u32 *, 0x84) = 0U;
        M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    }
    return (u8) (var_r31 == 1);
}

}
