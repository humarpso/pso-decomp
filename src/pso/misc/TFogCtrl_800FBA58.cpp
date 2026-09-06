#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800FBD74 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
};

extern "C" {
s32 render_forward__20TWindowSubStatusDispFPv();
s32 reset_transform_state__10TObjPlayerFv();
s32 TWindowSubStatusDisp__sub_803DEE6C(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 TWindowSubComCard__sub_803DEECC(void *, f32);
s32 TWindowSubStatusDisp__sub_803DF160(int, void *);
extern const f32 lbl_805DA978;
extern const f32 lbl_805DA97C;
extern const f32 lbl_805DA980;
extern const f32 lbl_805DA984;
extern const f32 lbl_805DA988;
extern const f32 lbl_805DA98C;
extern const f32 lbl_805DA990;
extern const f32 lbl_805DA994;
extern const f32 lbl_805DA998;
extern const f32 lbl_805DA99C;
extern const f32 lbl_805DA9A0;
extern const f32 lbl_805DA9A4;
extern const f32 lbl_805DA9A8;
extern const f32 lbl_805DA9AC;
void TWindowSubStatusDisp__sub_800FBD74(s32 arg0, f32 farg0, f32 farg1, f32 farg2);
}

extern "C" {

void TFogCtrl__sub_800FBA58(void);
void TFogCtrl__sub_800FBAAC(void);
int fn_800FC0D8(void* p);
void reset__8TFogCtrlFv(void);
M2C_UNK TFogCtrl__sub_800FBA54(M2C_UNK);
M2C_UNK TObjFogCollisionPoison__sub_801533BC();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK destroy_instance__22TQuestVmDownLoadServerFv();
int fn_800FC0F8(void*);
M2C_UNK fn_803E1FC8(M2C_UNK);
M2C_UNK fn_803E1FFC(f32, f32);
M2C_UNK fn_803E2070();
M2C_UNK free__11TOBoss4RockFUi(void*);

extern M2C_UNK TFogCtrl__data_80501188[];

void TFogCtrl__sub_800FBA58(void) {
    s32 var_r29;
    s32 var_r31;
    M2C_UNK temp_r3;

    var_r29 = 0;
    var_r31 = 0;
    do {
        temp_r3 = *(TFogCtrl__data_80501188 + var_r31);
        if ((u32) temp_r3 != 0U) {
            TFogCtrl__sub_800FBA54(temp_r3);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
}

void TFogCtrl__sub_800FBAAC(void) {  }

extern u32 lbl_805D5388;
extern f32 lbl_805DA964;
extern f32 lbl_805DA968;

void reset__8TFogCtrlFv(void) {
    TObjFogCollisionPoison__sub_801533BC();
    destroy_instance__22TQuestVmDownLoadServerFv();
    if ((u32) lbl_805D5388 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5388);
    }
    lbl_805D5388 = 0U;
    fn_803E1FC8(-1);
    fn_803E1FFC(lbl_805DA964, lbl_805DA968);
    fn_803E2070();
    begin_effect_render__13TParticleCtrlFv();
}

void TWindowSubStatusDisp__sub_800FBD74(s32 arg0, f32 farg0, f32 farg1, f32 farg2) {
    typedef char sp8_offset[(offsetof(Stack_800FBD74, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800FBD74, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800FBD74, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800FBD74, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_800FBD74, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_800FBD74, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_800FBD74, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_800FBD74, sp24) == 0x1C) ? 1 : -1];
    Stack_800FBD74 stack;
    f32 temp_f7;
    f32 temp_f8;
    reset_transform_state__10TObjPlayerFv();
    TWindowSubStatusDisp__sub_803DEE6C((int) (1));
    render_forward__20TWindowSubStatusDispFPv();
    TWindowSubStatusDisp__sub_803DF160((int) (0), (void *) (arg0));
    stack.sp8 = farg0;
    stack.spC = farg1;
    stack.sp10 = lbl_805DA978 + farg0;
    stack.sp14 = lbl_805DA97C + farg1;
    stack.sp18 = lbl_805DA980;
    stack.sp1C = lbl_805DA984;
    stack.sp20 = lbl_805DA988;
    stack.sp24 = lbl_805DA98C;
    TWindowSubComCard__sub_803DEECC((void *) (&stack.sp8), (f32) (farg2));
    temp_f8 = stack.sp8 + lbl_805DA990;
    temp_f7 = stack.spC + lbl_805DA994;
    stack.sp8 = temp_f8;
    stack.spC = temp_f7;
    stack.sp10 = lbl_805DA998 + temp_f8;
    stack.sp14 = lbl_805DA99C + temp_f7;
    stack.sp18 = lbl_805DA9A0;
    stack.sp1C = lbl_805DA9A4;
    stack.sp20 = lbl_805DA9A8;
    stack.sp24 = lbl_805DA9AC;
    TWindowSubComCard__sub_803DEECC((void *) (&stack.sp8), (f32) (farg2));
    get_player__20TWindowSubStatusDispFv();
}

int fn_800FC0D8(void* p) { return fn_800FC0F8(p); }

}
