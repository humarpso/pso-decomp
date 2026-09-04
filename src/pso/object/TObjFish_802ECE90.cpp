#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss7Joint_get_shell_max_hp(void);
s32 is_all_parts_done__8TObjFishFPv(u8 *arg0);
void set_swim_direction__8TObjFishFPv(void *arg0);
void update_wobble_angle__8TObjFishFPv(void *arg0);
M2C_UNK TBoss2DeRolLe__sub_80035FCC(void *);
void *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);

s32 is_all_parts_done__8TObjFishFPv(u8 *arg0) {
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x670);
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x630);
    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x650);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x630) == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x650) == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x670) == 3)) {
        return 1;
    }
    return 0;
}

extern f32 lbl_805DEA10;
extern f32 lbl_805DEB60;
extern f32 lbl_805DEB98;

void update_wobble_angle__8TObjFishFPv(void *arg0) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x6F0);
    if (temp_f2 > lbl_805DEB60) {
        M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) (temp_f2 - lbl_805DEB60);
        return;
    }
    if (temp_f2 < lbl_805DEB98) {
        M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) (temp_f2 + lbl_805DEB60);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) lbl_805DEA10;
}

extern const f32 lbl_805DEA50;
extern const f32 lbl_805DEA6C;
extern const f32 lbl_805DEA94;
extern const f32 lbl_805DEB9C;

void set_swim_direction__8TObjFishFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C0) == 0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DEB9C;
        M2C_FIELD(arg0, s32 *, 0x64) = 0x500;
    } else {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DEA94;
        M2C_FIELD(arg0, s32 *, 0x64) = -0x500;
    }
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805DEA50;
    M2C_FIELD(arg0, f32 *, 0x6F0) = (f32) lbl_805DEA6C;
}

s32 TBoss7Joint_get_shell_max_hp(void) {
    return M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0xF), s32 *, 0x1C);
}

}
