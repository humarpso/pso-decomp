#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void decay_timer_and_destroy__17TObjEneDarkGunnerFPv(void *arg0);
void *deleting_dtor__17TObjEneDarkGunnerFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

void decay_timer_and_destroy__17TObjEneDarkGunnerFPv(void *arg0) {
    s32 var_r31;

    var_r31 = M2C_FIELD(arg0, u8 *, 0x37);
    var_r31 -= 0x10;
    if (var_r31 < 0) {
        var_r31 = 0;
        queue_destruction__7TObjectFv(arg0);
    }
    M2C_FIELD(arg0, u8 *, 0x37) = (u8) var_r31;
    M2C_FIELD(arg0, s8 *, 0x3B) = (s8) var_r31;
}

extern M2C_UNK lbl_80490458[];

void *deleting_dtor__17TObjEneDarkGunnerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490458;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
