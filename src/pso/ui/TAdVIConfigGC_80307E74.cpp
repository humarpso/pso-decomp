#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 allow_rendering__7TObjectFv(u32);
s32 __dl__FPv(void *);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 TWindow__close(u32);
s32 get_field_14__13TAdVIConfigGCFPv(void* p);

void *destroy__13TAdVIConfigGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x24));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x24));
            TWindow__close(M2C_FIELD(arg0, u32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
