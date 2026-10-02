#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__6TOTrapFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
s32 check_demo_mode__10TObjPlayerFv();
s32 is_any_teammate_in_state__10TObjPlayerFv();
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_chunk_object(s32);
M2C_UNK draw_model_motion(s32, s32, f32);

extern const f32 lbl_805DBA40;
extern const f32 lbl_805DBA44;

struct TOTrapBase { char pad[0x18]; };
struct TOTrapVObj : TOTrapBase {
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
#pragma explicit_unused_unused_members on
void render__6TOTrapFv(u8 *arg0) {
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x340) = ((TOTrapVObj*)arg0)->m8(lbl_805DBA40, lbl_805DBA44);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x340) == 1) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            if (check_demo_mode__10TObjPlayerFv() == 1) {
                draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
            } else {
                draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
            }
            pop_matrix();
        }
    }
}

}
