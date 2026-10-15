#include "types.h"

struct RecoveredGlobal_802E4A4C_lbl_804E355C { s32 value; u8 remaining[0x18]; };
typedef char RecoveredGlobal_802E4A4C_lbl_804E355C_size[sizeof(RecoveredGlobal_802E4A4C_lbl_804E355C) == 0x1C ? 1 : -1];

extern "C" {
s32 memset(void *, int, int);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_type__10TObjPlayerFPv(void *);
u32 get_player_by_client_id(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_802E4A4C_lbl_804E355C lbl_804E355C;
extern const f32 lbl_805DE914;
u8 *construct_attack_collision(u8 *arg0, s32 arg1, u8 *arg2);
}

extern "C" {

u8 *construct_attack_collision(u8 *arg0, s32 arg1, u8 *arg2) {
    u32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804E355C.value;
    *(f32 *)((s8 *)arg0 + 0x34) = (f32) lbl_805DE914;
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) lbl_805DE914;
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) lbl_805DE914;
    *(f32 *)((s8 *)arg0 + 0x40) = (f32) *(f32 *)((s8 *)arg2 + 0xC);
    *(f32 *)((s8 *)arg0 + 0x44) = (f32) lbl_805DE914;
    *(s32 *)((s8 *)arg0 + 0x48) = 0;
    *(s32 *)((s8 *)arg0 + 0x4C) = 0x41F07;
    *(f32 *)((s8 *)arg0 + 0x50) = (f32) lbl_805DE914;
    *(f32 *)((s8 *)arg0 + 0x54) = (f32) lbl_805DE914;
    *(f32 *)((s8 *)arg0 + 0x58) = (f32) lbl_805DE914;
    *(f32 *)((s8 *)arg0 + 0x5C) = (f32) lbl_805DE914;
    *(u8 **)((s8 *)arg0 + 0x1C) = (unsigned char *) ((void *) (arg0 + 0x34));
    *(s32 *)((s8 *)arg0 + 0x20) = 1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x24), (void *) (arg2));
    memset((void *) (arg0 + 0x60), (int) (0), (int) (0x40));
    *(s32 *)((s8 *)arg0 + 0xA0) = 0;
    *(s32 *)((s8 *)arg0 + 0xA4) = (s32) *(s32 *)((s8 *)arg2 + 0x10);
    *(u16 *)((s8 *)arg0 + 0xA8) = (u16) *(u16 *)((s8 *)arg2 + 0x14);
    *(s16 *)((s8 *)arg0 + 0xAA) = (s16) *(s16 *)((s8 *)arg2 + 0x16);
    *(s32 *)((s8 *)arg0 + 0xAC) = (s32) *(s32 *)((s8 *)arg2 + 0x18);
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) *(f32 *)((s8 *)arg2 + 0x1C);
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) *(f32 *)((s8 *)arg2 + 0x20);
    *(s32 *)((s8 *)arg0 + 0xB8) = (s32) *(s32 *)((s8 *)arg2 + 0x24);
    *(s32 *)((s8 *)arg0 + 0xC0) = 1;
    temp_r3 = get_player_by_client_id((int) ((s32) *(u16 *)((s8 *)arg2 + 0x14)));
    if (temp_r3 != 0U) {
        if (get_type__10TObjPlayerFPv((void *) (temp_r3 + 0x828)) != 0) {
            *(s32 *)((s8 *)arg0 + 0xBC) = 1;
        } else {
            *(s32 *)((s8 *)arg0 + 0xBC) = 0;
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0xBC) = 0;
    }
    return arg0;
}

}
