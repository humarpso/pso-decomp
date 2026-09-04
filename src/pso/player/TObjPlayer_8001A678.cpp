#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8001A860(void);
void TObjPlayer__sub_8001A864(void* p);
void *destroy_base__10TObjPlayerFPvs(void *arg0, s16 arg1);
s32 get_flag890_state__10TObjPlayerFPv(void *arg0);
void update_flag890_state__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_8001A4CC(s32, s8);
int TObjPlayer__sub_8001A6A8(void*);
int TObjPlayer__sub_8001A77C(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 fn_8001A988();

s32 get_flag890_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r4;
    s32 var_r3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x890);
    var_r3 = 0;
    if (temp_r4 & 0x20) {
        var_r3 = 0;
    }
    if (temp_r4 & 0x40) {
        var_r3 = 1;
    }
    if (temp_r4 & 0x80) {
        return 2;
    }
    return var_r3;
}

extern s32 lbl_805D49E0;
extern s8 lbl_805D49E4;
extern s32 lbl_805D49E8;
extern s32 lbl_805D5550;

void update_flag890_state__10TObjPlayerFi(s32 arg0) {
    if (((s32) lbl_805D5550 != 3) && (fn_8001A988() == 0)) {
        s32 temp;
        lbl_805D49E4 = (s8) arg0;
        temp = get_flag890_state__10TObjPlayerFPv((void *)(lbl_805D49E0));
        lbl_805D49E8 = temp;
        TObjPlayer__sub_8001A4CC(temp, (s8) arg0);
    }
}

void TObjPlayer__sub_8001A860(void) {  }
void TObjPlayer__sub_8001A864(void* p) { TObjPlayer__sub_8001A77C(p); TObjPlayer__sub_8001A6A8(p); }

extern M2C_UNK lbl_80480938[];

void *destroy_base__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80480938;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
