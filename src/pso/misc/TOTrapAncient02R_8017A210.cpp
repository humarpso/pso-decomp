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
u16 find_nearest_visible_player(void *, int, f32);
void calc_attach_pos__10TObjPlayerFPv(void *);
f32 horizontal_distance_squared(void *, void *);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, int, u32);
s32 get_player_by_client_id(u32);
u8 is_current_floor_switch_set(u16);
void TOTrapAncient02R__vt77(Obj_8017A8B0 *self);
s32 spawn_particle_effect(void *, int);
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
    if (self->switchId == -1 || is_current_floor_switch_set(self->switchId) == 1) {
        self->idx = find_nearest_visible_player(self, 0, self->range);
        if (self->idx != 0xFFFF) {
            self->target = (u8 *)get_player_by_client_id(self->idx);
            if (self->target != NULL) {
                if (horizontal_distance_squared(self->target + 0x38, self->pos) < self->range * self->range) {
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
        spawn_particle_effect(&v, 0x1D0);
        spawn_particle_effect(&v, 1);
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

struct VBase_8017AB30 { char pad[0x18]; };
struct VObj_8017AB30 : VBase_8017AB30 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

extern "C" {

void *create__16TOTrapAncient02RFPv(void *arg0);
void *__dt__16TOTrapAncient02RFv(void *arg0, s16 arg1);
void *TOTrapAncient02R__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__15TOTrapAncient02Fv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TOTrapAncient02RFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x36C);
    if (o != NULL) {
        o = TOTrapAncient02R__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__16TOTrapAncient02R[];

void *__dt__16TOTrapAncient02RFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOTrapAncient02R;
        __dt__15TOTrapAncient02Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

M2C_UNK init_position_vectors__10TObjPlayerFi(void *);
M2C_UNK TOTrapAncient02__ct(void *, void *);
M2C_UNK fn_8017B908(void *);
M2C_UNK fn_8017B950(void *);
M2C_UNK fn_8017B984(void *);
extern s32 lbl_805D31B8;
extern void *TOTrapAncient02__data_805D5AD8;
extern const f32 lbl_805DBA9C;
extern const f32 lbl_805DBAA0;

#pragma push
#pragma fp_contract on
void *TOTrapAncient02R__ct(void *arg0, void *arg1, void *arg2) {
    TOTrapAncient02__ct(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOTrapAncient02R;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D31B8;
    ((VObj_8017AB30 *)arg0)->m5(arg2);
    init_position_vectors__10TObjPlayerFi(arg0);
    calc_attach_pos__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TOTrapAncient02__data_805D5AD8, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TOTrapAncient02__data_805D5AD8, void **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, f32 *, 0x334) = lbl_805DBAA0 * M2C_FIELD(arg0, f32 *, 0x68) + lbl_805DBA9C;
    M2C_FIELD(arg0, f32 *, 0x338) = M2C_FIELD(arg0, f32 *, 0x334);
    M2C_FIELD(arg0, s32 *, 0x350) = (s32) (lbl_805DBA9C + (f32) M2C_FIELD(arg0, s32 *, 0x84));
    if (M2C_FIELD(arg0, s32 *, 0x350) < 0) {
        M2C_FIELD(arg0, s32 *, 0x350) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x354) = M2C_FIELD(arg0, s32 *, 0x350);
    fn_8017B984(arg0);
    fn_8017B950(arg0);
    calc_trap_count__16TOTrapAncient02RFPv(arg0);
    fn_8017B908(arg0);
    M2C_FIELD(arg0, u16 *, 0x33C) = 0xFFFF;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    M2C_FIELD(arg0, f32 *, 0x348) = lbl_805DBA80;
    M2C_FIELD(arg0, f32 *, 0x344) = lbl_805DBA80;
    M2C_FIELD(arg0, s32 *, 0x34C) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x64) > 0) {
        M2C_FIELD(arg0, s32 *, 0x358) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x358) = 0;
    }
    return arg0;
}
#pragma pop

}
