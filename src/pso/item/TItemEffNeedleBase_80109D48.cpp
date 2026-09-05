#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_c1c33b { char pad[0x18]; };

struct VObj_18_c1c33b : VBase_18_c1c33b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK allow_rendering__7TObjectFv(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
u32 query_game_join_id__10TObjPlayerFv(int);
extern const f32 lbl_805DAB50;
extern const f32 lbl_805DAB54;
void TItemEffNeedleBase__sub_80109E18(u8 *arg0);
}

extern "C" {

u8 *__ct__18TItemEffNeedleBaseFv(u8 *arg0, void *arg1, u8 *arg2);
M2C_UNK __ct__7TObjectFP7TObject();
s32 get_field_d8__10TObjPlayerFPv(void *);

extern M2C_UNK __vt__18TItemEffNeedleBase[];
extern s32 lbl_805D2BC8;
extern const f32 lbl_805DAB4C;

void TItemEffNeedleBase__sub_80109E18(u8 *arg0) {
    if (query_game_join_id__10TObjPlayerFv((int) (M2C_FIELD(arg0, s32 *, 0x2C))) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        disallow_rendering__7TObjectFv((void *)((void *) (arg0)));
        return;
    }
    allow_rendering__7TObjectFv((void *) (arg0));
    if (((VObj_18_c1c33b *)(arg0))->m4() != 0) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) - lbl_805DAB50);
        if (M2C_FIELD(arg0, f32 *, 0x1C) <= lbl_805DAB54) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
}

u8 *__ct__18TItemEffNeedleBaseFv(u8 *arg0, void *arg1, u8 *arg2) {
    s32 temp_r4;

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TItemEffNeedleBase;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2BC8;
    M2C_FIELD(arg0, s32 *, 0x2C) = get_field_d8__10TObjPlayerFPv(arg2);
    temp_r4 = M2C_FIELD(arg2, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r4;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DAB4C;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DAB4C;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DAB4C;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DAB4C;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
