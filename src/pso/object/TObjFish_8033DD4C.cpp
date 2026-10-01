#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK;
struct O_8033E5A8 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x70 - 0x1C];
    void *f70;
    u8 pad74[0x80 - 0x74];
    void *f80;
    u8 pad84[0x9C - 0x84];
    void *f9c;
    void *fa0[4];
};

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjFish__sub_8033E688(void *, void *, void *);
void * fn_8033E8C0(void *arg0, void *arg1);
M2C_UNK __dt__7TObjectFv(void *, int);
M2C_UNK TCameraCtrl__sub_80069DA8();
void request_destroy__11TBoss4Type2FUi(void *);
void init_state_1__8TObjFishFPv(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC4D8();
extern u8 lbl_804EFA38[];
O_8033E5A8 *TObjFish__sub_8033E5A8(O_8033E5A8 *arg0, s16 arg1);
void clear_render_callback__8TObjFishFv(int);
void TObjFish__sub_800E3074(int);
void reset_fish_globals__8TObjFishFv();
void TBoss6PlotFalz__sub_802ABF44(f32);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
void TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
void clear_render_callback__8TObjFishFv(int);
void TObjFish__sub_800E3074(int);
void reset_fish_globals__8TObjFishFv();
void TBoss6PlotFalz__sub_802ABF44(f32);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
int set_global_param__8TObjFishFi(void);
void TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
void TObjFish__sub_8033DD4C(void *p);
}

extern "C" {

void update__8TObjFishFPv(void* p);
void TObjFish__sub_8033DE60(void*);
int TObjFish__sub_8033DFB4(void*);
int TObjPlayer__sub_803078B0(void);
int TObjPlayer__sub_803E1D90(int, int, int, int);
void init_particle_effect__10TObjPlayerFv(void);
int render_effect__8TObjFishFPv(void*);
int set_global_param__8TObjFishFi(void);

#define arg0 ((u8 *) p)

#undef arg0

#define arg0 ((u8 *) p)

#define arg0 ((u8 *) p)
void TObjFish__sub_8033DD4C(void *p) {
    f32 f;
    s32 t;
    f = 0.0f;
    t = *(s32 *)(arg0 + 0x50);
    if (t > 0x11D && t < 0x1AC) {
        if (t >= 0x12C && t <= 0x1AC) {
            f = 1.0f;
        } else if (t > 0x11D && t < 0x12C) {
            f = (f32) (t - 0x11D) / 15.0f;
        }
    }
    if (0.0f != f) {
        if (f < 1.0f) {
            TBoss6PlotFalz__sub_802ABF44(f);
        }
        TObjPlayer__sub_803D9B2C();
        set_global_flag__10TObjPlayerFv();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x58);
        ((void (*)(int)) set_global_param__8TObjFishFi)(*(s32 *)(arg0 + 0x38));
        TObjFish__sub_800E3074(*(s32 *)(arg0 + 0x80));
        TObjEneSlimeOne__sub_803E4AF4(*(s32 *)(arg0 + 0x34), *(s32 *)(arg0 + 0x3C), *(f32 *)(arg0 + 0x4C));
        clear_render_callback__8TObjFishFv(*(s32 *)(arg0 + 0x80));
        clear_global_state__10TObjPlayerFv();
        TObjPlayer__sub_803D9B78();
        if (f < 1.0f) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}

void TObjFish__sub_8033DE60(void *p) {

    f32 f;
    s32 t;

    f = 0.0f;
    t = *(s32 *)(arg0 + 0x50);
    if (t > 0x101 && t < 0x12C) {
        if (t >= 0x10F && t <= 0x11D) {
            f = 1.0f;
        } else if (t > 0x101 && t < 0x10F) {
            f = (f32) (t - 0x101) / 14.0f;
        } else if (t > 0x11D && t < 0x12C) {
            f = (f32) (0x12C - t) / 15.0f;
        }
    }
    if (0.0f != f) {
        if (f < 1.0f) {
            TBoss6PlotFalz__sub_802ABF44(f);
        }
        TObjPlayer__sub_803D9B2C();
        set_global_flag__10TObjPlayerFv();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x58);
        ((void (*)(int)) set_global_param__8TObjFishFi)(*(s32 *)(arg0 + 0x2C));
        TObjFish__sub_800E3074(*(s32 *)(arg0 + 0x70));
        TObjEneSlimeOne__sub_803E4AF4(*(s32 *)(arg0 + 0x28), *(s32 *)(arg0 + 0x30), *(f32 *)(arg0 + 0x4C));
        clear_render_callback__8TObjFishFv(*(s32 *)(arg0 + 0x70));
        clear_global_state__10TObjPlayerFv();
        TObjPlayer__sub_803D9B78();
        if (f < 1.0f) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}
#undef arg0

void update__8TObjFishFPv(void* p) { TObjFish__sub_8033DFB4(p); TObjFish__sub_8033DE60(p); TObjFish__sub_8033DD4C((void *)(p)); render_effect__8TObjFishFPv(p); }

O_8033E5A8 *TObjFish__sub_8033E5A8(O_8033E5A8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        s32 i;
        arg0->vt = lbl_804EFA38;
        for (i = 0; i < 4; i++) {
            if (arg0->fa0[i] != NULL) {
                request_destroy__11TBoss4Type2FUi(arg0->fa0[i]);
                arg0->fa0[i] = NULL;
            }
        }
        TCameraCtrl__sub_80069DA8();
        TBoss6PlotFalz__sub_802AC4D8();
        if (arg0->f70 != NULL) {
            init_state_1__8TObjFishFPv(arg0->f70);
            arg0->f70 = NULL;
        }
        if (arg0->f80 != NULL) {
            init_state_1__8TObjFishFPv(arg0->f80);
            arg0->f80 = NULL;
        }
        if (arg0->f9c != NULL) {
            init_state_1__8TObjFishFPv(arg0->f9c);
            arg0->f9c = NULL;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void * fn_8033E8C0(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TObjFish__sub_8033E688(o, arg0, arg1);
    }
    return o;
}

}
