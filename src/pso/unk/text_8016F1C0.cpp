#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_8016F558 { u8 code, words; u16 object, sub, idx; };

struct Self_8016F558 { u8 pad[0x1C]; u16 id; u8 pad1e[0x37E - 0x1E]; u16 sub; };

extern "C" {
void TOMineTrap__sub_8017141C(void *);
void send_and_handle_60__10TOMineTrapFPv(void *);
void TOMineTrap__sub_8016F558(Self_8016F558 *self, u16 idx);
}

extern "C" {

s32 TOMineTrap__vt10(void);
u16 get_trap_type__10TOMineTrapFPv();
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);

struct VObj8016F3C4Base { char pad[0x18]; };
struct VObj8016F3C4 : VObj8016F3C4Base { virtual s32 m0(); virtual s32 m1(); virtual s32 m2(); virtual s32 m3(); virtual s32 m4(); virtual s32 m5(); virtual s32 m6(); virtual s32 m7(); virtual s32 m8(); virtual s32 m9(); virtual s32 m10(); virtual s32 m11(); };

s32 TOMineTrap__vt10(void) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) get_trap_type__10TOMineTrapFPv());
    if (temp_r3 != NULL) {
        var_r31 = ((VObj8016F3C4 *)temp_r3)->m10();
    }
    return var_r31;
}
void TOMineTrap__sub_8016F558(Self_8016F558 *self, u16 idx) {
    if (idx < 3) {
        Pkt_8016F558 pkt;
        TOMineTrap__sub_8017141C(&pkt);
        pkt.object = self->id;
        pkt.sub = self->sub;
        pkt.idx = idx;
        send_and_handle_60__10TOMineTrapFPv(&pkt);
    }
}

}
