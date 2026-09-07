#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct RecoveredGlobal_8015F5C0_lbl_804B0FA8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015F5C0___vt__15TODoorAncient06 {
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_80154E3C(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_8015F5C0_lbl_804B0FA8 lbl_804B0FA8;
extern M2C_UNK __vt__15TODoorAncient06[];
extern s32 lbl_805D2F40;
extern void *lbl_805D5928;
extern void *TODoorAncient06__data_805D592C;
extern const f32 lbl_805DB438;
extern const f32 lbl_805DB448;
u8 *TODoorAncient06__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__15TODoorAncient06Fv(void *arg0, s16 arg1);
void destroy__15TODoorAncient06Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern void *lbl_805D5928;
extern void *TODoorAncient06__data_805D592C;
extern void *lbl_805D5930;

void destroy__15TODoorAncient06Fv(void) {
    if (lbl_805D5930 != NULL) {
        free__11TOBoss4RockFUi(lbl_805D5930);
        lbl_805D5930 = NULL;
    }
    if (TODoorAncient06__data_805D592C != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TODoorAncient06__data_805D592C, s32 *, 4));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TODoorAncient06__data_805D592C, s32 *, 0));
        if (TODoorAncient06__data_805D592C != NULL) {
            free__11TOBoss4RockFUi(TODoorAncient06__data_805D592C);
            TODoorAncient06__data_805D592C = NULL;
        }
    }
    if (lbl_805D5928 != NULL) {
        TLobby__sub_8001FE7C(lbl_805D5928, 1);
        lbl_805D5928 = NULL;
    }
}

extern M2C_UNK __vt__15TODoorAncient06[];

void *__dt__15TODoorAncient06Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorAncient06;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8015F5C0_lbl_804B0FA8_size[sizeof(RecoveredGlobal_8015F5C0_lbl_804B0FA8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015F5C0___vt__15TODoorAncient06_size[sizeof(RecoveredGlobal_8015F5C0___vt__15TODoorAncient06) == 0x54 ? 1 : -1];
u8 *TODoorAncient06__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8015F5C0___vt__15TODoorAncient06 *)&__vt__15TODoorAncient06).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F40;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5928), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *(*(s32 * *)&TODoorAncient06__data_805D592C);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5928), u8 **, 0x430), void **, 4));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB448);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) (M2C_FIELD(arg0, f32 *, 0xB4) / lbl_805DB438);
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804B0FA8.value), (int) (1));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    return arg0;
}

}
