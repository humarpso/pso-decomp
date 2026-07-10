#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2Tunnel__sub_8003C628(void);
void TObjBoss2Tunnel__sub_8003C638(void);
void TObjBoss2Tunnel__sub_8003C648(void);
void *create__15TObjBoss2TunnelFv(void);
void clear_target_flags__15TObjBoss2TunnelFv(void);
void *TObjBoss2Tunnel__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern s32 lbl_805D4C00;

void TObjBoss2Tunnel__sub_8003C628(void) {
    lbl_805D4C00 |= 0x800;
}

extern s32 lbl_805D4C00;

void TObjBoss2Tunnel__sub_8003C638(void) {
    lbl_805D4C00 |= 0x400;
}

void TObjBoss2Tunnel__sub_8003C648(void) {  }

extern void *tl_02;

void *create__15TObjBoss2TunnelFv(void) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjBoss2Tunnel__ct(o, tl_02);
    }
    return o;
}

extern void *lbl_805D4BE8;
extern s32 lbl_805D4C00;
extern s32 *lbl_805D4C04;
extern s32 *lbl_805D4C08;

void clear_target_flags__15TObjBoss2TunnelFv(void) {
    s32 *temp_r3;
    s32 *temp_r3_2;

    lbl_805D4C00 = 0;
    temp_r3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(lbl_805D4BE8, void **, 0x42C), void **, 0xA8), void **, 0x2C), s32 **, 0x30);
    lbl_805D4C08 = temp_r3;
    temp_r3_2 = M2C_FIELD(temp_r3, s32 **, 0x30);
    lbl_805D4C04 = temp_r3_2;
    *temp_r3_2 &= 0xFFFFFFFE;
    *lbl_805D4C08 &= 0xFFFFFFFE;
}

}
