#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2Tunnel__sub_802F2C4C(void);
void TObjBoss2Tunnel__sub_802F2C50(void);
void TObjBoss2Tunnel__sub_802F2C84(void);
void* TObjBoss2Tunnel__sub_802F2A2C(void*, s32);
void* __nw__7TObjectFUl(u32);

void TObjBoss2Tunnel__sub_802F2C4C(void) {  }

extern s32 tl_04;

void TObjBoss2Tunnel__sub_802F2C50(void) {
    void* obj = __nw__7TObjectFUl(0x94);
    if (obj != 0) {
        TObjBoss2Tunnel__sub_802F2A2C(obj, tl_04);
    }
}

    extern int lbl_805D6968;
void TObjBoss2Tunnel__sub_802F2C84(void) { lbl_805D6968 = 0; }

}
