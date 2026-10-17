#include "types.h"
#include "pso/misc/TUnk_804887C8.h"
#include "pso/misc/TCameraCtrl.h"

struct Stack_800676A0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_800677D4_lbl_804887C8 {
    s32 value;
    u8 remaining[0x2C];
};

extern "C" {
void *__nw__7TObjectFUl(int);
s32 VecCopy__FP3VecPC3Vec(void *, int);
u8 *TCameraCtrl__sub_8003CFF4();
f32 vector_length(void *, int, f32, f32);
s32 normalize_vector(void *);
extern const f32 lbl_805D8F28;
extern const f32 lbl_805D8F2C;
extern const f32 lbl_805D8F30;
extern const f32 lbl_805D8F34;
u8 * __ct__13TUnk_80488A28Fv(void *);
s32 get_player_by_client_id(u32);
extern s32 lbl_804887C8[];
u8 *TCameraCtrl__sub_800677D4(u8 *arg0);
void TCameraCtrl__sub_80067654(void);
void TCameraCtrl__sub_80067658(void);
void TCameraCtrl__sub_8006765C(void);
void TCameraCtrl__sub_80067660(void);
void TCameraCtrl__sub_80067664(void);
void *__dt__13TUnk_804887C8Fv(void *arg0, s16 arg1);
void __dt__13TUnk_80488A28Fv(void *, int);
void __dl__7TObjectFPv(void *);

void TCameraCtrl__sub_80067654(void) {  }
void TCameraCtrl__sub_80067658(void) {  }
void TCameraCtrl__sub_8006765C(void) {  }
void TCameraCtrl__sub_80067660(void) {  }
void TCameraCtrl__sub_80067664(void) {  }

void * TCameraCtrl__vt11(void) {
    void *o;
    o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = TCameraCtrl__sub_800677D4((u8 *)(o));
    }
    return o;
}

#pragma push
#pragma fp_contract on
void TUnk_804887C8::run_task() {
    u8 *arg0 = (u8 *)this;
    Stack_800676A0 stack;
    f32 temp_f1;
    f32 temp_f2;
    u8 *temp_r3;
    u8 *temp_r4;
    this->m_58 = (f32) lbl_805D8F28;
    if ((void *) *(u8 **)((s8 *)arg0 + 0x1C) != NULL) {
        temp_r3 = (u8 *)(TCameraCtrl__sub_8003CFF4());
        if (temp_r3 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x48), (int) (temp_r3));
            temp_r4 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x1C));
            stack.sp8 = *(f32 *)((s8 *)temp_r4 + 0x38) - *(f32 *)((s8 *)temp_r3 + 0);
            temp_f2 = *(f32 *)((s8 *)temp_r4 + 0x40);
            temp_f1 = temp_f2 - *(f32 *)((s8 *)temp_r3 + 8);
            stack.spC = lbl_805D8F2C;
            stack.sp10 = temp_f1;
            if (lbl_805D8F2C != vector_length((void *) (&stack.sp8), (int) (temp_r4), (f32) (temp_f1), (f32) (temp_f2))) {
                normalize_vector((void *) (&stack.sp8));
                this->m_3c = (f32) ((lbl_805D8F30 * stack.sp8) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x38));
                *(f32 *)&this->unk_40 = (f32) (lbl_805D8F34 + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x3C));
                this->m_44 = (f32) ((lbl_805D8F30 * stack.sp10) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 0x40));
            }
        }
    }
}
#pragma pop

void *__dt__13TUnk_804887C8Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804887C8;
        __dt__13TUnk_80488A28Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_800677D4_lbl_804887C8_size[sizeof(RecoveredGlobal_800677D4_lbl_804887C8) == 0x30 ? 1 : -1];
u8 *TCameraCtrl__sub_800677D4(u8 *arg0) {
    __ct__13TUnk_80488A28Fv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_800677D4_lbl_804887C8 *)&lbl_804887C8).value;
    *(s32 *)((s8 *)arg0 + 0x38) = 5;
    ((TCameraCtrl *)arg0)->set_target(get_player_by_client_id(0U));
    return arg0;
}

}
