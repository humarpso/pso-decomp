#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8026D208 { char pad[0x18]; };
struct VObj_8026D208 : Base_8026D208 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual s32 m31();
};

struct RecoveredGlobal_8026D18C_lbl_80515BA0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
s32 get_dest_area__17TObjAreaWarpQuestFPv(void *);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TLobby__sub_80207770(s32);
M2C_UNK TKeyBoardControl__sub_8000F998();
M2C_UNK TObjPlayer__sub_801B31D8();
M2C_UNK set_area__6TLobbyFPvi(void *, int, int);
M2C_UNK TNpcPlayer__sub_8034E7A0();
extern RecoveredGlobal_8026D18C_lbl_80515BA0 lbl_80515BA0;
extern s32 lbl_805D55C0;
extern int TWindowReturnCity__data_805D6468;
void TWindowReturnCity__sub_8026D18C(void);
}

extern "C" {

void TWindowCtrl__sub_8026D4E8(void);
void TWindowReturnCity__sub_8026D4BC(void);
void TWindowReturnCity__sub_8026D4C0(void);
void *__dt__17TWindowReturnCityFv(void *arg0, s16 arg1);
void clear_flag_bit5__17TWindowReturnCityFv(void);
s32 query_battle_state__17TWindowReturnCityFPv(void *arg0);
void render__17TWindowReturnCityFv(void);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void close__17TWindowSubComCardFPv(void *);

typedef char RecoveredGlobal_8026D18C_lbl_80515BA0_size[sizeof(RecoveredGlobal_8026D18C_lbl_80515BA0) == 0x28 ? 1 : -1];
void TWindowReturnCity__sub_8026D18C(void) {
    if (((s32) lbl_805D55C0 != 1) && ((s32) (*(s32 *)&TWindowReturnCity__data_805D6468) < 4)) {
        if (((s32)TPlayerBattleCtrl4P__sub_801BA74C((s32)((u32) (*(s32 *)&TWindowReturnCity__data_805D6468)))) != 0U) {
            TObjPlayer__sub_801B31D8();
        }
        set_area__6TLobbyFPvi((void *) (&lbl_80515BA0.value), (int) (0), (int) (TLobby__sub_80207770(0)));
        TKeyBoardControl__sub_8000F998();
        get_dest_area__17TObjAreaWarpQuestFPv(&lbl_80515BA0.value);
        TNpcPlayer__sub_8034E7A0();
        (*(s32 *)&TWindowReturnCity__data_805D6468) = 4;
    }
}

s32 query_battle_state__17TWindowReturnCityFPv(void *arg0) {
    struct VObj_8026D208 *o = (struct VObj_8026D208 *)TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x24));
    if (o == NULL) {
        return 0;
    }
    return o->m31();
}

void render__17TWindowReturnCityFv(void) {  }

extern M2C_UNK __vt__17TWindowReturnCity[];

void *__dt__17TWindowReturnCityFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowReturnCity;
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TWindowReturnCity__sub_8026D4BC(void) {  }

    extern int TWindowReturnCity__data_805D6468;
void TWindowReturnCity__sub_8026D4C0(void) { TWindowReturnCity__data_805D6468 = 4; }

extern void *TWindowCtrl__data_805D63F8;

void clear_flag_bit5__17TWindowReturnCityFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) & 0xFFFFFFDF);
    }
}

extern void *TWindowCtrl__data_805D63F8;

void TWindowCtrl__sub_8026D4E8(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) = (u16) (M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) | 0x20);
    }
}

}
