#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8033DCA8_lbl_80477F2C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8033DCA8_lbl_804EFA08 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
extern RecoveredGlobal_8033DCA8_lbl_80477F2C lbl_80477F2C;
extern RecoveredGlobal_8033DCA8_lbl_804EFA08 lbl_804EFA08;
extern const f32 lbl_805DFA90;
void TObjFish__sub_8033DCA8(void);
}

extern "C" {

void *create_variant__8TObjFishFPv(void *arg0);
void render_effect__8TObjFishFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
M2C_UNK TObjFish__sub_800E3074(int);
void *TObjFish__sub_8033DA94(void *, void *);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void *__nw__7TObjectFUl(int);
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK clear_render_callback__8TObjFishFv(int);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(int);

void *create_variant__8TObjFishFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TObjFish__sub_8033DA94(o, arg0);
    }
    return o;
}

typedef char RecoveredGlobal_8033DCA8_lbl_80477F2C_size[sizeof(RecoveredGlobal_8033DCA8_lbl_80477F2C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8033DCA8_lbl_804EFA08_size[sizeof(RecoveredGlobal_8033DCA8_lbl_804EFA08) == 0xC ? 1 : -1];
void TObjFish__sub_8033DCA8(void) {
    M2C_FIELD(&lbl_804EFA08.value, f32 *, 0) = (f32) M2C_FIELD(&lbl_80477F2C.value, f32 *, 0);
    M2C_FIELD(&lbl_804EFA08.value, f32 *, 4) = (f32) (lbl_805DFA90 + M2C_FIELD(&lbl_80477F2C.value, f32 *, 4));
    M2C_FIELD(&lbl_804EFA08.value, f32 *, 8) = (f32) M2C_FIELD(&lbl_80477F2C.value, f32 *, 8);
}

void render_effect__8TObjFishFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x50) >= 0x1AC) {
        TObjPlayer__sub_803D9B2C();
        set_global_flag__10TObjPlayerFv();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x58));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x44)));
        TObjFish__sub_800E3074((int) (M2C_FIELD(arg0, s32 *, 0x9C)));
        TObjEneSlimeOne__sub_803E4AF4((int) (M2C_FIELD(arg0, s32 *, 0x40)), (int) (M2C_FIELD(arg0, s32 *, 0x48)), (f32) (M2C_FIELD(arg0, f32 *, 0x4C)));
        clear_render_callback__8TObjFishFv((int) (M2C_FIELD(arg0, s32 *, 0x9C)));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
    }
}

}
