#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803DCBD8_lbl_8058D380 {
    M2C_UNK value;
    u8 remaining[0xEC];
};

typedef M2C_UNK (*RecoveredCallback_92513335c3ed)(void *);
typedef void (*RecoveredCallback_2be3cacebb2e)(void);
struct MotionCtx_803DC894 {
    u8 pad[0xC];
    void (*fn)(void);
};

struct Mtx_803DC994 { f32 m[3][4]; };

struct C_803DCBF0 { u32 a; u32 b; u32 c; u32 d; u32 e; u32 f; u32 g; u32 h; u32 i; };

extern "C" {
extern RecoveredGlobal_803DCBD8_lbl_8058D380 lbl_8058D380;
extern u8 *lbl_805D774C;
void TObjPlayer__sub_803DCBD8(s32 arg0);
s32 TObjPlayer__sub_803D7CA4(int);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
s32 TObjPlayer__sub_803DB270(int, void *);
extern s32 lbl_805D7710;
extern s32 lbl_805D7774;
void TObjPlayer__sub_803DC904(u8 *arg0);
void TObjPlayer__sub_803D7B68(void *);
void TObjPlayer__sub_803DB24C(void *);
void fn_803DB390(void);
void TObjPlayer__sub_803DC600(void *);
void TObjPlayer__sub_803DC904(u8 *arg0);
void TObjPlayer__sub_803DC460(void);
extern struct MotionCtx_803DC894 * const lbl_805D4698;
extern RecoveredCallback_2be3cacebb2e lbl_805D76E4;
void TObjDoor__sub_803DC894(void *arg0, void *arg1);
extern s32 lbl_805D7774;
void TObjPlayer__sub_803DC994(struct Mtx_803DC994 *src);
void GXSetBlendMode(int, int, int, int);
extern u32 lbl_8047E408[];
extern u8 *lbl_805D774C;
void TObjPlayer__sub_803DCD38(s32 arg0);
void TObjPlayer__sub_803DCBF0(C_803DCBF0 *arg0);
}

extern "C" {

extern s32 lbl_805D7710;

void set_npc_enemy_param(s32 arg0) {
    lbl_805D7710 = arg0;
}
typedef char RecoveredGlobal_803DCBD8_lbl_8058D380_size[sizeof(RecoveredGlobal_803DCBD8_lbl_8058D380) == 0xF0 ? 1 : -1];

void TObjDoor__sub_803DC894(void *arg0, void *arg1) {
    TObjPlayer__sub_803D7B68(arg1);
    lbl_805D4698->fn = TObjPlayer__sub_803DC460;
    TObjPlayer__sub_803DC600(lbl_805D4698);
    TObjPlayer__sub_803DB24C((void *) TObjPlayer__sub_803DC460);
    TObjPlayer__sub_803DC904((u8 *)(arg0));
    fn_803DB390();
    if (lbl_805D76E4 != NULL) {
        lbl_805D76E4();
    }
}

#pragma push
#pragma peephole off
#pragma scheduling off
void TObjPlayer__sub_803DC904(u8 *arg0) {
    u32 temp_r3;
    u8 *temp_r3_2;
    u8 *var_r31;
    var_r31 = (u8 *)(arg0);
    do {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D7CA4((int) (var_r31));
        if (((M2C_UNK (*)(void *)) (*(RecoveredCallback_92513335c3ed *)&lbl_805D7710)) != NULL) {
            (*(RecoveredCallback_92513335c3ed *)&lbl_805D7710)(var_r31);
        }
        temp_r3 = M2C_FIELD(var_r31, u32 *, 4);
        if ((temp_r3 != 0U) && ((u32) (M2C_FIELD(var_r31, s32 *, 0) & 8) == 0)) {
            TObjPlayer__sub_803DB270((int) (temp_r3), (void *) (lbl_805D7774));
        }
        temp_r3_2 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x2C));
        if (temp_r3_2 != NULL) {
            TObjPlayer__sub_803DC904(temp_r3_2);
        }
        TObjPlayer__sub_803D9B78();
        var_r31 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x30));
    } while (var_r31 != NULL);
}
#pragma pop

void TObjPlayer__sub_803DC994(struct Mtx_803DC994 *src) {
    struct Mtx_803DC994 *dst = (struct Mtx_803DC994 *)lbl_805D7774;
    dst->m[0][0] = src->m[0][0];
    dst->m[0][1] = src->m[0][1];
    dst->m[0][2] = src->m[0][2];
    dst->m[1][0] = src->m[1][0];
    dst->m[1][1] = src->m[1][1];
    dst->m[1][2] = src->m[1][2];
    dst->m[2][0] = src->m[2][0];
    dst->m[2][1] = src->m[2][1];
    dst->m[2][2] = src->m[2][2];
}

void TObjPlayer__sub_803DCBD8(s32 arg0) {
    lbl_805D774C = (u8 *)&lbl_8058D380.value + (arg0 * 0x28);
}

void TObjPlayer__sub_803DCBF0(C_803DCBF0 *arg0) {
    arg0->a = 0x808C0000;
    arg0->c = 0;
    arg0->d = 0x949004C0;
    arg0->e = 0x80012;
    arg0->f = -1;
    arg0->g = -1;
    arg0->h = 0x20000000;
    arg0->i = 0;
}

void TObjPlayer__sub_803DCD38(s32 arg0) {
    u32 v = M2C_FIELD(lbl_805D774C, u32 *, 0xC);
    int src = lbl_8047E408[(v & 0xE0000000) >> 29];
    int dst = lbl_8047E408[(v & 0x1C000000) >> 26];
    if (arg0 != 0) {
        GXSetBlendMode(1, src, dst, 0);
    } else {
        GXSetBlendMode(0, src, dst, 0);
    }
}

}
