#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__10TObjCGrassFv(void *arg0, s16 arg1);
void* fn_800B8B00(void* p);
void release_global_805D5130__10TObjCGrassFv(void);
int render__10TObjCGrassFv(void);
void TLobby__sub_8001FE7C(void*, int);
s32 TObjEneBm5Wolf__sub_800B8AF8(void* p);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);
void free__11TOBoss4RockFUi(void *);

void* fn_800B8B00(void* p) { return (char*)p + 0x3e8; }
int render__10TObjCGrassFv(void) { return 0; }

extern u32 lbl_805D5130;

void release_global_805D5130__10TObjCGrassFv(void) {
    if ((u32) lbl_805D5130 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5130, 1);
        lbl_805D5130 = 0U;
    }
}

extern M2C_UNK __vt__10TObjCGrass[];

void *__dt__10TObjCGrassFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjCGrass;
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xFC)); }
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
