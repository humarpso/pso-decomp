#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdWarningBaseGC__sub_8032CE1C(void *arg0);
int TAdWarningBaseGC__sub_8032CE3C(void);
void TAdWarningBaseGC__sub_8032CEA8(void* p);
int TAdWarningBaseGC__sub_8032D020(void);
void *TAdWarningBaseGC__sub_8032D0B8(void *arg0, s16 arg1);
int get_alloc_size__16TAdWarningBaseGCFv(void);
void *init_vtable__16TAdWarningBaseGCFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 lbl_805D6CE8;
extern s32 lbl_805D6CF4;

void TAdWarningBaseGC__sub_8032CE1C(void *arg0) {
    if ((s32) lbl_805D6CF4 == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        lbl_805D6CE8 = 1;
    }
}

int TAdWarningBaseGC__sub_8032CE3C(void) { return 0; }

void TAdWarningBaseGC__sub_8032CEA8(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

    extern int lbl_805D6CEC;
int get_alloc_size__16TAdWarningBaseGCFv(void) {  return lbl_805D6CEC; }

    extern int lbl_805D6CEC;
int TAdWarningBaseGC__sub_8032D020(void) {  return ((lbl_805D6CEC + 0x1f) & 0xffffffe0); }

extern M2C_UNK lbl_804EDBD0[];

void *TAdWarningBaseGC__sub_8032D0B8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDBD0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804EDBD0[];

void *init_vtable__16TAdWarningBaseGCFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDBD0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
