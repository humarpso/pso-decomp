#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801520B8___vt__10TNpcPlayer { M2C_UNK value; u8 remaining[0x14]; };

struct Own_80152168 { u8 pad[0x94]; u8 *obj; };
struct Npc_80152168 {
    s32 f0;
    u8 pad4[0x14];
    M2C_UNK *vt;
    s32 f1C;
    s32 f20;
    s32 f24;
    u8 pad28[4];
    s16 f2C;
    u8 pad2E[2];
    u8 f30[0x28];
    f32 f58;
    u8 f5C[0x74 - 0x5C];
    void *f74;
    Own_80152168 *f78;
    s32 f7C;
    s32 f80;
    s32 f84;
    f32 f88;
    s8 f8C;
    s8 f8D;
    s16 f8E;
    u8 pad90[0xAC - 0x90];
    f32 fAC;
    f32 fB0;
    f32 fB4;
    u8 padB8[0xC4 - 0xB8];
    s32 fC4;
    s32 fC8;
    s32 fCC;
    f32 fD0;
    f32 fD4;
    f32 fD8;
    f32 fDC;
    f32 fE0;
    f32 fE4;
};

struct Own_80152330 { u8 pad[0x94]; u8 *obj; };
struct Npc_80152330 {
    s32 f0;
    u8 pad4[0x14];
    M2C_UNK *vt;
    s32 f1C;
    s32 f20;
    s32 f24;
    u8 pad28[4];
    s16 f2C;
    u8 pad2E[2];
    u8 f30[0x28];
    f32 f58;
    u8 f5C[0x74 - 0x5C];
    void *f74;
    Own_80152330 *f78;
    s32 f7C;
    s32 f80;
    s32 f84;
    f32 f88;
    s8 f8C;
    s8 f8D;
    s16 f8E;
    u8 pad90[0xAC - 0x90];
    f32 fAC;
    f32 fB0;
    f32 fB4;
    u8 padB8[0xC4 - 0xB8];
    s32 fC4;
    s32 fC8;
    s32 fCC;
    f32 fD0;
    f32 fD4;
    f32 fD8;
    f32 fDC;
    f32 fE0;
    f32 fE4;
};

extern "C" {
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void init_equipment__10TNpcPlayerFPv(void *);
void *TNpcPlayer__sub_8014F844(void *, u16);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 TNpcPlayer__data_804ABC90[][0x28];
extern s32 lbl_805D2E74;
extern const f32 TNpcPlayer__data_805DB1F0;
Npc_80152168 *TNpcPlayer__ct(Npc_80152168 *self, s32 a, s32 b, s16 kind, s32 arg4, void *parent);
Npc_80152330 *TNpcPlayer__sub_80152330(Npc_80152330 *self, s32 a, s32 b, s16 kind, void *parent);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_inactive__10TObjPlayerFPv(void *);
M2C_UNK TNpcPlayer__sub_8014E090(void *, int);
M2C_UNK request_chatter__10TNpcPlayerFPvUi(void *, int);
s32 TNpcPlayer__sub_8014F7F0(void *);
M2C_UNK partner_observe_surroundings(void *);
M2C_UNK update_condition_flags__10TNpcPlayerFPv(void *);
M2C_UNK init_state__10TNpcPlayerFPv(void *);
M2C_UNK deliver_partner_action__10TNpcPlayerFv(void *);
s32 update_follow_target__10TNpcPlayerFPv(u8 *arg0);
M2C_UNK decide_action__10TNpcPlayerFv(void *);
void reset_partner_counter(s32 arg0, s32 arg1);
void increment_partner_counter(s32 arg0, s32 arg1);
s32 is_partner_counter_reached(void *, int, int);
s32 clamp_partner_counter(void *, int, int);
u16 get_action_flags__10TNpcPlayerFPv(void *);
void run_task__10TNpcPlayerFv(u8 *arg0);
}

struct Obj_801528A8 { u8 pad[0x5c]; u8 arr[1]; };

extern "C" {
void increment_partner_counter(s32 arg0, s32 arg1);
void reset_partner_counter(s32 arg0, s32 arg1);
u8 * dt__10TNpcPlayerFPvs(void *, s16);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
void send_item_pickup_request__10TObjPlayerFi(s32);
void __dl__7TObjectFPv(s32);
M2C_UNK __dt__7TObjectFv(void *, int);
u32 get_player_by_client_id(int);
extern RecoveredGlobal_801520B8___vt__10TNpcPlayer __vt__10TNpcPlayer;
u8 *__dt__10TNpcPlayerFv(u8 *arg0, s16 arg1);
void TNpcPlayer__sub_801528A8(Obj_801528A8 *self, s16 i, u8 v);
void *__ct__12TPlyCharDataFv(void *self);
void __dt__12TPlyCharDataFv(void *self, s32 flag);
void __register_global_object(void *obj, void *dtor, void *link);
extern u8 lbl_8050CFC4[];
extern u8 lbl_8050CFB8[];
void TNpcPlayer__sub_8015286C(void);
}

extern "C" {

s32 TNpcPlayer__sub_801528DC(void* p);
void copy__10TNpcPlayerFPvPv(void* p, void* q);
void ensure_rock_singleton__10TNpcPlayerFv(void);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 update_follow_target__10TNpcPlayerFPv(u8 *arg0);
M2C_UNK TNpcPlayer__sub_8014E090(void *, int);
s32 TNpcPlayer__sub_8014FF5C(void *);
s32 TNpcPlayer__sub_801500F4();
M2C_UNK select_path_waypoint__10TNpcPlayerFv(void *);
s32 TNpcPlayer__sub_80152978(void* p);
void TNpcPlayer__sub_80152A30(void);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
int bswap_6x45_packet(void*);
int bswap_6x44_packet(void*);
int bswap_6x43_packet(void*);
void TNpcPlayer__sub_80152D64(void* p);
int TObjPlayer__sub_80102CE0(void*);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void* init__10TNpcPlayerFPv(void* p);
void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void reset_model__10TNpcPlayerFPv(void* p);
void update__10TNpcPlayerFPv(void* p);
void update_lobby__10TNpcPlayerFPv(void* p);
void update_players__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);

s32 update_follow_target__10TNpcPlayerFPv(u8 *arg0) {
    if (TNpcPlayer__sub_801500F4() != 0) {
        select_path_waypoint__10TNpcPlayerFv((void *) (arg0));
        if (TNpcPlayer__sub_8014FF5C((void *) (arg0)) != 0) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xAC), (void *) (arg0 + 0xD0));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 2U) {
                TNpcPlayer__sub_8014E090((void *) (arg0), (int) (1));
            }
        } else {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xAC), (void *) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94) + 0x38));
        }
        return 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x80) & 0x20) && ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 8U)) {
        TNpcPlayer__sub_8014E090((void *) (arg0), (int) (0));
    }
    return 0;
}

void run_task__10TNpcPlayerFv(u8 *arg0) {
    u8 *owner;
    owner = M2C_FIELD(arg0, u8 **, 0x74);
    if (owner == NULL || (void *) M2C_FIELD(arg0, u8 **, 0x78) == NULL) {
        return;
    }
    {
        {
        if (TNpcPlayer__sub_8014F7F0((void *) (owner)) != 0) {
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
        if (TNpcPlayer__sub_8014F7F0((void *) (M2C_FIELD(arg0, u8 **, 0x78))) != 0) {
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
        if ((is_inactive__10TObjPlayerFPv((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94))) != 0) && (((void *) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94) == NULL) || (get_action_flags__10TNpcPlayerFPv((void *) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94)) != 0xFFFF))) {
            init_state__10TNpcPlayerFPv((void *) (arg0));
            if (!(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x74), void **, 0x94), s32 *, 0x30) & 0x800)) {
                if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94), s32 *, 0x30) & 0x800) {
                    if (clamp_partner_counter((void *) (arg0 + 0x5C), (int) (3), (int) (0x400)) != 0) {
                        request_chatter__10TNpcPlayerFPvUi((void *) (arg0), (int) (5));
                    } else if (is_partner_counter_reached((void *) (arg0 + 0x5C), (int) (3), (int) (0)) != 0) {
                        request_chatter__10TNpcPlayerFPvUi((void *) (arg0), (int) (4));
                    }
                    increment_partner_counter((s32) (arg0 + 0x5C), 3);
                    TNpcPlayer__sub_8014E090((void *) (arg0), (int) (0));
                } else {
                    reset_partner_counter((s32) (arg0 + 0x5C), 3);
                    update_condition_flags__10TNpcPlayerFPv((void *) (arg0));
                    partner_observe_surroundings((void *) (arg0));
                    decide_action__10TNpcPlayerFv((void *) (arg0));
                    update_follow_target__10TNpcPlayerFPv(arg0);
                }
                deliver_partner_action__10TNpcPlayerFv((void *) (arg0));
            }
        }
        }
    }
}

u8 *__dt__10TNpcPlayerFv(u8 *arg0, s16 arg1) {
    u32 temp_r3_3;
    u8 *temp_r3;
    u8 *temp_r3_2;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__10TNpcPlayer.value;
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x74));
        if (temp_r3 != NULL) {
            dt__10TNpcPlayerFPvs(temp_r3, 1);
            M2C_FIELD(arg0, u8 **, 0x74) = NULL;
        }
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x78));
        if (temp_r3_2 != NULL) {
            temp_r3_3 = get_player_by_client_id((int) (get_npc_type__10TNpcPlayerFPv((void*)(temp_r3_2))));
            if (temp_r3_3 != 0U) {
                send_item_pickup_request__10TObjPlayerFi((s32) temp_r3_3);
            }
            dt__10TNpcPlayerFPvs(M2C_FIELD(arg0, u8 **, 0x78), 1);
            M2C_FIELD(arg0, u8 **, 0x78) = NULL;
        }
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

Npc_80152168 *TNpcPlayer__ct(Npc_80152168 *self, s32 a, s32 b, s16 kind, s32 arg4, void *parent) {
    void *p;

    __ct__7TObjectFP7TObject(self, parent);
    self->vt = &__vt__10TNpcPlayer.value;
    init__10TNpcPlayerFPv(self->f5C);
    self->f0 = lbl_805D2E74;
    self->f24 = 0x19;
    self->f1C = 0;
    self->f20 = 0;
    self->fAC = TNpcPlayer__data_805DB1F0;
    self->fB0 = TNpcPlayer__data_805DB1F0;
    self->fB4 = TNpcPlayer__data_805DB1F0;
    self->fD0 = TNpcPlayer__data_805DB1F0;
    self->fD4 = TNpcPlayer__data_805DB1F0;
    self->fD8 = TNpcPlayer__data_805DB1F0;
    self->fDC = TNpcPlayer__data_805DB1F0;
    self->fE0 = TNpcPlayer__data_805DB1F0;
    self->fE4 = TNpcPlayer__data_805DB1F0;
    self->fC4 = 0;
    self->fC8 = 0;
    self->fCC = 0;
    self->f2C = kind;
    self->f80 = 0;
    self->f7C = 0;
    self->f88 = TNpcPlayer__data_805DB1F0;
    self->f58 = TNpcPlayer__data_805DB1F0;
    self->f8C = 0;
    self->f8E = 0;
    self->f8D = 0;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x108);
    if (p != 0) {
        p = TNpcPlayer__sub_8014F844(p, a);
    }
    self->f74 = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x108);
    if (p != 0) {
        p = TNpcPlayer__sub_8014F844(p, b);
    }
    self->f78 = (Own_80152168 *)p;
    copy__10TNpcPlayerFPvPv(self->f30, TNpcPlayer__data_804ABC90[self->f2C]);
    if (self->f78 != 0 && self->f78->obj != 0) {
        VecCopy__FP3VecPC3Vec(&self->fDC, self->f78->obj + 0x38);
        init_equipment__10TNpcPlayerFPv(self);
    }
    self->f84 = arg4;
    return self;
}

void copy__10TNpcPlayerFPvPv(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); *(f32*)((char*)p + 0x1c) = *(f32*)((char*)q + 0x1c); *(u8*)((char*)p + 0x20) = *(u8*)((char*)q + 0x20); *(u8*)((char*)p + 0x21) = *(u8*)((char*)q + 0x21); *(u8*)((char*)p + 0x22) = *(u8*)((char*)q + 0x22); *(u8*)((char*)p + 0x23) = *(u8*)((char*)q + 0x23); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

Npc_80152330 *TNpcPlayer__sub_80152330(Npc_80152330 *self, s32 a, s32 b, s16 kind, void *parent) {
    void *p;

    __ct__7TObjectFP7TObject(self, parent);
    self->vt = &__vt__10TNpcPlayer.value;
    init__10TNpcPlayerFPv(self->f5C);
    self->f0 = lbl_805D2E74;
    self->f24 = 0x19;
    self->f1C = 0;
    self->f20 = 0;
    self->fAC = TNpcPlayer__data_805DB1F0;
    self->fB0 = TNpcPlayer__data_805DB1F0;
    self->fB4 = TNpcPlayer__data_805DB1F0;
    self->fD0 = TNpcPlayer__data_805DB1F0;
    self->fD4 = TNpcPlayer__data_805DB1F0;
    self->fD8 = TNpcPlayer__data_805DB1F0;
    self->fDC = TNpcPlayer__data_805DB1F0;
    self->fE0 = TNpcPlayer__data_805DB1F0;
    self->fE4 = TNpcPlayer__data_805DB1F0;
    self->fC4 = 0;
    self->fC8 = 0;
    self->fCC = 0;
    self->f2C = kind;
    self->f80 = 0;
    self->f7C = 0;
    self->f88 = TNpcPlayer__data_805DB1F0;
    self->f58 = TNpcPlayer__data_805DB1F0;
    self->f8C = 0;
    self->f8E = 0;
    self->f8D = 0;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x108);
    if (p != 0) {
        p = TNpcPlayer__sub_8014F844(p, a);
    }
    self->f74 = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x108);
    if (p != 0) {
        p = TNpcPlayer__sub_8014F844(p, b);
    }
    self->f78 = (Own_80152330 *)p;
    copy__10TNpcPlayerFPvPv(self->f30, TNpcPlayer__data_804ABC90[self->f2C]);
    if (self->f78 != 0 && self->f78->obj != 0) {
        VecCopy__FP3VecPC3Vec(&self->fDC, self->f78->obj + 0x38);
        init_equipment__10TNpcPlayerFPv(self);
    }
    self->f84 = 0;
    return self;
}

extern u32 lbl_805D5860;

void ensure_rock_singleton__10TNpcPlayerFv(void) {
    if ((u32) lbl_805D5860 == 0U) {
        lbl_805D5860 = alloc_buffer__11TOBoss4RockFPv(0x1400);
    }
}

void TNpcPlayer__sub_8015286C(void) {
    __register_global_object(__ct__12TPlyCharDataFv(lbl_8050CFC4), (void *)__dt__12TPlyCharDataFv, lbl_8050CFB8);
}

void TNpcPlayer__sub_801528A8(Obj_801528A8 *self, s16 i, u8 v) {
    self->arr[i] = v;
}

void reset_partner_counter(s32 arg0, s32 arg1) {
    M2C_FIELD((arg0 + (arg1 * 2)), s16 *, 0) = 0;
}

void increment_partner_counter(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = arg1 * 2;
    M2C_FIELD((arg0 + temp_r5), s16 *, 0) = M2C_FIELD((arg0 + temp_r5), s16 *, 0) + 1;
}

s32 TNpcPlayer__sub_801528DC(void* p) { return *(s32*)((char*)p + 0x84); }
s32 get_npc_state__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x7c); }
u16 get_npc_type__10TNpcPlayerFPv(void* p) { return *(u16*)((char*)p + 0x8a); }

}
