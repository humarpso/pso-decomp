#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"

extern "C" {
extern char lbl_8046FCB8[];
extern char lbl_8046FCC8[];
extern char lbl_8046FCDC[];
extern char lbl_8046FCF4[];
extern char lbl_8046FD08[];
extern char lbl_8046FD1C[];
extern const char *bm_obj_meka_fish_0_model_names[2];
extern const char *bm_obj_meka_fish_0_motion_names[2];
extern BmlResourceDescriptor TOMekaFish00__resource_descriptor;
extern const char *bm_obj_meka_fish_1_model_names[2];
extern const char *bm_obj_meka_fish_1_motion_names[2];
extern BmlResourceDescriptor TOMekaFish01__shared_resource_descriptor;
}
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802AA354_lbl_804DE000 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802AA354_lbl_804DE000_size[sizeof(RecoveredGlobal_802AA354_lbl_804DE000) == 0x10 ? 1 : -1];

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_802AA354_lbl_804DE000 biwamushi_resource_desc;
extern u32 TOBiwaMushi__data_805D66E0;
void load_resource_instance__11TOBiwaMushiFv(void);
}

extern "C" {

void *TOBiwaMushi__create(void *arg0);
void *__dt__11TOBiwaMushiFv(void *arg0, s16 arg1);
void free_shared_data__11TOBiwaMushiFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOBiwaMushi__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__11TODragonflyFv(void *, int);
void *__nw__7TObjectFUl(int);

void *TOBiwaMushi__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TOBiwaMushi__ct(o, arg0);
    }
    return o;
}

extern u32 TOBiwaMushi__data_805D66E0;

void free_shared_data__11TOBiwaMushiFv(void) {
    if ((u32) TOBiwaMushi__data_805D66E0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOBiwaMushi__data_805D66E0, 1);
        TOBiwaMushi__data_805D66E0 = 0U;
    }
}

extern M2C_UNK __vt__11TOBiwaMushi[];

void load_resource_instance__11TOBiwaMushiFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &biwamushi_resource_desc.value, 0, 0, 0));
    }
    (*(s32 *)&TOBiwaMushi__data_805D66E0) = var_r0;
}

void *__dt__11TOBiwaMushiFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOBiwaMushi;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

extern "C" {
#pragma push
struct VBase_802AA3FC { u8 pad[0x18]; };
struct Obj_802AA3FC : VBase_802AA3FC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Model_802AA3FC { u8 pad[0x14]; f32 f14; };
struct ModelRef_802AA3FC { u8 pad[4]; Model_802AA3FC *m; };
struct Anim_802AA3FC { u8 pad[4]; u32 frames; };

struct Self_802AA3FC : Obj_802AA3FC {
    u8 pad1c[0x24 - 0x1c];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    ModelRef_802AA3FC *f34;
    u8 pad38[0x84 - 0x38];
    s32 f84;
    s32 f88;
    u8 pad8c[0xac - 0x8c];
    s32 fAC;
    u8 padb0[4];
    f32 fB4;
    f32 fB8;
    Anim_802AA3FC *fBC;
    f32 fC0;
    f32 fC4;
    u8 padc8[0xec - 0xc8];
    f32 fEC;
    f32 fF0;
    f32 fF4;
    s32 fF8;
    s32 fFC;
};

Anim_802AA3FC *get_bml_motion(u32, s32);
s32 TObjFish__sub_8001EDB0(u32, s32);
ModelRef_802AA3FC *get_bml_model(u32, s32);
void TODragonfly__ct(void *, void *);
s32 rand();
f32 sin_table_lookup(s32);
extern s32 __vt__11TOBiwaMushi[];
extern s32 lbl_805D3E48;
extern u32 TOBiwaMushi__data_805D66E0;
extern const f32 lbl_805DE068;
extern const f32 lbl_805DE06C;
extern const f32 lbl_805DE070;
extern const f32 lbl_805DE074;
extern const f32 lbl_805DE078;
extern const f32 lbl_805DE07C;
extern const f32 lbl_805DE080;
extern const f32 lbl_805DE084;

#pragma fp_contract on
#define self ((Self_802AA3FC *)arg0)
void *TOBiwaMushi__ct(void *arg0, void *arg1) {
    TODragonfly__ct(self, arg1);
    *(s32 **)((u8 *)self + 0x18) = __vt__11TOBiwaMushi;
    *(s32 *)self = lbl_805D3E48;
    self->m5(arg1);
    self->f34 = get_bml_model(TOBiwaMushi__data_805D66E0, 0);
    self->f24 = TObjFish__sub_8001EDB0(TOBiwaMushi__data_805D66E0, 0);
    self->fBC = get_bml_motion(TOBiwaMushi__data_805D66E0, 0);
    self->fB4 = (f32)self->fBC->frames - lbl_805DE068;
    self->fB8 = lbl_805DE06C;
    self->fC0 = lbl_805DE070;
    self->fC4 = self->f34->m->f14;
    self->fAC = 0;
    self->fF4 = lbl_805DE074 * self->f84 + lbl_805DE068;
    self->fF8 = lbl_805DE078 * (lbl_805DE07C / (lbl_805DE080 / self->fF4));
    self->fFC = lbl_805DE078 * (lbl_805DE07C * (lbl_805DE084 * rand()));
    self->fEC = lbl_805DE074 * self->f88 + lbl_805DE068;
    self->fF0 = self->fEC * sin_table_lookup(self->fFC);
    return arg0;
}
#undef self
#pragma pop
}

struct RecoveredGlobal_802AA644_lbl_804DDFE0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802AA644_lbl_804DDFE0_size[sizeof(RecoveredGlobal_802AA644_lbl_804DDFE0) == 0x10 ? 1 : -1];

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern u32 TOMekaFish01__data_805D66DC;
void load_shared_resource__12TOMekaFish01Fv(void);
}

extern "C" {

void *TOMekaFish01__create(void *arg0);
void *__dt__12TOMekaFish01Fv(void *arg0, s16 arg1);
void free_static_data__12TOMekaFish01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOMekaFish01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__11TODragonflyFv(void *, int);
void *__nw__7TObjectFUl(int);

void *TOMekaFish01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TOMekaFish01__ct(o, arg0);
    }
    return o;
}

extern u32 TOMekaFish01__data_805D66DC;

void free_static_data__12TOMekaFish01Fv(void) {
    if ((u32) TOMekaFish01__data_805D66DC != 0U) {
        TLobby__sub_8001FE7C((void*)TOMekaFish01__data_805D66DC, 1);
        TOMekaFish01__data_805D66DC = 0U;
    }
}

extern M2C_UNK __vt__12TOMekaFish01[];

void load_shared_resource__12TOMekaFish01Fv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &TOMekaFish01__shared_resource_descriptor, 0, 0, 0));
    }
    (*(s32 *)&TOMekaFish01__data_805D66DC) = var_r0;
}

void *__dt__12TOMekaFish01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOMekaFish01;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

extern "C" {
#pragma push
struct VBase_802AA6EC { u8 pad[0x18]; };
struct Obj_802AA6EC : VBase_802AA6EC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Model_802AA6EC { u8 pad[0x14]; f32 f14; };
struct ModelRef_802AA6EC { u8 pad[4]; Model_802AA6EC *m; };
struct Anim_802AA6EC { u8 pad[4]; u32 frames; };

struct Self_802AA6EC : Obj_802AA6EC {
    u8 pad1c[0x24 - 0x1c];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    ModelRef_802AA6EC *f34;
    u8 pad38[0x84 - 0x38];
    s32 f84;
    s32 f88;
    u8 pad8c[0xac - 0x8c];
    s32 fAC;
    u8 padb0[4];
    f32 fB4;
    f32 fB8;
    Anim_802AA6EC *fBC;
    f32 fC0;
    f32 fC4;
    u8 padc8[0xec - 0xc8];
    f32 fEC;
    f32 fF0;
    f32 fF4;
    s32 fF8;
    s32 fFC;
};

#define get_bml_motion ((Anim_802AA6EC * (*)(u32, s32))get_bml_motion)
s32 TObjFish__sub_8001EDB0(u32, s32);
#define get_bml_model ((ModelRef_802AA6EC * (*)(u32, s32))get_bml_model)
void TODragonfly__ct(void *, void *);
s32 rand();
f32 sin_table_lookup(s32);
extern s32 __vt__12TOMekaFish01[];
extern s32 TOMekaFish01__name;
extern u32 TOMekaFish01__data_805D66DC;
extern const f32 lbl_805DE068;
extern const f32 lbl_805DE06C;
extern const f32 lbl_805DE070;
extern const f32 lbl_805DE074;
extern const f32 lbl_805DE078;
extern const f32 lbl_805DE07C;
extern const f32 lbl_805DE080;
extern const f32 lbl_805DE084;

#pragma fp_contract on
#define self ((Self_802AA6EC *)arg0)
void *TOMekaFish01__ct(void *arg0, void *arg1) {
    TODragonfly__ct(self, arg1);
    *(s32 **)((u8 *)self + 0x18) = __vt__12TOMekaFish01;
    *(s32 *)self = TOMekaFish01__name;
    self->m5(arg1);
    self->f34 = get_bml_model(TOMekaFish01__data_805D66DC, 0);
    self->f24 = TObjFish__sub_8001EDB0(TOMekaFish01__data_805D66DC, 0);
    self->fBC = get_bml_motion(TOMekaFish01__data_805D66DC, 0);
    self->fB4 = (f32)self->fBC->frames - lbl_805DE068;
    self->fB8 = lbl_805DE06C;
    self->fC0 = lbl_805DE070;
    self->fC4 = self->f34->m->f14;
    self->fAC = 0;
    self->fF4 = lbl_805DE074 * self->f84 + lbl_805DE068;
    self->fF8 = lbl_805DE078 * (lbl_805DE07C / (lbl_805DE080 / self->fF4));
    self->fFC = lbl_805DE078 * (lbl_805DE07C * (lbl_805DE084 * rand()));
    self->fEC = lbl_805DE074 * self->f88 + lbl_805DE068;
    self->fF0 = self->fEC * sin_table_lookup(self->fFC);
    return arg0;
}
#undef self
#pragma pop
}
#undef get_bml_motion
#undef get_bml_model

extern "C" {

void *TOMekaFish00__create(void *arg0);
u8 *TOMekaFish00__ct(u8 *arg0, s32 arg1);
#define TOMekaFish00__ct ((void * (*)(void *, void *))TOMekaFish00__ct)
void *__nw__7TObjectFUl(int);

void *TOMekaFish00__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TOMekaFish00__ct(o, arg0);
    }
    return o;
}

}

#undef TOMekaFish00__ct

struct RecoveredGlobal_802AA934_lbl_804DDFC0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802AA934_lbl_804DDFC0_size[sizeof(RecoveredGlobal_802AA934_lbl_804DDFC0) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_802AA9DC___vt__12TOMekaFish00 { M2C_UNK value; u8 remaining[0x3C]; };

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern u32 TOMekaFish00__data_805D66D8;
void load_shared_resource__12TOMekaFish00Fv(void);
#define get_bml_motion ((s32 (*)(void *, s32))get_bml_motion)
#define TObjFish__sub_8001EDB0 ((s32 (*)(void *, s32))TObjFish__sub_8001EDB0)
#define get_bml_model ((s32 (*)(void *, s32))get_bml_model)
#define TODragonfly__ct ((u8 * (*)(void *))TODragonfly__ct)
s32 rand(void);
f32 sin_table_lookup(s32);
extern M2C_UNK __vt__12TOMekaFish00[];
extern s32 TOMekaFish00__name;
extern u32 TOMekaFish00__data_805D66D8;
extern const f32 lbl_805DE068;
extern const f32 lbl_805DE06C;
extern const f32 lbl_805DE070;
extern const f32 lbl_805DE074;
extern const f32 lbl_805DE078;
extern const f32 lbl_805DE07C;
extern const f32 lbl_805DE080;
extern const f32 lbl_805DE084;
u8 *TOMekaFish00__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void *__dt__12TOMekaFish00Fv(void *arg0, s16 arg1);
s32 is_phase_reached__14TBoss6PlotFalzFv(void);
void release_static_instance__12TOMekaFish00Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__11TODragonflyFv(void *, int);
s32 get_phase__8TObjFishFPv(void*);

extern u32 TOMekaFish00__data_805D66D8;

void release_static_instance__12TOMekaFish00Fv(void) {
    if ((u32) TOMekaFish00__data_805D66D8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOMekaFish00__data_805D66D8, 1);
        TOMekaFish00__data_805D66D8 = 0U;
    }
}

extern M2C_UNK __vt__12TOMekaFish00[];

void load_shared_resource__12TOMekaFish00Fv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &TOMekaFish00__resource_descriptor, 0, 0, 0));
    }
    (*(s32 *)&TOMekaFish00__data_805D66D8) = var_r0;
}

void *__dt__12TOMekaFish00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOMekaFish00;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TBoss6PlotFalz__instance;

#pragma push
#pragma fp_contract on
u8 *TOMekaFish00__ct(u8 *arg0, s32 arg1) {
    TODragonfly__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802AA9DC___vt__12TOMekaFish00 *)&__vt__12TOMekaFish00).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TOMekaFish00__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((*(u8 * *)&TOMekaFish00__data_805D66D8), 0);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((*(u8 * *)&TOMekaFish00__data_805D66D8), 0);
    M2C_FIELD(arg0, s32 *, 0xBC) = get_bml_motion((*(u8 * *)&TOMekaFish00__data_805D66D8), 0);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xBC), u32 *, 4) - lbl_805DE068);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DE06C;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DE070;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) ((lbl_805DE074 * (f32) M2C_FIELD(arg0, s32 *, 0x84)) + lbl_805DE068);
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32) (lbl_805DE078 * (lbl_805DE07C / (lbl_805DE080 / M2C_FIELD(arg0, f32 *, 0xF4))));
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (lbl_805DE078 * (lbl_805DE07C * (lbl_805DE084 * (f32) rand())));
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) ((lbl_805DE074 * (f32) M2C_FIELD(arg0, s32 *, 0x88)) + lbl_805DE068);
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0xFC)));
    return arg0;
}
#pragma pop

s32 is_phase_reached__14TBoss6PlotFalzFv(void) {
    u32 p = TBoss6PlotFalz__instance;
    if (!p) {
        return 0;
    }
    return get_phase__8TObjFishFPv((void*)TBoss6PlotFalz__instance) >= 7 ? 1 : 0;
}

}

#undef get_bml_motion
#undef TObjFish__sub_8001EDB0
#undef get_bml_model
#undef TODragonfly__ct
extern "C" {
extern char lbl_8046FD7C[];
extern char lbl_8046FD8C[];
s32 TOMekaFish00__name = (s32)lbl_8046FD7C;
s32 TOMekaFish01__name = (s32)lbl_8046FD8C;
}

extern "C" {
__declspec(section ".data") const char *bm_obj_meka_fish_0_model_names[2] = { lbl_8046FCB8, NULL };
__declspec(section ".data") const char *bm_obj_meka_fish_0_motion_names[2] = { lbl_8046FCC8, NULL };
BmlResourceDescriptor TOMekaFish00__resource_descriptor = { lbl_8046FCDC, bm_obj_meka_fish_0_model_names, bm_obj_meka_fish_0_motion_names, 1, 1 };
__declspec(section ".data") const char *bm_obj_meka_fish_1_model_names[2] = { lbl_8046FCF4, NULL };
__declspec(section ".data") const char *bm_obj_meka_fish_1_motion_names[2] = { lbl_8046FD08, NULL };
BmlResourceDescriptor TOMekaFish01__shared_resource_descriptor = { lbl_8046FD1C, bm_obj_meka_fish_1_model_names, bm_obj_meka_fish_1_motion_names, 1, 1 };
}
