#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();
extern M2C_UNK __vt__15TObjLiveMonitor[];
extern s32 lbl_805D40EC;
extern s32 lbl_805D6A80;

void *__ct__15TObjLiveMonitorFv(void *arg0) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__15TObjLiveMonitor;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D40EC;
    M2C_FIELD(arg0, s32 *, 0x1C) = TObjFish__sub_8001EDC4(lbl_805D6A80, 1);
    M2C_FIELD(arg0, s32 *, 0x20) = TObjFish__sub_8001EDB0(lbl_805D6A80, 0);
    M2C_FIELD(arg0, s32 *, 0x24) = 5;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    return arg0;
}

}
