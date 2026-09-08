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

extern "C" {
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK __vt__18TObjEnvSoundGlobal[];
extern s32 lbl_805D3350;
u8 *TObjEnvSoundGlobal__ct(u8 *arg0, s32 arg1, s32 arg2);
void copy_pair__18TObjEnvSoundGlobalFPvPv(void* p, void* q);
s32 get_global_state__14TOKeyMachine01Fv();
extern RecoveredGlobal_801902D8_lbl_804B7A70 lbl_804B7A70;
extern const f32 lbl_805DBE10;
extern const f32 lbl_805DBE14;
s32 TObjEnvSoundGlobal__sub_801902D8(u8 *arg0);
}

extern "C" {

void * TObjEnvSoundEx__create(void *arg0);
void *__dt__18TObjEnvSoundGlobalFv(void *arg0, s16 arg1);
void copy_pair__18TObjEnvSoundGlobalFPvPv(void* p, void* q);
void render__18TObjEnvSoundGlobalFv(void);
int run_task__18TObjEnvSoundGlobalFv(void);
void *TObjEnvSoundEx__ct(void *, void *, void *);
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

int run_task__18TObjEnvSoundGlobalFv(void) { return 0; }

extern M2C_UNK __vt__18TObjEnvSoundGlobal[];

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
        o = TObjEnvSoundEx__ct(o, tl_05, arg0);
    }
    return o;
}

}
