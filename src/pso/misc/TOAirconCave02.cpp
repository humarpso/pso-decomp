#include "types.h"
#include "pso/misc/TOAirconCave02.h"

extern "C" {

struct VBase570D4_801570d4 { char pad[0x18]; };
struct VObj570D4_801570d4 : VBase570D4_801570d4 {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
    virtual s32 m6();
    virtual s32 m7();
    virtual s32 m8(f32, f32);
};

void *TOAirconCave02__ct(void *, void *, void *);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void *__nw__7TObjectFUl(int);
s32 set_global_param__8TObjFishFl(int);

extern u8 *TOAirconCave02__bml_resource;

void TOAirconCave02::render() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r31;
    u8 *temp_r4;

    temp_r4 = (unsigned char *) (*(void **)((s8 *)TOAirconCave02__bml_resource + 0x42C));
    temp_r31 = *(s32 *)((s8 *)temp_r4 + 8);
    if (((VObj570D4_801570d4 *) arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        set_global_param__8TObjFishFl((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        draw_ginja_object((int) (temp_r31));
        pop_matrix();
    }
}

extern void *tl_05;

void *TOAirconCave02::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TOAirconCave02__ct(o, tl_05, arg0);
    }
    return o;
}

}
