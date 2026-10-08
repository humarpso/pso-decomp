#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801793A8_8017939C { char pad[0x18]; };
struct VObj_801793A8_8017939C : Base_801793A8_8017939C {
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
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
};

struct RecoveredGlobal_80179E34_lbl_804B4834
{
  M2C_UNK value;
  u8 remaining[0xC];
};

struct E_8017A1A4 { u8 pad[0xc]; f32 f; u8 pad2[0x2c - 0x10]; };

struct Obj_8017A1A4 { u8 pad[0xa4]; E_8017A1A4 *arr; };

typedef s32 M2C_UNK;
struct Self_80179EC0 { u8 pad[0x18]; M2C_UNK *vt; u8 pad1c[0x358 - 0x1C]; u8 arr[4][0x1C]; };

struct VBase_18_a8c792 { char pad[0x18]; };

struct VObj_18_a8c792 : VBase_18_a8c792 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
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
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual f32 m85(f32);
};

struct Self_80179F40 { u8 pad[0x358]; u8 arr[4][0x1C]; };

struct VBase_801797D4 { char pad[0x18]; };

struct VObj_801797D4 : VBase_801797D4 {
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
    virtual void m20(s32, f32);
    virtual void m21(void *, void *, s32, s32, s32);
    virtual void m22();
    virtual void m23(void *, f32);
};

struct Ent_801797D4 { u8 pad[0xC]; f32 fC; };

struct Pair_801797D4 { s32 a; s32 b; };

struct Trap_801797D4 : VObj_801797D4 {
    u8 pad1C[0xA4 - 0x1C];
    Ent_801797D4 *fA4;
    u8 padA8[0x2A8 - 0xA8];
    s32 f2A8;
    u8 pad2AC[0x344 - 0x2AC];
    Pair_801797D4 f344;
    u8 pad34C[0x354 - 0x34C];
    f32 f354;
};

extern "C" {
void set_triggered_state__6TOTrapFPvUi(void *, void *, f32);
void TOTrapAncient01__vt20(void *arg0, void *arg1, f32 farg0);
u16 obj_getField1c(void *);
M2C_UNK obj_clear_flag30_20000(int);
s32 check_player_flag1__6TLobbyFPv();
M2C_UNK send_code_45_1__10TObjPlayerFi(int);
s32 get_player_by_client_id(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 lbl_805D53A0;
void release_trapped_player__15TOTrapAncient01FPv(u8 *arg0);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
M2C_UNK add_entry__11TMotorcycleFsiiff(int, int, int, f32, f32);
extern RecoveredGlobal_80179E34_lbl_804B4834 lbl_804B4834;
extern u32 TOTrapAncient01__data_805D5AD0;
extern const f32 TOTrapAncient01__data_805DBA4C;
extern const f32 lbl_805DBA5C;
void load_resources__15TOTrapAncient01Fv(void);
f32 TObjPlayer__sub_8017A1A4(Obj_8017A1A4 *self, s32 i);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK __destroy_arr(void *, void *, int, int);
void TObjPlayer__sub_800D7C58(void);
void *__dt__6TOTrapFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
extern M2C_UNK __vt__15TOTrapAncient01[];
Self_80179EC0 *__dt__15TOTrapAncient01Fv(Self_80179EC0 *self, s16 flag);
s32 get_main_phase();
void calc_attach_pos__10TObjPlayerFPv(void *);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
s32 init_position_vectors__10TObjPlayerFi(void *);
void activate_and_dispatch__10TObjPlayerFPv(void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
void TOTrap__ct(void *, void *, void *);
M2C_UNK get_or_assign_actor_id(void *, int);
void __construct_array(void *, void *, void *, int, int);
void TObjPlayer__sub_800D7C58(void);
void init_and_activate__10TObjPlayerFPv(void *);
extern M2C_UNK lbl_804B4844[];
extern M2C_UNK __vt__15TOTrapAncient01[];
extern s32 lbl_805D31A4;
extern u32 TOTrapAncient01__data_805D5AD0;
extern const f32 lbl_805DBA54;
extern const f32 lbl_805DBA6C;
extern const f32 lbl_805DBA74;
void *TOTrapAncient01__ct(void *arg0, void *arg1, void *arg2);
void calc_attach_pos__10TObjPlayerFPv(void *);
void set_indexed_flags(void *, int, int);
void init_all_slots__10TObjPlayerFv(void);
void check_object_collisions__10TObjPlayerFPv(void *);
VObj_801797D4 *get_battle_param__10TObjPlayerFi(s32);
s32 obj_is_hit_receivable(void *);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
void submit_cursor_candidate(void *, s32);
u32 get_global_state__14TOKeyMachine01Fv(void);
void play_persistent_sound(s32, void *, void *, s32, s32);
extern s32 lbl_805D3530;
extern const f32 lbl_805DBA48;
extern const f32 TOTrapAncient01__data_805DBA4C;
extern const f32 lbl_805DBA54;
void TOTrapAncient01__vt80(Trap_801797D4 *self);
}

extern "C" {

void TOTrapAncient01__vt4(void *arg0, s16 *arg1, s32 arg2);
void TOTrapAncient01__vt82(void);
void TOTrapAncient01__vt84(void);
void TOTrapAncient01__vt86(void);
void TOTrapAncient02R__vt84(void *arg0);
void TOTrap__sub_8017939C(void);
void *create__15TOTrapAncient01FPv(void *arg0);
void release_static_resource__15TOTrapAncient01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void TOTrapAncient02R__sub_80141CF0(void *, void *, void *);
void TOTrapAncient02R__sub_80154D78(void *);
void *__nw__7TObjectFUl(int);
s32 fn_800FD8B4(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);

void TOTrap__sub_8017939C(void) {  }
void TOTrapAncient01__vt84(void) {  }
void TOTrapAncient01__vt86(void) {  }

void TOTrapAncient01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 4) {
        if (arg2 == 1) {
            ((VObj_801793A8_8017939C *)arg0)->m83();
        }
        release_trapped_player__15TOTrapAncient01FPv((u8 *)(arg0));
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

void release_trapped_player__15TOTrapAncient01FPv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        if (M2C_FIELD(arg0, void **, 0x2A8) != NULL) {
            temp_r3 = get_player_by_client_id((void *) (obj_getField1c(M2C_FIELD(arg0, void **, 0x2A8))));
            if (temp_r3 != 0) {
                if (check_player_flag1__6TLobbyFPv() != 0) {
                    send_code_45_1__10TObjPlayerFi((int) (temp_r3));
                }
                obj_clear_flag30_20000((int) (temp_r3));
            }
        }
    } else if ((M2C_FIELD(arg0, void **, 0x2A8) != NULL) && ((s32) lbl_805D53A0 == (s32) obj_getField1c(M2C_FIELD(arg0, void **, 0x2A8)))) {
        temp_r3_2 = get_player_by_client_id((void *) lbl_805D53A0);
        if (temp_r3_2 != 0) {
            if (check_player_flag1__6TLobbyFPv() != 0) {
                send_code_45_1__10TObjPlayerFi((int) (temp_r3_2));
            }
            obj_clear_flag30_20000((int) (temp_r3_2));
        }
    }
}

void TOTrapAncient01__vt20(void *arg0, void *arg1, f32 farg0) {
    release_trapped_player__15TOTrapAncient01FPv((u8 *)(arg0));
    set_triggered_state__6TOTrapFPvUi(arg0, arg1, farg0);
}

void TOTrapAncient01__vt82(void) {  }

extern void *tl_05;

void TOTrapAncient01__vt80(Trap_801797D4 *self) {
    s32 i;
    VObj_801797D4 *p;
    calc_attach_pos__10TObjPlayerFPv(self);
    self->f354 -= lbl_805DBA48;
    if (self->f354 < TOTrapAncient01__data_805DBA4C) {
        self->fA4->fC = lbl_805DBA54;
        set_indexed_flags(self, 0, 0x100);
        init_all_slots__10TObjPlayerFv();
        check_object_collisions__10TObjPlayerFPv(self);
        for (i = 0; i < 16; i++) {
            p = get_battle_param__10TObjPlayerFi(i);
            if (p == 0) {
                break;
            }
            if (obj_is_hit_receivable(p) == 0) {
                break;
            }
            if (check_value_equals__13TQuestColCtrlFPvi(p, lbl_805D3530) == 0) {
                break;
            }
            {
            Pair_801797D4 v = self->f344;
            p->m21(self, &v, 0, -1, -1);
            }
            if (self->f344.a < 5) {
                p->m23(self, TOTrapAncient01__data_805DBA4C);
            }
        }
        self->m20(self->f2A8, lbl_805DBA48);
    }
    submit_cursor_candidate(self, -1);
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 8:
    case 9:
    case 10:
        play_persistent_sound(0x4004C618, self, (u8 *)self + 0x38, 0, 0);
        break;
    case 21:
    case 22:
        play_persistent_sound(0x4004C610, self, (u8 *)self + 0x38, 0, 0);
        break;
    case 0:
        return;
    case 1:
        break;
    case 2:
        return;
    case 3:
        break;
    case 4:
        return;
    case 5:
        break;
    case 6:
        return;
    case 7:
        break;
    case 11:
        break;
    case 12:
        return;
    case 13:
        break;
    case 14:
        return;
    case 15:
        break;
    case 16:
        return;
    case 17:
        break;
    case 18:
        return;
    case 19:
        break;
    case 20:
        return;
    }
}

void *create__15TOTrapAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3C8);
    if (o != NULL) {
        o = TOTrapAncient01__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern u32 TOTrapAncient01__data_805D5AD0;

void release_static_resource__15TOTrapAncient01Fv(void) {
    if ((u32) TOTrapAncient01__data_805D5AD0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOTrapAncient01__data_805D5AD0, 1);
        TOTrapAncient01__data_805D5AD0 = 0U;
    }
}

extern M2C_UNK lbl_8050BEE0[];
extern M2C_UNK lbl_804A7468[];

typedef struct RecoveredGlobal_80179E34_lbl_804B4834 RecoveredGlobal_80179E34_lbl_804B4834;
void load_resources__15TOTrapAncient01Fv(void) {
  s32 temp_r31;
  int new_var;
  s32 temp_r3;
  s32 var_r0;
  temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *) 0x440);
  var_r0 = temp_r3;
  temp_r31 = var_r0;
  new_var = 0;
  if (temp_r31 != new_var)
  {
    var_r0 = (long) load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804B4834.value, 0, 0, 0);
  }
  (*(u8 * *)&TOTrapAncient01__data_805D5AD0) = (unsigned char *) ((void *) var_r0);
  temp_r31 = TObjFish__sub_8001EDB0((void *) var_r0, 3);
  add_entry__11TMotorcycleFsiiff((int) 0x39, (int) get_bml_model((*(u8 * *)&TOTrapAncient01__data_805D5AD0), 3), (int) temp_r31, (f32) lbl_805DBA5C, (f32) TOTrapAncient01__data_805DBA4C);
}

Self_80179EC0 *__dt__15TOTrapAncient01Fv(Self_80179EC0 *self, s16 flag) {
    if (self != 0) {
        self->vt = __vt__15TOTrapAncient01;
        unregister_object_by_id(self);
        free_collision_body_parts(self);
        __destroy_arr(self->arr, (void *)TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__6TOTrapFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

#pragma push
#pragma fp_contract on
#define self ((u8 *)arg0)
void *TOTrapAncient01__ct(void *arg0, void *arg1, void *arg2) {
    s32 i;
    TOTrap__ct(arg0, arg1, arg2);
    M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__15TOTrapAncient01;
    __construct_array(self + 0x358, (void *)init_and_activate__10TObjPlayerFPv, (void *)TObjPlayer__sub_800D7C58, 0x1C, 4);
    M2C_FIELD(self, s32 *, 0) = lbl_805D31A4;
    ((VObj_18_a8c792 *)arg0)->m5((s32)arg2);
    init_position_vectors__10TObjPlayerFi(arg0);
    calc_attach_pos__10TObjPlayerFPv(arg0);
    M2C_FIELD(self, s32 *, 0x34) = get_bml_model((void *)TOTrapAncient01__data_805D5AD0, 3);
    M2C_FIELD(self, s32 *, 0x24) = TObjFish__sub_8001EDB0((void *)TOTrapAncient01__data_805D5AD0, 3);
    M2C_FIELD(self, s16 *, 0x326) = 0;
    M2C_FIELD(self, f32 *, 0x334) = 0.5f * M2C_FIELD(self, f32 *, 0x68) + 30.0f;
    if (M2C_FIELD(self, f32 *, 0x6C) < 0.0f) {
        M2C_FIELD(self, f32 *, 0x6C) = 0.0f;
    }
    if (M2C_FIELD(self, f32 *, 0x70) < 1.0f) {
        M2C_FIELD(self, f32 *, 0x70) = 1.0f;
    }
    M2C_FIELD(self, f32 *, 0x34C) = -M2C_FIELD(self, f32 *, 0x6C) / M2C_FIELD(self, f32 *, 0x70);
    M2C_FIELD(self, f32 *, 0x350) = lbl_805DBA6C + (f32)M2C_FIELD(self, s32 *, 0x8C);
    if (get_main_phase() == 0xE) {
        M2C_FIELD(self, f32 *, 0x350) *= lbl_805DBA74;
    }
    if (M2C_FIELD(self, f32 *, 0x350) < 0.0f) {
        M2C_FIELD(self, f32 *, 0x350) = 0.0f;
    }
    M2C_FIELD(self, f32 *, 0x354) = M2C_FIELD(self, f32 *, 0x350);
    if (M2C_FIELD(self, s32 *, 0x84) < 0) {
        M2C_FIELD(self, s32 *, 0x84) = 0;
    }
    M2C_FIELD(self, f32 *, 0x348) = ((VObj_18_a8c792 *)arg0)->m85((f32)M2C_FIELD(self, s32 *, 0x84));
    if (M2C_FIELD(self, s32 *, 0x88) < 0) {
        M2C_FIELD(self, s32 *, 0x88) = 0;
    } else if (M2C_FIELD(self, s32 *, 0x88) > 5) {
        M2C_FIELD(self, s32 *, 0x88) = 5;
    }
    M2C_FIELD(self, s32 *, 0x344) = M2C_FIELD(self, s32 *, 0x88);
    M2C_FIELD(self, f32 *, 0x338) = lbl_805DBA54;
    M2C_FIELD(self, u16 *, 0x33C) = 0xFFFF;
    init_collision_body_parts(arg0, lbl_804B4844, 1);
    refresh_collision_body_centers(arg0);
    M2C_FIELD(self, u32 *, 0x30) |= 0x60040000;
    get_or_assign_actor_id(arg0, 0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(((Self_80179F40 *)arg0)->arr[i]);
    }
    return arg0;
}
#undef self
#pragma pop

f32 TObjPlayer__sub_8017A1A4(Obj_8017A1A4 *self, s32 i) {
    return self->arr[i].f;
}

void TOTrapAncient02R__vt84(void *arg0) {
    s32 x;
    x = fn_800FD8B4(arg0);
    if (x == 1) {
        TOTrapAncient02R__sub_80141CF0((void *)((char *)arg0 + 80), lbl_8050BEE0, lbl_804A7468);
        TOTrapAncient02R__sub_80154D78(arg0);
    }
}

}
