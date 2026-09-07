#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase800A64E8_800a64e8_800A4288 { char pad[0x14]; };
struct VObj800A64E8_800a64e8_800A4288 : VBase800A64E8_800a64e8_800A4288 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

struct RecoveredGlobal_800A6BE0_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_800A6BE0_lbl_80500978 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK TObjBoss2Tunnel__sub_8007E884(void *, void *, void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, void *);
extern RecoveredGlobal_800A6BE0_lbl_804FF5E8 lbl_804FF5E8;
extern RecoveredGlobal_800A6BE0_lbl_80500978 lbl_80500978;
extern s32 lbl_805D505C;
extern s32 lbl_805D5060;
extern const f32 lbl_805D9A14;
void TObjPlayer__sub_800A6BE0(void);
}

extern "C" {

void TObjPlayer__sub_800A617C(void *arg0);
void TObjPlayer__sub_800A64E8(u8 *arg0);
void * create_ene_saver__10TObjPlayerFPv(void *arg0);
void free_resources__10TObjPlayerFv(void);
void init_render_flags__10TObjPlayerFPv(u8 *arg0);
void step_angle_clamped__10TObjPlayerFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss4DarkFalz__sub_8004C220(void *, void *);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneSaver__ct(void *, void *, void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK obj_setFlags30(void *, int);

void TObjPlayer__sub_800A617C(void *arg0) {
    s16 temp_r0;
    s32 temp_r4;
    void *temp_r3;
    void *temp_r3_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    default:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x374);
        if (temp_r4 & 4) {
            M2C_FIELD(arg0, s16 *, 0x326) = 3;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
        } else if (temp_r4 & 1) {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
        return;
    case 1:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 2) {
            M2C_FIELD(arg0, s16 *, 0x326) = 2;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
        }
        return;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 4) {
            M2C_FIELD(arg0, s16 *, 0x326) = 3;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
            return;
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 3) {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 1);
            temp_r3_2 = M2C_FIELD(arg0, void **, 0xA4);
            M2C_FIELD(temp_r3_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x18) | 1);
            return;
        }
        break;
    }
}

void init_render_flags__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;

    TBoss4DarkFalz__sub_8004C220((void *) arg0, (void *) (arg0 + 0x50));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
}

void TObjPlayer__sub_800A64E8(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if (((VObj800A64E8_800a64e8_800A4288 *)(arg0 + 0x3A4))->m8() != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0xB;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            obj_clearFlags30((void *) (arg0), (int) (0x200000));
            obj_setFlags30((void *) (arg0), (int) (0x06040000));
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 0x40);
            temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
        }
        return;
    case 11:
        if (!(M2C_FIELD(arg0, s32 *, 0x374) & 0x40)) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            return;
        }
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 0xB;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        obj_clearFlags30((void *) (arg0), (int) (0x200000));
        obj_setFlags30((void *) (arg0), (int) (0x06040000));
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 0x40);
        break;
    }
}

void step_angle_clamped__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < -0x238E) {
        var_r4 = -0x238E;
    } else if (var_r4 > 0x238E) {
        var_r4 = 0x238E;
    }
    M2C_FIELD(arg0, s32 *, 0x39C) = lerp_angle_half__10TObjPlayerFUsUs(M2C_FIELD(arg0, s32 *, 0x39C), var_r4);
}

extern void *tl_04;

typedef char RecoveredGlobal_800A6BE0_lbl_804FF5E8_size[sizeof(RecoveredGlobal_800A6BE0_lbl_804FF5E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_800A6BE0_lbl_80500978_size[sizeof(RecoveredGlobal_800A6BE0_lbl_80500978) == 0x10 ? 1 : -1];
void TObjPlayer__sub_800A6BE0(void) {
    if ((s32) lbl_805D505C == 0x15) {
        TObjContainerIdo__sub_803D96A8((int) (0), (void *) (lbl_805D5060));
    }
    if ((s32) lbl_805D505C == 0x1A) {
        M2C_FIELD(&lbl_80500978.value, f32 *, 0) = (f32) lbl_805D9A14;
        M2C_FIELD(&lbl_80500978.value, f32 *, 4) = (f32) lbl_805D9A14;
        M2C_FIELD(&lbl_80500978.value, f32 *, 8) = (f32) lbl_805D9A14;
        TObjBoss2Tunnel__sub_8007E884((void *) (&lbl_804FF5E8.value), (void *) (&lbl_80500978.value), (void *) (&lbl_80500978.value));
    }
    lbl_805D505C += 1;
}

void * create_ene_saver__10TObjPlayerFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3CC);
    if (o2 != NULL) {
        o2 = TObjEneSaver__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D5044;
extern u32 lbl_805D5050;
extern u32 lbl_805D5064;
extern u32 lbl_805D5068;
extern u32 lbl_805D506C;

void free_resources__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5044 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5044);
        lbl_805D5044 = 0U;
    }
    if ((u32) lbl_805D5064 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5064, 1);
        lbl_805D5064 = 0U;
    }
    if ((u32) lbl_805D5068 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5068, 1);
        lbl_805D5068 = 0U;
    }
    if ((u32) lbl_805D506C != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D506C, 1);
        lbl_805D506C = 0U;
    }
    if ((u32) lbl_805D5050 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5050, 1);
        lbl_805D5050 = 0U;
    }
}

}
