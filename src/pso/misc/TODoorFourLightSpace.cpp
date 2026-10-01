#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual M2C_UNK m17();
};

struct Tbl_80289EE0 { s32 v[8]; };

struct Door_80289EE0 { u8 pad[0xD8]; s32 sw[8]; };

extern "C" {
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(int, int);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK TObjEneGibbles__sub_80156780(void *, void *, int);
M2C_UNK init_door_base();
u8 *fn_8028A714(M2C_UNK);
s32 fn_8028A750(int);
s32 fn_8028A78C(int);
extern Tbl_80289EE0 lbl_80450C24;
extern M2C_UNK lbl_804D3500[];
extern M2C_UNK __vt__20TODoorFourLightSpace[];
extern s32 lbl_805D3B1C;
extern const f32 lbl_805DD8F4;
extern const f32 lbl_805DD8F8;
u8 *TODoorFourLightSpace__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

struct Base_802898E8 { char pad[0x18]; };
struct VObj_802898E8 : Base_802898E8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

s32 TODoorFourLightSpace__vt17(void *arg0);
void TODoorFourLightSpace__vt4(void *arg0, s16 *arg1);
void *__dt__20TODoorFourLightSpaceFv(void *arg0, s16 arg1);
void fn_802898E8(void);
void fn_802898EC(void);
void render__20TODoorFourLightSpaceFv(u8 *arg0);
M2C_UNK TODoorFourLightSpace__sub_80289B4C(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
s32 fn_801582C4(void *, f32);
M2C_UNK get_instance__12TBoss8DragonFv();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_global_param__8TObjFishFi();

void fn_802898E8(void) {  }
void fn_802898EC(void) {  }
s32 TODoorFourLightSpace__vt17(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        if ((get_main_phase() == 0xF) || (is_not_split_screen__13TRaderMapCoreFv() == 1)) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 2;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xCC) = 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xC8);
}
void TODoorFourLightSpace__vt4(void *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
    }
}

extern const f32 lbl_805DD8F0;

void render__20TODoorFourLightSpaceFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((((VObj_802898E8 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) == 1) && (fn_801582C4(arg0, lbl_805DD8F0) == 1)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_r0) {
        case 1:
        case 3:
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
            TObjPlayer__sub_803D9B78();
            return;
        case 2:
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
            TObjPlayer__sub_803D9B78();
            return;
        case 0:
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xCC);
            if ((temp_r0_2 == 2) || (temp_r0_2 == 3)) {
                TODoorFourLightSpace__sub_80289B4C(arg0);
                return;
            }
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0xD4));
            TObjPlayer__sub_803D9B78();
            break;
        }
    }
}

extern M2C_UNK __vt__20TODoorFourLightSpace[];

void *__dt__20TODoorFourLightSpaceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TODoorFourLightSpace;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TODoorFourLightSpace__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 i;
    init_door_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TODoorFourLightSpace;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3B1C;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    ((VObj_18_4a4f5b *)(arg0))->m17();
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (lbl_804D3500), (int) (1));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xD4) = fn_8028A78C((int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = fn_8028A750((int) (0));
    M2C_FIELD(arg0, u8 **, 0xBC) = fn_8028A714(0);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DD8F4);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DD8F8;
    {
        Tbl_80289EE0 t = lbl_80450C24;
        for (i = 0; i < 8; i++) {
            ((Door_80289EE0 *)arg0)->sw[i] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(M2C_FIELD(arg0, s32 *, 0xD4), t.v[i]);
        }
    }
    return arg0;
}

}
