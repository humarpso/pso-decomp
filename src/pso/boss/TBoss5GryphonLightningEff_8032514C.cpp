#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__25TBoss5GryphonLightningEffFv(void *arg0);
s32 TBoss5GryphonLightningEff__sub_80325070(void *, void *);
M2C_UNK fn_80141A30();
M2C_UNK TObjPlayer__sub_80141F1C();
M2C_UNK TObjPlayer__sub_80141F50();
M2C_UNK TParticleCtrl__sub_801E2EFC();
M2C_UNK TParticleCtrl__sub_801E2F20();
M2C_UNK TWindowDD__sub_801E32E8(void *, s32, s32, M2C_UNK);
M2C_UNK TTecZondeEff__sub_8023CED4(void *, void *, void *, void *, void *);
M2C_UNK TTecZondeEff__sub_8023D128(void *, void *, void *, void *);
M2C_UNK TObjPlayer__sub_803DED84(void *);
M2C_UNK set_depth_buffer_settings_1__Fv();

extern u8 lbl_804A7418[];
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

void render__25TBoss5GryphonLightningEffFv(void *arg0) {
    char sp10C[0x270];
    char sp70[0x9C];
    char sp3C[0x34];
    char sp8[0x34];
    s32 temp_r4;

    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x10;
    TParticleCtrl__sub_801E2EFC();
    set_depth_buffer_settings_1__Fv();
    TObjPlayer__sub_80141F50();
    TTecZondeEff__sub_8023D128(arg0, sp70, sp3C, sp8);
    TTecZondeEff__sub_8023CED4(arg0, sp10C, sp70, sp3C, sp8);
    TWindowDD__sub_801E32E8(sp10C, M2C_FIELD(arg0, s32 *, 0x38) * 2, TBoss5GryphonLightningEff__sub_80325070(arg0, sp10C), 1);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x260) == 1) {
        TTecZondeEff__sub_8023CED4(arg0, sp10C, sp70, sp8, sp3C);
        TWindowDD__sub_801E32E8(sp10C, M2C_FIELD(arg0, s32 *, 0x38) * 2, TBoss5GryphonLightningEff__sub_80325070(arg0, sp10C), 1);
    }
    TObjPlayer__sub_80141F1C();
    TParticleCtrl__sub_801E2F20();
    TObjPlayer__sub_803DED84(lbl_804A7418);
    some_id_805c6f74 = lbl_805D5660;
    fn_80141A30();
}

}
