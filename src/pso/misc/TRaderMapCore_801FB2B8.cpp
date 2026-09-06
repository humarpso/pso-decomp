#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {
u16 obj_getField1c(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
M2C_UNK TRaderMapCore__sub_801F9D84(void *, int, void *);
M2C_UNK TRaderMapCore__sub_801F9E9C(void *);
M2C_UNK TRaderMapCore__sub_801FA46C(void *, void *);
M2C_UNK TRaderMapCore__sub_801FAF24();
M2C_UNK update_target__13TRaderMapCoreFPv(void *);
void advance_scroll__13TRaderMapCoreFPv(void *arg0);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern u32 TRaderMapCore__data_805D5F28;
extern s32 TRaderMapCore__data_805D5F3C;
void run_task__13TRaderMapCoreFv(u8 *arg0);
}

extern "C" {

void advance_scroll__13TRaderMapCoreFPv(void *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);

extern const f32 TRaderMapCore__data_805DC534;
extern const f32 lbl_805DC59C;
extern const f32 lbl_805DC5A0;

void advance_scroll__13TRaderMapCoreFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x198) = (s32) (M2C_FIELD(arg0, s32 *, 0x198) + 0x888);
    M2C_FIELD(arg0, f32 *, 0x19C) = lbl_805DC59C + lbl_805DC5A0 * (TRaderMapCore__data_805DC534 + TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x198)));
}
void run_task__13TRaderMapCoreFv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r31;
    if ((u32) TRaderMapCore__data_805D5F28 != 0U) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x90);
        if (temp_r4 > 0) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (temp_r4 - 1);
            return;
        }
        switch ((s32) TRaderMapCore__data_805D5F3C) {
        case 0:
            update_target__13TRaderMapCoreFPv(arg0);
            break;
        case 1:
            update_target__13TRaderMapCoreFPv(arg0);
            break;
        case 2:
            TRaderMapCore__sub_801FAF24();
            break;
        }
        TRaderMapCore__sub_801F9E9C((void *) (arg0));
        if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x184) != 0U)) {
            M2C_FIELD(arg0, s32 *, 0x134) = (s32) obj_getField1c(M2C_FIELD(arg0, void **, 0x184));
        }
        TRaderMapCore__sub_801FA46C((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            var_r31 = 0;
            do {
                temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (var_r31));
                if (temp_r3 != 0) {
                    TRaderMapCore__sub_801F9D84((void *) (arg0), (int) (0), (void *) (temp_r3 + 0x38));
                }
                var_r31 += 1;
            } while (var_r31 < 4);
        } else {
            TRaderMapCore__sub_801F9D84((void *) (arg0), (int) (0), (void *) (arg0 + M2C_FIELD(arg0, s32 *, 0x134) * 0x28 + 0x94));
        }
        advance_scroll__13TRaderMapCoreFPv((void *) (arg0));
    }
}

}
