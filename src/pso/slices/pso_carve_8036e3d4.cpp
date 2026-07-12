#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8036E624(void *arg0);
int load_system_file(void* a0 = 0);
void fn_8036E5F4(void* p);
s32 fn_8036E858(void *, s32);
void fn_8036E6EC(void);
void fn_8036E750(void);
int fn_8036E810(void* p);
void fn_8036E830(void);
int fn_8036E834(void* p);
void fn_8036E854(void);
int TAdMultiChgGameModeGC__sub_8023EC14(void*);
int TAdMultiChgGameModeGC__sub_8023ED04(void*);

int fn_8036E3D4(void) { return 0; }
int fn_8036E49C(void) { return 0; }
int fn_8036E51C(void) { return 0; }
int fn_8036E5A8(void) { return 0; }
void fn_8036E5F4(void* p) { if (fn_8036E624(p) == 0) { load_system_file((void*)0); } }
s32 fn_8036E624(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r4 & 1) {
        fn_8036E858(arg0, 9);
        return 1;
    }
    if (temp_r4 & 2) {
        return 0;
    }
    if (temp_r4 & 4) {
        fn_8036E858(arg0, 9);
        return 1;
    }
    if (temp_r4 & 8) {
        fn_8036E858(arg0, 9);
        return 1;
    }
    return 0;
}
int fn_8036E6A0(void) { return 0; }
void fn_8036E6EC(void) {  }
int fn_8036E6F0(void) { return 0; }
void fn_8036E750(void) {  }
int fn_8036E754(void) { return 0; }
int fn_8036E7DC(void) { return 0; }
int fn_8036E810(void* p) { return TAdMultiChgGameModeGC__sub_8023EC14(p); }
void fn_8036E830(void) {  }
int fn_8036E834(void* p) { return TAdMultiChgGameModeGC__sub_8023ED04(p); }
void fn_8036E854(void) {  }

}
