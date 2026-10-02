#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80083914 {
    f32 sp8;
    u8 pad_C[0x4];
    M2C_UNK sp10;
    u8 trailing_storage[0x2C];
};

struct RecoveredGlobal_80083914_lbl_8048E5D0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
f32 TObjPlayer__sub_803E1C40(f32, f32, f32);
M2C_UNK GXSetTevOp(int, int);
M2C_UNK GXSetTevOrder(int, int, int, int);
s32 is_split_screen();
s32 check_all_players_ready__10TObjPlayerFv();
s32 set_tex_coord_gen__10TObjPlayerFiiii(int, int, int, int);
f32 PSMTXConcat(void *, void *, void *);
s32 C_MTXLightFrustum(void *, f32, f32, f32, f32, f32, f32, f32, f32);
f32 TObjPlayer__sub_803D99F8(void *, int);
s32 TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC850(M2C_UNK);
f32 TObjPlayer__sub_803E1CC4(int);
s32 TObjPlayer__sub_803E1D1C(int);
s32 TObjPlayer__sub_803E1D54(int);
s32 TObjPlayer__sub_803E1F98();
extern RecoveredGlobal_80083914_lbl_8048E5D0 lbl_8048E5D0;
extern s32 lbl_805D7774;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D93D0;
extern const f32 lbl_805D93DC;
extern const f32 lbl_805D9418;
extern const f32 lbl_805D941C;
extern const f32 lbl_805D9420;
extern const f32 lbl_805D9424;
void TObjPlayer__sub_80083914(u8 *arg0, s32 arg1);
f64 get_end_text_value__10TObjPlayerFv(f32);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f64 lbl_80439360;
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805D93DC;
extern const f32 lbl_805D940C;
extern const f32 lbl_805D9428;
extern const f32 lbl_805D942C;
f32 TObjPlayer__sub_80083A50(void);
}

extern "C" {

void apply_single_screen_state__6TSceneFv(void);
s32 check_all_players_ready__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC850(M2C_UNK);
s32 is_split_screen();

extern s32 some_id_805c6f74;

void apply_single_screen_state__6TSceneFv(void) {
    if ((is_split_screen() == 0) && (check_all_players_ready__10TObjPlayerFv() != 0)) {
        some_id_805c6f74 &= 0xFFF7FFFF;
        TObjPlayer__sub_803DC850(0);
        TObjPlayer__sub_803DC83C(0);
    }
}
#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80083914_lbl_8048E5D0_size[sizeof(RecoveredGlobal_80083914_lbl_8048E5D0) == 0xC ? 1 : -1];
void TObjPlayer__sub_80083914(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_80083914, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80083914, sp10) == 0x8) ? 1 : -1];
    Stack_80083914 stack;
    if ((is_split_screen() == 0) && (check_all_players_ready__10TObjPlayerFv() != 0)) {
        TObjPlayer__sub_803E1F98();
        TObjPlayer__sub_803E1C40(lbl_805D93D0, lbl_805D93D0, lbl_805D9418);
        TObjPlayer__sub_803E1CC4((int) (0x3800));
        TObjPlayer__sub_803E1C40(-M2C_FIELD(&lbl_8048E5D0.value, f32 *, 0), -M2C_FIELD(&lbl_8048E5D0.value, f32 *, 4), -M2C_FIELD(&lbl_8048E5D0.value, f32 *, 8));
        TObjPlayer__sub_803E1C40(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8));
        TObjPlayer__sub_803D99F8((void *) (arg1), (int) (1));
        stack.sp8 = lbl_805D93DC;
        C_MTXLightFrustum((void *) (&stack.sp10), (f32) (-lbl_805D941C), (f32) (lbl_805D941C), (f32) (lbl_805D9420), (f32) (-lbl_805D9420), (f32) (lbl_805D9424), (f32) (lbl_805D93DC), (f32) (lbl_805D93DC), (f32) (lbl_805D93DC));
        PSMTXConcat((void *) (&stack.sp10), (void *) (lbl_805D7774), (void *) (lbl_805D7774));
        TObjPlayer__sub_803E1D54((int) (0));
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803E1D1C((int) (0));
        GXSetTevOrder((int) (1), (int) (1), (int) (1), (int) (4));
        GXSetTevOp((int) (1), (int) (1));
        set_tex_coord_gen__10TObjPlayerFiiii((int) (1), (int) (0), (int) (0), (int) (0x1E));
        some_id_805c6f74 |= 0x80000;
        TObjPlayer__sub_803DC850((M2C_UNK)((int) (1U)));
        TObjPlayer__sub_803DC83C((M2C_UNK)((int) (1U)));
    }
}
#pragma pop

f32 TObjPlayer__sub_80083A50(void) {
    f32 temp_f2;
    f32 temp_f31;
    f32 var_f1;
    s32 temp_r31;
    s32 temp_r4;
    var_f1 = lbl_805D9428;
    if ((void *) lbl_805D4DF0 != NULL) {
        temp_r4 = M2C_FIELD(lbl_805D4DF0, s32 *, 0x19C);
        temp_f2 = (f32) temp_r4;
        temp_f2 *= lbl_805D942C;
        temp_r31 = (s32) (temp_f2 * lbl_805D93DC);
        temp_f31 = TBoss8Dragon__sub_803D64DC((int) (temp_r31));
        var_f1 = (f32) ((s32) (lbl_80439360 * get_end_text_value__10TObjPlayerFv((f32) ((TBoss8Dragon__sub_803D64C0((int) (temp_r31)) / temp_f31) / lbl_805D940C))) * 2);
    }
    return var_f1;
}

}
