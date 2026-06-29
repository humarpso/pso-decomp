#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdVIConfigGC__sub_80307F98(void *arg0);
void TAdVIConfigGC__sub_80307FAC(void);
int fn_8037BC54(void);
int fn_8037C11C(void*);
int fn_8037C8B8(void);

extern s32 lbl_805D4090;

void TAdVIConfigGC__sub_80307F98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
    lbl_805D4090 = 0;
}

    int OSSetProgressiveMode(void*);
    extern unsigned char lbl_804F4F98[];
    extern int lbl_805D7734;
void TAdVIConfigGC__sub_80307FAC(void) { OSSetProgressiveMode((void*)1); lbl_805D7734 = (int)lbl_804F4F98; fn_8037C11C(lbl_804F4F98); fn_8037C8B8(); fn_8037BC54(); fn_8037BC54(); }

}
