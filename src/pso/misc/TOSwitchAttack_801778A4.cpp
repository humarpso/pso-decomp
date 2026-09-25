#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80177C80___vt__14TOSwitchAttack {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct Pkt_80177CF4 { u8 code, words; u16 object, zero, reserved, switchId; u8 area, flags; };

struct Self_80177CF4 { u8 pad[0xC8]; s32 switchId; u8 padcc[0xEC - 0xCC]; s32 on; };

extern "C" {
s32 init_params__14TOSwitchAttackFPv(void *);
s32 TPhotonMagicSquare__sub_801A2640(void *);
extern M2C_UNK __vt__14TOSwitchAttack[];
extern s32 lbl_805D3178;
u8 *TOSwitchAttack__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void init_6x05_switch_changed__6TLobbyFPv(void *);
void finalize_and_send_60__6TLobbyFPv(void *);
s32 TObjPlayer__sub_800196EC();
u16 obj_getField1c(void *);
void TOSwitchItem__vt19(Self_80177CF4 *self);
}

extern "C" {

void TOSwitchAttack__sub_80177C20(void);
void TOSwitchAttack__sub_80177C24(void);
void *__dt__14TOSwitchAttackFv(void *arg0, s16 arg1);
void *create__14TOSwitchAttackFPv(void *arg0);
void render__14TOSwitchAttackFv(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void render__14TOSwitchAttackFv(void) {  }

extern void *tl_05;

void *create__14TOSwitchAttackFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xAC);
    if (o != NULL) {
        o = TOSwitchAttack__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

void TOSwitchAttack__sub_80177C20(void) {  }
void TOSwitchAttack__sub_80177C24(void) {  }

extern M2C_UNK __vt__14TOSwitchAttack[];

void *__dt__14TOSwitchAttackFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOSwitchAttack;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80177C80___vt__14TOSwitchAttack_size[sizeof(RecoveredGlobal_80177C80___vt__14TOSwitchAttack) == 0x38 ? 1 : -1];
u8 *TOSwitchAttack__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80177C80___vt__14TOSwitchAttack *)&__vt__14TOSwitchAttack).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3178;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    init_params__14TOSwitchAttackFPv((void *) (arg0));
    M2C_FIELD(arg0, s8 *, 0xA6) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    return arg0;
}
void TOSwitchItem__vt19(Self_80177CF4 *self) {
    Pkt_80177CF4 pkt;
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.object = obj_getField1c(self);
    pkt.zero = 0;
    pkt.switchId = self->switchId;
    pkt.area = TObjPlayer__sub_800196EC();
    pkt.flags = self->on != 0;
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

}
