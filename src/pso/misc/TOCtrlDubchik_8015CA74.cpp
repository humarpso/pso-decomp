#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_65b835 { char pad[0x18]; };

struct VObj_18_65b835 : VBase_18_65b835 {
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
    virtual M2C_UNK m77(s32 *);
};

struct RecoveredGlobal_8015D314_lbl_804B0A10 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8015D314_lbl_804B0A10_size[sizeof(RecoveredGlobal_8015D314_lbl_804B0A10) == 0x10 ? 1 : -1];

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
};

struct RecoveredGlobal_8015D3CC_lbl_804B0A20 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015D3CC___vt__13TOCtrlDubchik {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct VBase_18_9ebd6c { char pad[0x18]; };

struct VObj_18_9ebd6c : VBase_18_9ebd6c {
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
    virtual s32 m37();
};

struct Pair_8015D518 { s32 a; s32 b; };

struct Obj_8015D518 {
    u8 pad0[0x326];
    s16 f326;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TLobby__sub_800F6510(void *, void *);
s32 exchange_object_state__6TLobbyFPvis(void *, void *, int);
s32 set_flag8__6TLobbyFPv(void *);
void complete_and_destroy__13TOCtrlDubchikFPv(u8 *arg0);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8015D314_lbl_804B0A10 lbl_804B0A10;
extern u32 TOCtrlDubchik__data_805D58F0;
void load_shared_resource__13TOCtrlDubchikFv(void);
M2C_UNK apply_actor_gravity(void *, void *, f32);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, s32);
void set_indexed_flags(void *, s32, s32);
extern const f32 TOCtrlDubchik__data_805DB3AC;
extern const f32 TOCtrlDubchik__data_805DB3B0;
extern const f32 TOCtrlDubchik__data_805DB3B4;
extern const f32 TOCtrlDubchik__data_805DB3B8;
void TOCtrlDubchik__sub_8015CCF4(u8 *arg0);
s32 try_start_action__10TObjPlayerFPvii(void *, void *, void *);
s32 TOCtrlDubchik__vt24(u8 *arg0, s32 arg1, s32 arg2);
s32 roll_physical_accuracy__10TObjPlayerFv(void *, void *, void *, f32);
s32 TOCtrlDubchik__vt25(u8 *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 init_position_vectors__10TObjPlayerFi(void *);
s32 initialize__9TObjEnemyFPv(void *);
void set_indexed_flags(void *, s32, s32);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
extern RecoveredGlobal_8015D3CC_lbl_804B0A20 lbl_804B0A20;
extern M2C_UNK __vt__13TOCtrlDubchik[];
extern s32 lbl_805D2F1C;
extern u32 TOCtrlDubchik__data_805D58F0;
extern const f32 TOCtrlDubchik__data_805DB3A8;
extern const f32 lbl_805DB3BC;
extern const f32 lbl_805DB3C8;
u8 *TOCtrlDubchik__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK apply_actor_gravity(void *, void *, f32);
f32 sin_table_lookup(s32);
extern const f32 TOCtrlDubchik__data_805DB3AC;
extern const f32 TOCtrlDubchik__data_805DB3B0;
extern const f32 TOCtrlDubchik__data_805DB3B4;
extern const f32 TOCtrlDubchik__data_805DB3B8;
void update_bobbing__13TOCtrlDubchikFPv(u8 *arg0);
void set_indexed_flags(void *, s32, s32);
extern const f32 TOCtrlDubchik__data_805DB3A8;
extern const f32 TOCtrlDubchik__data_805DB3B0;
void decay_timer_and_clear_flag__13TOCtrlDubchikFPv(u8 *arg0);
extern const f32 TOCtrlDubchik__data_805DB3A8;
extern const f32 TOCtrlDubchik__data_805DB3B0;
void TOCtrlDubchik__sub_8015CC30(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, void *, f32);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, s32);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
f32 sin_table_lookup(s32);
extern s32 lbl_805D29F8;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 TOCtrlDubchik__data_805DB3B4;
extern const f32 lbl_805DB3BC;
void TOCtrlDubchik__sub_8015CE80(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_testFlags30(void *, s32);
s32 check_demo_mode__10TObjPlayerFv(void);
s32 refresh_collision_body_centers(void *);
void TOCtrlDubchik__sub_8015C9D0(u8 *);
void complete_and_destroy__13TOCtrlDubchikFPv(u8 *arg0);
void decay_timer_and_clear_flag__13TOCtrlDubchikFPv(u8 *arg0);
void TOCtrlDubchik__sub_8015CC30(u8 *arg0);
void update_spin__13TOCtrlDubchikFPv(u8 *arg0);
void TOCtrlDubchik__sub_8015CCF4(u8 *arg0);
void update_bobbing__13TOCtrlDubchikFPv(u8 *arg0);
void TOCtrlDubchik__sub_8015CE80(u8 *arg0);
void submit_cursor_candidate(void *, s32);
void run_task__13TOCtrlDubchikFv(u8 *arg0);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
void spawn_particle_effect(void *, s32);
void TObjPlayer__sub_800A8C1C(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_sound_effect(s32, void *, s32, s32);
extern s32 lbl_805D29F8;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void TOCtrlDubchik__sub_8015CA74(void *arg0_);
f32 receive_direct_attack__10TObjPlayerFv(void *, s32, Pair_8015D518, void *, s32, s32);
extern const f32 TOCtrlDubchik__data_805DB3A8;
f32 TOCtrlDubchik__vt21(Obj_8015D518 *arg0, s32 arg1, Pair_8015D518 arg2, void *arg3);
}

extern "C" {

s32 TOCtrlDubchik__vt18(void *arg0);
void TOCtrlDubchik__vt23(void);
void *__dt__13TOCtrlDubchikFv(void *arg0, s16 arg1);
void *create__13TOCtrlDubchikFPv(void *arg0);
void destroy_instance__13TOCtrlDubchikFv(void);
void update_spin__13TOCtrlDubchikFPv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK apply_actor_gravity(void *, void *, f32);
s32 select_melee_contact_body__10TObjPlayerFv();
M2C_UNK unregister_object_by_id(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

extern const f64 TOCtrlDubchik__data_80440990;
extern const f32 TOCtrlDubchik__data_805DB3B4;
extern const f32 TOCtrlDubchik__data_805DB3B8;

void TOCtrlDubchik__sub_8015CA74(void *arg0_) {
    u8 *arg0 = (u8 *)arg0_;
    s32 state;
    s32 i;
    u8 *p;
    spawn_particle_effect(arg0 + 0x38, 0x45);
    spawn_particle_effect(arg0 + 0x38, 0x46);
    state = get_global_state__14TOKeyMachine01Fv();
    if (state >= 0x17 || state < 0x13) {
        play_sound_effect(0x4003AD16, arg0 + 0x38, 0, 0);
    }
    for (i = lbl_805D586C; i < lbl_805D586C + lbl_805D5870; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && p != arg0 && check_value_equals__13TQuestColCtrlFPvi(p, lbl_805D29F8) != 0 &&
            *(s32 *)(p + 0x368) == 0 && *(s16 *)(arg0 + 0x28) == *(s16 *)(p + 0x28)) {
            TObjPlayer__sub_800A8C1C(p);
        }
    }
}

void complete_and_destroy__13TOCtrlDubchikFPv(u8 *arg0) {
    s32 sp8;
    if (exchange_object_state__6TLobbyFPvis((void *) (arg0), (void *) (&sp8), (int) (1)) != 0) {
        sp8 = 1;
        TLobby__sub_800F6510((void *) (arg0), (void *) (&sp8));
        exchange_object_state__6TLobbyFPvis((void *) (arg0), (void *) (&sp8), (int) (0));
        ((VObj_18_65b835 *)(arg0))->m77(&sp8);
        TOCtrlDubchik__sub_8015CA74((void *)((void *) (arg0)));
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

#pragma push
#pragma opt_common_subs off
void decay_timer_and_clear_flag__13TOCtrlDubchikFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x384) = (f32) (M2C_FIELD(arg0, f32 *, 0x384) - TOCtrlDubchik__data_805DB3B0);
    if (M2C_FIELD(arg0, f32 *, 0x384) < TOCtrlDubchik__data_805DB3A8) {
        M2C_FIELD(arg0, f32 *, 0x384) = (f32) TOCtrlDubchik__data_805DB3A8;
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
        set_indexed_flags((void *)((void *) (arg0)), (s32)((int) (0)), (s32)((int) (0x08000000)));
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TOCtrlDubchik__sub_8015CC30(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x388) = (f32) (M2C_FIELD(arg0, f32 *, 0x388) - TOCtrlDubchik__data_805DB3B0);
    if (M2C_FIELD(arg0, f32 *, 0x388) < TOCtrlDubchik__data_805DB3A8) {
        M2C_FIELD(arg0, f32 *, 0x388) = (f32) TOCtrlDubchik__data_805DB3A8;
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
    }
}
#pragma pop

void update_spin__13TOCtrlDubchikFPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x380);
    temp_f1 = (f32) temp_r4;
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) (temp_f1 + TOCtrlDubchik__data_805DB3B4);
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) (TOCtrlDubchik__data_805DB3B8 + sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x380)));
    apply_actor_gravity(arg0, arg0 + 0x390, M2C_FIELD(arg0, f32 *, 0x37C));
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) + 0x147);
}

extern void *tl_05;

#pragma fp_contract on
void TOCtrlDubchik__sub_8015CCF4(u8 *arg0) {
  f32 new_var2;
  f32 new_var4;
  f32 *new_var;
  s8 *new_var3;
  *((s32 *) (((s8 *) arg0) + 0x380)) = (s32) (((f32) (*((s32 *) (((s8 *) arg0) + 0x380)))) + TOCtrlDubchik__data_805DB3B4);
  new_var3 = ((s8 *) arg0) + 0x380;
  *((f32 *) (((s8 *) arg0) + 0x37C)) = (f32) (TOCtrlDubchik__data_805DB3B8 + sin_table_lookup((s32)(*((s32 *) new_var3))));
  new_var = &(*((f32 *) (((s8 *) arg0) + 0x37C)));
  apply_actor_gravity(arg0, arg0 + 0x390, *new_var);
  new_var4 = *((f32 *) (((s8 *) arg0) + 0x388));
  *((f32 *) (((s8 *) arg0) + 0x388)) = (f32) (new_var4 + TOCtrlDubchik__data_805DB3B0);
  if (TOCtrlDubchik__data_805DB3AC < (*((f32 *) (((s8 *) arg0) + 0x388))))
  {
    new_var2 = (f32) TOCtrlDubchik__data_805DB3AC;
    *((f32 *) (((s8 *) arg0) + 0x388)) = new_var2;
    *((s16 *) (((s8 *) arg0) + 0x326)) = 3;
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08000004);
 do { set_indexed_flags(arg0, 0, 2); } while (0 != 0U);
  }
  new_var4 = new_var4;
}

#pragma push
#pragma opt_common_subs off
void update_bobbing__13TOCtrlDubchikFPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x380);
    temp_f1 = (f32) temp_r4;
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) (temp_f1 + TOCtrlDubchik__data_805DB3B4);
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) (TOCtrlDubchik__data_805DB3B8 + sin_table_lookup((s32)((int) (M2C_FIELD(arg0, s32 *, 0x380)))));
    apply_actor_gravity((void *) (arg0), (void *) (arg0 + 0x390), (f32) (M2C_FIELD(arg0, f32 *, 0x37C)));
    M2C_FIELD(arg0, f32 *, 0x384) = (f32) (M2C_FIELD(arg0, f32 *, 0x384) + TOCtrlDubchik__data_805DB3B0);
    if (TOCtrlDubchik__data_805DB3AC < M2C_FIELD(arg0, f32 *, 0x384)) {
        M2C_FIELD(arg0, f32 *, 0x384) = (f32) TOCtrlDubchik__data_805DB3AC;
        M2C_FIELD(arg0, s16 *, 0x326) = 2;
    }
}
#pragma pop

void TOCtrlDubchik__sub_8015CE80(u8 *arg0) {
    s32 i;
    u8 *p;
    *(s32 *)(arg0 + 0x380) = (f32)*(s32 *)(arg0 + 0x380) + TOCtrlDubchik__data_805DB3B4;
    *(f32 *)(arg0 + 0x37C) = lbl_805DB3BC + sin_table_lookup(*(s32 *)(arg0 + 0x380));
    apply_actor_gravity(arg0, arg0 + 0x390, *(f32 *)(arg0 + 0x37C));
    for (i = lbl_805D586C; i < lbl_805D586C + lbl_805D5870; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && p != arg0 && obj_testFlags30(p, 0x800) != 0 &&
            check_value_equals__13TQuestColCtrlFPvi(p, lbl_805D29F8) != 0 &&
            *(s32 *)(p + 0x368) == 0 && *(s16 *)(arg0 + 0x28) == *(s16 *)(p + 0x28)) {
            *(s16 *)(arg0 + 0x326) = 1;
        }
    }
}

void run_task__13TOCtrlDubchikFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOCtrlDubchik__sub_8015C9D0(arg0);
        return;
    }
    if (obj_testFlags30(arg0, 0x800) != 0) {
        *(s16 *)(arg0 + 0x326) = 6;
    } else if (((VObj_18_9ebd6c *)(arg0))->m37() != 0) {
        refresh_collision_body_centers(arg0);
        submit_cursor_candidate(arg0, -1);
        return;
    }
    switch (*(s16 *)(arg0 + 0x326)) {
    case 0:
        TOCtrlDubchik__sub_8015CE80(arg0);
        break;
    case 1:
        update_bobbing__13TOCtrlDubchikFPv(arg0);
        break;
    case 2:
        TOCtrlDubchik__sub_8015CCF4(arg0);
        break;
    case 3:
        update_spin__13TOCtrlDubchikFPv(arg0);
        break;
    case 4:
        TOCtrlDubchik__sub_8015CC30(arg0);
        break;
    case 5:
        decay_timer_and_clear_flag__13TOCtrlDubchikFPv(arg0);
        break;
    case 6:
        complete_and_destroy__13TOCtrlDubchikFPv(arg0);
        break;
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    refresh_collision_body_centers(arg0);
    submit_cursor_candidate(arg0, -1);
}

void *create__13TOCtrlDubchikFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3A0);
    if (o != NULL) {
        o = TOCtrlDubchik__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOCtrlDubchik__data_805D58F0;

void destroy_instance__13TOCtrlDubchikFv(void) {
    if ((u32) TOCtrlDubchik__data_805D58F0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOCtrlDubchik__data_805D58F0, 1);
        TOCtrlDubchik__data_805D58F0 = 0U;
    }
}

extern M2C_UNK __vt__13TOCtrlDubchik[];

void load_shared_resource__13TOCtrlDubchikFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804B0A10.value, 0, 0, 0));
    }
    (*(s32 *)&TOCtrlDubchik__data_805D58F0) = var_r0;
}

void *__dt__13TOCtrlDubchikFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TOCtrlDubchik;
        unregister_object_by_id((M2C_UNK *)arg0);
        free_collision_body_parts(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8015D3CC_lbl_804B0A20_size[sizeof(RecoveredGlobal_8015D3CC_lbl_804B0A20) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015D3CC___vt__13TOCtrlDubchik_size[sizeof(RecoveredGlobal_8015D3CC___vt__13TOCtrlDubchik) == 0x14C ? 1 : -1];
u8 *TOCtrlDubchik__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    initialize__9TObjEnemyFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8015D3CC___vt__13TOCtrlDubchik *)&__vt__13TOCtrlDubchik).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F1C;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    init_position_vectors__10TObjPlayerFi((void *) (arg0));
    M2C_FIELD(arg0, u8 **, 0x34) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOCtrlDubchik__data_805D58F0), u8 **, 0x42C), void **, 8));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOCtrlDubchik__data_805D58F0), u8 **, 0x42C), s32 *, 0xC);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B0A20.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    set_indexed_flags((void *)((void *) (arg0)), (s32)((int) (0)), (s32)((int) (0x08000000)));
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s16 *, 0x32C) = 0x12C;
    M2C_FIELD(arg0, s16 *, 0x2B8) = 0x12C;
    M2C_FIELD(arg0, f32 *, 0x374) = (f32) lbl_805DB3C8;
    M2C_FIELD(arg0, f32 *, 0x378) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) lbl_805DB3BC;
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
    M2C_FIELD(arg0, f32 *, 0x384) = (f32) TOCtrlDubchik__data_805DB3A8;
    M2C_FIELD(arg0, f32 *, 0x388) = (f32) TOCtrlDubchik__data_805DB3A8;
    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x390), (void *) (arg0 + 0x50));
    M2C_FIELD(arg0, s32 *, 0x39C) = 1;
    return arg0;
}

s32 TOCtrlDubchik__vt18(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x326) != 0) {
        return select_melee_contact_body__10TObjPlayerFv();
    }
    return 0;
}

f32 TOCtrlDubchik__vt21(Obj_8015D518 *arg0, s32 arg1, Pair_8015D518 arg2, void *arg3) {
    if (arg0->f326 != 0) {
        return receive_direct_attack__10TObjPlayerFv(arg0, arg1, arg2, arg3, -1, -1);
    }
    return TOCtrlDubchik__data_805DB3A8;
}

s32 TOCtrlDubchik__vt24(u8 *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s16 *, 0x326) != 0) {
        return try_start_action__10TObjPlayerFPvii((void *) (arg0), (void *) (arg1), (void *) (arg2));
    }
    return 0;
}

s32 TOCtrlDubchik__vt25(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    if (M2C_FIELD(arg0, s16 *, 0x326) != 0) {
        return roll_physical_accuracy__10TObjPlayerFv((void *) (arg0), (void *) (arg1), (void *) (arg2), (f32) (farg0));
    }
    return 0;
}

void TOCtrlDubchik__vt23(void) {  }

}
