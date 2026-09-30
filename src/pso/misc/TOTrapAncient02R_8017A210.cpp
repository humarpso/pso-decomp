#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8017A8B0 {
    u8 pad[0x38];
    f32 pos[3];
    u8 pad44[0x2A8 - 0x44];
    u8 *target;
    u8 pad2ac[0x326 - 0x2AC];
    s16 state;
    u8 pad328[0x334 - 0x328];
    f32 range;
    u8 pad338[0x33C - 0x338];
    u16 idx;
    u8 pad33e[0x364 - 0x33E];
    s32 switchId;
};

struct Vec_8017A988 { f32 x, y, z; };

struct VBase_8017A988 { u8 pad[0x18]; };

struct Obj_8017A988 : VBase_8017A988 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s16 *, s32);
    u16 id;
    u8 pad1e[0x38 - 0x1E];
    Vec_8017A988 pos;
    u8 pad44[0x80 - 0x44];
    u32 x80;
    u8 pad84[0x326 - 0x84];
    s16 state;
    u8 pad328[0x344 - 0x328];
    f32 x344;
    f32 x348;
    u8 pad34c[0x368 - 0x34C];
    s32 timer;
};

extern "C" {
u16 TObjPlayer__sub_800115C4(void *, int, f32);
void calc_attach_pos__10TObjPlayerFPv(void *);
f32 TObjPlayer__sub_80141CF8(void *, void *);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, int, u32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
u8 TODoorAncient08__sub_80229220(u16);
void TOTrapAncient02R__vt77(Obj_8017A8B0 *self);
s32 TObjEneDellBiter__sub_80087350(void *, int);
s32 TObjPlayer__sub_80154954(void *, void *);
s32 TLobby__sub_80156A80(void *, void *, int);
extern const f32 lbl_805DBA80;
f32 TOTrapAncient02R__vt20(Obj_8017A988 *self);
}

extern "C" {

void calc_trap_count__16TOTrapAncient02RFPv(void *arg0);

extern M2C_UNK lbl_80442F30;
extern s32 lbl_805D5550;
extern const f32 lbl_805DBA78;
extern const f32 lbl_805DBA7C;

void calc_trap_count__16TOTrapAncient02RFPv(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x360) = (s32) (M2C_FIELD(arg0, f32 *, 0x70) + ((lbl_805DBA7C * (f32) lbl_805D5550) + lbl_805DBA78));
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x360);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x360) = 0;
        return;
    }
    if ((s32) lbl_805D5550 == 3) {
        if (temp_r4 > 0x1D) {
            M2C_FIELD(arg0, s32 *, 0x360) = 0x1D;
        }
    } else if (temp_r4 > 0xE) {
        M2C_FIELD(arg0, s32 *, 0x360) = 0xE;
    }
}
void TOTrapAncient02R__vt77(Obj_8017A8B0 *self) {
    clear_player_status_flag__10TObjPlayerFPviUi(self, 0, 1);
    calc_attach_pos__10TObjPlayerFPv(self);
    if (self->switchId == -1 || TODoorAncient08__sub_80229220(self->switchId) == 1) {
        self->idx = TObjPlayer__sub_800115C4(self, 0, self->range);
        if (self->idx != 0xFFFF) {
            self->target = (u8 *)TPlayerBattleCtrl4P__sub_801BA74C(self->idx);
            if (self->target != NULL) {
                if (TObjPlayer__sub_80141CF8(self->target + 0x38, self->pos) < self->range * self->range) {
                    self->state = 2;
                }
            } else {
                self->idx = 0xFFFF;
                self->target = NULL;
            }
        } else {
            self->target = NULL;
        }
    }
}
f32 TOTrapAncient02R__vt20(Obj_8017A988 *self) {
    s16 msg;
    if (self->id >= 0x4000 && self->x80 != 0) {
        Vec_8017A988 v = self->pos;
        v.y += self->x344 + self->x348;
        TObjEneDellBiter__sub_80087350(&v, 0x1D0);
        TObjEneDellBiter__sub_80087350(&v, 1);
        if (--self->timer <= 0) {
            self->timer = 0;
            if (TLobby__sub_80156A80(self, &msg, 1) != 0) {
                self->state = 4;
                msg = self->state;
                TObjPlayer__sub_80154954(self, &msg);
                TLobby__sub_80156A80(self, &msg, 0);
                self->m4(&msg, 1);
            }
        }
    }
    return lbl_805DBA80;
}

}
