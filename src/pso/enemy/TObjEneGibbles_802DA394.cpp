#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GibBase_802da394 { char pad[0x14]; };
struct GibVObj_802da394 : GibBase_802da394 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};

extern "C" {

void update_death_sequence__14TObjEneGibblesFPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(int);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
M2C_UNK TObjEneGibbles__sub_800D8988(void *);
M2C_UNK TObjEneGibbles__sub_802D7A54(void *);
M2C_UNK TObjEneGibbles__sub_802D7F94(void *, int);
s32 TObjEneGibbles__sub_802D9A04(void *);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
M2C_UNK minimap_render_dot(void *, int, int, int);
s32 objInBand__FP7GameObjf(void *, f32, f32);

extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 TObjEneGibbles__data_805DE7EC;
extern const f32 TObjEneGibbles__data_805DE830;
extern const f32 lbl_805DE868;
extern const f32 lbl_805DE86C;

void update_death_sequence__14TObjEneGibblesFPv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_r0;
    s32 temp_r3;
    u8 *temp_r4;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    TBoss1Dragon__sub_80143504((int) (arg0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        TObjEneMe3SinowZoa__sub_800D758C((void *) (arg0 + 0x3C0));
        M2C_FIELD(arg0, f32 *, 0x38C) = (f32) lbl_805DE868;
        M2C_FIELD(arg0, f32 *, 0x390) = (f32) TObjEneGibbles__data_805DE830;
        TObjPlayer__sub_80011734((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        break;
    case 1:
        if (((struct GibVObj_802da394 *) (arg0 + 0x3C0))->m5() != 0) {
            M2C_FIELD(arg0, f32 *, 0x38C) = (f32) (M2C_FIELD(arg0, f32 *, 0x38C) - M2C_FIELD(arg0, f32 *, 0x390));
            M2C_FIELD(arg0, f32 *, 0x390) = (f32) (M2C_FIELD(arg0, f32 *, 0x390) + TObjEneGibbles__data_805DE830);
        } else {
            M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DE86C;
        }
        temp_f2 = M2C_FIELD(arg0, f32 *, 0xC4);
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) ((temp_f2 - TObjEneGibbles__data_805DE7EC) - M2C_FIELD(arg0, f32 *, 0xC8)), (f32) (temp_f2)) != 0) {
            M2C_FIELD(arg0, f32 *, 0x38C) = (f32) TObjEneGibbles__data_805DE7E4;
            M2C_FIELD(arg0, f32 *, 0x390) = (f32) TObjEneGibbles__data_805DE7E4;
            temp_r3 = TObjEneGibbles__sub_802D9A04((void *) (arg0));
            switch (temp_r3) {
            case 0:
                TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
                break;
            default:
            case 1:
                TBoss3Volopt__sub_8022675C((void *) TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3AD32)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                break;
            }
            TObjEneGibbles__sub_802D7A54((void *) (arg0));
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        }
        break;
    case 3:
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 0xC4);
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) ((temp_f2_2 - TObjEneGibbles__data_805DE7EC) - M2C_FIELD(arg0, f32 *, 0xC8)), (f32) (temp_f2_2)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 4);
        }
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

}
