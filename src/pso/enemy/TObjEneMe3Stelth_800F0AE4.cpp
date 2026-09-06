#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 objInBand__FP7GameObjf(void *, f32);
s32 TObjEneMe3Stelth__sub_800F0B4C(s32, s32);
extern const f32 lbl_805DA814;
extern const f32 lbl_805DA818;
void TObjEneMe3Stelth__sub_800F0C90(u8 *arg0);
}

extern "C" {

void load_ha_u032_kage(void);
void play_hit_effect__16TObjEneMe3StelthFi(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
int TLanguage__sub_801E4874(void*);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);
s32 TObjEneMe3Stelth__sub_800F0B4C(s32, s32);

    extern unsigned char lbl_8043D438[];
    extern int lbl_805D52F8;
void load_ha_u032_kage(void) { lbl_805D52F8 = TLanguage__sub_801E4874(lbl_8043D438); }

void play_hit_effect__16TObjEneMe3StelthFi(s32 arg0) {
    if (TObjEneMe3Stelth__sub_800F0B4C(arg0, arg0 + 0x38) != 0) {
        TBoss3Volopt__sub_8022675C(0x3A836, arg0 + 0x38, 0, 0);
        return;
    }
    TObjEneDellBiter__sub_80087350(arg0 + 0x38, 0xF3);
    TBoss3Volopt__sub_8022675C(0x3A836, arg0 + 0x38, 0, 0);
}
void TObjEneMe3Stelth__sub_800F0C90(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805DA814) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805DA818) != 0)) {
        TObjEneMe3Stelth__sub_800F0B4C((s32)((void *) (arg0)), (s32)((void *) (arg0 + 0x38)));
    }
}

}
