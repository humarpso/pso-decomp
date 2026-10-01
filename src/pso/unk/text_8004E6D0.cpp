#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef struct Rec_8004E918 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8004E918;

typedef struct Obj_8004E918 {
    u8 pad0[0x90];
    Rec_8004E918 recs[2];
    s32 fa8;
    f32 fac[3];
    s32 fb8;
    s32 fbc;
    f32 fc0;
} Obj_8004E918;

extern "C" {
void sync_player_globals__10TObjPlayerFv();
void TObjPlayer__sub_80052390(f32);
void rotate_matrix_y(s32, s32);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(s32);
void TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
extern const f32 lbl_805D89B8;
extern const f32 lbl_805D89BC;
extern const f32 lbl_805D89C0;
void TObjPlayer__sub_8004E918(Obj_8004E918 *arg0);
}

extern "C" {

void * create_demo1__14TBoss4DarkFalzFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TObjDFDemo1__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_demo1__14TBoss4DarkFalzFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x130);
    if (o != NULL) {
        o = TObjDFDemo1__ct(o, arg0, arg1, arg2);
    }
    return o;
}
void TObjPlayer__sub_8004E918(Obj_8004E918 *arg0) {
    f32 alpha;
    s32 i;
    alpha = lbl_805D89B8;
    if (arg0->fa8 == 0) {
        if (arg0->fbc >= 0xF0) {
            return;
        }
        if (arg0->fbc > 0xC8) {
            alpha = (f32)(0xF0 - arg0->fbc) / lbl_805D89BC;
        }
    }
    if (alpha <= lbl_805D89C0) {
        return;
    }
    if (alpha < 1.0f) {
        TObjPlayer__sub_80052390(alpha);
    }
    TObjPlayer__sub_803D9B2C();
    set_global_flag__10TObjPlayerFv();
    TOHangerMachine01__sub_803D9C00(arg0->fac);
    rotate_matrix_y(0, arg0->fb8);
    for (i = 0; i < 2; i++) {
        set_global_param__8TObjFishFi(arg0->recs[i].b);
        TObjEneSlimeOne__sub_803E4AF4(arg0->recs[i].a, arg0->recs[i].c, arg0->fc0);
    }
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
    if (alpha < 1.0f) {
        sync_player_globals__10TObjPlayerFv();
    }
}

}
