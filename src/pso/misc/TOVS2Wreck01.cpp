#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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
void check_collision_effect(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
void TOVS2Wall01__sub_8017C8EC(void *, void *, int);
M2C_UNK draw_ginja_object(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy__11TOVS2Wall01FPvs(void *, int);
M2C_UNK set_global_param__8TObjFishFi(s32);

void *TOVS2Wreck01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TOVS2Wreck01__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__12TOVS2Wreck01[];

void *__dt__12TOVS2Wreck01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOVS2Wreck01;
        destroy__11TOVS2Wall01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__12TOVS2Wreck01[];
extern void *lbl_805D31C8;

void *TOVS2Wreck01__ct(void *arg0, void *arg1) {
    TOVS2Wall01__sub_8017C8EC(arg0, arg1, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOVS2Wreck01;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D31C8;
    return arg0;
}

void check_collision_effect(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xCC) = ((VObj_8017C640 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 1) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x34));
        pop_matrix();
    }
}

}
