#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802D72E4_TObjNpcEnemy__data_80540FF0 {
    M2C_UNK value;
    u8 remaining[0x23C];
};

struct VBase_18_cff70e { char pad[0x18]; };

struct VObj_18_cff70e : VBase_18_cff70e {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual M2C_UNK m79(s32);
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual M2C_UNK m85(M2C_UNK, M2C_UNK);
};

struct RecoveredGlobal_802D78A0_lbl_804A7CB8 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_802D78A0_lbl_804A7CDC {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_802D78A0_lbl_804E2680 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_802D78A0___vt__12TObjNpcEnemy {
    M2C_UNK value;
    u8 remaining[0x178];
};

typedef s32 M2C_UNK;
struct Ent_802D732C { s16 id; u8 rest[0x22]; };

extern "C" {
extern RecoveredGlobal_802D72E4_TObjNpcEnemy__data_80540FF0 TObjNpcEnemy__data_80540FF0;
s16 *TObjNpcEnemy__sub_802D72E4(s16 arg0);
s32 TObjPlayer__sub_8001882C(void *, void *);
s32 copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 init_position_vectors__10TObjPlayerFi(void *);
s32 update_prev_position__10TObjPlayerFPv(void *);
s32 TObjNpcBase__ct(void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s16 *TObjNpcEnemy__sub_802D72E4(s16 arg0);
void set_npc_data__12TObjNpcEnemyFPvPv(void *arg0, void *arg1);
extern RecoveredGlobal_802D78A0_lbl_804A7CB8 lbl_804A7CB8;
extern RecoveredGlobal_802D78A0_lbl_804A7CDC lbl_804A7CDC;
extern RecoveredGlobal_802D78A0_lbl_804E2680 lbl_804E2680;
extern M2C_UNK __vt__12TObjNpcEnemy[];
extern s32 lbl_805D3F58;
u8 *TObjNpcEnemy__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK advance_animation_playback(void *);
M2C_UNK TObjNpcEnemy__sub_801480FC();
s16 *TObjNpcEnemy__sub_802D72E4(s16 arg0);
void set_npc_data__12TObjNpcEnemyFPvPv(void *arg0, void *arg1);
M2C_UNK set_global_count__12TObjNpcEnemyFi(u32);
void debug_printf_at(s32, const char *, ...);
extern char lbl_80472600[];
extern char lbl_80472610[];
extern char lbl_80472620[];
void TObjNpcEnemy__vt91(u8 *arg0);
M2C_UNK reset_anim_fields__12TObjNpcEnemyFPv(void *);
void *memmove(void *, const void *, u32);
extern RecoveredGlobal_802D72E4_TObjNpcEnemy__data_80540FF0 TObjNpcEnemy__data_80540FF0;
s16 *TObjNpcEnemy__sub_802D732C(s16 arg0);
M2C_UNK reset_anim_fields__12TObjNpcEnemyFPv(void *);
extern RecoveredGlobal_802D72E4_TObjNpcEnemy__data_80540FF0 TObjNpcEnemy__data_80540FF0;
void TObjNpcEnemy__sub_802D73F8(void);
s32 TObjNpcEnemy__sub_802D7444(void *arg0);
}

extern "C" {

struct NpcBase_802d7748_802D745C { char pad[0x18]; };
struct NpcV_802d7748_802D745C : NpcBase_802d7748_802D745C {
    virtual M2C_UNK m0(); virtual M2C_UNK m1(); virtual M2C_UNK m2();
    virtual M2C_UNK m3(); virtual M2C_UNK m4(); virtual M2C_UNK m5();
    virtual M2C_UNK m6(); virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32 a, f32 b);
};

void * TObjNpcEnemy__create(void *arg0);
void TObjNpcEnemy__vt86(void *arg0);
void *__dt__12TObjNpcEnemyFv(void *arg0, s16 arg1);
void render__12TObjNpcEnemyFv(u8 *arg0);
void set_npc_data__12TObjNpcEnemyFPvPv(void *arg0, void *arg1);
void update_state__12TObjNpcEnemyFPv(void *arg0);
M2C_UNK draw_ginja_object(s32);
void *TObjControl__ct(void *, void *);
M2C_UNK draw_chunk_object(s32);
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, int, f32, f32, f32);
M2C_UNK push_matrix_from(int);
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv();
M2C_UNK draw_model__12TObjNpcEnemyFPv();
M2C_UNK init_npc_animation__10TObjPlayerFPvPvPvPv(void *, s32, s32, s16);
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, int, int);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_global_flag__10TObjPlayerFv(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(int, void *);

typedef char RecoveredGlobal_802D72E4_TObjNpcEnemy__data_80540FF0_size[sizeof(RecoveredGlobal_802D72E4_TObjNpcEnemy__data_80540FF0) == 0x240 ? 1 : -1];
s16 *TObjNpcEnemy__sub_802D72E4(s16 arg0) {
    s16 *temp_r3;
    if (arg0 < 0) {
        return NULL;
    }
    if (arg0 >= 0x10) {
        return NULL;
    }
    temp_r3 = (s16 *)((u8 *)(&TObjNpcEnemy__data_80540FF0.value) + (arg0 * 0x24));
    if (M2C_FIELD(temp_r3, s16 *, 0) == 0) {
        return NULL;
    }
    return temp_r3;
}

s16 *TObjNpcEnemy__sub_802D732C(s16 arg0) {
    s32 i;
    Ent_802D732C *e;
    for (i = 0; i < 0x10; i++) {
        e = &((Ent_802D732C *)&TObjNpcEnemy__data_80540FF0)[i];
        if (e->id == 0) {
            return (s16 *)e;
        }
        if (e->id >= arg0) {
            if (e->id == arg0) {
                return NULL;
            }
            break;
        }
    }
    if (i >= 0x10) {
        return NULL;
    }
    if (((Ent_802D732C *)&TObjNpcEnemy__data_80540FF0)[15].id != 0) {
        return NULL;
    }
    if (i < 0xF) {
        memmove(e + 1, e, (0xF - i) * 0x24);
    }
    reset_anim_fields__12TObjNpcEnemyFPv(e);
    return (s16 *)e;
}

void TObjNpcEnemy__sub_802D73F8(void) {
    s32 i;
    for (i = 0; i < 0x10; i++) {
        reset_anim_fields__12TObjNpcEnemyFPv(&((Ent_802D732C *)&TObjNpcEnemy__data_80540FF0)[i]);
    }
}

s32 TObjNpcEnemy__sub_802D7444(void *arg0) {
    return (*M2C_FIELD(arg0, s16 **, 0x3B8) != 0x3F) ? 1 : 0;
}

void TObjNpcEnemy__vt86(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x3B8);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2) {
        M2C_FIELD(arg0, s16 *, 0xB8) = (s16) M2C_FIELD(temp_r4, s16 *, 0x1C);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xB8) = (s16) M2C_FIELD(temp_r4, s16 *, 0x1E);
}

extern const f32 lbl_805DE7D8;

void set_npc_data__12TObjNpcEnemyFPvPv(void *arg0, void *arg1) {
    u16 temp_r0;
    void *temp_r3;
    void *temp_r5;

    M2C_FIELD(arg0, void **, 0x3B8) = arg1;
    temp_r5 = M2C_FIELD(arg0, void **, 0x3B8);
    if (temp_r5 == NULL) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 0xC) = (f32) lbl_805DE7D8;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r5, s32 *, 8);
    temp_r3 = M2C_FIELD(arg0, void **, 0x3B8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r3, s32 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0xB8) = (s16) M2C_FIELD(temp_r5, s16 *, 0x1C);
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B8), u16 *, 2);
    switch ((s32) temp_r0) {
    case 0:
    case 2:
    case 4:
        break;
    case 1:
    case 3:
        init_npc_animation__10TObjPlayerFPvPvPvPv(arg0, M2C_FIELD(temp_r5, s32 *, 0x18), M2C_FIELD(temp_r5, s32 *, 0x14), M2C_FIELD(arg0, s16 *, 0xB8));
        break;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 0xC) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B8), f32 *, 0x10);
}

void TObjNpcEnemy__vt91(u8 *arg0) {
    s16 *p;
    TObjNpcEnemy__sub_801480FC();
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130018, lbl_80472600);
    debug_printf_at(0x13001A, lbl_80472610);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
    p = TObjNpcEnemy__sub_802D72E4((s16) M2C_FIELD(arg0, s32 *, 0x5C));
    if (p != M2C_FIELD(arg0, s16 **, 0x3B8)) {
        set_npc_data__12TObjNpcEnemyFPvPv(arg0, p);
    }
    p = M2C_FIELD(arg0, s16 **, 0x3B8);
    if (p == NULL) {
        set_global_count__12TObjNpcEnemyFi(0xFF0000FF);
        debug_printf_at(0x240018, lbl_80472620);
        set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
        return;
    }
    switch (((u16 *) p)[1]) {
    case 0:
    case 2:
    case 4:
        break;
    case 1:
    case 3:
        if (p[0x10] <= M2C_FIELD(arg0, s32 *, 0x64) || M2C_FIELD(arg0, s32 *, 0x64) < 0) {
            set_global_count__12TObjNpcEnemyFi(0xFF0000FF);
            debug_printf_at(0x24001A, lbl_80472620);
            set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = M2C_FIELD(arg0, s32 *, 0x64);
        }
        advance_animation_playback(arg0);
        break;
    }
}

void update_state__12TObjNpcEnemyFPv(void *arg0) {
    void *sp4;
    u16 temp_r0;

    sp4 = M2C_FIELD(arg0, void **, 0x3B8);
    temp_r0 = M2C_FIELD(sp4, u16 *, 2);
    switch ((s32) temp_r0) {
    case 0:
        set_global_flag__10TObjPlayerFv(arg0);
        draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
        reset_transform_state__10TObjPlayerFv();
        clear_global_state__10TObjPlayerFv();
        return;
    case 1:
        draw__16TObjEneRe7BeruraFPv();
        return;
    case 2:
        set_global_flag__10TObjPlayerFv(arg0);
        draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x34));
        reset_transform_state__10TObjPlayerFv();
        clear_global_state__10TObjPlayerFv();
        return;
    case 3:
        draw_model__12TObjNpcEnemyFPv();
    case 4:
        return;
    }
}

extern s32 some_id_805c6f74;
extern const f32 lbl_805DE7D8;

void render__12TObjNpcEnemyFv(u8 *arg0) {
    u8 *temp_r4;

    if (((void *) M2C_FIELD(arg0, void **, 0x3B8) != NULL) && (((NpcV_802d7748_802D745C *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0x398), M2C_FIELD(arg0, f32 *, 0x39C)) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x390) == 1)) {
        select_actor_lighting((void *) (arg0));
        if (TObjNpcEnemy__sub_802D7444((void *)((void *) (arg0))) != 0) {
            some_id_805c6f74 |= 1;
        }
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        push_matrix_from((int) (0));
        set_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (arg0 + 0x38));
        temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3B8));
        translate_matrix((int) (0), (int) (temp_r4), (f32) (lbl_805DE7D8), (f32) (M2C_FIELD(temp_r4, f32 *, 4)), (f32) (lbl_805DE7D8));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        update_state__12TObjNpcEnemyFPv((void *)((void *) (arg0)));
        pop_matrix();
        if (TObjNpcEnemy__sub_802D7444((void *)((void *) (arg0))) != 0) {
            some_id_805c6f74 &= 0xFFFFFFFE;
        }
        restore_scene_lighting();
        render_with_position_override__10TObjPlayerFPvPvi((void *) (arg0), (int) (0), (int) (0));
    }
}

extern M2C_UNK __vt__12TObjNpcEnemy[];

void *__dt__12TObjNpcEnemyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcEnemy;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

typedef char RecoveredGlobal_802D78A0_lbl_804A7CB8_size[sizeof(RecoveredGlobal_802D78A0_lbl_804A7CB8) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_802D78A0_lbl_804A7CDC_size[sizeof(RecoveredGlobal_802D78A0_lbl_804A7CDC) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_802D78A0_lbl_804E2680_size[sizeof(RecoveredGlobal_802D78A0_lbl_804E2680) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_802D78A0___vt__12TObjNpcEnemy_size[sizeof(RecoveredGlobal_802D78A0___vt__12TObjNpcEnemy) == 0x17C ? 1 : -1];
u8 *TObjNpcEnemy__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TObjNpcBase__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802D78A0___vt__12TObjNpcEnemy *)&__vt__12TObjNpcEnemy).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F58;
    ((VObj_18_cff70e *)(arg0))->m79(arg2);
    init_position_vectors__10TObjPlayerFi((void *) (arg0));
    ((VObj_18_cff70e *)(arg0))->m85(0, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0x350) = &lbl_804A7CDC.value;
    TObjPlayer__sub_8001882C((void *) (arg0), (void *) (&lbl_804A7CB8.value));
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804E2680.value), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    update_prev_position__10TObjPlayerFPv((void *) (arg0));
    copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
    set_npc_data__12TObjNpcEnemyFPvPv((void *)((void *) (arg0)), (void *)((int) (((s32)TObjNpcEnemy__sub_802D72E4((s16)((int) ((s16) M2C_FIELD(arg0, s32 *, 0x5C))))))));
    return arg0;
}

void * TObjNpcEnemy__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3BC);
    if (o2 != NULL) {
        o2 = TObjNpcEnemy__ct((u8 *)(o2), (M2C_UNK)(o), (s32)(arg0));
    }
    return o2;
}

}
