#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80176308_lbl_80442A80 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80176308_lbl_804B4278 {
    M2C_UNK value;
    u8 remaining[0xC];
};

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

struct RecoveredGlobal_80164340_lbl_804B17F0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80164340___vt__15TODoorVS2Door01 {
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
extern const f32 lbl_805DB550;
void TODoorVS2Door01__vt14(u8 *arg0);
u8 *TLobby__sub_80020004(void *, s32, M2C_UNK *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 TLanguage__sub_801E4874(void *);
extern RecoveredGlobal_80176308_lbl_80442A80 lbl_804410E0;
extern RecoveredGlobal_80176308_lbl_804B4278 lbl_804B17E0;
extern u32 lbl_805D5988;
extern s32 *TODoorVS2Door01__data_805D598C;
void TODoorVS2Door01__sub_80164254(void);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_80154E3C(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_80164340_lbl_804B17F0 lbl_804B17F0;
extern M2C_UNK __vt__15TODoorVS2Door01[];
extern s32 lbl_805D2F94;
extern u32 lbl_805D5988;
extern s32 *TODoorVS2Door01__data_805D598C;
extern const f32 TODoorVS2Door01__data_805DB548;
extern const f32 lbl_805DB550;
extern const f32 lbl_805DB558;
u8 *TODoorVS2Door01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
extern const f32 TODoorVS2Door01__data_805DB548;
void TODoorVS2Door01__vt16(u8 *arg0);
}

extern "C" {

void TODoorVS2Door01__vt13(u8 *arg0);
void TODoorVS2Door01__vt15(u8 *arg0);
void TODoorVS2Door01__vt18(void);
void *__dt__15TODoorVS2Door01Fv(void *arg0, s16 arg1);
void *create__15TODoorVS2Door01FPv(void *arg0);
void free_resources__15TODoorVS2Door01Fv(void);
u8 is_open__15TODoorVS2Door01FPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
s32 TODragonfly__sub_80158360(f32);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
s32 fn_801582C4();
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void TODoorVS2Door01__vt18(void) {  }

extern const f32 lbl_805DB54C;

#pragma push
#pragma opt_common_subs off
void TODoorVS2Door01__vt16(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (M2C_FIELD(arg0, f32 *, 0xD4) - M2C_FIELD(arg0, f32 *, 0xB8));
    if (M2C_FIELD(arg0, f32 *, 0xD4) <= TODoorVS2Door01__data_805DB548) {
        M2C_FIELD(arg0, f32 *, 0xD4) = (f32) TODoorVS2Door01__data_805DB548;
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
}
#pragma pop

void TODoorVS2Door01__vt15(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1) || (TODragonfly__sub_80158360(lbl_805DB54C) == 0)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        TBoss3Volopt__sub_8022675C(0x4004AA0B, arg0 + 0x38, 0, 0);
    }
}

extern const f32 lbl_805DB554;

void TODoorVS2Door01__vt14(u8 *arg0) {
  s8 *new_var;
  const f32 *new_var2;
  new_var = (s8 *) arg0;
  *((f32 *) (new_var + 0xD4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xD4))) + (*((f32 *) (((s8 *) arg0) + 0xB8))));
  if ((*(new_var2 = &lbl_805DB550)) <= (*((f32 *) (((s8 *) arg0) + 0xD4))))
  {
    *((f32 *) (((s8 *) arg0) + 0xD4)) = (f32) (*new_var2);
    *((s32 *) (((s8 *) arg0) + 0xAC)) = 2;
  }
}

void TODoorVS2Door01__vt13(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xD0) & 1) && (TODragonfly__sub_80158360(lbl_805DB554) != 0)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        set_indexed_flags(arg0, 0, 8);
        TBoss3Volopt__sub_8022675C(0x4004AA0B, arg0 + 0x38, 0, 0);
    }
}

u8 is_open__15TODoorVS2Door01FPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((fn_801582C4() != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0xAC) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

extern void *tl_05;

void *create__15TODoorVS2Door01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TODoorVS2Door01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lbl_805D5988;
extern s32 *TODoorVS2Door01__data_805D598C;

void free_resources__15TODoorVS2Door01Fv(void) {
    if ((s32 *) TODoorVS2Door01__data_805D598C != NULL) {
        free_if_valid__10TObjPlayerFi(*TODoorVS2Door01__data_805D598C);
        if ((s32 *) TODoorVS2Door01__data_805D598C != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorVS2Door01__data_805D598C);
            TODoorVS2Door01__data_805D598C = NULL;
        }
    }
    if ((u32) lbl_805D5988 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5988, 1);
        lbl_805D5988 = 0U;
    }
}

extern M2C_UNK __vt__15TODoorVS2Door01[];

typedef char RecoveredGlobal_80176308_lbl_80442A80_size[sizeof(RecoveredGlobal_80176308_lbl_80442A80) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80176308_lbl_804B4278_size[sizeof(RecoveredGlobal_80176308_lbl_804B4278) == 0x10 ? 1 : -1];
void TODoorVS2Door01__sub_80164254(void) {
    s32 *temp_r3_2;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TLobby__sub_80020004(temp_r3, 1, &lbl_804B17E0.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5988) = var_r0;
    temp_r3_2 = (s32 *)(alloc_buffer__11TOBoss4RockFPv(8));
    TODoorVS2Door01__data_805D598C = temp_r3_2;
    M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5988), u8 **, 0x42C), s32 *, 0xC);
    *TODoorVS2Door01__data_805D598C = TLanguage__sub_801E4874((void *) (&lbl_804410E0.value));
}

void *__dt__15TODoorVS2Door01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorVS2Door01;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80164340_lbl_804B17F0_size[sizeof(RecoveredGlobal_80164340_lbl_804B17F0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80164340___vt__15TODoorVS2Door01_size[sizeof(RecoveredGlobal_80164340___vt__15TODoorVS2Door01) == 0x54 ? 1 : -1];
u8 *TODoorVS2Door01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80164340___vt__15TODoorVS2Door01 *)&__vt__15TODoorVS2Door01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F94;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5988), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD((*(u8 * *)&TODoorVS2Door01__data_805D598C), s32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805DB558;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) (lbl_805DB550 / M2C_FIELD(arg0, f32 *, 0xB4));
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) TODoorVS2Door01__data_805DB548;
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804B17F0.value), (int) (1));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    return arg0;
}

}
