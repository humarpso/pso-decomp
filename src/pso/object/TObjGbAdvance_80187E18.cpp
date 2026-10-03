#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase { char pad[0x18]; };
struct VObj : VObjBase {
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

extern "C" {

void render__13TObjGbAdvanceFv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object();
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK get_bml_model(s32, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi();

extern s32 TObjGbAdvance__data_805D5B74;
extern const f32 lbl_805DBCDC;
extern const f32 lbl_805DBCE0;

void render__13TObjGbAdvanceFv(u8 *arg0) {
    if (((VObj*)arg0)->m8(lbl_805DBCDC, lbl_805DBCE0) != 0) {
        TObjFish__sub_8001EDB0(TObjGbAdvance__data_805D5B74, 0);
        set_global_param__8TObjFishFi();
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        get_bml_model(TObjGbAdvance__data_805D5B74, 0);
        draw_ginja_object();
        get_bml_model(TObjGbAdvance__data_805D5B74, 1);
        draw_ginja_object();
        get_bml_model(TObjGbAdvance__data_805D5B74, 2);
        draw_ginja_object();
        get_bml_model(TObjGbAdvance__data_805D5B74, 3);
        draw_ginja_object();
        pop_matrix();
    }
}

}
