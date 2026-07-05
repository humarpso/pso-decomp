#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjBoss7TunnelCol__ct(void *arg0);
void fn_8002B630(void *, void *);
void fn_80154B28(void *);
void fn_801566DC(void *, void *);
void fn_801569F4(void *);

extern M2C_UNK __vt__18TObjBoss7TunnelCol[];
extern M2C_UNK lbl_80474420[];
extern void *lbl_805D3FF0;
extern const f32 lbl_805DECA0;
extern const f32 lbl_805DEC9C;
struct VOff_802F1BEC_arg0 { char pad_0[0xAC]; char f_AC[1]; };

void *TObjBoss7TunnelCol__ct(void *arg0) {
    struct VOff_802F1BEC_arg0 *self = (struct VOff_802F1BEC_arg0 *)arg0;
    fn_801569F4(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjBoss7TunnelCol;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3FF0;
    fn_8002B630(self->f_AC, lbl_80474420);
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DECA0;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DEC9C;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805DEC9C;
    fn_801566DC(arg0, self->f_AC);
    fn_80154B28(arg0);
    return arg0;
}

}
