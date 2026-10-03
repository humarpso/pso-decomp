#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Pkt_801B6A5C {
    u8 pad0[2];
    u16 id;
    s16 st[6];
    s16 exp;
    s16 kind;
};

struct Stats_801B6A5C { s16 st[6]; u8 pad[0xc]; s32 exp; };

struct Plr_801B6A5C {
    u8 pad0[0x2b0];
    Stats_801B6A5C *stats;
    u8 pad2b4[4];
    s16 a;
    s16 b;
    u8 pad2bc[0x70];
    s16 a2;
    s16 b2;
};

typedef struct Vec_801B6964 { f32 x, y, z; } Vec_801B6964;

struct Color_801B6964 { f32 r, g, b, a; };

extern "C" {
M2C_UNK recalc_combat_stats__10TObjPlayerFv(s32, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32);
f32 get_tp_class_factor__10TObjPlayerFPv();
f32 TObjPlayer__sub_801D9440(s32);
s32 is_alive_and_ready__10TObjPlayerFi(Plr_801B6A5C *);
void refill_traps__10TObjPlayerFPv(Plr_801B6A5C *);
s32 reset_volopt_state__10TObjPlayerFv(Plr_801B6A5C *);
void copy_fields__10TObjPlayerFPvPv(Pkt_801B6A5C *, void *);
Plr_801B6A5C *get_player_by_client_id(u16);
s32 check_flag_4__10TObjPlayerFPv(Plr_801B6A5C *);
void swap_endian__10TObjPlayerFi(Pkt_801B6A5C *);
void TObjPlayer__sub_801C0CC4(Pkt_801B6A5C *);
s32 validate_6x30_change_player_level(Pkt_801B6A5C *);
extern u8 lbl_80446F50[];
extern u8 lbl_80446F5C[];
void handle_6x30_change_player_level(void *arg0);
s32 obj_getField1c(s32);
void __ct__14TFontSmallHelpFUlUllUl(void *, u16, s32, s32, s32);
void publish_actor_light_scalars(u16, f32, f32);
void notify_volopt_if_ready__10TObjPlayerFPv(void* p);
void new_child_object__10TObjPlayerFi(s32);
void *__nw__7TObjectFUl(u32);
void construct_actor_light_task(void *, Color_801B6964 *, Vec_801B6964 *, s32, s32, s32, f32);
extern Vec_801B6964 lbl_8050BEE0[];
extern Color_801B6964 lbl_8050BFE0[];
extern s32 tl_07;
void spawn_level_change_feedback__10TObjPlayerFv(s32 arg0, s32 arg1);
}

extern "C" {

struct Base_801B6414_801B3FD8 { char pad[0x18]; };
struct VObj_801B6414_801B3FD8 : Base_801B6414_801B3FD8 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(s32);
    virtual void m13();
    virtual s32 m14();
};

void TObjPlayer__sub_801B67C4(void* p);
void TObjPlayer__vt71(s32 arg0);
void add_ata__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_dfp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_evp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_hp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_lck__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_mst__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_stat__10TObjPlayerFPvi(void *arg0, s32 arg1);
s16 add_stat_clamped__10TObjPlayerFiPvs(s32 arg0, s16 *arg1, s16 arg2);
void copy_stats__10TObjPlayerFPvPv(void *arg0, void *arg1);
void notify_volopt_if_ready__10TObjPlayerFPv(void* p);
void update_aim_angle__10TObjPlayerFPvi(void *arg0, s32 arg1);
int play_sound_effect(void*, void*, void*, void*);
M2C_UNK recalc_combat_stats__10TObjPlayerFv(s32, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32);
int is_locally_controlled__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_801D921C(void *, s32);
s16 *TObjPlayer__sub_801D93C4();
f32 get_tp_class_factor__10TObjPlayerFPv();
f32 TObjPlayer__sub_801D9440(s32);
M2C_UNK clamp_field_32E__10TObjPlayerFPv(s32);
s32 clamp_index_to_max__10TObjPlayerFi(s32);
M2C_UNK clamp_value__10TObjPlayerFPv(s32);
s32 obj_getPtr2B0_1C(void *);

s16 add_stat_clamped__10TObjPlayerFiPvs(s32 arg0, s16 *arg1, s16 arg2) {
    s16 temp_r3;
    s16 var_r6;

    var_r6 = 0;
    *arg1 += arg0;
    temp_r3 = *arg1;
    if (temp_r3 < 0) {
        *arg1 = 0;
    } else {
        var_r6 = temp_r3 - arg2;
        if (var_r6 > 0) {
            *arg1 = arg2;
        }
    }
    return var_r6;
}

void add_lck__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 0xC)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 0xC)));
}

void add_evp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 4)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 4)));
}

void add_ata__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 0xA)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 0xA)));
}

void add_mst__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 2)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 2)));
}

void add_hp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 6)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 6)));
}

void add_dfp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 8)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 8)));
}

void add_stat__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0))), (s16)(*TObjPlayer__sub_801D93C4()));
}

void TObjPlayer__vt71(s32 arg0) {
    f32 temp_f31;
    f32 temp_f1;

    temp_f31 = get_tp_class_factor__10TObjPlayerFPv();
    temp_f1 = TObjPlayer__sub_801D9440(arg0);
    recalc_combat_stats__10TObjPlayerFv(arg0, 0, 0, 0, temp_f1, temp_f31);
    clamp_value__10TObjPlayerFPv(arg0);
    clamp_field_32E__10TObjPlayerFPv(arg0);
}

void update_aim_angle__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    struct VObj_801B6414_801B3FD8 *obj = (struct VObj_801B6414_801B3FD8 *) arg0;
    s32 temp_r31;

    temp_r31 = TObjPlayer__sub_801D921C(arg0, clamp_index_to_max__10TObjPlayerFi(arg1 + obj->m14()));
    obj->m12(temp_r31 - obj_getPtr2B0_1C(arg0));
}

void TObjPlayer__sub_801B67C4(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

void copy_stats__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) M2C_FIELD(arg1, s16 *, 0xC);
}

void notify_volopt_if_ready__10TObjPlayerFPv(void* p) { if (is_locally_controlled__10TObjPlayerFPv(p) != 0) { play_sound_effect((void*)335646, (void*)0, (void*)0, (void*)0); } }

void spawn_level_change_feedback__10TObjPlayerFv(s32 arg0, s32 arg1) {
    void *p;
    notify_volopt_if_ready__10TObjPlayerFPv((void *)arg0);
    p = __nw__7TObjectFUl(0x60);
    if (p != NULL) {
        __ct__14TFontSmallHelpFUlUllUl(p, obj_getField1c(arg0), -1, 0x3C, arg1);
    }
    new_child_object__10TObjPlayerFi(obj_getField1c(arg0));
    lbl_8050BEE0[0].x = 0.0f;
    lbl_8050BEE0[0].y = -1.0f;
    lbl_8050BEE0[0].z = 0.0f;
    lbl_8050BFE0[0].r = 1.0f;
    lbl_8050BFE0[0].g = 1.0f;
    lbl_8050BFE0[0].b = 0.8f;
    lbl_8050BFE0[0].a = 0.63f;
    p = __nw__7TObjectFUl(0x64);
    if (p != NULL) {
        ((void (*)(void *, Color_801B6964 *, f32, Vec_801B6964 *, s32, s32, s32))construct_actor_light_task)(p, lbl_8050BFE0, 0.2f, lbl_8050BEE0, 10, arg0, tl_07);
    }
    publish_actor_light_scalars(obj_getField1c(arg0), 1.0f, 0.5f);
}

void handle_6x30_change_player_level(void *arg0) {
    Pkt_801B6A5C pkt;
    Plr_801B6A5C *p;
    f32 f;
    TObjPlayer__sub_801C0CC4(&pkt);
    copy_fields__10TObjPlayerFPvPv(&pkt, arg0);
    swap_endian__10TObjPlayerFi(&pkt);
    if (validate_6x30_change_player_level(&pkt) == 0) {
        return;
    }
    p = get_player_by_client_id(pkt.id);
    if (p == NULL) {
        return;
    }
    if (reset_volopt_state__10TObjPlayerFv(p) == 0) {
        return;
    }
    p->stats->st[0] = pkt.st[0];
    p->stats->st[1] = pkt.st[1];
    p->stats->st[2] = pkt.st[2];
    p->stats->st[3] = pkt.st[3];
    p->stats->st[4] = pkt.st[4];
    p->stats->st[5] = pkt.st[5];
    p->stats->exp = pkt.exp;
    f = ((f32 (*)(Plr_801B6A5C *))get_tp_class_factor__10TObjPlayerFPv)(p);
    recalc_combat_stats__10TObjPlayerFv((s32)p, (M2C_UNK)p->stats, 0, 0, TObjPlayer__sub_801D9440((s32)p), f);
    p->a2 = p->a;
    p->b2 = p->b;
    if (is_alive_and_ready__10TObjPlayerFi(p) != 0) {
        refill_traps__10TObjPlayerFPv(p);
    }
    if (check_flag_4__10TObjPlayerFPv(p) == 0) {
        if (pkt.kind == 1) {
            spawn_level_change_feedback__10TObjPlayerFv((s32)(p), (s32)(lbl_80446F50));
        } else {
            spawn_level_change_feedback__10TObjPlayerFv((s32)(p), (s32)(lbl_80446F5C));
        }
    }
}

}
