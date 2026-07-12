#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjEneMerillLiaFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void fn_800D75F4(void *, int);
void TObjPlayer__sub_800F6EB0(void *);
void fn_80156720(void *);

extern M2C_UNK lbl_80494728[];

void *__dt__16TObjEneMerillLiaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80494728;
        TObjPlayer__sub_800F6EB0(arg0);
        fn_80156720(arg0);
        fn_800D75F4((s8 *)arg0 + 0x3A8, -1);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
