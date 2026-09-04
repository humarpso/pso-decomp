#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__10TObjCMIconFPv(void *arg0);
void *__ct__10TObjCMIconFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__10TObjCMIconFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__10TObjCMIconFv(o, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8029957C
#include "types.h"

extern "C" {

void TObjCMIcon__sub_8029957C(void* p, void* q);

void TObjCMIcon__sub_8029957C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80299A1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__10TObjCMIconFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__10TObjCMIcon[];
extern void *lbl_805D3CF0;

void *__ct__10TObjCMIconFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjCMIcon;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3CF0;
    return arg0;
}

}
#endif
#endif
