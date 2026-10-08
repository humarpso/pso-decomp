#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Trap_8016F704 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x84 - 0x44]; s32 delay; u8 pad88[0x2A8 - 0x88]; void *target; u8 pad2AC[0x34C - 0x2AC]; f32 range; u8 pad350[0x35C - 0x350]; u16 targetId; };
extern "C" {
s32 obj_testFlags30(void *, u32);
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 horizontal_distance_squared(void *, void *);
u16 get_trap_type__10TOMineTrapFPv(void *);
s32 get_trap_count__10TOMineTrapFv(void);
u8 get_rule_field_0__6TLobbyFPv(void *);
extern u8 lbl_8050EA40[];
s32 find_target_in_range__10TOMineTrapFPv(Trap_8016F704 *self);
}

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m81();
};

struct Base_801708A4_8016F6F8 { char pad[0x18]; };

struct VObj_801708A4_8016F6F8 : Base_801708A4_8016F6F8 {
    virtual int v00();
    virtual int v01();
    virtual int v02();
    virtual int v03();
    virtual int v04();
    virtual int v05();
    virtual int v06();
    virtual int v07();
    virtual int v08();
    virtual int v09();
    virtual int v10();
    virtual int v11();
    virtual int v12();
    virtual int v13();
    virtual int v14();
    virtual int v15();
    virtual int v16();
    virtual int v17();
    virtual int v18();
    virtual int v19();
    virtual void v20(int, f32);
};

struct VBase_18_d0f3c0 { char pad[0x18]; };

struct VObj_18_d0f3c0 : VBase_18_d0f3c0 {
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
    virtual M2C_UNK m79();
};

struct VBase_18_33b813
{
  char pad[0x18];
};

struct VObj_18_33b813 : VBase_18_33b813 {
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
    virtual M2C_UNK m20(M2C_UNK, f32);
};

struct Stack_80170AC8
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

struct Node_801702C8 { u8 pad[0xC]; Node_801702C8 *next; };

struct Self_801702C8 { u8 pad[0x14]; Node_801702C8 *head; };

struct VBase_18_1da615 { char pad[0x18]; };

struct VObj_18_1da615 : VBase_18_1da615 {
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
    virtual M2C_UNK m20(M2C_UNK, f32);
    virtual f32 m21(void *, void *, s32, s32, s32);
    virtual void m22();
    virtual M2C_UNK m23(void *, f32);
};

struct Pair_80170DD8 { s32 a; s32 b; };

extern "C" {
void set_indexed_flags(void *, s32, s32);
void TOMineTrap__sub_8016F87C(u8 *arg0);
void set_indexed_flags(void *, s32, s32);
void TOMineTrap__vt84(u8 *arg0);
int TOMineTrap__sub_80170340(void);
int TOMineTrap__sub_80170348(void);
void TOMineTrap__sub_80170350(void);
void TOMineTrap__sub_80170354(void);
s32 is_locally_controlled__10TObjPlayerFPv(u32 a0);
s32 check_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1);
s32 is_locally_controlled__10TObjPlayerFPv(u32 a0);
s32 can_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK apply_object_set_data();
void TOMineTrap__sub_80170524(u8 *arg0);
void TOMineTrap__sub_80170570(void);
int get_localized_text_entry(void*, void*);
void init_trap__10TOMineTrapFv(void);
s32 get_main_phase();
void update_state__10TOMineTrapFPv(void *arg0);
M2C_UNK play_sound_effect(s32, s32, M2C_UNK, M2C_UNK);
s32 get_global_state__14TOKeyMachine01Fv();
extern s8 lbl_804420A8[];
void spawn_effect__10TOMineTrapFi(s32 arg0);
M2C_UNK play_sound_effect(s32, s32, M2C_UNK, M2C_UNK);
s32 get_global_state__14TOKeyMachine01Fv();
extern s8 lbl_80442018[];
void attach_to_keymachine__10TOMineTrapFi(s32 arg0);
u32 spawn_particle_effect(s32, M2C_UNK);
M2C_UNK set_position_xy__10TObjPlayerFPvff(f32, f32);
extern f32 lbl_805DB864;
void detonate_if_triggered__10TOMineTrapFi(s32 arg0);
u32 spawn_particle_effect(s32, M2C_UNK);
void TOMineTrap__sub_8017070C(u8 *arg0);
s32 access_object_saved_state(void*, s16 *, M2C_UNK);
M2C_UNK send_object_state_update(void *, s16 *);
extern f32 lbl_805DB85C;
f32 trigger_explosion__10TOMineTrapFPv(void *arg0);
s32 is_locally_controlled__10TObjPlayerFPv(u32 a0);
s16 obj_getS16_116(s32);
extern f32 lbl_805DB85C;
extern const f32 TOMineTrap__data_805DB868;
f32 calc_trigger_range__10TOMineTrapFPvi(void *arg0, s32 arg1);
s32 access_object_saved_state(void*, s16 *, M2C_UNK);
M2C_UNK send_object_state_update(void *, s16 *);
void update_trigger__10TOMineTrapFPv(void *arg0);
void calc_attach_pos__10TObjPlayerFPv(void *);
void set_indexed_flags(void *, s32, s32);
int refresh_collision_body_centers(void*);
void TOMineTrap__sub_80170A5C(u8 *arg0);
void TOMineTrap__sub_80170CD4(void* p);
int refresh_collision_body_centers(void*);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void sync_position__10TOMineTrapFPv(void* p);
s32 is_locally_controlled__10TObjPlayerFPv(u32 a0);
u16 obj_getField1c(void *);
extern f32 lbl_805DB85C;
extern const f32 TOMineTrap__data_805DB868;
f32 TOMineTrap__sub_80170924(u8 *arg0, s32 arg1, s32 *arg2);
f32 sin_table_lookup(s32);
extern const f32 TOMineTrap__data_805DB868;
extern const f32 lbl_805DB884;
extern const f32 lbl_805DB888;
void TOMineTrap__sub_80170CF4(u8 *arg0);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
void calc_attach_pos__10TObjPlayerFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int refresh_collision_body_centers(void*);
s32 update_enemy_collision_flags__10TObjPlayerFPv(void *);
f32 vec3_add_to(void *, void *);
f32 vec_squared_length(void *);
f32 subtract_vector(void *, void *);
f32 normalize_vector(void *);
extern const f64 lbl_80442200;
extern const f32 lbl_805DB870;
extern const f32 lbl_805DB884;
extern const f32 lbl_805DB888;
void follow_target__10TOMineTrapFPv(u8 *arg0);
void calc_attach_pos__10TObjPlayerFPv(void *);
s32 queue_destruction__7TObjectFv(void *);
void set_indexed_flags(void *, s32, s32);
int refresh_collision_body_centers(void*);
s32 access_object_saved_state(void*, s16 *, M2C_UNK);
void TOMineTrap__sub_8017070C(u8 *arg0);
s32 set_flag8__6TLobbyFPv(void *);
s32 queue_destruction_for_each_node__7TObjectFv(void *);
void TOMineTrap__sub_80170768(u8 *arg0, s16 *arg1, s32 arg2);
u16 obj_getField1c(void *);
s32 matches_id__10TOMineTrapFPvUs(void *arg0, u16 arg1);
s32 TOMineTrap__sub_801702C8(Self_801702C8 *self, void *obj);
void *get_player_data__10TObjPlayerFi(s32);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
s32 queue_destruction__7TObjectFv(void *);
extern s32 TOMineTrap__data_805D3080;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern s32 lbl_805D5868;
void TOMineTrap__sub_8016FCC4(void);
void *get_player_data__10TObjPlayerFi(s32);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
void update_trigger__10TOMineTrapFPv(void *arg0);
void sync_position__10TOMineTrapFPv(void* p);
extern s32 lbl_805D3090;
extern s32 lbl_805D3098;
extern s32 lbl_805D30A0;
extern s32 lbl_805D30A8;
extern s32 lbl_805D5868;
extern s32 lbl_805D5870;
void TOMineTrap__sub_80170BEC(u8 *arg0);
u8 *get_battle_param__10TObjPlayerFi(s32);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, s32);
void set_indexed_flags(void *, s32, s32);
void init_all_slots__10TObjPlayerFv(void);
void check_enemy_body_collisions(void *);
void check_object_collisions__10TObjPlayerFPv(void *);
s32 is_valid_and_active__10TObjPlayerFUi(void *);
extern const f32 TOMineTrap__data_805DB868;
extern const f32 lbl_805DB874;
void detonate__10TOMineTrapFPv(u8 *arg0);
}

extern "C" {

void *__dt__10TOMineTrapFv(void *arg0, s16 arg1);
void* get_mine_data_ptr__10TOMineTrapFPv(void* p);
void set_state__10TOMineTrapFPv(void* p);
M2C_UNK free_collision_body_parts(void *);
s32 is_locally_controlled__10TObjPlayerFPv(u32 a0 = 0);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__6TOMineFv(void *, M2C_UNK);

void set_state__10TOMineTrapFPv(void* p) { *(s16*)((char*)p + 0x326) = 4; }

s32 find_target_in_range__10TOMineTrapFPv(Trap_8016F704 *self) {
    u8 *p;
    s32 i;
    u16 id;

    self->targetId = 0xFFFF;
    self->target = 0;
    if (self->delay > 0) {
        self->delay--;
        return 0;
    }
    for (i = 0; i < lbl_805D586C + lbl_805D5870; i++) {
        p = (u8 *)get_player_data__10TObjPlayerFi(i);
        if (p == 0 || p == (u8 *)self || obj_testFlags30(p, 0x800) != 0) {
            continue;
        }
        id = obj_getField1c(p);
        if (id == 0xFFFF) {
            continue;
        }
        if (id == get_trap_type__10TOMineTrapFPv(self) && get_trap_count__10TOMineTrapFv() != 1 &&
            get_rule_field_0__6TLobbyFPv(lbl_8050EA40) != 0) {
            continue;
        }
        if (id < 0x1000) {
            if (get_field_3e4__10TObjPlayerFPv(p) != get_current_floor()) {
                continue;
            }
            if (horizontal_distance_squared(self->pos, p + 0x38) < self->range * self->range) {
                self->targetId = id;
                self->target = p;
                return 1;
            }
        } else if (id < 0x4000) {
            if (horizontal_distance_squared(self->pos, p + 0x38) < self->range * self->range) {
                self->targetId = id;
                self->target = p;
                return 1;
            }
        }
    }
    return 0;
}

void TOMineTrap__sub_8016F87C(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 3;
    set_indexed_flags(arg0, 0, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
}

void TOMineTrap__vt84(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 2;
    set_indexed_flags(arg0, 0, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
}

void TOMineTrap__sub_8016FCC4(void) {
    void *p;
    s32 i;
    for (i = lbl_805D586C + lbl_805D5870; i < lbl_805D5868; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0 && check_value_equals__13TQuestColCtrlFPvi(p, TOMineTrap__data_805D3080) != 0) {
            queue_destruction__7TObjectFv(p);
        }
    }
}

void* get_mine_data_ptr__10TOMineTrapFPv(void* p) { return (char*)p + 0x334; }

extern M2C_UNK __vt__10TOMineTrap[];

void *__dt__10TOMineTrapFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TOMineTrap;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__6TOMineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 TOMineTrap__sub_801702C8(Self_801702C8 *self, void *obj) {
    if (obj != 0) {
        u32 id = obj_getField1c(obj);
        if (id < 4) {
            Node_801702C8 *n;
            for (n = self->head; n != 0; n = n->next) {
                if (matches_id__10TOMineTrapFPvUs(n, id) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int TOMineTrap__sub_80170340(void) { return 1; }
int TOMineTrap__sub_80170348(void) { return 1; }
void TOMineTrap__sub_80170350(void) {  }
void TOMineTrap__sub_80170354(void) {  }
s32 check_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1) {
    if (TOMineTrap__sub_801702C8((Self_801702C8 *)(arg0), (void *)(arg1)) == 1) {
        return 0;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 2) && (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x2A8))) {
        return 0;
    }
    if (is_locally_controlled__10TObjPlayerFPv(arg1) != 0) {
        return 1;
    }
    return 0;
}
s32 can_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1) {
    if (TOMineTrap__sub_801702C8((Self_801702C8 *)(arg0), (void *)(arg1)) == 1) {
        return 0;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 2) && (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x2A8))) {
        return 0;
    }
    if (is_locally_controlled__10TObjPlayerFPv(arg1) != 0) {
        return 1;
    }
    return 0;
}
void TOMineTrap__sub_80170524(u8 *arg0) {
    apply_object_set_data();
    ((VObj_18 *)(arg0))->m81();
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x334), (void *) (arg0 + 0x38));
}
void TOMineTrap__sub_80170570(void) {  }
void init_trap__10TOMineTrapFv(void) { get_localized_text_entry((void*)16, (void*)16); }
void update_state__10TOMineTrapFPv(void *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x348) = (s32) M2C_FIELD(arg0, f32 *, 0x70);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x348);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
        return;
    }
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 1;
        return;
    }
    if (get_main_phase() == 0xE) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
        M2C_FIELD(arg0, s32 *, 0x8C) = 0x1E;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x344) = 2;
}
void spawn_effect__10TOMineTrapFi(s32 arg0) {
    s32 idx = get_global_state__14TOKeyMachine01Fv();
    s32 elem = *(s32 *)(lbl_804420A8 + idx * 4);
    if (elem != -1) {
        play_sound_effect(elem, arg0 + 0x38, 0, 0);
    }
}
void attach_to_keymachine__10TOMineTrapFi(s32 arg0) {
    s32 idx = get_global_state__14TOKeyMachine01Fv();
    s32 elem = *(s32 *)(lbl_80442018 + idx * 4);
    if (elem != -1) {
        play_sound_effect(elem, arg0 + 0x38, 0, 0);
    }
}
void detonate_if_triggered__10TOMineTrapFi(s32 arg0) {
    if (spawn_particle_effect(arg0 + 0x2FC, 0x45) != 0U) {
        set_position_xy__10TObjPlayerFPvff(lbl_805DB864, lbl_805DB864);
    }
}
void TOMineTrap__sub_8017070C(u8 *arg0) {
    spawn_particle_effect((s32)((void *) (arg0 + 0x2FC)), (M2C_UNK)((int) (0x47)));
    ((VObj_18 *)(arg0))->m80();
    ((VObj_18 *)(arg0))->m78();
}

void TOMineTrap__sub_80170768(u8 *arg0, s16 *arg1, s32 arg2) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg1, s16 *, 0);
    if (temp_r0 == 5) {
        if (arg2 == 1) {
            TOMineTrap__sub_8017070C((u8 *)((void *) (arg0)));
        }
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        access_object_saved_state((void*)((void *) (arg0)), (s16 *)((void *) (arg1)), (M2C_UNK)((int) (0)));
        return;
    }
    if (temp_r0 == 3) {
        M2C_FIELD(arg0, s16 *, 0x326) = temp_r0;
        set_indexed_flags((void *)((void *) (arg0)), (s32)((int) (0)), (s32)((int) (1)));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        calc_attach_pos__10TObjPlayerFPv((void *) (arg0));
        refresh_collision_body_centers((void*)((void *) (arg0)));
        ((VObj_18_d0f3c0 *)(arg0))->m79();
        access_object_saved_state((void*)((void *) (arg0)), (s16 *)((void *) (arg1)), (M2C_UNK)((int) (0)));
        queue_destruction_for_each_node__7TObjectFv((void *) (arg0));
    }
}

f32 trigger_explosion__10TOMineTrapFPv(void *arg0) {
    s16 sp8;
    if (((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x4000U) && ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (access_object_saved_state((void*)(arg0), (s16 *)(&sp8), (M2C_UNK)(1)) != 0)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        sp8 = M2C_FIELD(arg0, s16 *, 0x326);
        send_object_state_update(arg0, &sp8);
    }
    return lbl_805DB85C;
}
f32 calc_trigger_range__10TOMineTrapFPvi(void *arg0, s32 arg1) {
    if (TOMineTrap__sub_801702C8((Self_801702C8 *)(arg0), (void *)(arg1)) == 1) {
        return lbl_805DB85C;
    }
    if ((is_locally_controlled__10TObjPlayerFPv((u32)(arg1)) != 0) && (obj_getS16_116(arg1) != 0)) {
        ((VObj_801708A4_8016F6F8 *)arg0)->v20(0, TOMineTrap__data_805DB868);
    }
    return lbl_805DB85C;
}

typedef struct VBase_18_33b813 VBase_18_33b813;
typedef struct VObj_18_33b813 VObj_18_33b813;
#define PSO_VCALL_VObj_18_33b813_m20(_self, _arg0, _arg1) (((VObj_18_33b813 *)(_self))->m20((_arg0), (_arg1)))
f32 TOMineTrap__sub_80170924(u8 *arg0, s32 arg1, s32 *arg2) {
  s32 temp_r0;
  s32 var_r31;
  if (arg1 == 0)
  {
    return (*(const f32 *)&lbl_805DB85C);
  }
  if (TOMineTrap__sub_801702C8((Self_801702C8 *)(arg0), (void *)(arg1)) == 1)
  {
    return (*(const f32 *)&lbl_805DB85C);
  }
  var_r31 = 0;
  if ((obj_getField1c((void *) arg1) < 4U) && (is_locally_controlled__10TObjPlayerFPv((u32)((void *) arg1)) != 0))
  {
    var_r31 = 1;
  }
  if (var_r31 != 0)
  {
    temp_r0 = *arg2;
    if (temp_r0 != 0x13)
    {
      if ((temp_r0 < 0x13) && (temp_r0 < 5))
      {
        if (temp_r0 < 0)
        {
          if ((temp_r0 && temp_r0) && temp_r0)
          {
          }
        }
        else
        {
          goto block_13;
        }
      }
    }
    else
    {
      block_13:
      PSO_VCALL_VObj_18_33b813_m20(arg0, 0, (*(const f32 *)&TOMineTrap__data_805DB868));
    }
  }
  return (*(const f32 *)&lbl_805DB85C);
}

void update_trigger__10TOMineTrapFPv(void *arg0) {
    s16 sp8;
    if (((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x4000U) && ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (access_object_saved_state((void*)(arg0), (s16 *)(&sp8), (M2C_UNK)(1)) != 0)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        sp8 = M2C_FIELD(arg0, s16 *, 0x326);
        send_object_state_update(arg0, &sp8);
    }
}
void TOMineTrap__sub_80170A5C(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 2;
    set_indexed_flags(arg0, 0, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
    calc_attach_pos__10TObjPlayerFPv(arg0);
    refresh_collision_body_centers((void*)((void *) (arg0)));
    ((VObj_18_d0f3c0 *)(arg0))->m79();
}

typedef struct Stack_80170AC8 Stack_80170AC8;
#pragma fp_contract on
void follow_target__10TOMineTrapFPv(u8 *arg0) {
  unsigned short new_var;
  Stack_80170AC8 stack;
  f32 temp_f2;
  new_var = -1U;
  if ((((u16) (*((u16 *) (((s8 *) arg0) + 0x35C)))) == new_var) || (((void *) (*((u8 **) (((s8 *) arg0) + 0x2A8)))) == 0))
  {
    *((s16 *) (((s8 *) arg0) + 0x326)) = 2;
    return;
  }
  VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
  VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) ((*((u8 **) (((s8 *) arg0) + 0x2A8))) + 0x38));
  stack.spC = *((f32 *) (((s8 *) arg0) + 0x3C));
  subtract_vector((void *) (&stack.sp8), (void *) (arg0 + 0x38));
  if (lbl_805DB870 < vec_squared_length((void *) (&stack.sp8)))
  {
    normalize_vector((void *) (&stack.sp8));
    stack.sp8 *= lbl_805DB870;
    stack.sp10 *= lbl_805DB870;
  }
  vec3_add_to((void *) (arg0 + 0x38), (void *) (&stack.sp8));
  update_enemy_collision_flags__10TObjPlayerFPv((void *) arg0);
  temp_f2 = *((f32 *) (((s8 *) arg0) + 0x48));
  *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) ((lbl_805DB884 * ((lbl_805DB888 + (*((f32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0x2A8)))) + 0x3C)))) - temp_f2)) + temp_f2);
  calc_attach_pos__10TObjPlayerFPv((void *) arg0);
  *((s32 *) (((s8 *) arg0) + 0x60)) = (s32) (lbl_80442200 * get_ad_end_text_start__10TObjPlayerFv((f64) stack.sp8, (f64) stack.sp10));
  refresh_collision_body_centers((void*)((void *) arg0));
}

void TOMineTrap__sub_80170BEC(u8 *arg0) {
    u8 *p;
    s32 i;
    switch (*(s16 *)(arg0 + 0x328)) {
    case 0:
        *(s16 *)(arg0 + 0x328) = 1;
        for (i = lbl_805D5870; i < lbl_805D5868; i++) {
            p = (u8 *)get_player_data__10TObjPlayerFi(i);
            if (p != NULL && p != arg0 &&
                (check_value_equals__13TQuestColCtrlFPvi(p, lbl_805D3090) != 0 ||
                 check_value_equals__13TQuestColCtrlFPvi(p, lbl_805D3098) != 0 ||
                 check_value_equals__13TQuestColCtrlFPvi(p, lbl_805D30A0) != 0 ||
                 check_value_equals__13TQuestColCtrlFPvi(p, lbl_805D30A8) != 0) &&
                *(s32 *)(p + 0x344) == 1 && *(s32 *)(p + 0x348) == *(s32 *)(arg0 + 0x348)) {
                update_trigger__10TOMineTrapFPv(p);
            }
        }
        break;
    }
    sync_position__10TOMineTrapFPv((void*)(arg0));
}

void TOMineTrap__sub_80170CD4(void* p) { sync_position__10TOMineTrapFPv((void*)((void*)(p))); }

#pragma push
#pragma fp_contract on
void TOMineTrap__sub_80170CF4(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f4;
    if (!(M2C_FIELD(arg0, s32 *, 0x340) & 2)) {
        temp_f4 = M2C_FIELD(arg0, f32 *, 0x338);
        M2C_FIELD(arg0, f32 *, 0x338) = (f32) (temp_f4 + ((lbl_805DB884 * ((lbl_805DB888 + M2C_FIELD(arg0, f32 *, 0x54)) - temp_f4)) + (*(const f32 *)&TOMineTrap__data_805DB868)));
        temp_f1 = lbl_805DB888 + M2C_FIELD(arg0, f32 *, 0x54);
        if (temp_f1 <= M2C_FIELD(arg0, f32 *, 0x338)) {
            M2C_FIELD(arg0, f32 *, 0x338) = temp_f1;
            M2C_FIELD(arg0, s32 *, 0x340) = (s32) (M2C_FIELD(arg0, s32 *, 0x340) | 2);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + 0x800);
        M2C_FIELD(arg0, f32 *, 0x338) = (f32) (M2C_FIELD(arg0, f32 *, 0x338) + sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x5C)));
    }
}
#pragma pop

void sync_position__10TOMineTrapFPv(void* p) { VecCopy__FP3VecPC3Vec((void *)((char*)p + 0x38), (void *)((char*)p + 0x334)); refresh_collision_body_centers(p); }
void detonate__10TOMineTrapFPv(u8 *arg0) {
    s32 i;
    u8 *obj;
    set_indexed_flags(arg0, 0, 2);
    *(f32 *)(*(u8 **)(arg0 + 0xA4) + 0xC) = *(f32 *)(arg0 + 0x350);
    init_all_slots__10TObjPlayerFv();
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    for (i = 0; i < 0x10; i++) {
        obj = get_battle_param__10TObjPlayerFi(i);
        if (is_valid_and_active__10TObjPlayerFUi(obj) != 0) {
            Pair_80170DD8 pair = *(Pair_80170DD8 *)(arg0 + 0x354);
            f32 r = ((VObj_18_1da615 *)obj)->m21(arg0, &pair, 0, -1, -1);
            if (*(s32 *)(arg0 + 0x354) < 5) {
                ((VObj_18_1da615 *)obj)->m23(arg0, lbl_805DB874 * r);
            }
        }
    }
    *(s16 *)(arg0 + 0x326) = 6;
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
    ((VObj_18_1da615 *)arg0)->m20(0, TOMineTrap__data_805DB868);
}

}
