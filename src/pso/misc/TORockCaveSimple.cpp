#include "types.h"

struct Base1_80175024 { char pad[0x18]; };
struct VObj1_80175024 : Base1_80175024 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void *TORockCaveSimple__ct(void *arg0);
void *__dt__16TORockCaveSimpleFv(void *arg0, s16 arg1);
void play_trigger_effect__16TORockCaveSimpleFPv(u8 *arg0);
s32 post_translate_matrix(void *);
void TORockCave__ct(void *);
s32 draw_ginja_object(s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__10TORockCaveFv(void *, int);
s32 set_global_param__8TObjFishFi(s32);

void play_trigger_effect__16TORockCaveSimpleFPv(u8 *arg0) {
    VObj1_80175024 *self = (VObj1_80175024 *)arg0;
    if (self->m8(*(f32 *)((s8 *)arg0 + 0xAC), *(f32 *)((s8 *)arg0 + 0xB0)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x24));
        draw_ginja_object(*(s32 *)((s8 *)arg0 + 0x34));
        pop_matrix();
    }
}

extern s32 __vt__16TORockCaveSimple[];

void *__dt__16TORockCaveSimpleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TORockCaveSimple;
        __dt__10TORockCaveFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__16TORockCaveSimple[];
extern void *TORockCaveSimple__class_name;

void *TORockCaveSimple__ct(void *arg0) {
    TORockCave__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TORockCaveSimple;
    *(void **)((s8 *)arg0 + 0x0) = TORockCaveSimple__class_name;
    return arg0;
}

}
