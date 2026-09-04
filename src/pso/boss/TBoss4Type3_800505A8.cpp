#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_attack_trigger__11TBoss4Type3FPv(void *arg0);
void * create_yutai__11TBoss4Type3FPvPvPv(void *arg0, void *arg1, void *arg2);
void *__ct__11TObjDFYutaiFv(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_yutai__11TBoss4Type3FPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = __ct__11TObjDFYutaiFv(o, arg0, arg1, arg2);
    }
    return o;
}

extern s32 lbl_805D5550;
extern f32 lbl_805D8A44;

void check_attack_trigger__11TBoss4Type3FPv(void *arg0) {
    if (((s32) lbl_805D5550 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x338) >= 0x78) && (M2C_FIELD(arg0, f32 *, 0x37C) > (lbl_805D8A44 * M2C_FIELD(arg0, f32 *, 0x378)))) {
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
    }
}

}
