#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_8036DDE8 { s32 f0; u8 pad[0x28]; };

extern "C" {
extern s8 lbl_804F36F8[];
void TLobby__sub_8036DDE8(void);
}

extern "C" {

void apply_pending_effect__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK copy_vec2__11TBoss6Type2FPvPv(void *, void *);
s32 is_state_1f__14TBoss6PlotFalzFUi(void *);
u16 obj_getField1c();

extern s8 lbl_804F36F8[];

void apply_pending_effect__11TBoss6Type2FPv(u8 *arg0) {
    u16 temp_r3;
    u8 *temp_r31;

    temp_r3 = obj_getField1c();
    if (temp_r3 < 4U) {
        temp_r31 = (unsigned char *) (lbl_804F36F8 + (temp_r3 * 0x2C));
        if ((s32) M2C_FIELD(temp_r31, s32 *, 0) != 0) {
            M2C_FIELD(temp_r31, s32 *, 0) = 0;
            if (is_state_1f__14TBoss6PlotFalzFUi((void *) (arg0)) != 0) {
                copy_vec2__11TBoss6Type2FPvPv((void *) (arg0 + 0xCF4), (void *) (temp_r31 + 4));
                copy_vec2__11TBoss6Type2FPvPv((void *) (arg0 + 0xA1C), (void *) (temp_r31 + 0xC));
                copy_vec2__11TBoss6Type2FPvPv((void *) (arg0 + 0xB88), (void *) (temp_r31 + 0x14));
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r31, s32 *, 0x1C);
                M2C_FIELD(arg0, s32 *, 0x8B0) = (s32) M2C_FIELD(temp_r31, s32 *, 0x20);
                M2C_FIELD(arg0, s32 *, 0x8AC) = (s32) M2C_FIELD(temp_r31, s32 *, 0x24);
                M2C_FIELD(arg0, s32 *, 0x8B4) = (s32) M2C_FIELD(temp_r31, s32 *, 0x28);
            }
        }
    }
}
void TLobby__sub_8036DDE8(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((E_8036DDE8 *)lbl_804F36F8)[i].f0 = 0;
    }
}

}
