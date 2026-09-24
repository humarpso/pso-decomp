#include "pso/TAdChrSelMovePlateGC.h"

TAdChrSelMovePlateGC::~TAdChrSelMovePlateGC() {}

#include "types.h"

struct T_8032572C { u8 pad[0x20]; u32 count; u8 pad24[0x184]; s32 arr[1]; };

struct R_803257E8 { f32 a; f32 b; f32 c; f32 d; u8 pad[0x10]; };

struct T_803257E8 { u8 pad[0x38]; R_803257E8 r[12]; };

extern "C" {
void TAdChrSelMovePlateGC__sub_8032572C(T_8032572C *self);
extern const f32 lbl_805DF60C;
extern const f32 lbl_805DF610;
extern const f32 lbl_805DF614;
extern const f32 lbl_805DF618;
void TAdChrSelMovePlateGC__sub_803257E8(T_803257E8 *self);
}

extern "C" {

void render__20TAdChrSelMovePlateGCFv(void* p);
int fn_80325660(void*);
int get_state_flag__9TMainTaskFv(void*);

void render__20TAdChrSelMovePlateGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { fn_80325660(p); } }
void TAdChrSelMovePlateGC__sub_8032572C(T_8032572C *self) {
    u32 i;
    for (i = 0; i < self->count; i++) {
        self->arr[i] = 0;
    }
    self->count = 0;
}
void TAdChrSelMovePlateGC__sub_803257E8(T_803257E8 *self) {
    s32 i;
    for (i = 0; i < 12; i++) {
        self->r[i].a = lbl_805DF60C;
        self->r[i].b = lbl_805DF610;
        self->r[i].c = lbl_805DF614;
        self->r[i].d = lbl_805DF618;
    }
}

}
