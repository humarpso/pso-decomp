#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_facing_vector__10TObjPlayerFPv(u8 *arg0);
M2C_UNK update_ground_contact__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801BF584(void *);
M2C_UNK fn_8013C80C(void *);
f32 fn_803D64C0(s32);
f32 fn_803D64DC(s32);

extern const f32 lbl_805DC278;

void update_facing_vector__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x404) = fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0x408) = (f32) lbl_805DC278;
    M2C_FIELD(arg0, f32 *, 0x40C) = fn_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    update_ground_contact__10TObjPlayerFi(arg0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x424) != 0U) {
        fn_8013C80C(M2C_FIELD(arg0, void **, 0x424));
    }
    TObjPlayer__sub_801BF584(arg0 + 0x360);
}

}
