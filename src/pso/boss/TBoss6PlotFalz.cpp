#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_802AB684 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802AB684_lbl_8047059C { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802AB684_lbl_8047059C_size[sizeof(RecoveredGlobal_802AB684_lbl_8047059C) == 0xC ? 1 : -1];

struct Vec_802AB3E0 { f32 x, y, z; };

struct Player_802AB3E0 { u8 pad[0x38]; Vec_802AB3E0 pos; };

extern "C" {
void fn_803594B4(void *, s32, f32);
extern const f32 TBoss6PlotFalz__data_805DE098;
extern const f32 TBoss6PlotFalz__data_805DE09C;
void TBoss6PlotFalz__sub_802AB568(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern RecoveredGlobal_802AB684_lbl_8047059C lbl_8047059C;
extern const f32 TBoss6PlotFalz__data_805DE098;
void TBoss6PlotFalz__sub_802AB684(s32 arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
Player_802AB3E0 *get_player_data__10TObjPlayerFi(int);
int TObjEneDellBiter__sub_80087350(void *, int);
int TBoss3Volopt__sub_8022675C(int, int, int, int);
int is_state_1f__14TBoss6PlotFalzFUi(Player_802AB3E0 *);
int TBoss6Thanks__sub_8035D270();
extern s32 lbl_805D586C;
extern const f32 lbl_805DE094;
void TBoss6PlotFalz__sub_802AB3E0(void);
}

extern "C" {

void set_visible_flag__14TBoss6PlotFalzFPv(void *arg0);

s32 TLobby__sub_800C6C10();

void set_visible_flag__14TBoss6PlotFalzFPv(void *arg0) {
    if (TLobby__sub_800C6C10() != 0) {
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 1;
}

void TBoss6PlotFalz__sub_802AB3E0(void) {
    Vec_802AB3E0 v;
    Player_802AB3E0 *p;
    s32 i;
    f32 k;
    if (TBoss6Thanks__sub_8035D270() != 0) {
        TBoss3Volopt__sub_8022675C(0x40033231, 0, 0, 0);
        k = lbl_805DE094;
        for (i = 0; i < lbl_805D586C; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (is_state_1f__14TBoss6PlotFalzFUi(p) != 0) {
                VecCopy__FP3VecPC3Vec((void *)(&v), (void *)(&p->pos));
                v.y += k;
                TObjEneDellBiter__sub_80087350(&v, 0x29);
            }
        }
    }
}

void TBoss6PlotFalz__sub_802AB568(u8 *arg0, s32 arg1, f32 farg0) {
    f32 var_f1;
    u8 *temp_r3;
    var_f1 = farg0;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
    if ((temp_r3 != NULL) && !(var_f1 <= TBoss6PlotFalz__data_805DE098)) {
        if (var_f1 > TBoss6PlotFalz__data_805DE09C) {
            var_f1 = TBoss6PlotFalz__data_805DE09C;
        }
        fn_803594B4(temp_r3, arg1, var_f1);
    }
}
void TBoss6PlotFalz__sub_802AB684(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_802AB684, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802AB684, spC) == 0x4) ? 1 : -1];
    Stack_802AB684 stack;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0));
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (void *) (&lbl_8047059C.value));
    stack.spC = TBoss6PlotFalz__data_805DE098;
    TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp8));
}

}
