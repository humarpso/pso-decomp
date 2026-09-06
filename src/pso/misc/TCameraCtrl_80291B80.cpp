#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
int TCameraCtrl__sub_80068714(void);
extern M2C_UNK lbl_804DAB08[];
    extern int lbl_805D6570;
    extern const float lbl_805DD974;
    extern const float lbl_805DD9C4;
    extern const float lbl_805DD9C8;
void* TCameraCtrl__sub_80291CBC(void* a0);
    extern int lbl_805D6598;
int TObjCMMainMenu__sub_80291D44(void);
}

extern "C" {

void *TCameraCtrl__sub_80291C64(void *arg0, s16 arg1);
void TCameraCtrl__sub_800686BC(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804DAB08[];

void *TCameraCtrl__sub_80291C64(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DAB08;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void* TCameraCtrl__sub_80291CBC(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_804DAB08); *(int*)((char*)a0 + 0x38) = 0; *(float*)((char*)a0 + 0x48) = lbl_805DD974; *(float*)((char*)a0 + 0x4c) = lbl_805DD9C4; *(float*)((char*)a0 + 0x50) = lbl_805DD974; *(float*)((char*)a0 + 0x6c) = lbl_805DD9C8; *(int*)((char*)a0 + 0x74) = 0; *(int*)((char*)a0 + 0x70) = 0; *(int*)((char*)a0 + 0x78) = 2; *(int*)((char*)a0 + 0x7c) = 0; *(float*)((char*)a0 + 0x88) = lbl_805DD974; *(float*)((char*)a0 + 0x8c) = lbl_805DD974; lbl_805D6570 = 0; *(int*)((char*)a0 + 0x54) = 17294; return a0; }
int TObjCMMainMenu__sub_80291D44(void) {  return lbl_805D6598; }

}
