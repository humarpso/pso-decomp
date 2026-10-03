#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
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

struct RecoveredGlobal_8019118C_lbl_804B7BD8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019118C_lbl_804B7C1C {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct Npc_80190F3C { u8 pad0[0x18]; void *f18; u8 f1C[0xC]; s32 f28; s32 f2C; s16 f30; s16 pad32; s32 f34; s32 f38; };

struct Base_801910F4 { u8 pad0[0x18]; };

struct Ctrl_801910F4 : Base_801910F4 { virtual void v0(int); };

struct Obj_801910F4 { u8 pad0[0x18]; void *f18; u8 pad1C[0x90]; u16 fAC; };

struct Npc_80190F3C;
struct Ctrl_801910F4;
struct Npc_80190FDC { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x1C]; s32 f60; u8 pad64[4]; f32 f68; u8 pad6C[0x1C]; s32 f88; s32 f8C; u8 pad90[0x1C]; u16 fAC; u8 padAE[2]; s32 fB0; s32 fB4; };

struct Ply_80190FDC { u8 pad0[0x38]; f32 pos[3]; };

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *);
extern RecoveredGlobal_8019118C_lbl_804B7BD8 lbl_804B7BD8;
extern RecoveredGlobal_8019118C_lbl_804B7C1C lbl_804B7C1C;
u8 *TLobby__sub_8019118C(u8 *arg0, M2C_UNK arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
void request_file_read__6TLobbyFiiPvPv(void *, s32, void *, int);
void ensure_rock_singleton__10TNpcPlayerFv();
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 lbl_80445910[];
extern M2C_UNK lbl_804B7C04[];
extern s32 lbl_805D5860;
Npc_80190F3C *TNpcPlayer__sub_80190F3C(Npc_80190F3C *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6);
void unregister_object_by_id(void *);
void free_collision_body_parts(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
Ctrl_801910F4 *get_player_by_client_id(u32);
M2C_UNK __dl__7TObjectFPv(void *);
extern RecoveredGlobal_8019118C_lbl_804B7C1C lbl_804B7C1C;
Obj_801910F4 *TLobby__sub_801910F4(Obj_801910F4 *arg0, s16 arg1);
int queue_destruction__7TObjectFv(void*);
s32 is_inactive__10TObjPlayerFPv(void *);
f32 horizontal_distance_squared(void *, void *);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, s32);
void set_indexed_flags(void *, s32, s32);
Npc_80190F3C *TNpcPlayer__sub_80190F3C(Npc_80190F3C *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6);
Ctrl_801910F4 *get_player_by_client_id(u32);
void *__nw__7TObjectFUl(int);
extern int lbl_805D3360;
extern s32 lbl_805D53A0;
extern void *tl_07;
void TLobby__sub_80190FDC(Npc_80190FDC *arg0);
}

extern "C" {

void TLobby__sub_80190FD0(int a0);
void TLobby__sub_80190FD8(void);
u8 *destroy_and_materialize_player__10TNpcPlayerFPvs(u8 *arg0, s16 arg1);
void queue_destruction_if_dead__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_80152674(s32);
M2C_UNK send_6x24_teleport_player(u16, void *, s32);
u8 *create_player_object(u16, M2C_UNK, s32);
M2C_UNK queue_player_injured_pose();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK fn_8019127C(void *);
int queue_destruction__7TObjectFv(void*);

void queue_destruction_if_dead__10TNpcPlayerFPv(void* p) { if (*(int*)((char*)p + 0x2c) == 1) { queue_destruction__7TObjectFv(p); } }

extern M2C_UNK lbl_804B7C04[];

u8 *destroy_and_materialize_player__10TNpcPlayerFPvs(u8 *arg0, s16 arg1) {
    u8 *temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B7C04;
        temp_r3 = create_player_object(M2C_FIELD(arg0, u16 *, 0x30), 6, TNpcPlayer__sub_80152674(M2C_FIELD(arg0, s32 *, 0x34)));
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s16 *, 0x324) = 6;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x38) == 1) {
                queue_player_injured_pose();
                fn_8019127C(temp_r3);
            }
            send_6x24_teleport_player(M2C_FIELD(arg0, u16 *, 0x30), arg0 + 0x1C, M2C_FIELD(arg0, s32 *, 0x28));
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D3360;

Npc_80190F3C *TNpcPlayer__sub_80190F3C(Npc_80190F3C *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    __ct__7TObjectFP7TObject(arg0, arg6);
    arg0->f18 = ((u8 *)&lbl_804B7C04);
    VecCopy__FP3VecPC3Vec(arg0->f1C, arg1);
    arg0->f28 = arg2;
    arg0->f30 = arg3;
    arg0->f34 = arg4;
    arg0->f2C = 0;
    arg0->f38 = arg5;
    ensure_rock_singleton__10TNpcPlayerFv();
    request_file_read__6TLobbyFiiPvPv(lbl_80445910, lbl_805D5860, &arg0->f2C, 0);
    return arg0;
}

void TLobby__sub_80190FD0(int a0) { lbl_805D3360 = a0; }

void TLobby__sub_80190FD8(void) {  }
typedef char RecoveredGlobal_8019118C_lbl_804B7BD8_size[sizeof(RecoveredGlobal_8019118C_lbl_804B7BD8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019118C_lbl_804B7C1C_size[sizeof(RecoveredGlobal_8019118C_lbl_804B7C1C) == 0x3C ? 1 : -1];

void TLobby__sub_80190FDC(Npc_80190FDC *arg0) {
    Ply_80190FDC *p;
    void *o;
    if (lbl_805D3360 == arg0->f8C) {
        queue_destruction__7TObjectFv((void*)(arg0));
        return;
    }
    p = (Ply_80190FDC *)get_player_by_client_id(lbl_805D53A0);
    if (p == 0) {
        return;
    }
    if (horizontal_distance_squared(arg0->pos, p->pos) <= arg0->f68 * arg0->f68) {
        set_indexed_flags(arg0, 0, 1);
        if (arg0->fB4 == 0) {
            arg0->fB4 = 1;
            o = __nw__7TObjectFUl(0x3C);
            if (o != 0) {
                TNpcPlayer__sub_80190F3C((Npc_80190F3C *)o, arg0->pos, arg0->f60, arg0->fAC, arg0->fB0, arg0->f88, tl_07);
            }
        }
    } else {
        p = (Ply_80190FDC *)get_player_by_client_id(arg0->fAC);
        if (p != 0 && arg0->fB4 == 1 && is_inactive__10TObjPlayerFPv(p) == 1) {
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
            arg0->fB4 = 0;
            p = (Ply_80190FDC *)get_player_by_client_id(arg0->fAC);
            if (p != 0) {
                queue_destruction__7TObjectFv((void*)(p));
            }
        }
    }
}

Obj_801910F4 *TLobby__sub_801910F4(Obj_801910F4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->f18 = ((u8 *)&lbl_804B7C1C);
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        u32 id = arg0->fAC;
        if (id != 0xFFFF) {
            Ctrl_801910F4 *c = get_player_by_client_id(id);
            if (c != NULL && c != NULL) {
                c->v0(1);
            }
        }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TLobby__sub_8019118C(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TObjPlayer__sub_801569F4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804B7C1C.value;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s16 *, 0xAC) = 3;
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B7BD8.value), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

}
