#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 tick_period_counter(M2C_UNK arg0, s32 *arg1, s32 arg2);
}

extern "C" {

void create_instance__9TObjEneDDFv(void);
int get_enemy_count__9TObjEneDDFv(void);
void *__nw__7TObjectFUl(int);
void *fn_800BC4C8(void *, int, int);

extern void *lbl_805D5138;

void create_instance__9TObjEneDDFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = fn_800BC4C8(o, 0, 0);
    }
    lbl_805D5138 = o;
}

    extern int lbl_805D5870;
int get_enemy_count__9TObjEneDDFv(void) {  return lbl_805D5870; }
s32 tick_period_counter(M2C_UNK arg0, s32 *arg1, s32 arg2) {
    s32 temp_r3;
    temp_r3 = *arg1;
    if (temp_r3 >= arg2) {
        *arg1 = 0;
        return 1;
    }
    *arg1 = temp_r3 + 1;
    return 0;
}

}
