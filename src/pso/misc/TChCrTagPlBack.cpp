#include "types.h"

extern "C" {

int TChCrTagPlBack__vt4(void);
int render__14TChCrTagPlBackFv(void* p);
int draw_frame__16TObjCMAssignMenuFPv(void*);
void *__dt__8TChCrTagFv(void *self, s16 arg1);
void __dl__7TObjectFPv(void *);
void update_fade__8TChCrTagFPv(void *);
void render_shadows__7TObjectFv(void *);
void *__dt__14TChCrTagPlBackFv(void *self, s16 arg1);
extern void *__vt__14TChCrTagPlBack[6];

int render__14TChCrTagPlBackFv(void* p) { return draw_frame__16TObjCMAssignMenuFPv(p); }
int TChCrTagPlBack__vt4(void) { return 0; }
void *__dt__14TChCrTagPlBackFv(void *self, s16 arg1) {
    if (self != NULL) {
        *(void ***)((u8 *)self + 0x18) = __vt__14TChCrTagPlBack;
        __dt__8TChCrTagFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void *__vt__14TChCrTagPlBack[6] = {
    0, 0, (void *)__dt__14TChCrTagPlBackFv, (void *)update_fade__8TChCrTagFPv,
    (void *)render__14TChCrTagPlBackFv, (void *)render_shadows__7TObjectFv,
};

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__14TChCrTagPlBackFv(void *arg0);
void __ct__8TChCrTagFv(void *);

extern const f32 lbl_805DDFE4;
extern void *__vt__14TChCrTagPlBack[6];
extern const f32 lbl_805DDFE8;
extern void *TChCrTagPlBack__name;

void *__ct__14TChCrTagPlBackFv(void *arg0) {
    __ct__8TChCrTagFv(arg0);
    M2C_FIELD(arg0, void ***, 0x18) = __vt__14TChCrTagPlBack;
    M2C_FIELD(arg0, void **, 0x0) = TChCrTagPlBack__name;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DDFE4;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DDFE8;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DDFE4;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DDFE8;
    return arg0;
}

}

#define __ct__14TChCrTagPlBackFv (*(void * (*)(void *, void *, void *))&__ct__14TChCrTagPlBackFv)

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__14TChCrTagPlBackFPv(void *arg0);
void * create_default__14TChCrTagPlBackFv(void);
void get_position_offset__14TChCrTagPlBackFPvPv(void *arg0, void *arg1);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *create__14TChCrTagPlBackFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = __ct__14TChCrTagPlBackFv(o, tl_03, arg0);
    }
    return o;
}

void * create_default__14TChCrTagPlBackFv(void) { return create__14TChCrTagPlBackFPv((void *)((void*)(0))); }

extern const f32 lbl_805DDFF0;
extern const f32 lbl_805DDFF4;

void get_position_offset__14TChCrTagPlBackFPvPv(void *arg0, void *arg1) {
    void *temp_r3;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r5 != NULL) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) ((M2C_FIELD(temp_r5, f32 *, 0x30) + M2C_FIELD(temp_r5, f32 *, 0x38)) - lbl_805DDFF0);
        temp_r3 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(arg1, f32 *, 4) = (f32) ((M2C_FIELD(temp_r3, f32 *, 0x34) + M2C_FIELD(temp_r3, f32 *, 0x3C)) - lbl_805DDFF4);
    }
}

}

#undef __ct__14TChCrTagPlBackFv
