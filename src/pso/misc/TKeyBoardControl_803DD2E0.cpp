#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct { u8 pad[0x28]; } Elem_803DD300;

typedef struct {
    f32 a;
    f32 b;
    f32 pad8[2];
    f32 e;
    f32 f;
    f32 g;
    f32 h;
    f32 i;
    f32 j;
} Cam_803DD300;

typedef struct {
    f32 a;
    f32 b;
} Pair_803DD300;

void TObjPlayer__sub_803DCBD8(s32);
void TObjPlayer__sub_803DCBF0(Elem_803DD300 *);
void fn_803DD4EC(void);
extern Elem_803DD300 lbl_8058D380[6];
extern f32 lbl_8058D4D0[];
extern Cam_803DD300 lbl_8058D4F8;
extern s32 lbl_805D76B8;
extern f32 lbl_805D777C;
extern s32 some_id_805c6f74;
extern const f32 lbl_805E0F84;
extern const f32 lbl_805E0F90;
extern const f32 lbl_805E0F94;
extern const f32 lbl_805E0F98;

void update_camera__16TKeyBoardControlFv(void);
M2C_UNK TCameraCtrl__sub_803DD300();

void update_camera__16TKeyBoardControlFv(void) {
    TCameraCtrl__sub_803DD300();
}

s32 TCameraCtrl__sub_803DD300() {
    s32 i;
    Cam_803DD300 *c = &lbl_8058D4F8;

    c->h = lbl_805E0F84;
    c->i = lbl_805E0F84;
    c->j = lbl_805E0F84;
    c->g = lbl_805E0F90;
    c->a = lbl_805E0F84 * c->g;
    c->b = -c->a;
    c->e = lbl_805E0F84 / c->a;
    c->f = lbl_805E0F84 / c->b;
    lbl_8058D4D0[0] = lbl_805E0F94;
    lbl_8058D4D0[1] = lbl_805E0F84;
    some_id_805c6f74 = 0;
    lbl_805D76B8 = 0;
    lbl_805D777C = lbl_805E0F98;
    fn_803DD4EC();
    for (i = 0; i < 6; i++) {
        TObjPlayer__sub_803DCBF0(&lbl_8058D380[i]);
    }
    TObjPlayer__sub_803DCBD8(0);
}

}
