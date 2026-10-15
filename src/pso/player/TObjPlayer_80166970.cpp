#include "types.h"

extern "C" {

struct VBase18_80166970 { char pad[0x18]; };
struct VObj18_80166970 : VBase18_80166970 {
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

void *destroy__16TOFenceAncient01FPvs(void *arg0, s16 arg1);
void *init_fields__16TOFenceAncient01FPv(void *arg0);
void on_zone_exit__10TObjPlayerFPv(u8 *arg0);
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
s32 rotate_matrix_z(int, int);
s32 rotate_matrix_x(int, int);
s32 draw_ginja_model_with_motion(void *, int, f32);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
void init_map_object_base(void *);
s32 set_global_param__8TObjFishFi(int);

void on_zone_exit__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r31;

    if (((VObj18_80166970 *) arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        set_global_param__8TObjFishFi((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        if ((s32) *(s32 *)((s8 *)arg0 + 0xD0) == 0) {
            draw_ginja_model_with_motion((void *) (*(void **)((s8 *)arg0 + 0x34)), (int) (*(s32 *)((s8 *)arg0 + 0xBC)), (f32) (*(f32 *)((s8 *)arg0 + 0xB0)));
        } else {
            temp_r31 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x34));
            push_matrix();
            post_translate_matrix((void *) (temp_r31 + 8));
            rotate_matrix_z((int) (0), (int) (*(s32 *)((s8 *)temp_r31 + 0x1C)));
            rotate_matrix_x((int) (0), (int) (*(s32 *)((s8 *)temp_r31 + 0x14)));
            rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)temp_r31 + 0x18)));
            scale_current_matrix((void *) (temp_r31 + 0x20));
            draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
            pop_matrix();
        }
        pop_matrix();
    }
}

extern s32 lbl_804B1B80[];

void *destroy__16TOFenceAncient01FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804B1B80;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804B1B80[];

void *init_fields__16TOFenceAncient01FPv(void *arg0) {
    init_map_object_base(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804B1B80;
    *(u32 *)((s8 *)arg0 + 0xAC) = 0;
    *(u32 *)((s8 *)arg0 + 0xCC) = -1;
    *(u32 *)((s8 *)arg0 + 0xC8) = 0;
    *(u32 *)((s8 *)arg0 + 0xD0) = 0;
    *(u32 *)((s8 *)arg0 + 0xD4) = 0;
    return arg0;
}

}
