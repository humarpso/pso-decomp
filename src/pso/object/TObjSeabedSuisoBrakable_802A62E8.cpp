#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802A63F8_802A62E8 { char pad[0x18]; };
struct VObj_802A63F8_802A62E8 : Base_802A63F8_802A62E8 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12();
};

struct RecoveredGlobal_802A6438_lbl_804DD388 {
    M2C_UNK value;
    u8 remaining[0x35C];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_802A6668_lbl_804DD6E8 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_802A6668___vt__23TObjSeabedSuisoBrakable {
    M2C_UNK value;
    u8 remaining[0x4C];
};

typedef s32 M2C_UNK;
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
s32 get_instance__23TObjSeabedSuisoBrakableFv(int);
s32 TObjSeabedSuisoBrakable__sub_802A6F04(int);
extern RecoveredGlobal_802A6438_lbl_804DD388 lbl_804DD388;
extern const f32 lbl_805DDFFC;
void TObjSeabedSuisoBrakable__sub_802A6438(u8 *arg0);
f32 get_random_float__8TObjFishFv(f32);
void reset_photon_effect__10TObjPlayerFPv(void *);
u8 * TORockCaveBrakable__ct(void *);
M2C_UNK TObjEneGibbles__sub_80156780(void *, int, int);
void TObjSeabedSuisoBrakable__sub_802A6438(u8 *arg0);
extern RecoveredGlobal_802A6668_lbl_804DD6E8 lbl_804DD6E8;
extern M2C_UNK __vt__23TObjSeabedSuisoBrakable[];
extern s32 lbl_805D3E04;
u8 *TObjSeabedSuisoBrakable__ct(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, const void *);
void *__nw__7TObjectFUl(int);
void init__13TObjSuisoChipFPvPv(void *, void *, void *);
s32 get_instance__23TObjSeabedSuisoBrakableFv(int);
s32 TObjSeabedSuisoBrakable__sub_802A6F04(int);
extern RecoveredGlobal_802A6438_lbl_804DD388 lbl_804DD388;
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
M2C_UNK TOComputerMachine01__sub_8023DDC8(s32, M2C_UNK, M2C_UNK, u16, M2C_UNK);
u8 TODoorAncient08__sub_80229220(u16);
M2C_UNK TORockCave__sub_80175134(void *);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void *TObjSeabedSuisoBrakable__sub_802A6DA8(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__18TORockCaveBrakableFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void *count_linked_switches__23TObjSeabedSuisoBrakableFUii(s32, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 get_break_data__23TObjSeabedSuisoBrakableFi(M2C_UNK);
u32 get_table0_entry__23TObjSeabedSuisoBrakableFi(M2C_UNK);
s32 *get_table1_entry__23TObjSeabedSuisoBrakableFi(M2C_UNK);
int update_anim_phase__17TOBarrierEnergy01FPv(void*);

extern s32 lbl_805D53A4;
extern s32 lbl_805D667C;

void TObjSeabedSuisoBrakable__vt12(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    void *temp_r31;
    void *temp_r31_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 2) {
        temp_r31 = count_linked_switches__23TObjSeabedSuisoBrakableFUii(M2C_FIELD(arg0, s32 *, 0x34), 2);
        if ((s32) lbl_805D667C != (s32) lbl_805D53A4) {
            if ((temp_r31 != NULL) && ((u32) M2C_FIELD(temp_r31, u32 *, 4) != 0U)) {
                temp_r3 = get_break_data__23TObjSeabedSuisoBrakableFi(1);
                if (temp_r3 != -1) {
                    TOComputerMachine01__sub_8023DDC8((s32)(M2C_FIELD(temp_r31, u32 *, 4)), (M2C_UNK)(0), (M2C_UNK)(1), (u16)((u16) temp_r3), (M2C_UNK)(1));
                }
            }
            lbl_805D667C = lbl_805D53A4;
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 0) {
        temp_r31_2 = count_linked_switches__23TObjSeabedSuisoBrakableFUii(M2C_FIELD(arg0, s32 *, 0x34), 8);
        if ((s32) lbl_805D667C != (s32) lbl_805D53A4) {
            if ((temp_r31_2 != NULL) && ((u32) M2C_FIELD(temp_r31_2, u32 *, 4) != 0U)) {
                temp_r3_2 = get_break_data__23TObjSeabedSuisoBrakableFi(2);
                if (temp_r3_2 != -1) {
                    TOComputerMachine01__sub_8023DDC8((s32)(M2C_FIELD(temp_r31_2, u32 *, 4)), (M2C_UNK)(0), (M2C_UNK)(1), (u16)((u16) temp_r3_2), (M2C_UNK)(1));
                }
            }
            lbl_805D667C = lbl_805D53A4;
        }
    }
}

void render__23TObjSeabedSuisoBrakableFv(void *arg0) {
    struct VObj_802A63F8_802A62E8 *o = (struct VObj_802A63F8_802A62E8 *)arg0;
    o->m12();
    TORockCave__sub_80175134(arg0);
}

typedef char RecoveredGlobal_802A6438_lbl_804DD388_size[sizeof(RecoveredGlobal_802A6438_lbl_804DD388) == 0x360 ? 1 : -1];
void TObjSeabedSuisoBrakable__sub_802A6438(u8 *arg0) {
    M2C_UNK *var_r3;
    f32 var_f0;
    u8 *var_r31;
    var_r31 = (u8 *)(arg0);
    var_r3 = (M2C_UNK *)(&lbl_804DD388.value);
    var_r3 = (M2C_UNK *)(&lbl_804DD388.value);
    var_r3 = (M2C_UNK *)(M2C_FIELD(&lbl_804DD388.value, M2C_UNK *, (M2C_FIELD(var_r31, s32 *, 0xBC) * 0x120)));
    M2C_FIELD(var_r31, s32 *, 0x34) = TObjSeabedSuisoBrakable__sub_802A6F04((int) (var_r3));
    var_r3 = (M2C_UNK *)((u8 *)(NULL));
    M2C_FIELD(var_r31, s32 *, 0x24) = get_instance__23TObjSeabedSuisoBrakableFv((int) (0));
    var_f0 = lbl_805DDFFC;
    M2C_FIELD(var_r31, f32 *, 0xB0) = var_f0;
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
    p.i4c = get_instance__23TObjSeabedSuisoBrakableFv(0);
    p.i50 = 17;
    rec = ((Set_802A6490 *)&lbl_804DD388)[self->kind].recs;
    for (i = 0; i < 17; i++, rec++) {
        if (rec->id >= 0) {
            p.i48 = TObjSeabedSuisoBrakable__sub_802A6F04(rec->id);
            p.pos.x = rec->pos.x;
            p.pos.y = rec->pos.y;
            p.pos.z = rec->pos.z;
            o = __nw__7TObjectFUl(0x24C);
            if (o != NULL) {
                init__13TObjSuisoChipFPvPv(o, self, &p);
            }
        }
    }
}

void TObjSeabedSuisoBrakable__vt15(void) {  }

extern M2C_UNK __vt__23TObjSeabedSuisoBrakable[];

void * TObjSeabedSuisoBrakable__sub_802A65B8(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjSeabedSuisoBrakable__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

void *__dt__23TObjSeabedSuisoBrakableFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TObjSeabedSuisoBrakable;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802A6668___vt__23TObjSeabedSuisoBrakable *)&__vt__23TObjSeabedSuisoBrakable).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E04;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) get_random_float__8TObjFishFv((f32) M2C_FIELD(arg0, s32 *, 0x88));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) > 2) {
        M2C_FIELD(arg0, s32 *, 0xBC) = 2;
    }
    TObjSeabedSuisoBrakable__sub_802A6438((u8 *)((void *) (arg0)));
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        M2C_FIELD(arg0, s32 *, 0xB8) = -1;
    }
    TObjEneGibbles__sub_80156780((void *) (arg0), (int) ((u8 *)&lbl_804DD6E8.value + (M2C_FIELD(arg0, s32 *, 0xBC) * 0x2C)), (int) (1));
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

extern void *tl_05;

void *create__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjSeabedSuisoBrakable__sub_802A6DA8(o, tl_05, arg0);
    }
    return o;
}

void update_anim_if_active__23TObjSeabedSuisoBrakableFPv(void* p) { if (*(unsigned int*)((char*)p + 0xbc) != 0) { update_anim_phase__17TOBarrierEnergy01FPv(p); } }

extern s32 lbl_805D53A4;
extern s32 lbl_805D6678;

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
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) > 0) {
        var_r30 = 0;
        while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0xCC)) {
            if (TODoorAncient08__sub_80229220((u16) (M2C_FIELD(arg0, s32 *, 0xD0) + var_r30)) == 0) {
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
    if ((s32) lbl_805D6678 != (s32) lbl_805D53A4) {
        temp_r31 = get_break_data__23TObjSeabedSuisoBrakableFi(4);
        temp_r3_5 = get_table1_entry__23TObjSeabedSuisoBrakableFi(2);
        if ((temp_r3_5 != NULL) && (temp_r31 != -1)) {
            TOComputerMachine01__sub_8023DDC8((s32)(M2C_FIELD(temp_r3_5, s32 *, 4)), (M2C_UNK)(0), (M2C_UNK)(1), (u16)((u16) temp_r31), (M2C_UNK)(1));
        }
        temp_r31_2 = get_break_data__23TObjSeabedSuisoBrakableFi(3);
        temp_r3_6 = get_table1_entry__23TObjSeabedSuisoBrakableFi(0);
        if ((temp_r3_6 != NULL) && (temp_r31_2 != -1)) {
            TOComputerMachine01__sub_8023DDC8((s32)(M2C_FIELD(temp_r3_6, s32 *, 4)), (M2C_UNK)(0), (M2C_UNK)(3), (u16)((u16) temp_r31_2), (M2C_UNK)(1));
        }
        lbl_805D6678 = lbl_805D53A4;
    }
}

}
