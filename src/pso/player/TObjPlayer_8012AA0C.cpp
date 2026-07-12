#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_motion_state__10TObjPlayerFi(s32 arg0);
void update_photon_chair_sit__10TObjPlayerFPv(u8 *arg0);
void* TObjPlayer__sub_8012AAB8(void* a0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_80115BFC(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E2FC(s32, f32);
s32 TObjPlayer__sub_8011E384();
M2C_UNK TObjPlayer__sub_8011EDFC(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_8011F5E0(s32);
int TObjPlayer__sub_80120D50(void);
int TObjPlayer__sub_8012106C(void*, void*);
s32 TObjPlayer__sub_80121200();

extern f32 lbl_805DAE68;
extern f32 lbl_805DAE6C;

void update_motion_state__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011E384() != 0) {
        TObjPlayer__sub_8011E2FC(arg0, lbl_805DAE68);
        TObjPlayer__sub_8011EDFC(arg0, 0, 1, lbl_805DAE6C);
        return;
    }
    TObjPlayer__sub_8011F5E0(arg0);
}

void update_photon_chair_sit__10TObjPlayerFPv(u8 *arg0) {
    if (TObjPlayer__sub_80121200() == 2) {
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        TObjPlayer__sub_80115BFC(arg0 + 0x1F8, 0x1999);
    }
}

    extern unsigned char fn_80109710[];
    extern unsigned char lbl_804A4A88[];
    extern const float lbl_805DAE70;
void* TObjPlayer__sub_8012AAB8(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A4A88; TObjPlayer__sub_8012106C(a0, (void*)34); *(int*)((char*)a0 + 0x1f0) = (int)fn_80109710; *(float*)((char*)a0 + 0x1e4) = lbl_805DAE70; *(int*)((char*)a0 + 0x1f8) = 0; return a0; }

}
