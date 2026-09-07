#include "pso/TAdSelectTxtSubGC.h"

TAdSelectTxtSubGC::~TAdSelectTxtSubGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern const f32 lbl_805DDF3C;
extern const f32 lbl_805DDF40;
void run_task__17TAdSelectTxtSubGCFv(u8 *arg0);
}

extern "C" {

void * TObjNpcHosa__create(void *arg0);
int TObjNpcHosa__sub_802A39B0(void);
void render__17TAdSelectTxtSubGCFv(void* p);
void *TObjControl__ct(void *, void *);
void *TObjNpcHosa__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int render_status__20TWindowSubStatusDispFPv(void*);

void render__17TAdSelectTxtSubGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); render_status__20TWindowSubStatusDispFPv(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }

    extern int lbl_805D6640;

#pragma push
#pragma fp_contract on
void run_task__17TAdSelectTxtSubGCFv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r4 < 5) {
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) (temp_r4 + 1);
    }
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) -((lbl_805DDF40 * (f32) M2C_FIELD(arg0, s32 *, 0x84)) - lbl_805DDF3C);
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) -((lbl_805DDF40 * (f32) M2C_FIELD(arg0, s32 *, 0x84)) - lbl_805DDF3C);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) ((M2C_FIELD(arg0, f32 *, 0x74) * (M2C_FIELD(arg0, f32 *, 0x24) - temp_f2)) + temp_f2);
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((M2C_FIELD(arg0, f32 *, 0x78) * (M2C_FIELD(arg0, f32 *, 0x28) - temp_f2_2)) + temp_f2_2);
    temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x74) * (M2C_FIELD(arg0, f32 *, 0x2C) - temp_f2_3)) + temp_f2_3);
    temp_f2_4 = M2C_FIELD(arg0, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) ((M2C_FIELD(arg0, f32 *, 0x78) * (M2C_FIELD(arg0, f32 *, 0x30) - temp_f2_4)) + temp_f2_4);
}
#pragma pop

int TObjNpcHosa__sub_802A39B0(void) {  return lbl_805D6640; }

extern void *tl_04;

void * TObjNpcHosa__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcHosa__ct(o2, o, arg0);
    }
    return o2;
}

}
