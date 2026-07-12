#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack__14TObjEnePanarmsFPv(u8 *arg0);
void init_attack_state2__14TObjEnePanarmsFPv(void* a0);
M2C_UNK TObjEnePanarms__sub_800E1608(void *, s32);
u8 *TPhotonMylla__sub_80154CB4(u16);
f64 TObjPlayer__sub_80019760(f32, f32, f32);
int TObjEnePanarms__sub_8002AE74(void*, int);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, M2C_UNK);
M2C_UNK TObjEnePanarms__sub_800F5EB4(void *, M2C_UNK);
s32 TObjPlayer__sub_801423A4(s32, s32, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern s32 lbl_8043CDA0[];
extern const f64 TObjEnePanarms__data_8043CDD0;
extern const f32 TObjEnePanarms__data_805DA544;

void update_attack__14TObjEnePanarmsFPv(u8 *arg0) {
    f32 temp_f3;
    s32 temp_r0;
    u8 *temp_r3;

    temp_r3 = TPhotonMylla__sub_80154CB4((u16) M2C_FIELD(arg0, s32 *, 0x3B8));
    if ((temp_r3 == NULL) || (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x02000800)) {
        TObjEnePanarms__sub_800E1C98(arg0, 2);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 == 0) {
        TObjEnePanarms__sub_800E1608(arg0, M2C_FIELD(arg0, s32 *, 0x3B8));
        TBoss3Volopt__sub_8022675C(TObjEnePanarms__sub_800F5EB4(arg0, 0x4003B72F), arg0 + 0x38, 0, 0);
    }
    if (M2C_FIELD(arg0, f32 *, 0xC0) < TObjEnePanarms__data_805DA544) {
        temp_f3 = M2C_FIELD(temp_r3, f32 *, 0x38);
        M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), lbl_8043CDA0[M2C_FIELD(arg0, s32 *, 0x380)] + (s32) (TObjEnePanarms__data_8043CDD0 * TObjPlayer__sub_80019760(temp_f3 - M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(temp_r3, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x40), temp_f3)), 0x200);
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1C98(arg0, 0xA);
    }
}

    extern const float TObjEnePanarms__data_805DA524;
void init_attack_state2__14TObjEnePanarmsFPv(void* a0) {
    int *r7 = *(int**)((char*)a0 + 0x37c);
    r7[6] = r7[6] | 0x1;
    *(int*)((char*)a0 + 0x384) = 1;
    *(int*)((char*)a0 + 0x388) = 1;
    *(float*)((char*)a0 + 0x3b0) = TObjEnePanarms__data_805DA524;
    *(int*)((char*)a0 + 0x3b4) = 12;
    *(int*)((char*)a0 + 0xb0) = (*(int*)((char*)a0 + 0xb0) & 0xfffffffe);
    TObjEnePanarms__sub_8002AE74(a0, 3);
}

}
