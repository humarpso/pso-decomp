#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_photon_chair_state__10TObjPlayerFPv(void *arg0);
void update_breath_pulse__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
s32 get_player_list__10TObjPlayerFv();

void update_photon_chair_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    if ((temp_r3 > 0) && (temp_r3 < 4)) {
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x200));
        return;
    }
    if (temp_r3 == 4) {
        if (M2C_FIELD(arg0, u32 *, 0x188) != 0U) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 1) {
                TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, u32 *, 0x188));
            }
        }
    }
}

void update_breath_pulse__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;
    void *temp_r4;
    void *temp_r4_2;

    M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1FC) + 0x1999);
    temp_r4 = M2C_FIELD(arg0, void **, 0x188);
    if (temp_r4 != NULL) {
        temp_r4_2 = M2C_FIELD(temp_r4, void **, 0x2C);
        M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) & 0xFFFFFFFD);
        M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1FC);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x204);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0xE38);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) >= 0) {
            M2C_FIELD(arg0, s32 *, 0x200) = 0;
            M2C_FIELD(arg0, s32 *, 0x204) = 0;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) - 0xE38);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) <= -0x31C7) {
            M2C_FIELD(arg0, s32 *, 0x200) = -0x31C7;
            M2C_FIELD(arg0, s32 *, 0x204) = 3;
            return;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x204) = 1;
        return;
    }
}

}
