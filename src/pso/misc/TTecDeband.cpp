#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8022F948___vt__10TTecDeband {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct VBase_8022F73C { u8 pad[0x18]; };

struct VObj_8022F73C : VBase_8022F73C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(u32 target);
};

struct Target_8022F73C {
    u16 id;
    u8 pad[6];
};

struct Deband_8022F73C {
    u8 pad0[0x1C];
    u32 source;
    u8 pad1[0xA4 - 0x20];
    s16 level;
    u8 pad2[0xA8 - 0xA6];
    u16 source_id;
    u8 pad3[0xDC - 0xAA];
    u32 proxy;
    s32 count;
    Target_8022F73C targets[11];
    s32 captured;
};

struct VBase_18_b27ba1 { char pad[0x18]; };

struct HitInfo_8022F588 { s32 type; f32 power; };

struct VObj_18_b27ba1 : VBase_18_b27ba1 {
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
    virtual void m21(void *, HitInfo_8022F588 *, void *, s32, s32);
};

struct Obj_8022F588 { u8 pad[0x1C]; u8 *source; u8 pad20[0x74 - 0x20]; f32 power; };

typedef s32 M2C_UNK;
extern "C" {
s32 obj_getField1c(int);
s32 TObjPlayer__sub_8004433C(void *);
s32 fn_8022F42C(void *);
int init_params__10TTecDebandFPv(void* p);
void update_effect_params__10TTecDebandFPv(u8 *arg0);
s32 TTecPlayerInfluence__ct(void *, void *, void *, void *);
extern M2C_UNK __vt__10TTecDeband[];
extern s32 lbl_805D37A8;
extern const f32 lbl_805DC7F0;
u8 *TTecDeband__sub_8022F948(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 find_entity_by_id(int);
s32 is_parents_unqueued__9TTecLukerFUi();
s32 is_valid_and_active__10TObjPlayerFUi(int);
M2C_UNK fn_802370D8(void *);
void run_task__10TTecDebandFv(Deband_8022F73C *self);
s32 obj_getField1c(int);
s32 is_split_screen();
s32 TWindowSubComCard__sub_801058F8(void *);
void show_party_effect__11TWindowCtrlFPvPvPv(s32, s32, s32);
void TTecDeband__vt5(Obj_8022F588 *arg0, VObj_18_b27ba1 *arg1);
s32 obj_getField1c(int);
s32 TObjPlayer__sub_8004433C(void *);
s32 fn_8022F42C(void *);
int init_params__10TTecDebandFPv(void* p);
void update_effect_params__10TTecDebandFPv(u8 *arg0);
s32 TTecPlayerInfluence__ct(void *, void *, void *, void *);
void TTecAnti__sub_8022B3E8(void *, void *, s32);
extern M2C_UNK __vt__10TTecDeband[];
extern s32 lbl_805D37A8;
extern const f32 lbl_805DC7F0;
s32 TTecDeband__ct(u32 a0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

void *__dt__10TTecDebandFv(void *arg0, s16 arg1);
void create__10TTecDebandFiii(s32 arg0, s32 arg1, s32 arg2);
void create__10TTecDebandFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
int init_params__10TTecDebandFPv(void* p);
void render__10TTecDebandFv(void);
void update_effect_params__10TTecDebandFPv(u8 *arg0);
M2C_UNK TTecAnti__sub_8022B35C(void *, s32);
s32 TTecCtrl__sub_8022DBC4(M2C_UNK, s16, M2C_UNK);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);
u32 __nw__7TObjectFUl(s32 a0 = 0);
int fn_80236EE8(void*);

int init_params__10TTecDebandFPv(void* p) { return fn_80236EE8(p); }

extern const f64 lbl_8044D0B0;

void update_effect_params__10TTecDebandFPv(u8 *arg0) {
    s32 res;
    res = TTecCtrl__sub_8022DBC4(0xA, M2C_FIELD(arg0, s16 *, 0xA4), 0xFFFF);
    TTecAnti__sub_8022B35C(arg0 + 0x74, res);
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (M2C_FIELD(arg0, s16 *, 0x98) * M2C_FIELD(arg0, s16 *, 0xA4));
}

void TTecDeband__vt5(Obj_8022F588 *arg0, VObj_18_b27ba1 *arg1) {
    HitInfo_8022F588 h;
    h.type = 0xA;
    h.power = arg0->power;
    if (TWindowSubComCard__sub_801058F8(arg1) == 0) {
        HitInfo_8022F588 c = h;
        arg1->m21(arg0->source, &c, 0, 0xA, -1);
        if (is_split_screen() == 0) {
            show_party_effect__11TWindowCtrlFPvPvPv(obj_getField1c((int)arg0->source), obj_getField1c((int)arg1), 0xA);
        }
    }
}

void create__10TTecDebandFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x140);
    if (obj != 0U) {
        TTecDeband__ct((u32)(obj), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
}
void create__10TTecDebandFiii(s32 arg0, s32 arg1, s32 arg2) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x140);
    if (obj != 0U) {
        TTecDeband__sub_8022F948((u8 *)(obj), (s32)(arg0), (s32)(arg1), (s32)(arg2));
    }
}
void render__10TTecDebandFv(void) {  }

extern M2C_UNK __vt__10TTecDeband[];

void *__dt__10TTecDebandFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecDeband;
        __dt__19TTecPlayerInfluenceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8022F948___vt__10TTecDeband_size[sizeof(RecoveredGlobal_8022F948___vt__10TTecDeband) == 0x20 ? 1 : -1];

void run_task__10TTecDebandFv(Deband_8022F73C *self) {
    u32 target;
    s32 i;
    if (self->proxy == 0) {
        queue_destruction__7TObjectFv(self);
        return;
    }
    self->source = find_entity_by_id(self->source_id);
    if (self->source == 0) {
        queue_destruction__7TObjectFv(self);
        return;
    }
    if (self->captured != 0) {
        if (self->level <= 1) {
            ((VObj_8022F73C *)self)->m5(self->source);
        } else {
            ((VObj_8022F73C *)self)->m5(self->source);
            if (self->count != 0) {
                for (i = 0; i < self->count; i++) {
                    target = find_entity_by_id(self->targets[i].id);
                    if ((is_parents_unqueued__9TTecLukerFUi() != 0) && (is_valid_and_active__10TObjPlayerFUi(target) != 0)) {
                        ((VObj_8022F73C *)self)->m5(target);
                    }
                }
            }
        }
    } else if (self->level <= 1) {
        ((VObj_8022F73C *)self)->m5(self->source);
    } else {
        fn_802370D8(self);
    }
    queue_destruction__7TObjectFv(self);
}

#pragma opt_common_subs off
s32 TTecDeband__ct(u32 a0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
#define arg0 ((u8 *)a0)
    u32 temp_r3_2;
    u8 *temp_r3;
    TTecPlayerInfluence__ct((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg4));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecDeband;
    TObjPlayer__sub_8004433C((void *) (arg0 + 0xE0));
    s32 g = lbl_805D37A8;
    M2C_FIELD(arg0, s32 *, 0) = g;
    M2C_FIELD(arg0, s32 *, 0x13C) = 1;
    TTecAnti__sub_8022B3E8((void *) (arg0 + 0xE0), (void *) arg3, g);
    update_effect_params__10TTecDebandFPv(arg0);
    temp_r3 = M2C_FIELD(arg0, u8 **, 0xDC);
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0xA4), f32 *, 0xC) = (f32) (lbl_805DC7F0 + M2C_FIELD(arg0, f32 *, 0x7C));
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r3_2 != 0U) {
        M2C_FIELD(arg0, s16 *, 0xA8) = obj_getField1c((int) (temp_r3_2));
    }
    if (M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        init_params__10TTecDebandFPv(arg0);
        fn_8022F42C(arg0);
    }
    return (s32)a0;
#undef arg0
}
#pragma opt_common_subs reset

u8 *TTecDeband__sub_8022F948(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r3_2;
    u8 *temp_r3;
    TTecPlayerInfluence__ct((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg3));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8022F948___vt__10TTecDeband *)&__vt__10TTecDeband).value;
    TObjPlayer__sub_8004433C((void *) (arg0 + 0xE0));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D37A8;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    update_effect_params__10TTecDebandFPv((u8 *)((void *) (arg0)));
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xDC));
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0xA4), f32 *, 0xC) = (f32) (lbl_805DC7F0 + M2C_FIELD(arg0, f32 *, 0x7C));
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r3_2 != 0U) {
        M2C_FIELD(arg0, s16 *, 0xA8) = obj_getField1c((int) (temp_r3_2));
    }
    init_params__10TTecDebandFPv((void*)((void *) (arg0)));
    fn_8022F42C((void *) (arg0));
    return arg0;
}

}
