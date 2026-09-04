#include "pso/TItemEffCane.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TItemEffCane::run_task() {}

TItemEffCane::~TItemEffCane() {
    request_destroy__11TBoss4Type2FUi(this->m_20);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemEffCane__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 TBoss4Type2__sub_800874F4(M2C_UNK *, s32);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK draw_icon__10TObjPlayerFPvii(s32, s32, M2C_UNK *);
s32 get_field_d8__10TObjPlayerFPv(s32);

extern M2C_UNK __vt__12TItemEffCane[];
extern s32 lbl_805D2B98;

void *TItemEffCane__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK sp8[4];

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TItemEffCane;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2B98;
    M2C_FIELD(arg0, s32 *, 0x24) = get_field_d8__10TObjPlayerFPv(arg2);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    draw_icon__10TObjPlayerFPvii(arg2, M2C_FIELD(arg0, s32 *, 0x1C), sp8);
    if (arg4 != -1) {
        M2C_FIELD(arg0, s32 *, 0x20) = TBoss4Type2__sub_800874F4(sp8, arg4);
    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
