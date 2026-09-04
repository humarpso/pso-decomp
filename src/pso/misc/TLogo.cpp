#include "pso/TLogo.h"

TLogo::~TLogo() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TLogo__sub_8013F7E8(void);
int TLogo__sub_8013F7F0(void);
int TLogo__sub_8013F7F8(void);
s32 TLogo__sub_8013F800(void* p);
int TLogo__sub_8013F808(void);
void *__ct__5TLogoFv(void *arg0);
s32 fn_8013F264(void* p);
s32 fn_8013F288(void* p);
void render__5TLogoFv(void);
void __ct__7TObjectFP7TObject(void *);

s32 fn_8013F264(void* p) { return fn_8013F288((void*)((char*)p + 0x98)); }
s32 fn_8013F288(void* p) { return *(s32*)((char*)p + 0x0); }
void render__5TLogoFv(void) {  }

extern M2C_UNK __vt__5TLogo[];
extern void *lbl_805D2CC8;

void *__ct__5TLogoFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__5TLogo;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2CC8;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    return arg0;
}

    extern int lbl_805D49D0;
int TLogo__sub_8013F7E8(void) {  return lbl_805D49D0; }

    extern int lbl_805D4A50;
int TLogo__sub_8013F7F0(void) {  return lbl_805D4A50; }

    extern int lbl_805D4A40;
int TLogo__sub_8013F7F8(void) {  return lbl_805D4A40; }

s32 TLogo__sub_8013F800(void* p) { return *(s32*)((char*)p + 0x48); }

    extern int lbl_805D4090;
int TLogo__sub_8013F808(void) {  return lbl_805D4090; }

}
