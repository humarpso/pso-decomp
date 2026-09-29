#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct Item_8033EC40 { u8 b[0x24]; };

struct O_8033EC40 { u8 pad[0x1C]; Item_8033EC40 *items; s32 n; };

extern "C" {
s32 TCameraCtrl__sub_800689F4();
M2C_UNK TCameraCtrl__sub_80082FCC(void *, void *);
f64 TObjPlayer__sub_80083A50();
M2C_UNK set_tex_coord_gen2(int, int, int, int);
M2C_UNK PSMTXConcat(void *, void *, void *);
M2C_UNK TObjPlayer__sub_80376B70(void *, f32, f32, f32, f32, f32, f32);
M2C_UNK GXSetTevOp(int, int);
M2C_UNK GXSetTevOrder(int, int, int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
int set_global_effect_state__10TObjPlayerFi(void*);
int TObjPlayer__sub_803DC83C(void*);
int TObjPlayer__sub_803DC850(void*);
M2C_UNK TObjPlayer__sub_803E1D1C(int);
M2C_UNK TObjPlayer__sub_803E1D54(int);
extern const f64 lbl_804783B0;
extern u32 lbl_805D4DF0;
extern s32 lbl_805D7774;
extern const f32 lbl_805DFAC8;
extern const f32 lbl_805DFACC;
extern const f32 lbl_805DFAD0;
void TObjPlayer__sub_8033E988(void);
void TObjPlayer__sub_8033EAF0(s32 arg0, s32 arg1);
void queue_destruction__7TObjectFv(void *);
void TLobby__sub_8033EE38(void *);
void TLobby__sub_8033EC40(O_8033EC40 *arg0);
}

extern "C" {

void free_indexed_entry__10TObjPlayerFPv(void *arg0, s32 _w1);
void init_particle_effect__10TObjPlayerFv(void);
void reset_effects__10TObjPlayerFv(void);
int TObjPlayer__sub_803078B0(void);
int TObjPlayer__sub_803DC83C(void*);
int TObjPlayer__sub_803DC850(void*);
int TObjPlayer__sub_803E1D90(int, int, int, int);
int set_global_effect_state__10TObjPlayerFi(void*);
int set_global_param__8TObjFishFi(void);

void init_particle_effect__10TObjPlayerFv(void) { TObjPlayer__sub_803078B0(); set_global_param__8TObjFishFi(); TObjPlayer__sub_803E1D90(0, 0, 0, 2); }

    extern int some_id_805c6f74;
void reset_effects__10TObjPlayerFv(void) { TObjPlayer__sub_803DC850((void*)0); TObjPlayer__sub_803DC83C((void*)0); set_global_effect_state__10TObjPlayerFi((void*)0); some_id_805c6f74 = (some_id_805c6f74 & 0xfff7ffff); }

void TObjPlayer__sub_8033E988(void) {
    u8 sp10[0x30];
    f32 spC;
    f32 sp8;
    f32 temp_f31;
    if ((u32) lbl_805D4DF0 != 0U) {
        TObjPlayer__sub_803D9B2C();
        TCameraCtrl__sub_80082FCC((void *) (&spC), (void *) (&sp8));
        temp_f31 = (f32) (lbl_804783B0 * TObjPlayer__sub_80083A50());
        if (TCameraCtrl__sub_800689F4() != 0) {
            TObjPlayer__sub_80376B70((void *) (&sp10), (f32) (temp_f31), (f32) (lbl_805DFAC8), (f32) (lbl_805DFACC), (f32) (lbl_805DFAD0), (f32) (lbl_805DFACC - spC), (f32) (lbl_805DFACC - sp8));
        } else {
            TObjPlayer__sub_80376B70((void *) (&sp10), (f32) (temp_f31), (f32) (lbl_805DFAC8), (f32) (lbl_805DFACC), (f32) (lbl_805DFAD0), (f32) (lbl_805DFACC), (f32) (lbl_805DFACC));
        }
        PSMTXConcat((void *) (&sp10), (void *) (lbl_805D7774), (void *) (lbl_805D7774));
        TObjPlayer__sub_803E1D54((int) (2));
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803E1D1C((int) (2));
        GXSetTevOrder((int) (1), (int) (1), (int) (2), (int) (4));
        GXSetTevOp((int) (1), (int) (1));
        set_tex_coord_gen2((int) (1), (int) (0), (int) (0), (int) (0x24));
        (*(s32 *)&some_id_805c6f74) |= 0x80000;
        TObjPlayer__sub_803DC850((void*)((int) (1)));
        TObjPlayer__sub_803DC83C((void*)((int) (1)));
        set_global_effect_state__10TObjPlayerFi((void*)((int) (1)));
    }
}

void free_indexed_entry__10TObjPlayerFPv(void *arg0, s32 _w1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r0 < 0x10) {
        TObjPlayer__sub_8033EAF0((s32)(M2C_FIELD(arg0, s32 *, 0x1C) + (temp_r0 * 0x24)), (s32)(_w1));
    }
}
void TObjPlayer__sub_8033EAF0(s32 arg0, s32 arg1) {
    *(M2CCopy_C *)(arg0) = *(const M2CCopy_C *)(arg1);
    *(M2CCopy_C *)(arg0 + 0xC) = *(const M2CCopy_C *)(arg1 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, u16 *, 0x20) = (u16) M2C_FIELD(arg1, u16 *, 0x20);
    M2C_FIELD(arg0, u8 *, 0x22) = (u8) M2C_FIELD(arg1, u8 *, 0x22);
    M2C_FIELD(arg0, u8 *, 0x23) = (u8) M2C_FIELD(arg1, u8 *, 0x23);
}
void TLobby__sub_8033EC40(O_8033EC40 *arg0) {
    s32 i;
    if (arg0->items == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    for (i = 0; i < arg0->n; i++) {
        TLobby__sub_8033EE38(&arg0->items[i]);
    }
    arg0->n = 0;
}

}
