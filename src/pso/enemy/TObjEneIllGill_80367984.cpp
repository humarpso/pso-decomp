#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct IllGillBase_80367984 { char pad[0x14]; };
struct IllGillVObj_80367984 : IllGillBase_80367984 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};

extern "C" {

void TObjEneIllGill__sub_80367984(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
M2C_UNK TObjEneIllGill__sub_80367B00(void *);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
M2C_UNK TObjPlayer__sub_80017BA8(void *, int, f32, f32, f32);
f32 TObjPlayer__sub_80141CF8(void *, void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK obj_setFlags30(void *, int);

extern const f32 TObjEneIllGill__data_805E02BC;
extern const f32 lbl_805E02C4;
extern const f32 lbl_805E02C8;
extern const f32 TObjEneIllGill__data_805E02DC;
extern const f32 lbl_805E02E8;
extern const f32 lbl_805E02FC;

void TObjEneIllGill__sub_80367984(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;

    TBoss1Dragon__sub_80143504();
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        obj_setFlags30((void *) (arg0), (int) (0x04040000));
        TObjEneMe3SinowZoa__sub_800D758C((void *) (arg0 + 0x374));
        TBoss3Volopt__sub_800D8C48((void *) (arg0 + 0x38));
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        break;
    case 1:
        obj_setFlags30((void *) (arg0), (int) (0x04040000));
        if (((IllGillVObj_80367984 *) (arg0 + 0x374))->m5() == 1) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            M2C_FIELD(arg0, s32 *, 0x390) = 0;
        }
        break;
    case 2:
        obj_clearFlags30((void *) (arg0), (int) (0x04040000));
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        if (TObjPlayer__sub_80141CF8((void *) (arg0 + 0x38), (void *) (arg0 + 0x50)) > lbl_805E02C8) {
            TObjEneIllGill__sub_80367B00((void *) (arg0));
        } else {
            M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + TObjEneIllGill__data_805E02DC);
            temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x350));
            TObjPlayer__sub_80017BA8((void *) (arg0), (int) (M2C_FIELD(temp_r4, s32 *, 8)), (f32) (lbl_805E02E8 * M2C_FIELD(temp_r4, f32 *, 4)), (f32) (lbl_805E02C4), (f32) (lbl_805E02FC));
        }
        TObjPlayer__sub_80154E3C((void *) (arg0));
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734((void *) (arg0), (int) (0), (f32) (TObjEneIllGill__data_805E02BC));
        }
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    obj_clearFlags30((void *) (arg0), (int) (0x200000));
}

}
