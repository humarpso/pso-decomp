#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u32 get_mc_count__13TAdMcSelectGCFv();
s32 get_slot_index__13TAdMcSelectGCFPv(void *);
s32 TAdMcSelectGC__sub_80329DD0(void);
}

extern "C" {

void *__dt__13TAdMcSelectGCFv(void *arg0, s16 arg1);
void run_task__13TAdMcSelectGCFv(void *arg0);
void select_if_mc_present__13TAdMcSelectGCFv(void);
void update_state__13TAdMcSelectGCFv(void);
int TAdMcSelectGC__sub_8032A140();
int TAdMcSelectGC__sub_8032A15C();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
u32 get_mc_count__13TAdMcSelectGCFv();

void update_state__13TAdMcSelectGCFv(void) {
    if (get_mc_count__13TAdMcSelectGCFv() != 0U) {
        TAdMcSelectGC__sub_8032A140();
    }
}

s32 TAdMcSelectGC__sub_80329DD0(void) {
    s32 var_r0;
    u8 *temp_r3;
    temp_r3 = (u8 *)(((int)get_mc_count__13TAdMcSelectGCFv()));
    var_r0 = 0;
    if (temp_r3 != NULL) {
        var_r0 = get_slot_index__13TAdMcSelectGCFPv(temp_r3);
    }
    return var_r0;
}

void select_if_mc_present__13TAdMcSelectGCFv(void) {
    if (get_mc_count__13TAdMcSelectGCFv() != 0U) {
        TAdMcSelectGC__sub_8032A15C();
    }
}

void run_task__13TAdMcSelectGCFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        return;
    case 1:
        return;
    }
}

extern M2C_UNK __vt__13TAdMcSelectGC[];
extern u32 lbl_805D6C88;

void *__dt__13TAdMcSelectGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TAdMcSelectGC;
        if ((u32) lbl_805D6C88 != 0U) {
            lbl_805D6C88 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
