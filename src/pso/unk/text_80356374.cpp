#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Shot_80356374 {
    s32 f0;
    u8 pad4[0x14];
    void *vt18;
    s32 owner;
    struct { f32 x, y, z; } pos;
    f32 speed;
    s32 f30;
    s32 life;
};

extern "C" {
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *fn_8035648C(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 *dispatch_shared_handler_a__6TLobbyFPv(s32);
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
void *TOSwitchAttack__sub_80087278(void *, int, int);
void __ct__7TObjectFP7TObject(void *, s32);
extern M2C_UNK __vt__15TBoss6SwordShot[];
extern s32 lbl_805D43AC;
extern const f32 lbl_805DFFE8;
extern const f32 lbl_805DFFF0;
extern const f32 lbl_805DFFF4;
u8 *TBoss6SwordShot__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#define self ((Shot_80356374 *)arg0)
u8 *TBoss6SwordShot__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    f32 scale;
    f32 v;
    void *p;
    __ct__7TObjectFP7TObject(arg0, arg1);
    self->vt18 = __vt__15TBoss6SwordShot;
    self->f0 = lbl_805D43AC;
    self->owner = arg1;
    VecCopy__FP3VecPC3Vec(&self->pos, (void *)arg2);
    self->speed = farg0;
    self->f30 = 0;
    v = *dispatch_shared_handler_a__6TLobbyFPv(0x2B);
    self->life = (s32)v;
    if (lbl_805DFFE8 == v) {
        self->life = 0x14;
    }
    if (arg3 != 0) {
        scale = lbl_805DFFF0;
        if (self->speed > lbl_805DFFF4) {
            scale = self->speed / lbl_805DFFF4;
        }
        if ((p = TOSwitchAttack__sub_80087278(&self->pos, 0x212, 0x40)) != NULL) {
            set_position_xy__10TObjPlayerFPvff(p, scale, lbl_805DFFF0);
        }
        if ((p = TOSwitchAttack__sub_80087278(&self->pos, 0x213, 0x40)) != NULL) {
            set_position_xy__10TObjPlayerFPvff(p, scale, lbl_805DFFF0);
        }
    }
    return (u8 *)arg0;
}
#undef self
#pragma pop

#pragma push
#pragma fp_contract on
u8 *fn_8035648C(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x38));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TBoss6SwordShot__ct((void *)(temp_r3), (s32)(arg0), (s32)(arg1), (s32)(arg2), farg0));
    }
    return var_r0;
}
#pragma pop

}
