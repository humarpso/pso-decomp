#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80190484___vt__18TObjEnvSoundGlobal {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_801902D8_lbl_804B7A70 { M2C_UNK value; u8 remaining[0x8C]; };

struct Obj_801903B4 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x90 - 0x44]; f32 param; s32 sound; s32 mode; };

struct Env_80190624 {
    u8 pad0[0x38];
    u8 pos[0x90 - 0x38];
    s32 f90;
    f32 vol;
    f32 step;
    s32 f9C;
    s32 mode;
    f32 range;
};

extern "C" {
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK __vt__18TObjEnvSoundGlobal[];
extern s32 lbl_805D3350;
u8 *TObjEnvSoundGlobal__ct(u8 *arg0, s32 arg1, s32 arg2);
u8 *TObjEnvSoundEx__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void copy_pair__18TObjEnvSoundGlobalFPvPv(void* p, void* q);
s32 get_global_state__14TOKeyMachine01Fv();
extern RecoveredGlobal_801902D8_lbl_804B7A70 lbl_804B7A70;
extern const f32 lbl_805DBE10;
extern const f32 lbl_805DBE14;
extern const f32 lbl_805DBE18;
extern const f32 lbl_805DBE1C;
s32 TObjEnvSoundGlobal__sub_801902D8(u8 *arg0);
void TOTrapAncient01__sub_80226578(s32, void *, f32 *, s32, s32);
void run_task__18TObjEnvSoundGlobalFv(Obj_801903B4 *self);
f32 fn_8013157C(void *, void *);
void TOTrapAncient01__sub_80226578(s32, void *, f32 *, s32, s32);
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805DBE10;
void run_task__14TObjEnvSoundExFv(Env_80190624 *o);
}

extern "C" {

void * TObjEnvSoundEx__create(void *arg0);
void *__dt__18TObjEnvSoundGlobalFv(void *arg0, s16 arg1);
void copy_pair__18TObjEnvSoundGlobalFPvPv(void* p, void* q);
void render__18TObjEnvSoundGlobalFv(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
int is_not_split_screen__13TRaderMapCoreFv(void *);

#pragma push
#pragma opt_common_subs off
s32 TObjEnvSoundGlobal__sub_801902D8(u8 *arg0) {
    s32 var_r31;
    u32 temp_r4;
    var_r31 = 1;
    temp_r4 = M2C_FIELD(&lbl_804B7A70.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
    if (temp_r4 != 0U) {
        copy_pair__18TObjEnvSoundGlobalFPvPv((void*)((void *) (arg0 + 0x94)), (void*)((int) (temp_r4 + (M2C_FIELD(arg0, s32 *, 0x84) * 8))));
    } else {
        var_r31 = 0;
        M2C_FIELD(arg0, s32 *, 0x94) = -1;
        M2C_FIELD(arg0, s32 *, 0x98) = -1;
    }
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg0, s32 *, 0x88);
    if (M2C_FIELD(arg0, f32 *, 0x90) < lbl_805DBE10) {
        M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_805DBE10;
    }
    if (M2C_FIELD(arg0, f32 *, 0x90) > lbl_805DBE14) {
        M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_805DBE14;
    }
    return var_r31;
}
#pragma pop

void copy_pair__18TObjEnvSoundGlobalFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void render__18TObjEnvSoundGlobalFv(void) {  }

extern M2C_UNK __vt__18TObjEnvSoundGlobal[];

void run_task__18TObjEnvSoundGlobalFv(Obj_801903B4 *self) {
    switch (self->mode) {
    case 0:
        break;
    case 1:
        TOTrapAncient01__sub_80226578(self->sound, self, self->pos, 0, 0);
        break;
    case 2:
        TOTrapAncient01__sub_80226578(self->sound, self, 0, (s32)self->param, 2);
        break;
    }
}

void *__dt__18TObjEnvSoundGlobalFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEnvSoundGlobal;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_80190484___vt__18TObjEnvSoundGlobal_size[sizeof(RecoveredGlobal_80190484___vt__18TObjEnvSoundGlobal) == 0x34 ? 1 : -1];
u8 *TObjEnvSoundGlobal__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80190484___vt__18TObjEnvSoundGlobal *)&__vt__18TObjEnvSoundGlobal).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3350;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    TObjEnvSoundGlobal__sub_801902D8((u8 *)((void *) (arg0)));
    return arg0;
}

void * TObjEnvSoundEx__create(void *arg0) {
    void *o;
    if (is_not_split_screen__13TRaderMapCoreFv(arg0) == 1) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0xA8);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjEnvSoundEx__ct)(o, tl_05, arg0);
    }
    return o;
}

f32 get_random_float__8TObjFishFv(f32);
s32 TObjEnvSoundEx__sub_8019054C(u8 *arg0);
s32 disallow_rendering__7TObjectFv(void *);
extern M2C_UNK __vt__14TObjEnvSoundEx[];
extern s32 lbl_805D334C;
void *__dt__14TObjEnvSoundExFv(void *arg0, s16 arg1);
void render__14TObjEnvSoundExFv(void);
f32 fn_8013157C(void *, void *);
extern u8 *lbl_805D4DF0;
struct RecoveredGlobal_8019080C___vt__14TObjEnvSoundEx {
    M2C_UNK value;
    u8 remaining[0x30];
};

s32 TObjEnvSoundEx__sub_8019054C(u8 *arg0) {
    s32 var_r31;
    u32 temp_r4;
    var_r31 = 1;
    temp_r4 = M2C_FIELD(&lbl_804B7A70.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
    if (temp_r4 != 0U) {
        ((M2C_UNK (*)(void *, int))copy_pair__18TObjEnvSoundGlobalFPvPv)((void *) (arg0 + 0x9C), (int) (temp_r4 + (M2C_FIELD(arg0, s32 *, 0x84) * 8)));
    } else {
        var_r31 = 0;
        M2C_FIELD(arg0, s32 *, 0x9C) = -1;
        M2C_FIELD(arg0, s32 *, 0xA0) = -1;
    }
    M2C_FIELD(arg0, f32 *, 0x98) = get_random_float__8TObjFishFv(M2C_FIELD(arg0, f32 *, 0x6C));
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) M2C_FIELD(arg0, f32 *, 0x70);
    if (M2C_FIELD(arg0, f32 *, 0xA4) <= lbl_805DBE18) {
        M2C_FIELD(arg0, f32 *, 0xA4) = (f32) lbl_805DBE1C;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) < -0x7F) {
        M2C_FIELD(arg0, s32 *, 0x90) = -0x7F;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x90) = 0x7F;
    }
    return var_r31;
}

void render__14TObjEnvSoundExFv(void) {  }

#define F(o) M2C_FIELD(self, f32 *, o)
#define S(o) M2C_FIELD(self, s32 *, o)

#undef F
#undef S

extern M2C_UNK __vt__14TObjEnvSoundEx[];

void run_task__14TObjEnvSoundExFv(Env_80190624 *o) {
    if (fn_8013157C(lbl_805D4DF0 + 0x178, o->pos) < o->range * o->range) {
        o->vol += o->step;
        if (o->vol > (f32)o->f90) {
            o->vol = (f32)o->f90;
        }
        switch (o->mode) {
        case 0:
            break;
        case 1:
            TOTrapAncient01__sub_80226578((s32)(o->f9C), (void *)(o), (f32 *)(o->pos), (s32)(0), (s32)(0));
            break;
        case 2:
            TOTrapAncient01__sub_80226578((s32)(o->f9C), (void *)(o), (f32 *)(0), (s32)((s32)o->vol), (s32)(2));
            break;
        }
    } else {
        o->vol -= o->step;
        if (o->vol < -127.0f) {
            o->vol = -127.0f;
        }
        if (o->vol > lbl_805DBE10) {
            switch (o->mode) {
            case 0:
                break;
            case 1:
                TOTrapAncient01__sub_80226578((s32)(o->f9C), (void *)(o), (f32 *)(o->pos), (s32)(0), (s32)(0));
                break;
            case 2:
                TOTrapAncient01__sub_80226578((s32)(o->f9C), (void *)(o), (f32 *)(0), (s32)((s32)o->vol), (s32)(2));
                break;
            }
        }
    }
}

void *__dt__14TObjEnvSoundExFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEnvSoundEx;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8019080C___vt__14TObjEnvSoundEx_size[sizeof(RecoveredGlobal_8019080C___vt__14TObjEnvSoundEx) == 0x34 ? 1 : -1];
u8 *TObjEnvSoundEx__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    ((s32 (*)(void *))TPhotonMagicSquare__sub_801A2640)((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019080C___vt__14TObjEnvSoundEx *)&__vt__14TObjEnvSoundEx).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D334C;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    TObjEnvSoundEx__sub_8019054C((u8 *)((void *) (arg0)));
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DBE10;
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

}
