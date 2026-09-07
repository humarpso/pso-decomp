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

struct RecoveredGlobal_8018F9CC_lbl_804B788C {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018F9CC___vt__12TObjDoorJung {
    M2C_UNK value;
    u8 remaining[0x54];
};

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_80154E3C(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 init_door_base(void *);
void clamp_state__12TObjDoorJungFPv(void *arg0);
extern RecoveredGlobal_8018F9CC_lbl_804B788C lbl_804B788C;
extern M2C_UNK __vt__12TObjDoorJung[];
extern s32 lbl_805D333C;
u8 *TObjDoorJung__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

struct Base_8018F458 { char pad[0x18]; };
struct VObj_8018F458 : Base_8018F458 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
};

void *__dt__12TObjDoorJungFv(void *arg0, s16 arg1);
void clamp_state__12TObjDoorJungFPv(void *arg0);
void free_buffers__12TObjDoorJungFv(void);
void run_task__12TObjDoorJungFv(u8 *arg0);
M2C_UNK TLobby__sub_8001FE7C(void *, s16);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TRaderMapCore__sub_801F9AC4(void *, M2C_UNK, u16, M2C_UNK, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK destroy_buffers__6TSceneFPvs(void *, s16);

extern void *TObjDoorJung__data_805D5BD0;
extern void *TObjDoorJung__data_805D5BE0;

void free_buffers__12TObjDoorJungFv(void) {
    if (TObjDoorJung__data_805D5BE0 != NULL) {
        destroy_buffers__6TSceneFPvs(TObjDoorJung__data_805D5BE0, 1);
        TObjDoorJung__data_805D5BE0 = NULL;
    }
    if (TObjDoorJung__data_805D5BD0 != NULL) {
        TLobby__sub_8001FE7C(TObjDoorJung__data_805D5BD0, 1);
        TObjDoorJung__data_805D5BD0 = NULL;
    }
}

void clamp_state__12TObjDoorJungFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) < 0) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) > 4) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 4;
    }
}

extern s32 lbl_805D58F8;

void run_task__12TObjDoorJungFv(u8 *arg0) {
    if ((s32) lbl_805D58F8 != 0) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        clear_player_status_flag__10TObjPlayerFPviUi((M2C_UNK)arg0, 0, 8);
    } else {
        ((VObj_8018F458 *)arg0)->m12();
    }
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        TRaderMapCore__sub_801F9AC4(arg0 + 0x38, 0xFF00FF00, (u16) M2C_FIELD(arg0, s32 *, 0x60), 0, 0);
        return;
    }
    TRaderMapCore__sub_801F9AC4(arg0 + 0x38, 0xFFFF0000, (u16) M2C_FIELD(arg0, s32 *, 0x60), 0, 0);
}

extern M2C_UNK __vt__12TObjDoorJung[];

void *__dt__12TObjDoorJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjDoorJung;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018F9CC_lbl_804B788C_size[sizeof(RecoveredGlobal_8018F9CC_lbl_804B788C) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018F9CC___vt__12TObjDoorJung_size[sizeof(RecoveredGlobal_8018F9CC___vt__12TObjDoorJung) == 0x58 ? 1 : -1];
u8 *TObjDoorJung__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8018F9CC___vt__12TObjDoorJung *)&__vt__12TObjDoorJung).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D333C;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804B788C.value), (int) (1));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    clamp_state__12TObjDoorJungFPv((void *) (arg0));
    return arg0;
}

}
