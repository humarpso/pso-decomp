#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8019A9B8_lbl_80446184 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A9B8_lbl_804B8F60 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A880_lbl_804B8F70 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019A880___vt__8TObjTank {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct Base { char pad[0x18]; };

struct VObj : Base {
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

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct M2CCopy_38 { u8 bytes[0x38]; };

struct M2CCopy_3C { u8 bytes[0x3c]; };

struct RecoveredGlobal_8029B924_lbl_804DC014 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8029B924___vt__16TODoorJungleMain {
    M2C_UNK value;
    u8 remaining[0x54];
};

extern "C" {
extern u32 TODoorJungleMain__data_805D65B8;
extern u32 lbl_805D65BC;
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TLanguage__sub_801E4874(s32);
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_80465418;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 lbl_804DC004;
void TODoorJungleMain__sub_8029B3C8(void);
s32 TObjFish__sub_8001ED9C(void *, s32);
void reset_photon_effect__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80154E3C(void *);
u32 TObjEneGibbles__sub_80156780(void *, s32, s32);
u8 * init_door_base(void *);
s32 create__10TObjMapCsnFi(s32);
extern RecoveredGlobal_8029B924_lbl_804DC014 lbl_804DC014;
extern M2C_UNK __vt__16TODoorJungleMain[];
extern s32 lbl_805D3D20;
extern u32 TODoorJungleMain__data_805D65B8;
extern const f32 lbl_805DDCD8;
extern const f32 lbl_805DDCDC;
extern const f32 lbl_805DDCE0;
extern const f32 lbl_805DDCE4;
extern const f32 lbl_805DDCE8;
extern const f32 lbl_805DDCEC;
extern const f32 lbl_805DDCF0;
u8 *TODoorJungleMain__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__16TODoorJungleMainFv(void *arg0, s16 arg1);
void free_static_resources__16TODoorJungleMainFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TODoorJungleMain__data_805D65B8;
extern u32 lbl_805D65BC;

void free_static_resources__16TODoorJungleMainFv(void) {
    if ((u32) lbl_805D65BC != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65BC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D65BC);
        lbl_805D65BC = 0U;
    }
    if ((u32) TODoorJungleMain__data_805D65B8 != 0U) {
        TLobby__sub_8001FE7C((void*)TODoorJungleMain__data_805D65B8, 1);
        TODoorJungleMain__data_805D65B8 = 0U;
    }
}

extern M2C_UNK __vt__16TODoorJungleMain[];

typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];
void TODoorJungleMain__sub_8029B3C8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 0x1, &lbl_804DC004.value, 0, 0, 0));
    }
    (*(s32 *)&TODoorJungleMain__data_805D65B8) = var_r0;
    (*(u8 * *)&lbl_805D65BC) = TLanguage__sub_801E4874((s32) &lbl_80465418.value);
}

void *__dt__16TODoorJungleMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TODoorJungleMain;
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC)); M2C_FIELD(arg0, M2C_UNK *, 0xDC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8029B924_lbl_804DC014_size[sizeof(RecoveredGlobal_8029B924_lbl_804DC014) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8029B924___vt__16TODoorJungleMain_size[sizeof(RecoveredGlobal_8029B924___vt__16TODoorJungleMain) == 0x58 ? 1 : -1];
u8 *TODoorJungleMain__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    struct CopyStack_8029B924 { u8 bytes[0x3C]; };
    CopyStack_8029B924 copy_storage_8029B924;
    s32 temp_r4;
    init_door_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8029B924___vt__16TODoorJungleMain *)&__vt__16TODoorJungleMain).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3D20;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0xBC) = TObjFish__sub_8001ED9C((*(u8 * *)&TODoorJungleMain__data_805D65B8), 0);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DDCD8;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805DDCDC;
    TObjEneGibbles__sub_80156780(arg0, (s32) &lbl_804DC014.value, 1);
    TObjPlayer__sub_80154E3C(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DDCE0;
    temp_r4 = arg2 - 4;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DDCE4;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    *(M2CCopy_3C *)(copy_storage_8029B924.bytes) = *(const M2CCopy_3C *)(temp_r4 + 4);
    (*(f32 *)(copy_storage_8029B924.bytes + 0x24)) = lbl_805DDCE8;
    (*(f32 *)(copy_storage_8029B924.bytes + 0x28)) = lbl_805DDCEC;
    (*(f32 *)(copy_storage_8029B924.bytes + 0x2C)) = lbl_805DDCF0;
    (*(s32 *)(copy_storage_8029B924.bytes + 0x30)) = 2;
    M2C_FIELD(arg0, s32 *, 0xDC) = create__10TObjMapCsnFi((s32) (copy_storage_8029B924.bytes));
    return arg0;
}

}
