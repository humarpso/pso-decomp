#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type2__sub_800528B8(void *arg0);
void init_child_and_set_timer__11TBoss4Type2FPv(void *arg0);
void init_timer__11TBoss4Type2FPv(u8 *arg0);
void update_scale_state__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss4Type2__sub_80053504(void *);
M2C_UNK TBoss4Type2__sub_800535A8(void *);
M2C_UNK TBoss4Type2__sub_80053CEC(void *, M2C_UNK);
M2C_UNK TBoss4Type2__sub_80054FC0(void *, f32);
M2C_UNK TRaderMapCore__sub_80053914(void *, M2C_UNK *);
f32 calc_boss4_scale__10TObjPlayerFi();
void create__16TObjDFBeamCursorFPvPv(void *, void *);
M2C_UNK set_map_position__13TRaderMapCoreFPvPv(void *, M2C_UNK *);

extern f32 lbl_805D8B08;

void TBoss4Type2__sub_800528B8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (calc_boss4_scale__10TObjPlayerFi() < lbl_805D8B08) {
            TBoss4Type2__sub_800535A8(arg0);
            return;
        }
        TBoss4Type2__sub_80053504(arg0);
    }
}

extern const f32 lbl_805D8B0C;

void init_timer__11TBoss4Type2FPv(u8 *arg0) {
    TBoss4Type2__sub_80054FC0((void *) (arg0 + 0x38), (f32) (lbl_805D8B0C));
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

extern const f64 lbl_80437620[];

void update_scale_state__11TBoss4Type2FPv(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK var_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (calc_boss4_scale__10TObjPlayerFi() < lbl_80437620[0]) {
            TBoss4Type2__sub_80053504(arg0);
            return;
        }
        var_r31 = 8;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 8) {
            var_r31 = 9;
        }
        TRaderMapCore__sub_80053914(arg0, &sp8);
        set_map_position__13TRaderMapCoreFPvPv(arg0, &sp8);
        TBoss4Type2__sub_80053CEC(arg0, var_r31);
    }
}

void init_child_and_set_timer__11TBoss4Type2FPv(void *arg0) {
    create__16TObjDFBeamCursorFPvPv(arg0, (void *)((char *)arg0 + 952));
    M2C_FIELD(arg0, u32 *, 0x398) = 75;
}

}
