#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_8016F558 { u8 code, words; u16 object, sub, idx; };

struct Self_8016F558 { u8 pad[0x1C]; u16 id; u8 pad1e[0x37E - 0x1E]; u16 sub; };

struct Obj_8016F5B4 { u8 pad0[0x88]; s32 cnt; u8 pad1[0x29A]; s16 state; };

struct Obj_8016F64C { u8 pad0[0x2FC]; u8 sub[0x58]; s32 state; };

extern "C" {
void TOMineTrap__sub_8017141C(void *);
void send_and_handle_60__10TOMineTrapFPv(void *);
void TOMineTrap__sub_8016F558(Self_8016F558 *self, u16 idx);
s32 check_value_equals__13TQuestColCtrlFPvi(u32, int);
void TOMineTrap__sub_8016F558(Self_8016F558 *self, u16 idx);
void set_state__10TOMineTrapFPv(void *);
void TOMineTrap__sub_8016F87C(void *);
extern s32 TOMineTrap__data_805D3080;
extern const f32 lbl_805DB85C;
f32 TOMineTrap__vt20(Obj_8016F5B4 *arg0, u32 arg1);
void set_position_xy__10TObjPlayerFPvff(u32, f32, f32);
u32 TObjEneDellBiter__sub_80087350(void *, int);
extern const f32 lbl_805DB864;
void TOMineTrap__vt80(Obj_8016F64C *arg0);
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
f32 TOMineTrap__vt20(Obj_8016F5B4 *arg0, u32 arg1) {
    switch (arg0->state) {
    case 0:
    case 1:
    case 2:
        if ((arg1 != 0U) && (check_value_equals__13TQuestColCtrlFPvi(arg1, TOMineTrap__data_805D3080) != 0)) {
            TOMineTrap__sub_8016F87C(arg0);
            if (arg0->cnt > 0xF) {
                arg0->cnt = 0xF;
            }
            break;
        }
    case 3:
        set_state__10TOMineTrapFPv(arg0);
        TOMineTrap__sub_8016F558((Self_8016F558 *)(arg0), (u16)(2));
        break;
    }
    return lbl_805DB85C;
}
void TOMineTrap__vt80(Obj_8016F64C *arg0) {
    u32 r;
    switch (arg0->state) {
    default:
        r = TObjEneDellBiter__sub_80087350(arg0->sub, 0x45);
        if (r != 0U) {
            set_position_xy__10TObjPlayerFPvff(r, lbl_805DB864, lbl_805DB864);
        }
        break;
    case 15:
    case 16:
    case 17:
    case 18:
        TObjEneDellBiter__sub_80087350(arg0->sub, 0x8E);
        TObjEneDellBiter__sub_80087350(arg0->sub, 0x8E);
        break;
    case 6:
    case 7:
        TObjEneDellBiter__sub_80087350(arg0->sub, 0x8D);
        TObjEneDellBiter__sub_80087350(arg0->sub, 0x8D);
        break;
    }
}

}
