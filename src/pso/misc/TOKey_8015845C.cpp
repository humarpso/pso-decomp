#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_ca64a0 { char pad[0x18]; };

struct VObj_18_ca64a0 : VBase_18_ca64a0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual s32 m9(f32, f32, f32);
};

extern "C" {
s32 is_in_view_depth(void *, f32);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
s32 draw_chunk_object(int);
s32 draw_model_motion(int, int, f32);
extern const f32 lbl_805DB2E8;
extern const f32 lbl_805DB2EC;
void render__5TOKeyFv(u8 *arg0);
int construct_collider_proxy__10TObjPlayerFPv(void);
extern M2C_UNK lbl_804AFBF8[];
extern const f32 lbl_805DB2EC;
    extern const float lbl_805DB2F0;
    extern const float lbl_805DB2F4;
    extern const float lbl_805DB2F8;
void* init_map_object_base(void* a0);
void TORainbowCave01__sub_80158604(void);
}

extern "C" {

void *destroy_key_base__5TOKeyFPvs(void *arg0, s16 arg1);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804AFBF8[];

void render__5TOKeyFv(u8 *arg0) {
    f32 temp_f2;
    s32 temp_r3;
    u32 temp_r4;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0xC0);
    temp_r3 = ((VObj_18_ca64a0 *)(arg0))->m9(lbl_805DB2E8 * temp_f2, temp_f2, M2C_FIELD(arg0, f32 *, 0xC4));
    if ((temp_r3 != 0) && (is_in_view_depth((void *) (arg0), (f32) (lbl_805DB2EC)) != 0)) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        temp_r4 = M2C_FIELD(arg0, u32 *, 0xBC);
        if (temp_r4 != 0U) {
            if (temp_r3 == 1) {
                draw_model_motion((int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (temp_r4), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
            } else {
                draw_model_motion((int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (temp_r4), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
            }
        } else if (temp_r3 == 1) {
            draw_chunk_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        } else {
            draw_chunk_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        }
        pop_matrix();
    }
}

void *destroy_key_base__5TOKeyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804AFBF8;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void* init_map_object_base(void* a0) { construct_collider_proxy__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_804AFBF8); *(int*)((char*)a0 + 0xac) = 0; *(float*)((char*)a0 + 0xb0) = lbl_805DB2F0; *(float*)((char*)a0 + 0xb4) = lbl_805DB2F0; *(float*)((char*)a0 + 0xb8) = lbl_805DB2F4; *(int*)((char*)a0 + 0xbc) = 0; *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x40000000); *(float*)((char*)a0 + 0xc0) = lbl_805DB2F8; *(float*)((char*)a0 + 0xc4) = (*(const float *)&lbl_805DB2EC); return a0; }
void TORainbowCave01__sub_80158604(void) {  }

}
