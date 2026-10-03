#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Self_801272B4 { u8 pad[0x18]; void *vt; u8 pad1c[0x1e4 - 0x1c]; f32 f1e4; u8 pad1e8[0x1f0 - 0x1e8]; void *f1f0; };

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80127314(u8 *arg0);
void TItemWeapon__ct(void *, s32, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, u32);
void fn_80109710(void);
extern void *lbl_804A3168[];
extern const f32 lbl_805DADC8;
u8 *TObjPlayer__sub_801272B4(void *self_, s32 a, void *b);
}

extern "C" {

u8 *TObjPlayer__sub_801272B4(void *self_, s32 a, void *b) {
    Self_801272B4 *self = (Self_801272B4 *)self_;
    TItemWeapon__ct(self, a, b);
    self->vt = lbl_804A3168;
    set_status_flags__10TObjPlayerFPvUi(self, 0x100622);
    self->f1f0 = (void *)fn_80109710;
    self->f1e4 = lbl_805DADC8;
    return (u8 *)self;
}

u8 *TObjPlayer__sub_80127314(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_801272B4((void *)(temp_r3), (s32)(tl_05), (void *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
