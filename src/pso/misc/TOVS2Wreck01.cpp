#include "types.h"
#include "pso/misc/TOVS2.h"
#include "pso/misc/TOVS2Wall01.h"
#include "pso/object/TObjFish.h"

extern "C" {

struct Base_8017C640 { char pad[0x18]; };
struct VObj_8017C640 : Base_8017C640 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

void *TOVS2Wreck01__create(void *arg0);
void *TOVS2Wreck01__ct(void *arg0, void *arg1);
void *__dt__12TOVS2Wreck01Fv(void *arg0, s16 arg1);
void render__5TOVS2Fv(u8 *arg0);
s32 post_translate_matrix(void *);
void init_wreck_object__11TOVS2Wall01FPvii(void *, void *, int);
s32 draw_ginja_object(s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void *TOVS2Wreck01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TOVS2Wreck01__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

extern s32 __vt__12TOVS2Wreck01[];

void *__dt__12TOVS2Wreck01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TOVS2Wreck01;
        ((TOVS2Wall01 *)arg0)->destroy(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__12TOVS2Wreck01[];
extern void *lbl_805D31C8;

void *TOVS2Wreck01__ct(void *arg0, void *arg1) {
    init_wreck_object__11TOVS2Wall01FPvii(arg0, arg1, 0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TOVS2Wreck01;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D31C8;
    return arg0;
}

void TOVS2::render() {
    u8 *arg0 = (u8 *)this;
    this->m_cc = ((VObj_8017C640 *)arg0)->m8(this->m_c0, *(f32 *)&this->unk_C4);
    if ((s32) this->m_cc == 1) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, this->rotation_y);
        TObjFish::set_global_param(this->texture_id);
        draw_ginja_object(*(s32 *)&this->model);
        pop_matrix();
    }
}

}
