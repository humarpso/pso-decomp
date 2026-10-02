#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BaseM_80234C90_80233B38 { char pad[0x24]; };
struct VM_80234C90_80233B38 : BaseM_80234C90_80233B38 { virtual void m0(int); };

struct Stack_802340E4 {
    M2C_UNK sp8;
    u16 spC;
    s16 spE;
    s32 sp10;
    M2C_UNK sp14;
    u8 pad_18[0x8];
    s32 sp20;
};

struct RecoveredGlobal_80233B9C_lbl_804CC990 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80233B9C_lbl_804CC990_size[sizeof(RecoveredGlobal_80233B9C_lbl_804CC990) == 0x18 ? 1 : -1];

struct RecoveredGlobal_80233D18_lbl_804CC9A8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80233D18_lbl_804CC9D4 {
    M2C_UNK value;
    u8 remaining[0x34];
};

#include "pso/effect/TechniqueChargeEmitter.h"

struct O_802340A0 { u16 h0; u16 h2; s32 w4; f32 f8; f32 fc; f32 f10; s32 w14; };

struct Vec_80233E78 { f32 x, y, z; };

struct Player_80233E78 { u8 pad[0x838]; Vec_80233E78 pipe_pos; s32 pipe_heading; u8 arrival[4]; };

struct Vec_8023402C { f32 x, y, z; };

struct Rec_8023402C { u16 owner; s16 floor; s32 section; Vec_8023402C pos; s32 heading; };

struct Vec_802347B4 { f32 x, y, z; };

struct Pipe_802347B4 {
    u8 pad[0x1c];
    u8 *player;
    u8 pad20[0xd0];
    void *collider;
    s16 floor;
    u16 traveller;
    void *visual;
    Vec_802347B4 pos;
    s32 phase;
};

struct Obj_8023448C {
    u8 pad0[0x18];
    void *vt;
    u32 kids[3];
    u32 f28;
};

struct Pkt_802341B0 { u8 hdr[4]; Rec_8023402C rec; };

struct Vec_80234D50 { f32 x, y, z; };

struct Owner_80234D50 {
    u8 pad0[0x38];
    Vec_80234D50 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x838 - 0x64];
    Vec_80234D50 pipe_pos;
};

struct Luker_80234D50 {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    Owner_80234D50 *owner;
    u8 pad20[0xB4 - 0x20];
    u16 owner_id;
    u8 padb6[0xEC - 0xB6];
    void *fx;
    s32 fF0;
    s16 fF4;
    u16 fF6;
    s32 fF8;
    Vec_80234D50 pos;
    s32 f108;
    s32 f10C;
};

extern "C" {
void TTecLuker__sub_80234F7C(void* p);
void TTecLuker__sub_80234F7C(void* p);
s32 TTecLuker__sub_80234F88(void* p);
s32 TTecLuker__sub_80234F88(void* p);
int TObjPlayer__sub_80019664(void);
void TTecLuker__sub_80234F90(void* p);
s32 TLobby__send_and_handle_60(s32);
int TObjPlayer__sub_80019664(void);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TTecLuker__sub_80234F90(void* p);
void TTecLuker__sub_80235028(void* p);
void TTecLuker__sub_80235028(void* p);
void TTecLuker__sub_8023503C(void* p);
void TTecLuker__sub_8023503C(void* p);
void TTecLuker__sub_80235048(void* p);
void TTecLuker__sub_80235048(void* p);
int TTecLuker__sub_80235054(void* p);
int TTecLuker__sub_80235054(void* p);
void read_be16_field2__10TObjPlayerFPv(void *);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void TTecLuker__sub_80234FC4(void *arg0);
int fn_80235078(void *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void TTecLuker__sub_80233E3C(u16 arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TTecLuker__sub_80234148(u8 *arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TTecLuker__sub_80234F90(void* p);
void TTecLuker__sub_80235028(void* p);
void TTecLuker__sub_802340E4(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804CC990[];
u8 *TTecLuker__sub_80233B9C(u8 *arg0, s32 arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_setFlags30(void *, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *, void *);
void TTecLuker__sub_80234F68(void* p);
extern RecoveredGlobal_80233D18_lbl_804CC9A8 lbl_804CC9A8;
extern M2C_UNK lbl_804CC9D4[];
u8 *TTecLuker__sub_80233D18(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
bool TTecLuker__sub_8023401C(u8 *arg0);
extern u32 lbl_804CC988[];
void* TObjEneDellBiter__sub_80087350(float*,u32);
int check_flag_0x80__10TObjPlayerFPv(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);
void TTecLuker__updateRecoveryTechniqueCharge(TechniqueChargeEmitter* state);
extern u8 TTecLuker__data_805D37E0[4];
void TTecLuker__sub_80234F28(void);
extern u8 TTecLuker__data_805D37E0[4];
void TTecLuker__sub_80234F08(void);
extern const f32 lbl_805DC85C;
void TTecLuker__sub_802340A0(O_802340A0 *o);
extern u8 TTecLuker__data_805D37E0[4];
void TTecLuker__sub_80234F48(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
u32 TObjPlayer__sub_801BFFA0(void *p);
void set_state__9TTecLukerFPvi(void *p, s32 v);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern s32 lbl_8044D798[];
extern Vec_80233E78 lbl_8044D738[];
extern Vec_80233E78 lbl_8044D768[];
Vec_80233E78 *TTecLuker__sub_80233E78(u16 slot, s32 *heading);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
s16 get_field_2__9TTecLukerFPv(void* p);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TObjPlayer__sub_800196EC(void);
void TTecLuker__sub_80233F8C(void);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
extern const f32 lbl_805DC85C;
extern const f32 lbl_805DC860;
s32 TTecLuker__sub_8023402C(Rec_8023402C *r, s16 floor, Vec_8023402C *p, u16 unused);
void *__nw__7TObjectFUl(int);
s32 obj_getField1c(void *);
s32 get_stat_by_key_state__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_800196EC(void);
void *TTecLuker__sub_8023453C(void *self, Vec_802347B4 *pos, u16 id, s32 res);
u8 *TTecLuker__sub_80233D18(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void TBoss4DarkFalz__sub_8004C220(void *c, Vec_802347B4 *pos);
void TTecLuker__sub_80234148(u8 *arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4);
void TTecLuker__sub_802340E4(u8 *arg0);
extern s32 tl_07;
extern s32 tl_05;
void TTecLuker__sub_802347B4(Pipe_802347B4 *s);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(void *);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
extern u8 lbl_804CCA0C[];
Obj_8023448C *TTecLuker__sub_8023448C(Obj_8023448C *arg0, s16 arg1);
void TTecLuker__sub_80234FC4(void *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void TTecLuker__sub_80234148(u8 *arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4);
s32 TTecLuker__sub_8023402C(Rec_8023402C *r, s16 floor, Vec_8023402C *p, u16 unused);
s32 is_split_screen();
u8 *TPhotonMylla__sub_80154CB4(u16);
s32 get_field_3e4__10TObjPlayerFPv(u32);
extern s32 lbl_805D53A0;
void handle_6x68_set_telepipe_state(Pkt_802341B0 *pkt);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_getField1c(void *);
s32 is_split_screen();
s32 TObjPlayer__sub_800196EC(void);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
M2C_UNK TTecLuker__sub_801D3728(void *, void *, void *);
void *init_array__9TItemListFPv(void *);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK fn_8022C2A8(void *, void *, void *);
M2C_UNK TCameraCtrl__sub_803D8934(int, void *, void *);
M2C_UNK rotate_matrix_y(int, s32);
M2C_UNK TObjPlayer__sub_803D97F0(void *);
M2C_UNK TCameraCtrl__sub_803D9858(int);
extern Vec_80234D50 lbl_8044D72C;
extern void* __vt__9TTecLuker[];
extern u8 lbl_8058D490[];
extern s32 lbl_805D37E4;
extern s32 lbl_805D53A0;
extern const f32 lbl_805DC878;
void *TTecLuker__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
}

extern "C" {

void TTecLuker__sub_80233C18(void* p);
void TTecLuker__sub_80234F68(void* p);
void *__dt__9TTecLukerFPvs(void *arg0, s16 arg1);
void *__dt__9TTecLukerFv(void *arg0, s16 arg1);
void apply_all_players__9TTecLukerFv(void);
void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_for_player__9TTecLukerFii(int arg0, s32 arg1);
void *destroy__9TTecLukerFPvs(void *arg0, s16 arg1);
s16 get_field_2__9TTecLukerFPv(void* p);
void init_fields__9TTecLukerFPvs(void *arg0, s16 arg1);
void update_player_target__9TTecLukerFPv(u8 *arg0);
s32 TLobby__send_and_handle_60(s32);
void TLobby__sub_80226294(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
s32 TObjLuker__sub_801A0F34(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK destroy_technique_base__9TTecLukerFPvs(void *, M2C_UNK);
s32 is_split_screen();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804CC990[];

void TTecLuker__updateRecoveryTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<2;++i)TObjEneDellBiter__sub_80087350(state->position,lbl_804CC988[i]);
    }
    if(!check_flag_0x80__10TObjPlayerFPv(state->actor))queue_destruction__7TObjectFv((void *)(state));
    else if(state->age>=180)queue_destruction__7TObjectFv((void *)(state));
}

void *destroy__9TTecLukerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC990;
        TLobby__sub_80226294(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

u8 *TTecLuker__sub_80233B9C(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80233B9C_lbl_804CC990 *)&lbl_804CC990).value;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x20)), (void *)((int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC)));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = TBoss3Volopt__sub_8022675C((int) (0x4002BC20), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

void TTecLuker__sub_80233C18(void* p) { *(s32*)((char*)p + 0xb0) = 1; }

extern const f32 lbl_805DC858;

void update_player_target__9TTecLukerFPv(u8 *arg0) {
    if (is_split_screen() != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
            return;
        }
        if (TObjLuker__sub_801A0F34(arg0 + 0x38, 0, lbl_805DC858) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
    } else {
        TObjPlayer__sub_801B4A18(arg0, -1);
    }
}

extern M2C_UNK lbl_804CC9D4[];

void *__dt__9TTecLukerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC9D4;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80233D18_lbl_804CC9A8_size[sizeof(RecoveredGlobal_80233D18_lbl_804CC9A8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80233D18_lbl_804CC9D4_size[sizeof(RecoveredGlobal_80233D18_lbl_804CC9D4) == 0x38 ? 1 : -1];
u8 *TTecLuker__sub_80233D18(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    TObjPlayer__sub_801569F4((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80233D18_lbl_804CC9D4 *)&lbl_804CC9D4).value;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg1));
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804CC9A8.value), (int) (1));
    obj_setFlags30((void *) (arg0), (int) (0x40000000));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    TTecLuker__sub_80234F68((void*)((void *) (arg0 + 0x98)));
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = arg3;
    return arg0;
}

void apply_all_players__9TTecLukerFv(void) {
    s32 var_r31;
    u32 temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31));
        if (temp_r3 != 0U) {
            TTecLuker__sub_802340A0((O_802340A0 *)(temp_r3 + 0x830));
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

void create_for_player__9TTecLukerFii(int arg0, s32 arg1) {
    u32 r = TPlayerBattleCtrl4P__sub_801BA74C((s32)((u16)arg0));
    if (r != 0U) {
        create__9TTecLukerFPvPvPvPv((void *)(r), (void *)(arg1), (void *)(arg1), (void *)(0xA));
    }
}

void TTecLuker__sub_80233E3C(u16 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)TPlayerBattleCtrl4P__sub_801BA74C((s32)((u32) arg0))));
    if (temp_r3 != NULL) {
        create__9TTecLukerFPvPvPvPv(temp_r3, temp_r3 + 0x38, temp_r3 + 0x2FC, NULL);
    }
}

Vec_80233E78 *TTecLuker__sub_80233E78(u16 slot, s32 *heading) {
    Player_80233E78 *p;
    u16 owner;
    if (slot >= 4) {
        return 0;
    }
    p = (Player_80233E78 *)TPlayerBattleCtrl4P__sub_801BA74C(slot);
    if (p != 0) {
        owner = TObjPlayer__sub_801BFFA0(p->arrival);
        if (owner == 0xffff) {
            return 0;
        }
        set_state__9TTecLukerFPvi(p->arrival, 0xffff);
        if (get_global_state__14TOKeyMachine01Fv() == 0) {
            *heading = lbl_8044D798[slot];
            return &lbl_8044D738[slot];
        }
        if (get_global_state__14TOKeyMachine01Fv() == 0x12) {
            *heading = lbl_8044D798[slot];
            return &lbl_8044D768[slot];
        }
        p = (Player_80233E78 *)TPlayerBattleCtrl4P__sub_801BA74C(owner);
        if (p == 0) {
            return 0;
        }
        *heading = p->pipe_heading;
        return &p->pipe_pos;
    }
    return 0;
}

typedef s32 (*GetField2_80233F8C)(void *);
void TTecLuker__sub_80233F8C(void) {
    s32 area = get_global_state__14TOKeyMachine01Fv();
    s32 i;
    if (area == 15 || area == 0 || area == 18) {
        return;
    }
    for (i = 0; i < 4; i++) {
        u8 *p = (u8 *)TPlayerBattleCtrl4P__sub_801BA74C(i);
        if (p != 0) {
            if (((GetField2_80233F8C)get_field_2__9TTecLukerFPv)(p + 0x830) == TObjPlayer__sub_800196EC()) {
                create__9TTecLukerFPvPvPvPv(p, p + 0x38, p + 0x838, (void *)10);
            }
        }
    }
}

bool TTecLuker__sub_8023401C(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 2) != 0;
}

s32 TTecLuker__sub_8023402C(Rec_8023402C *r, s16 floor, Vec_8023402C *p, u16 unused) {
    Vec_8023402C d;
    if (r->floor == floor) {
        d.x = r->pos.x - p->x;
        d.y = lbl_805DC85C;
        d.z = r->pos.z - p->z;
        if (TBoss6Kakusan__sub_803D8BD8(&d) < lbl_805DC860) {
            return 0;
        }
    }
    return 1;
}

void TTecLuker__sub_802340A0(O_802340A0 *o) {
    o->h0 = 0xffff;
    o->w4 = 0;
    o->h2 = 0;
    o->f8 = lbl_805DC85C;
    o->fc = lbl_805DC85C;
    o->f10 = lbl_805DC85C;
    o->w14 = 0;
}

void init_fields__9TTecLukerFPvs(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void TTecLuker__sub_802340E4(u8 *arg0) {
    Stack_802340E4 stack;
    TTecLuker__sub_80235028((void*)((void *) (&stack.sp8)));
    stack.spC = M2C_FIELD(arg0, u16 *, 0);
    stack.sp10 = M2C_FIELD(arg0, s32 *, 4);
    stack.spE = M2C_FIELD(arg0, s16 *, 2);
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp14), (void *) (arg0 + 8));
    stack.sp20 = M2C_FIELD(arg0, s32 *, 0x14);
    TTecLuker__sub_80234F90((void*)((void *) (&stack.sp8)));
}

void TTecLuker__sub_80234148(u8 *arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4) {
    u8 *temp_r3;
    M2C_FIELD(arg0, u16 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = arg2;
    VecCopy__FP3VecPC3Vec(arg0 + 8, arg3);
    M2C_FIELD(arg0, s32 *, 4) = arg4;
    if (arg1 <= 4U) {
        temp_r3 = (u8 *)(((s32)TPlayerBattleCtrl4P__sub_801BA74C((s32)((u32) arg1))));
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(temp_r3, s32 *, 0x60);
        }
    }
}

void handle_6x68_set_telepipe_state(Pkt_802341B0 *pkt) {
    u8 *player;
    Rec_8023402C *rec;
    u32 other;
    u32 local;
    TTecLuker__sub_80234FC4(pkt);
    if (pkt->rec.owner == 0xffff) {
        return;
    }
    player = TPhotonMylla__sub_80154CB4(pkt->rec.owner);
    if (player == 0) {
        return;
    }
    if (pkt->rec.owner >= 4) {
        return;
    }
    rec = (Rec_8023402C *)(player + 0x830);
    if (TTecLuker__sub_8023402C(rec, pkt->rec.floor, &pkt->rec.pos, pkt->rec.owner) == 0) {
        return;
    }
    TTecLuker__sub_80234148((u8 *)rec, pkt->rec.owner, pkt->rec.floor, (u8 *)&pkt->rec.pos, pkt->rec.section);
    if (is_split_screen() == 0 && pkt->rec.owner == lbl_805D53A0) {
        return;
    }
    other = TPlayerBattleCtrl4P__sub_801BA74C(pkt->rec.owner);
    local = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (other != 0 && local != 0) {
        if (get_field_3e4__10TObjPlayerFPv(other) == get_field_3e4__10TObjPlayerFPv(local)) {
            create__9TTecLukerFPvPvPvPv(player, player + 0x38, player + 0x38, 0);
        }
    }
}

Obj_8023448C *TTecLuker__sub_8023448C(Obj_8023448C *arg0, s16 arg1) {
    s32 i;
    u32 z;
    if (arg0 != NULL) {
        i = 0;
        z = 0;
        arg0->vt = lbl_804CCA0C;
        do {
            if (is_parents_unqueued__9TTecLukerFUi(arg0->kids[i]) != 0) {
                queue_destruction__7TObjectFv((void *)(arg0->kids[i]));
                arg0->kids[i] = z;
            }
            i++;
        } while (i < 3);
        if (arg0->f28 != 0) {
            queue_destruction__7TObjectFv((void *)(arg0->f28));
            arg0->f28 = 0;
        }
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        TTecLuker__ct((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

extern void* __vt__9TTecLuker[];

typedef void (*Write_802347B4)(u8 *, s32, s16, u8 *, s32);
void TTecLuker__sub_802347B4(Pipe_802347B4 *s) {
    u16 id = obj_getField1c(s->player);
    void *v = __nw__7TObjectFUl(0x44);
    if (v != 0) {
        v = TTecLuker__sub_8023453C(v, &s->pos, id, tl_07);
    }
    s->visual = v;
    s->phase = 1;
    if (s->collider != 0) {
        TBoss4DarkFalz__sub_8004C220(s->collider, &s->pos);
    } else {
        u8 *c = (u8 *)__nw__7TObjectFUl(0xb4);
        if (c != 0) {
            c = TTecLuker__sub_80233D18(c, (s32)&s->pos, tl_05, 0);
        }
        s->collider = c;
    }
    if (s->traveller == (u16)obj_getField1c(s->player)) {
        s16 h;
        s->floor = TObjPlayer__sub_800196EC();
        h = get_stat_by_key_state__10TObjPlayerFPv(s->player);
        ((Write_802347B4)TTecLuker__sub_80234148)(s->player + 0x830, obj_getField1c(s->player), s->floor, (u8 *)&s->pos, h);
        TTecLuker__sub_802340E4(s->player + 0x830);
    }
}

void *__dt__9TTecLukerFv(void *arg0, s16 arg1) {
    s32 temp_cr0_eq;
    void *temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__9TTecLuker;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8));
            M2C_FIELD(arg0, u32 *, 0xF8) = 0U;
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0xEC);
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                ((struct VM_80234C90_80233B38 *) temp_r3)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0xEC) = NULL;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF0));
            M2C_FIELD(arg0, u32 *, 0xF0) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0xF0) = 0U;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

#define L ((Luker_80234D50 *)arg0)
void *TTecLuker__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    Owner_80234D50 *o;
    void *p;
    fn_8022C2A8(arg0, arg1, arg2);
    L->vt = __vt__9TTecLuker;
    L->f0 = lbl_805D37E4;
    L->f108 = 0;
    L->f10C = 0;
    L->fF0 = 0;
    L->fF8 = 0;
    L->fF4 = TObjPlayer__sub_800196EC();
    L->fx = NULL;
    if (L->owner != NULL) {
        L->owner_id = obj_getField1c(L->owner);
    }
    L->fF6 = lbl_805D53A0;
    if (is_split_screen() == 0 && L->owner_id != lbl_805D53A0) {
        VecCopy__FP3VecPC3Vec(&L->pos, &L->owner->pipe_pos);
    } else {
        L->fF6 = L->owner_id;
        if ((s32)arg4 == 0xA) {
            VecCopy__FP3VecPC3Vec(&L->pos, arg3);
        } else {
            p = alloc__23TAdSinglePlyChrSelectGCFPv(0xA8);
            if (p != NULL) {
                p = init_array__9TItemListFPv(p);
            }
            L->fx = p;
            if (L->fx != NULL) {
                Vec_80234D50 v = lbl_8044D72C;
                TObjPlayer__sub_803D97F0(lbl_8058D490);
                rotate_matrix_y(0, L->owner->f60);
                TCameraCtrl__sub_803D8934(0, &v, &v);
                TCameraCtrl__sub_803D9858(1);
                o = L->owner;
                v.x += o->pos.x;
                v.y += lbl_805DC878 + o->pos.y;
                v.z += o->pos.z;
                TTecLuker__sub_801D3728(L->fx, &v, o);
            }
        }
    }
    TBoss3Volopt__sub_8022675C(0x4002A818, (u8 *)arg0 + 0x20, 0, 0);
    return arg0;
}
#undef L

void TTecLuker__sub_80234F08(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        TTecLuker__data_805D37E0[i] = 0;
    }
}

void TTecLuker__sub_80234F28(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        TTecLuker__data_805D37E0[i] = 0;
    }
}

void TTecLuker__sub_80234F48(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        TTecLuker__data_805D37E0[i] = 0;
    }
}

void TTecLuker__sub_80234F68(void* p) { *(s32*)((char*)p + 0x0) = 6; }
s16 get_field_2__9TTecLukerFPv(void* p) { return *(s16*)((char*)p + 0x2); }

void TTecLuker__sub_80234F7C(void* p) { *(s32*)((char*)p + 0xb0) = 0; }

s32 TTecLuker__sub_80234F88(void* p) { return *(s32*)((char*)p + 0xb0); }

void TTecLuker__sub_80234F90(void* p) { TTecLuker__sub_80234FC4((void *)((void*)(p))); TLobby__send_and_handle_60((s32)(p)); }

void TTecLuker__sub_80234FC4(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 4)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 6)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 8)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 12)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 16)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 20)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 24)));
}

void TTecLuker__sub_80235028(void* p) { *(u8*)((char*)p + 0x0) = 104; *(u8*)((char*)p + 0x1) = 7; }

void TTecLuker__sub_8023503C(void* p) { *(s32*)((char*)p + 0x38) = 1; }

void TTecLuker__sub_80235048(void* p) { *(s32*)((char*)p + 0x38) = 0; }

int TTecLuker__sub_80235054(void* p) { return fn_80235078((void *)((char*)p + 0x4)); }
int fn_80235078(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x0) == 2);
}

}
