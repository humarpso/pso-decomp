#include "types.h"
#include "pso/misc/TOAirconCave01.h"
#include "pso/object/TObjFish.h"

extern "C" {

struct AirBase_80156e8c { char pad[0x18]; };
struct AirV_80156e8c : AirBase_80156e8c {
    virtual s32 m0(); virtual s32 m1(); virtual s32 m2();
    virtual s32 m3(); virtual s32 m4(); virtual s32 m5();
    virtual s32 m6(); virtual s32 m7();
    virtual s32 m8(void *a, f32 b, f32 c);
};

void *TOAirconCave01__ct(void *, void *, void *);
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix(int);
s32 pop_matrix();
void *__nw__7TObjectFUl(int);

extern u8 *TOAirconCave01__model_archive;

void TOAirconCave01::render() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    u8 *temp_r31;
    u8 *temp_r4;

    temp_r4 = (unsigned char *) (*(void **)((s8 *)TOAirconCave01__model_archive + 0x42C));
    temp_r31 = (unsigned char *) (*(void **)((s8 *)temp_r4 + 8));
    if (((AirV_80156e8c *)arg0)->m8(temp_r4, *(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        temp_r3 = *(s32 *)((s8 *)arg0 + 0x5C);
        *(s32 *)((s8 *)arg0 + 0x5C) = (s32) (temp_r3 + 0x106);
        push_matrix((int) (temp_r3));
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        TObjFish::set_global_param((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
        pop_matrix();
    }
}

extern void *tl_05;

void *TOAirconCave01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TOAirconCave01__ct(o, tl_05, arg0);
    }
    return o;
}

}
