#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
s32 get_camera_no__11TCameraCtrlFv();
M2C_UNK fn_801E4BCC(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);

struct Base_801E4B68 { char pad[0x50]; };
struct VObj_801E4B68 : Base_801E4B68 {
    virtual void m0();
};

void fn_801E4B68(void *arg0) {
    if ((is_split_screen() == 0) || (get_camera_no__11TCameraCtrlFv() == 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x3C));
        ((VObj_801E4B68 *)arg0)->m0();
        fn_801E4BCC(arg0);
    }
}

}
