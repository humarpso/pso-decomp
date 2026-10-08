#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80357548___vt__20TItemEffOrgaFlowShot { M2C_UNK value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_80357548___vt__20TItemEffOrgaFlowShot_size[sizeof(RecoveredGlobal_80357548___vt__20TItemEffOrgaFlowShot) == 0x20 ? 1 : -1];

struct B_80357058 { u8 hdr[4]; u8 d[0x40]; u8 tail[8+1]; };

struct Vec4_80357284 { f32 x, y, z; s32 w; };

struct Seg_80357284 { Vec4_80357284 a; Vec4_80357284 b; };

struct Shot_80357284 {
    u8 pad0[0xC4];
    Seg_80357284 seg[5];
    f32 v164[3];
    f32 v170[3];
    f32 dir[3];
    u8 pad188[8];
    f32 len;
    f32 speed;
};

struct Pkt_803570E4 { u8 hdr[4]; s8 d[0x40]; };

struct Vec_803570E4 { f32 x, y, z; };

struct V4_8035740C { f32 x, y, z; s32 w; };

struct O_8035740C { u8 pad0[0xC4]; V4_8035740C v[10]; };

extern "C" {
u8 * construct_attack_collision(void *, M2C_UNK, void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 normalize_vector(void *);
extern M2C_UNK __vt__20TItemEffOrgaFlowShot[];
extern s32 lbl_805D43B0;
extern const f32 lbl_805E0038;
extern const f32 lbl_805E003C;
extern const f32 lbl_805E0040;
extern const f32 lbl_805E0044;
u8 *TItemEffOrgaFlowShot__ct(u8 *arg0, s32 arg1, u8 *arg2);
extern const f32 lbl_805E0028;
extern const f32 lbl_805E002C;
void TItemEffOrgaFlowShot__sub_80357358(u8 *arg0);
s32 TLobby__sub_800C6C10();
void bswap_6xAD_subordinate_action__20TItemEffOrgaFlowShotFPv(void* p);
void build_6xAD_olga_flow_subordinate_boss_actions(void* p);
void send_6xAD_olga_flow_subordinate_boss_actions(u8 *arg0);
void TItemEffOrgaFlowShot__sub_80357284(void *arg0);
void TBoss6Type2__sub_802B9994(u8, u8, Vec_803570E4 *);
void TBoss6Type2__sub_8032F3E0(s32, Vec_803570E4 *, s32);
void TBoss6Rock__sub_80353EA4(s32 i, s32 a, s32 b);
void TBoss6Rock__sub_80353EDC(s32 i, s32 a, s32 b);
int read_be16_field2_forward(void* p);
extern int lbl_805D6F20;
void handle_6xAD_olga_flow_subordinate_boss_actions(Pkt_803570E4 *pkt);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK decrement_packed_timer__15TObjBoss2TunnelFPvi(void *, int);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
s32 has_game_join_id();
M2C_UNK check_hits__14TItemAttackColFPv(void *);
void TItemEffOrgaFlowShot__sub_80357284(void *arg0);
void TItemEffOrgaFlowShot__sub_80357358(u8 *arg0);
extern const f32 lbl_805E0030;
extern const f32 lbl_805E0034;
void run_task__20TItemEffOrgaFlowShotFv(u8 *arg0);
}

extern "C" {

void TBoss6Type2__sub_803570C8(s8 *arg0);
void TItemEffOrgaFlowShot__sub_80357204(void);
void TItemEffOrgaFlowShot__sub_80357210(void);
void *__dt__20TItemEffOrgaFlowShotFv(void *arg0, s16 arg1);
void bswap_6xAD_subordinate_action__20TItemEffOrgaFlowShotFPv(void* p);
void build_6xAD_olga_flow_subordinate_boss_actions(void* p);
void create__20TItemEffOrgaFlowShotFPvPv(void *arg0, void *arg1);
int read_be16_field2_forward(void* p);
void render__20TItemEffOrgaFlowShotFv(s32 arg0);
int TLobby__send_and_handle_60(void*);
M2C_UNK draw_untextured_trail_strip(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_803DF768(M2C_UNK);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void destroy_attack_collision__14TItemAttackColFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK restore_saved_depth_alpha_state();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
int read_be16_field2__10TObjPlayerFPv(void*);
M2C_UNK reset_player_transform();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_1__Fv();

void send_6xAD_olga_flow_subordinate_boss_actions(u8 *arg0) {
    B_80357058 b;
    s32 i;
    if (TLobby__sub_800C6C10() != 0) {
        build_6xAD_olga_flow_subordinate_boss_actions((void*)(&b));
        for (i = 0; i < 0x40; i++) {
            b.d[i] = arg0[i];
        }
        bswap_6xAD_subordinate_action__20TItemEffOrgaFlowShotFPv((void*)(&b));
    }
}

void TBoss6Type2__sub_803570C8(s8 *arg0) {
    s32 var_ctr;

    for (var_ctr = 0x40; var_ctr != 0; var_ctr -= 1) {
        *arg0 = -1;
        arg0 += 1;
    }
}

    extern int lbl_805D6F20;

struct B_80357058;
void handle_6xAD_olga_flow_subordinate_boss_actions(Pkt_803570E4 *pkt) {
    Vec_803570E4 v[3];
    s8 boss;
    s32 n;
    s8 *p;
    s32 i;
    s32 j;
    if (lbl_805D6F20 == 0) {
        return;
    }
    read_be16_field2_forward((void*)(pkt));
    boss = pkt->d[0];
    if (boss >= 0) {
        p = &pkt->d[1];
        n = 0;
        for (i = 0; i < 3; i++, p += 2) {
            if (p[0] < 0 || p[1] < 0) {
                break;
            }
            TBoss6Type2__sub_802B9994(p[0], p[1], &v[i]);
            n++;
        }
        TBoss6Type2__sub_8032F3E0(boss, v, n);
    }
    for (j = 0; j < 0x40; j++) {
        if (pkt->d[j] >= 0 && j >= 7 && j <= 0x26) {
            s8 c = pkt->d[j];
            s32 idx = j - 7;
            s32 a = 0;
            s32 type = c & 0xF;
            s32 f;
            if (c & 0x40) {
                a = 1;
            }
            f = 0;
            if (c & 0x20) {
                f = 1;
            }
            switch (type) {
            case 0:
                TBoss6Rock__sub_80353EDC(idx, a, f);
                break;
            case 1:
                TBoss6Rock__sub_80353EA4(idx, a, f);
                break;
            }
        }
    }
}

void TItemEffOrgaFlowShot__sub_80357204(void) { lbl_805D6F20 = 0; }

    extern int lbl_805D6F20;
void TItemEffOrgaFlowShot__sub_80357210(void) { lbl_805D6F20 = 1; }

void bswap_6xAD_subordinate_action__20TItemEffOrgaFlowShotFPv(void* p) { read_be16_field2_forward((void*)(p)); TLobby__send_and_handle_60(p); }

int read_be16_field2_forward(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void build_6xAD_olga_flow_subordinate_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 173; *(u8*)((char*)p + 0x1) = 17; }

extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

#pragma push
#pragma fp_contract on
#pragma fp_contract on
void TItemEffOrgaFlowShot__sub_80357284(void *arg0) {
    Shot_80357284 *o = (Shot_80357284 *)arg0;
    Vec4_80357284 *dst;
    Vec4_80357284 *src;
    f32 dx;
    f32 dz;
    s32 i;
    dst = &o->seg[0].a;
    src = &o->seg[0].b;
    o->seg[0].b.x = o->v164[0] * o->speed + o->seg[1].b.x;
    o->seg[0].b.y = o->v164[1] * o->speed + o->seg[1].b.y;
    o->seg[0].b.z = o->v164[2] * o->speed + o->seg[1].b.z;
    o->seg[4].b.x = o->v170[0] * o->speed + o->seg[3].b.x;
    o->seg[4].b.y = o->v170[1] * o->speed + o->seg[3].b.y;
    o->seg[4].b.z = o->v170[2] * o->speed + o->seg[3].b.z;
    dx = o->dir[0] * o->len;
    dz = o->dir[2] * o->len;
    for (i = 0; i < 5; i++) {
        dst->x = src->x + dx;
        dst->y = src->y;
        dst->z = src->z + dz;
        dst->w = src->w;
        dst += 2;
        src += 2;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TItemEffOrgaFlowShot__sub_80357358(u8 *arg0) {
    f32 temp_f2;
    temp_f2 = lbl_805E0028 * M2C_FIELD(arg0, f32 *, 0x190);
    M2C_FIELD(arg0, f32 *, 0x40) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (lbl_805E002C + M2C_FIELD(arg0, f32 *, 0x194));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((M2C_FIELD(arg0, f32 *, 0x17C) * temp_f2) + M2C_FIELD(arg0, f32 *, 0x114));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x118);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x184) * temp_f2) + M2C_FIELD(arg0, f32 *, 0x11C));
}
#pragma pop

void render__20TItemEffOrgaFlowShotFv(s32 arg0) {
    begin_effect_render__13TParticleCtrlFv();
    lbl_805D5660 = some_id_805c6f74;
    set_depth_buffer_settings_1__Fv();
    init_xyz_limits__10TObjPlayerFv();
    TObjPlayer__sub_803DF768(1);
    draw_untextured_trail_strip(arg0 + 0xC4, 0xA);
    reset_player_transform();
    reset_transform_state__10TObjPlayerFv();
    restore_saved_depth_alpha_state();
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
}

extern M2C_UNK __vt__20TItemEffOrgaFlowShot[];

void run_task__20TItemEffOrgaFlowShotFv(u8 *arg0) {
    s32 temp_r3;
    s32 var_r30;
    if (has_game_join_id() != 0) {
        check_hits__14TItemAttackColFPv((void *) (arg0));
    } else {
        queue_destruction__7TObjectFv((void *) (arg0));
        disallow_rendering__7TObjectFv((void *) (arg0));
    }
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x190), (f32) (lbl_805E0030), (f32) (M2C_FIELD(arg0, f32 *, 0x18C)));
    if (M2C_FIELD(arg0, f32 *, 0x190) == M2C_FIELD(arg0, f32 *, 0x18C)) {
        approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x194), (f32) (lbl_805E0034), (f32) (M2C_FIELD(arg0, f32 *, 0x198)));
    }
    for (var_r30 = 0; var_r30 != 10; var_r30++) {
        decrement_packed_timer__15TObjBoss2TunnelFPvi(&((O_8035740C *)arg0)->v[var_r30].w, 2);
    }
    if (M2C_FIELD(arg0, f32 *, 0x194) == M2C_FIELD(arg0, f32 *, 0x198)) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x19C);
        M2C_FIELD(arg0, s32 *, 0x19C) = (s32) (temp_r3 - 1);
        if (temp_r3 == 0) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
    TItemEffOrgaFlowShot__sub_80357284((void *) (arg0));
    TItemEffOrgaFlowShot__sub_80357358(arg0);
}

void *__dt__20TItemEffOrgaFlowShotFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TItemEffOrgaFlowShot;
        destroy_attack_collision__14TItemAttackColFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TItemEffOrgaFlowShot__ct(u8 *arg0, s32 arg1, u8 *arg2) {
    construct_attack_collision(arg0, arg1, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80357548___vt__20TItemEffOrgaFlowShot *)&__vt__20TItemEffOrgaFlowShot).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D43B0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805E0038;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg2, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x188) = (s32) M2C_FIELD(arg2, s32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x190) = (f32) lbl_805E003C;
    M2C_FIELD(arg0, f32 *, 0x18C) = (f32) lbl_805E0040;
    M2C_FIELD(arg0, f32 *, 0x194) = (f32) lbl_805E003C;
    M2C_FIELD(arg0, s32 *, 0x19C) = 0x14;
    M2C_FIELD(arg0, f32 *, 0x17C) = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x188));
    M2C_FIELD(arg0, f32 *, 0x180) = (f32) lbl_805E003C;
    M2C_FIELD(arg0, f32 *, 0x184) = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x188));
    M2C_FIELD(arg0, f32 *, 0x164) = (f32) (M2C_FIELD(arg2, f32 *, 0x2C) - M2C_FIELD(arg2, f32 *, 0x38));
    M2C_FIELD(arg0, f32 *, 0x168) = (f32) (M2C_FIELD(arg2, f32 *, 0x30) - M2C_FIELD(arg2, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x16C) = (f32) (M2C_FIELD(arg2, f32 *, 0x34) - M2C_FIELD(arg2, f32 *, 0x40));
    M2C_FIELD(arg0, f32 *, 0x198) = (f32) (lbl_805E0044 * normalize_vector(arg0 + 0x164));
    M2C_FIELD(arg0, f32 *, 0x170) = (f32) (M2C_FIELD(arg2, f32 *, 0x5C) - M2C_FIELD(arg2, f32 *, 0x50));
    M2C_FIELD(arg0, f32 *, 0x174) = (f32) (M2C_FIELD(arg2, f32 *, 0x60) - M2C_FIELD(arg2, f32 *, 0x54));
    M2C_FIELD(arg0, f32 *, 0x178) = (f32) (M2C_FIELD(arg2, f32 *, 0x64) - M2C_FIELD(arg2, f32 *, 0x58));
    normalize_vector(arg0 + 0x170);
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) M2C_FIELD(arg2, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0xF8) = (f32) M2C_FIELD(arg2, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg2, f32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x100) = 0x6040FF40;
    M2C_FIELD(arg0, f32 *, 0x114) = (f32) M2C_FIELD(arg2, f32 *, 0x44);
    M2C_FIELD(arg0, f32 *, 0x118) = (f32) M2C_FIELD(arg2, f32 *, 0x48);
    M2C_FIELD(arg0, f32 *, 0x11C) = (f32) M2C_FIELD(arg2, f32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x120) = 0x408840;
    M2C_FIELD(arg0, f32 *, 0x134) = (f32) M2C_FIELD(arg2, f32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x138) = (f32) M2C_FIELD(arg2, f32 *, 0x54);
    M2C_FIELD(arg0, f32 *, 0x13C) = (f32) M2C_FIELD(arg2, f32 *, 0x58);
    M2C_FIELD(arg0, s32 *, 0x140) = 0x6040FF40;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0x408840;
    M2C_FIELD(arg0, s32 *, 0x160) = 0x408840;
    TItemEffOrgaFlowShot__sub_80357284((void *)((void *)(arg0)));
    TItemEffOrgaFlowShot__sub_80357358((u8 *)(arg0));
    return arg0;
}

void create__20TItemEffOrgaFlowShotFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x1A0);
    if (o != NULL) {
        TItemEffOrgaFlowShot__ct((u8 *)(o), (s32)(arg0), (u8 *)(arg1));
    }
}

}
