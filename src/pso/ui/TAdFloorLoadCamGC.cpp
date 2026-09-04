#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__17TAdFloorLoadCamGCFv(void);
u16 fn_8034BE30(void* p);
void fn_8034BE38(void* p);
void fn_8034BE48(void* p);

u16 fn_8034BE30(void* p) { return *(u16*)((char*)p + 0x24); }
void fn_8034BE38(void* p) { *(u32*)((char*)p + 0x334) &= 0xbfffffff; }
void fn_8034BE48(void* p) { *(u32*)((char*)p + 0x334) |= 0x40000000; }
void render__17TAdFloorLoadCamGCFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8034C0C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TAdFloorLoadCamGCFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void TCameraCtrl__sub_800687C8(void);

extern M2C_UNK __vt__17TAdFloorLoadCamGC[];

void *__dt__17TAdFloorLoadCamGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdFloorLoadCamGC;
        TCameraCtrl__sub_800687C8();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
