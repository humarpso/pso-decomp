#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802E4A4C_lbl_804E355C { M2C_UNK value; u8 remaining[0x18]; };
typedef char RecoveredGlobal_802E4A4C_lbl_804E355C_size[sizeof(RecoveredGlobal_802E4A4C_lbl_804E355C) == 0x1C ? 1 : -1];

extern "C" {
M2C_UNK memset(void *, int, int);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_type__10TObjPlayerFPv(void *);
u32 get_player_by_client_id(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_802E4A4C_lbl_804E355C lbl_804E355C;
extern const f32 lbl_805DE914;
u8 *fn_802E4A4C(u8 *arg0, s32 arg1, u8 *arg2);
}

extern "C" {

u8 *fn_802E4A4C(u8 *arg0, s32 arg1, u8 *arg2) {
    u32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804E355C.value;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DE914;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DE914;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DE914;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805DE914;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0x41F07;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805DE914;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DE914;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805DE914;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805DE914;
    M2C_FIELD(arg0, u8 **, 0x1C) = (unsigned char *) ((void *) (arg0 + 0x34));
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x24), (void *) (arg2));
    memset((void *) (arg0 + 0x60), (int) (0), (int) (0x40));
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) M2C_FIELD(arg2, s32 *, 0x10);
    M2C_FIELD(arg0, u16 *, 0xA8) = (u16) M2C_FIELD(arg2, u16 *, 0x14);
    M2C_FIELD(arg0, s16 *, 0xAA) = (s16) M2C_FIELD(arg2, s16 *, 0x16);
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) M2C_FIELD(arg2, s32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) M2C_FIELD(arg2, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) M2C_FIELD(arg2, f32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg2, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0xC0) = 1;
    temp_r3 = get_player_by_client_id((int) ((s32) M2C_FIELD(arg2, u16 *, 0x14)));
    if (temp_r3 != 0U) {
        if (get_type__10TObjPlayerFPv((void *) (temp_r3 + 0x828)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xBC) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xBC) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    }
    return arg0;
}

}
