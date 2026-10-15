#include "types.h"

extern "C" {

u8 *__ct__13TObjSuisoChipFv(u8 *arg0, u8 *arg1);
u8 *init__13TObjSuisoChipFPvPv(u8 *arg0, u8 *arg1);
s32 construct_debris__8TObjChipFPvPvPv(void *, void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 __ct__8TObjChipFv(void *, void *);
void __dt__8TObjChipFv(void *, s16);
void __dl__7TObjectFPv(void *);
void *__dt__13TObjSuisoChipFv(void *self, s16 arg1);
extern void *__vt__13TObjSuisoChip[];

extern void *__vt__13TObjSuisoChip[];
extern s32 suiso_chip_class_name_ptr;
extern s32 tl_05;
extern const f32 lbl_805DDFF8;

void *__dt__13TObjSuisoChipFv(void *self, s16 arg1) {
    if (self != NULL) {
        *(void ***)((s8 *)self + 0x18) = __vt__13TObjSuisoChip;
        __dt__8TObjChipFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

u8 *__ct__13TObjSuisoChipFv(u8 *arg0, u8 *arg1) {
    __ct__8TObjChipFv((void *) (arg0), (void *) (tl_05));
    *(void ***)((s8 *)arg0 + 0x18) = __vt__13TObjSuisoChip;
    *(s32 *)((s8 *)arg0 + 0) = (s32) suiso_chip_class_name_ptr;
    if (arg1 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x234), (void *) (arg1 + 0x38));
        *(s32 *)((s8 *)arg0 + 0x240) = (s32) *(s32 *)((s8 *)arg1 + 0x60);
    } else {
        *(f32 *)((s8 *)arg0 + 0x238) = (f32) lbl_805DDFF8;
        *(f32 *)((s8 *)arg0 + 0x238) = (f32) lbl_805DDFF8;
        *(f32 *)((s8 *)arg0 + 0x234) = (f32) lbl_805DDFF8;
        *(s32 *)((s8 *)arg0 + 0x240) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x244) = 0;
    *(s32 *)((s8 *)arg0 + 0x248) = 0x14;
    return arg0;
}

extern void *__vt__13TObjSuisoChip[];
extern s32 suiso_chip_class_name_ptr;
extern s32 tl_05;
extern const f32 lbl_805DDFF8;

u8 *init__13TObjSuisoChipFPvPv(u8 *arg0, u8 *arg1) {
    construct_debris__8TObjChipFPvPvPv((void *) (arg0), (void *) (tl_05));
    *(void ***)((s8 *)arg0 + 0x18) = __vt__13TObjSuisoChip;
    *(s32 *)((s8 *)arg0 + 0) = (s32) suiso_chip_class_name_ptr;
    if (arg1 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x234), (void *) (arg1 + 0x38));
        *(s32 *)((s8 *)arg0 + 0x240) = (s32) *(s32 *)((s8 *)arg1 + 0x60);
    } else {
        *(f32 *)((s8 *)arg0 + 0x238) = (f32) lbl_805DDFF8;
        *(f32 *)((s8 *)arg0 + 0x238) = (f32) lbl_805DDFF8;
        *(f32 *)((s8 *)arg0 + 0x234) = (f32) lbl_805DDFF8;
        *(s32 *)((s8 *)arg0 + 0x240) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x244) = 0;
    *(s32 *)((s8 *)arg0 + 0x248) = 0x14;
    return arg0;
}

}

#include "types.h"

extern "C" int get_instance__23TObjSeabedSuisoBrakableFv(void);
extern "C" u8 * get_model__23TObjSeabedSuisoBrakableFi(s32 arg0);
struct Base_802A63F8_802A62E8 { char pad[0x18]; };
struct VObj_802A63F8_802A62E8 : Base_802A63F8_802A62E8 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12();
};

struct RecoveredGlobal_802A6438_lbl_804DD388 {
    s32 value;
    u8 remaining[0x35C];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_802A6668_lbl_804DD6E8 {
    s32 value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_802A6668___vt__23TObjSeabedSuisoBrakable {
    s32 value;
    u8 remaining[0x4C];
};

typedef struct Vec_802A6490 { f32 x, y, z; } Vec_802A6490;

typedef struct Rec_802A6490 {
    s32 id;
    Vec_802A6490 pos;
} Rec_802A6490;

typedef struct Set_802A6490 {
    u8 pad0[0x10];
    Rec_802A6490 recs[17];
} Set_802A6490;

typedef struct Params_802A6490 {
    Vec_802A6490 a;
    Vec_802A6490 pos;
    f32 f20;
    f32 f24;
    f32 f28;
    s32 i2c;
    s32 i30;
    s32 i34;
    s32 i38;
    s32 i3c;
    f32 f40;
    f32 f44;
    s32 i48;
    s32 i4c;
    s32 i50;
} Params_802A6490;

typedef struct Obj_802A6490 {
    u8 pad0[0x38];
    Vec_802A6490 pos;
    u8 pad44[0xBC - 0x44];
    s32 kind;
} Obj_802A6490;

extern "C" {
void *__nw__7TObjectFUl(int);
extern RecoveredGlobal_802A6438_lbl_804DD388 TObjSeabedSuisoBrakable__chip_record_set_table;
extern const f32 lbl_805DDFFC;
void TObjSeabedSuisoBrakable__sub_802A6438(u8 *arg0);
f32 fabs_float(f32);
void reset_photon_effect__10TObjPlayerFPv(void *);
u8 * TORockCaveBrakable__ct(void *);
s32 init_collision_body_parts(void *, int, int);
void TObjSeabedSuisoBrakable__sub_802A6438(u8 *arg0);
RecoveredGlobal_802A6668_lbl_804DD6E8 lbl_804DD6E8 = { 0, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xA0, 0x00, 0x00, 0x41, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } };
extern void *__vt__23TObjSeabedSuisoBrakable[];
extern s32 TObjSeabedSuisoBrakable__name;
u8 *TObjSeabedSuisoBrakable__ct(u8 *arg0, s32 arg1);

void *__nw__7TObjectFUl(int);

extern RecoveredGlobal_802A6438_lbl_804DD388 TObjSeabedSuisoBrakable__chip_record_set_table;
extern const f32 lbl_805DE000;
extern const f32 lbl_805DE004;
extern const f32 lbl_805DE008;
extern const f32 lbl_805DE00C;
extern const f32 lbl_805DE010;
extern const f32 lbl_805DE014;
void TObjSeabedSuisoBrakable__vt14(Obj_802A6490 *self);
}

extern "C" {

void TObjSeabedSuisoBrakable__vt12(void *arg0);
void TObjSeabedSuisoBrakable__vt15(void);
void *__dt__23TObjSeabedSuisoBrakableFv(void *arg0, s16 arg1);
void *create__23TObjSeabedSuisoBrakableFPv(void *arg0);
void notify_break__23TObjSeabedSuisoBrakableFUi(u32 arg0);
void render__23TObjSeabedSuisoBrakableFv(void *arg0);
void update_anim_if_active__23TObjSeabedSuisoBrakableFPv(void* p);
void update_switch_lock__23TObjSeabedSuisoBrakableFPv(void *arg0);
s32 scroll_ginja_mesh_uvs(s32, s32, s32, u16, s32);
u8 is_current_floor_switch_set(u16);
s32 draw_model__10TORockCaveFPv(void *);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
struct Obj_802A6DA8; Obj_802A6DA8 *TObjSeabedSuiso_CH__ct(Obj_802A6DA8 *, s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__18TORockCaveBrakableFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 begin_effect_render__13TParticleCtrlFv();
void *count_linked_switches__23TObjSeabedSuisoBrakableFUii(s32, s32);
s32 end_effect_render__13TParticleCtrlFv();
s32 get_break_data__23TObjSeabedSuisoBrakableFi(s32);
u32 get_table0_entry__23TObjSeabedSuisoBrakableFi(s32);
s32 *get_table1_entry__23TObjSeabedSuisoBrakableFi(s32);
int update_anim_phase__17TOBarrierEnergy01FPv(void*);

extern s32 actor_frame_tick;
extern s32 lbl_805D667C;

void TObjSeabedSuisoBrakable__vt12(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    void *temp_r31;
    void *temp_r31_2;

    if ((s32) *(s32 *)((s8 *)arg0 + 0xBC) == 2) {
        temp_r31 = count_linked_switches__23TObjSeabedSuisoBrakableFUii(*(s32 *)((s8 *)arg0 + 0x34), 2);
        if ((s32) lbl_805D667C != (s32) actor_frame_tick) {
            if ((temp_r31 != NULL) && ((u32) *(u32 *)((s8 *)temp_r31 + 4) != 0U)) {
                temp_r3 = get_break_data__23TObjSeabedSuisoBrakableFi(1);
                if (temp_r3 != -1) {
                    scroll_ginja_mesh_uvs((s32)(*(u32 *)((s8 *)temp_r31 + 4)), (s32)(0), (s32)(1), (u16)((u16) temp_r3), (s32)(1));
                }
            }
            lbl_805D667C = actor_frame_tick;
        }
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xBC) == 0) {
        temp_r31_2 = count_linked_switches__23TObjSeabedSuisoBrakableFUii(*(s32 *)((s8 *)arg0 + 0x34), 8);
        if ((s32) lbl_805D667C != (s32) actor_frame_tick) {
            if ((temp_r31_2 != NULL) && ((u32) *(u32 *)((s8 *)temp_r31_2 + 4) != 0U)) {
                temp_r3_2 = get_break_data__23TObjSeabedSuisoBrakableFi(2);
                if (temp_r3_2 != -1) {
                    scroll_ginja_mesh_uvs((s32)(*(u32 *)((s8 *)temp_r31_2 + 4)), (s32)(0), (s32)(1), (u16)((u16) temp_r3_2), (s32)(1));
                }
            }
            lbl_805D667C = actor_frame_tick;
        }
    }
}

void render__23TObjSeabedSuisoBrakableFv(void *arg0) {
    struct VObj_802A63F8_802A62E8 *o = (struct VObj_802A63F8_802A62E8 *)arg0;
    o->m12();
    draw_model__10TORockCaveFPv(arg0);
}

typedef char RecoveredGlobal_802A6438_lbl_804DD388_size[sizeof(RecoveredGlobal_802A6438_lbl_804DD388) == 0x360 ? 1 : -1];
void TObjSeabedSuisoBrakable__sub_802A6438(u8 *arg0) {
    s32 *var_r3;
    f32 var_f0;
    u8 *var_r31;
    var_r31 = (u8 *)(arg0);
    var_r3 = (s32 *)(&TObjSeabedSuisoBrakable__chip_record_set_table.value);
    var_r3 = (s32 *)(&TObjSeabedSuisoBrakable__chip_record_set_table.value);
    var_r3 = (s32 *)(*(s32 *)((s8 *)(&TObjSeabedSuisoBrakable__chip_record_set_table.value) + (*(s32 *)((s8 *)var_r31 + 0xBC) * 0x120)));
    *(s32 *)((s8 *)var_r31 + 0x34) = ((s32 (*)(int))get_model__23TObjSeabedSuisoBrakableFi)((int) (var_r3));
    var_r3 = (s32 *)((u8 *)(NULL));
    *(s32 *)((s8 *)var_r31 + 0x24) = ((s32 (*)(int))get_instance__23TObjSeabedSuisoBrakableFv)((int) (0));
    var_f0 = lbl_805DDFFC;
    *(f32 *)((s8 *)var_r31 + 0xB0) = var_f0;
}

void TObjSeabedSuisoBrakable__vt14(Obj_802A6490 *self) {
    Params_802A6490 p;
    Rec_802A6490 *rec;
    s32 i;
    void *o;
    p.a.x = lbl_805DE000;
    p.a.y = lbl_805DE004;
    p.a.z = lbl_805DE008;
    VecCopy__FP3VecPC3Vec(&p.pos, &self->pos);
    p.f20 = lbl_805DE00C;
    p.f24 = lbl_805DE010;
    p.f28 = lbl_805DE00C;
    p.i2c = 0x200;
    p.i30 = 0x150;
    p.i34 = 0x200;
    p.i38 = 1;
    p.i3c = 0x3C;
    p.f40 = self->pos.y;
    p.f44 = lbl_805DE014;
    p.i48 = 0;
    p.i4c = ((s32 (*)(int))get_instance__23TObjSeabedSuisoBrakableFv)(0);
    p.i50 = 17;
    rec = ((Set_802A6490 *)&TObjSeabedSuisoBrakable__chip_record_set_table)[self->kind].recs;
    for (i = 0; i < 17; i++, rec++) {
        if (rec->id >= 0) {
            p.i48 = ((s32 (*)(int))get_model__23TObjSeabedSuisoBrakableFi)(rec->id);
            p.pos.x = rec->pos.x;
            p.pos.y = rec->pos.y;
            p.pos.z = rec->pos.z;
            o = __nw__7TObjectFUl(0x24C);
            if (o != NULL) {
                ((void (*)(void *, void *, void *))init__13TObjSuisoChipFPvPv)(o, self, &p);
            }
        }
    }
}

void TObjSeabedSuisoBrakable__vt15(void) {  }

extern void *__vt__23TObjSeabedSuisoBrakable[];

void * create_instance__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjSeabedSuisoBrakable__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

void *__dt__23TObjSeabedSuisoBrakableFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__23TObjSeabedSuisoBrakable;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__18TORockCaveBrakableFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_802A6668_lbl_804DD6E8_size[sizeof(RecoveredGlobal_802A6668_lbl_804DD6E8) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_802A6668___vt__23TObjSeabedSuisoBrakable_size[sizeof(RecoveredGlobal_802A6668___vt__23TObjSeabedSuisoBrakable) == 0x50 ? 1 : -1];
u8 *TObjSeabedSuisoBrakable__ct(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    TORockCaveBrakable__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802A6668___vt__23TObjSeabedSuisoBrakable *)&__vt__23TObjSeabedSuisoBrakable).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjSeabedSuisoBrakable__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    *(s32 *)((s8 *)arg0 + 0xBC) = (s32) fabs_float((f32) *(s32 *)((s8 *)arg0 + 0x88));
    if ((s32) *(s32 *)((s8 *)arg0 + 0xBC) > 2) {
        *(s32 *)((s8 *)arg0 + 0xBC) = 2;
    }
    TObjSeabedSuisoBrakable__sub_802A6438((u8 *)((void *) (arg0)));
    *(s32 *)((s8 *)arg0 + 0xB8) = (s32) *(s32 *)((s8 *)arg0 + 0x84);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xB8);
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        *(s32 *)((s8 *)arg0 + 0xB8) = -1;
    }
    init_collision_body_parts((void *) (arg0), (int) ((u8 *)&lbl_804DD6E8.value + (*(s32 *)((s8 *)arg0 + 0xBC) * 0x2C)), (int) (1));
    reset_photon_effect__10TObjPlayerFPv(arg0);
    return arg0;
}

void notify_break__23TObjSeabedSuisoBrakableFUi(u32 arg0) {
    u32 t0, t1, t2;
    t0 = get_table0_entry__23TObjSeabedSuisoBrakableFi(0);
    if (t0 == arg0 || (t1 = get_table0_entry__23TObjSeabedSuisoBrakableFi(1), t1 == arg0) || (t2 = get_table0_entry__23TObjSeabedSuisoBrakableFi(2), t2 == arg0)) {
        begin_effect_render__13TParticleCtrlFv();
        return;
    }
    end_effect_render__13TParticleCtrlFv();
}

void *create__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjSeabedSuiso_CH__ct)(o, (void *)tl_05, arg0);
    }
    return o;
}

void update_anim_if_active__23TObjSeabedSuisoBrakableFPv(void* p) { if (*(unsigned int*)((char*)p + 0xbc) != 0) { update_anim_phase__17TOBarrierEnergy01FPv(p); } }

extern s32 actor_frame_tick;
extern s32 suiso_brakable_last_frame_tick;

void update_switch_lock__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    s32 *temp_r3;
    s32 *temp_r3_2;
    s32 *temp_r3_3;
    s32 *temp_r3_4;
    s32 *temp_r3_5;
    s32 *temp_r3_6;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r31;
    s32 var_r30;

    var_r31 = 1;
    if ((s32) *(s32 *)((s8 *)arg0 + 0xCC) > 0) {
        var_r30 = 0;
        while (var_r30 < (s32) *(s32 *)((s8 *)arg0 + 0xCC)) {
            if (is_current_floor_switch_set((u16) (*(s32 *)((s8 *)arg0 + 0xD0) + var_r30)) == 0) {
                var_r31 = 0;
            }
            var_r30 += 1;
        }
    }
    if (var_r31 != 0) {
        temp_r3 = get_table1_entry__23TObjSeabedSuisoBrakableFi(1);
        if (temp_r3 != NULL) {
            *temp_r3 &= 0xFFFFFFF7;
        }
        temp_r3_2 = get_table1_entry__23TObjSeabedSuisoBrakableFi(2);
        if (temp_r3_2 != NULL) {
            *temp_r3_2 &= 0xFFFFFFF7;
        }
    } else {
        temp_r3_3 = get_table1_entry__23TObjSeabedSuisoBrakableFi(1);
        if (temp_r3_3 != NULL) {
            *temp_r3_3 |= 8;
        }
        temp_r3_4 = get_table1_entry__23TObjSeabedSuisoBrakableFi(2);
        if (temp_r3_4 != NULL) {
            *temp_r3_4 |= 8;
        }
    }
    if ((s32) suiso_brakable_last_frame_tick != (s32) actor_frame_tick) {
        temp_r31 = get_break_data__23TObjSeabedSuisoBrakableFi(4);
        temp_r3_5 = get_table1_entry__23TObjSeabedSuisoBrakableFi(2);
        if ((temp_r3_5 != NULL) && (temp_r31 != -1)) {
            scroll_ginja_mesh_uvs((s32)(*(s32 *)((s8 *)temp_r3_5 + 4)), (s32)(0), (s32)(1), (u16)((u16) temp_r31), (s32)(1));
        }
        temp_r31_2 = get_break_data__23TObjSeabedSuisoBrakableFi(3);
        temp_r3_6 = get_table1_entry__23TObjSeabedSuisoBrakableFi(0);
        if ((temp_r3_6 != NULL) && (temp_r31_2 != -1)) {
            scroll_ginja_mesh_uvs((s32)(*(s32 *)((s8 *)temp_r3_6 + 4)), (s32)(0), (s32)(3), (u16)((u16) temp_r31_2), (s32)(1));
        }
        suiso_brakable_last_frame_tick = actor_frame_tick;
    }
}

}

extern "C" {

void notify_break__23TObjSeabedSuisoBrakableFPv(void *arg0);
s32 get_break_data__23TObjSeabedSuisoBrakableFi(s32);
void *count_linked_switches__23TObjSeabedSuisoBrakableFUii(s32, s32);
s32 set_model_node_callback(s32 *);

extern s32 actor_frame_tick;
extern s32 suiso_brakable_last_frame_tick;

void notify_break__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    s32 temp_r3;
    void *temp_r31;

    temp_r31 = count_linked_switches__23TObjSeabedSuisoBrakableFUii(*(s32 *)((s8 *)arg0 + 0xD4), 4);
    if ((s32) suiso_brakable_last_frame_tick != (s32) actor_frame_tick) {
        if ((temp_r31 != NULL) && ((u32) *(u32 *)((s8 *)temp_r31 + 4) != 0U)) {
            temp_r3 = get_break_data__23TObjSeabedSuisoBrakableFi(0);
            if (temp_r3 != -1) {
                ((s32 (*)(u32, s32, s32, u16, s32))scroll_ginja_mesh_uvs)(*(u32 *)((s8 *)temp_r31 + 4), 1, 0, (u16) temp_r3, 1);
            }
        }
        suiso_brakable_last_frame_tick = actor_frame_tick;
    }
    set_model_node_callback((s32 *)notify_break__23TObjSeabedSuisoBrakableFUi);
}

}

struct Base18 { char pad[0x18]; };

struct VObj : Base18 { virtual s32 m0(); virtual s32 m1(); virtual s32 m2(); virtual s32 m3(); virtual s32 m4(); virtual s32 m5(); virtual s32 m6(); virtual s32 m7(); virtual s32 m8(f32, f32); };

extern "C" {
s32 end_effect_render__13TParticleCtrlFv();
s32 draw_ginja_box_tree(s32);
void update_state__23TObjSeabedSuisoBrakableFPv(void *arg0);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi();
s32 draw_ginja_model_with_motion(s32, void *, f32);
void draw_model__23TObjSeabedSuisoBrakableFPv(u8 *arg0);
}

extern "C" {

void update_state__23TObjSeabedSuisoBrakableFPv(void *arg0);

void update_state__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0xC8);
    switch (temp_r0) {
    case 2:
        ((s32 (*)(void))notify_break__23TObjSeabedSuisoBrakableFPv)();
        return;
    case 3:
        ((s32 (*)(void))update_switch_lock__23TObjSeabedSuisoBrakableFPv)();
    case 0:
        return;
    }
}
void draw_model__23TObjSeabedSuisoBrakableFPv(u8 *arg0) {
    void *p;
    if (((VObj *)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        end_effect_render__13TParticleCtrlFv();
        update_state__23TObjSeabedSuisoBrakableFPv(arg0);
        ((s32 (*)(s32))get_instance__23TObjSeabedSuisoBrakableFv)(0);
        set_global_param__8TObjFishFi();
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        p = *(void **)((s8 *)arg0 + 0xBC);
        if (p != NULL) {
            draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0xD4), p, *(f32 *)((s8 *)arg0 + 0xB0));
        } else {
            draw_ginja_box_tree(*(s32 *)((s8 *)arg0 + 0xD4));
        }
        pop_matrix();
        ((s32 (*)(s32))set_model_node_callback)(0);
    }
}

}

extern "C" {
u8 * get_bml_motion(void *, int);
extern u8 *TObjSeabedSuisoBrakable__resource_bundle;
u8 *get_bml_motion_by_index__23TObjSeabedSuisoBrakableFi(s32 arg0);
u8 * get_bml_model(void *, int);
extern u8 *TObjSeabedSuisoBrakable__resource_bundle;
u8 *get_model__23TObjSeabedSuisoBrakableFi(s32 arg0);
}

extern "C" {

void *__dt__18TObjSeabedSuiso_CHFv(void *arg0, s16 arg1);
int get_instance__23TObjSeabedSuisoBrakableFv(void);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern void *__vt__18TObjSeabedSuiso_CH[];

void *__dt__18TObjSeabedSuiso_CHFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__18TObjSeabedSuiso_CH;
        if (*(void **)((s8 *)arg0 + 0xD8) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xD8)); *(s32 *)((s8 *)arg0 + 0xD8) = 0; }
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
struct Ent18_802A6BD0 {
    s32 a;
    s32 b;
    f32 f8;
    s32 id;
    f32 f10;
    f32 f14;
};

struct Snd_802A6BD0 {
    u8 pad0[4];
    u32 len;
};

struct Obj_802A6BD0 {
    u8 pad0[0x84];
    s32 f84;
    u32 f88;
    u8 pad8c[0xB4 - 0x8C];
    f32 fb4;
    f32 fb8;
    Snd_802A6BD0 *fbc;
    f32 fc0;
    f32 fc4;
    s32 kind;
    u32 fcc;
    s32 fd0;
    u8 *fd4;
};

struct Ent2C_802A6DA8 { u8 pad[0x2C]; };

struct VBase_802A6DA8 { char pad[0x18]; };
struct Obj_802A6DA8 : VBase_802A6DA8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
    u8 pad1c[0x38 - 0x1C];
    u8 pos[0x84 - 0x38];
    s32 f84;
    u8 pad88[0xC8 - 0x88];
    s32 kind;
    u8 padcc[0xD8 - 0xCC];
    s32 fd8;
};

extern "C" {
s32 create_particle_emitter(void *, s32);
void init_map_object_base(void *, s32, s32);
extern Ent18_802A6BD0 TObjSeabedSuiso__kind_param_table[];
extern Ent2C_802A6DA8 lbl_804DD2D8[];
extern s32 TObjSeabedSuiso_CH__name;
extern const f32 lbl_805DDFF8;
#pragma push
#pragma opt_propagation off
void init_kind_params__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    Obj_802A6BD0 *self = (Obj_802A6BD0 *)arg0;
    u32 v;

    self->kind = (s32)fabs_float((f32)self->f84);
    if (self->kind > 3) {
        self->kind = 3;
    }
    self->fd4 = get_model__23TObjSeabedSuisoBrakableFi(TObjSeabedSuiso__kind_param_table[self->kind].a);
    if (TObjSeabedSuiso__kind_param_table[self->kind].b != -1) {
        self->fbc = (Snd_802A6BD0 *)get_bml_motion_by_index__23TObjSeabedSuisoBrakableFi(TObjSeabedSuiso__kind_param_table[self->kind].b);
        self->fb8 = TObjSeabedSuiso__kind_param_table[self->kind].f8;
    } else {
        self->fbc = 0;
        self->fb8 = lbl_805DDFF8;
    }
    if (self->fbc != 0) {
        self->fb4 = (f32)self->fbc->len - lbl_805DE014;
    }
    self->fc0 = TObjSeabedSuiso__kind_param_table[self->kind].f10;
    self->fc4 = TObjSeabedSuiso__kind_param_table[self->kind].f14;
    if (self->kind == 3) {
        v = self->f88;
        self->fcc = v >> 16;
        self->fcc = (s32)self->fcc < 0 ? 0 : (0xFF < (s32)self->fcc ? 0xFF : (s32)self->fcc);
        self->fd0 = v & 0xFFFF;
        self->fd0 = self->fd0 < 0 ? 0 : (0x100 - (s32)self->fcc < self->fd0 ? 0x100 - (s32)self->fcc : self->fd0);
    } else {
        self->fcc = 0;
        self->fd0 = 0;
    }
}
#pragma pop

#pragma push
#pragma opt_propagation off
Obj_802A6DA8 *TObjSeabedSuiso_CH__ct(Obj_802A6DA8 *self, s32 arg1, s32 arg2) {
    init_map_object_base(self, arg1, arg2);
    *(s32 **)((u8 *)self + 0x18) = (s32 *)__vt__18TObjSeabedSuiso_CH;
    *(s32 *)self = TObjSeabedSuiso_CH__name;
    self->m5(arg2);
    init_kind_params__23TObjSeabedSuisoBrakableFPv(self);
    self->kind = (s32)fabs_float((f32)self->f84);
    if (self->kind > 3) {
        self->kind = 3;
    }
    init_collision_body_parts(self, (int)&lbl_804DD2D8[self->kind], 1);
    reset_photon_effect__10TObjPlayerFPv(self);
    if (TObjSeabedSuiso__kind_param_table[self->kind].id >= 0) {
        self->fd8 = create_particle_emitter(self->pos, TObjSeabedSuiso__kind_param_table[self->kind].id);
    } else {
        self->fd8 = 0;
    }
    return self;
}
#pragma pop

    extern int TObjSeabedSuisoBrakable__texture_gvm_handle;

u8 *get_bml_motion_by_index__23TObjSeabedSuisoBrakableFi(s32 arg0) {
    if ((void *) TObjSeabedSuisoBrakable__resource_bundle != NULL) {
        return get_bml_motion(TObjSeabedSuisoBrakable__resource_bundle, arg0);
    }
    return NULL;
}

int get_instance__23TObjSeabedSuisoBrakableFv(void) {  return TObjSeabedSuisoBrakable__texture_gvm_handle; }
u8 *get_model__23TObjSeabedSuisoBrakableFi(s32 arg0) {
    if ((void *) TObjSeabedSuisoBrakable__resource_bundle != NULL) {
        return get_bml_model(TObjSeabedSuisoBrakable__resource_bundle, arg0);
    }
    return NULL;
}

}

extern "C" {
void update__8TObjChipFPv();
void dispatch_vt9__8TObjChipFPv();
void render_shadows__7TObjectFv();
void init_chips__8TObjChipFPv();
void spawn_chips__8TObjChipFPvPv();
void TObjSuisoChip__vt6();
void tick_chips__8TObjChipFPv();
void TObjSuisoChip__vt8();
void render__8TObjChipFPv();
void TObjSuisoChip__vt10();
void draw_chips__8TObjChipFPv();
void update_break_state__18TORockCaveBrakableFPv();
void TLobby__sub_801A1FD8();
void apply_object_set_data();
void release_member_90__10TObjPlayerFPv();
void TParticleCtrl__sub_801A2124();
void update_object_view_visibility();
void classify_actor_view_detail();
void TObjRoomId__sub_801A1E2C();
void TObjPlayer__sub_80019568();
void TORockCave__sub_80175464();
void TORockCaveBrakable__sub_80174CC4();
void TObjSeabedSuisoBrakable__vt17();
void *__vt__13TObjSuisoChip[14] = {
    0, 0, (void *)__dt__13TObjSuisoChipFv, (void *)update__8TObjChipFPv, (void *)dispatch_vt9__8TObjChipFPv, (void *)render_shadows__7TObjectFv, (void *)init_chips__8TObjChipFPv, (void *)spawn_chips__8TObjChipFPvPv, (void *)TObjSuisoChip__vt6, (void *)tick_chips__8TObjChipFPv, (void *)TObjSuisoChip__vt8, (void *)render__8TObjChipFPv, (void *)TObjSuisoChip__vt10, (void *)draw_chips__8TObjChipFPv
};
void *__vt__23TObjSeabedSuisoBrakable[20] = {
    0, 0, (void *)__dt__23TObjSeabedSuisoBrakableFv, (void *)update_break_state__18TORockCaveBrakableFPv, (void *)render__23TObjSeabedSuisoBrakableFv, (void *)render_shadows__7TObjectFv, (void *)TLobby__sub_801A1FD8, (void *)apply_object_set_data, (void *)release_member_90__10TObjPlayerFPv, (void *)TParticleCtrl__sub_801A2124, (void *)update_object_view_visibility, (void *)classify_actor_view_detail, (void *)TObjRoomId__sub_801A1E2C, (void *)TObjPlayer__sub_80019568, (void *)TObjSeabedSuisoBrakable__vt12, (void *)TORockCave__sub_80175464, (void *)TObjSeabedSuisoBrakable__vt14, (void *)TObjSeabedSuisoBrakable__vt15, (void *)TORockCaveBrakable__sub_80174CC4, (void *)TObjSeabedSuisoBrakable__vt17
};
void *__vt__18TObjSeabedSuiso_CH[14] = {
    0, 0, (void *)__dt__18TObjSeabedSuiso_CHFv, (void *)update_anim_if_active__23TObjSeabedSuisoBrakableFPv, (void *)draw_model__23TObjSeabedSuisoBrakableFPv, (void *)render_shadows__7TObjectFv, (void *)TLobby__sub_801A1FD8, (void *)apply_object_set_data, (void *)release_member_90__10TObjPlayerFPv, (void *)TParticleCtrl__sub_801A2124, (void *)update_object_view_visibility, (void *)classify_actor_view_detail, (void *)TObjRoomId__sub_801A1E2C, (void *)TObjPlayer__sub_80019568
};
}
