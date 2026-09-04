#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe1CanadinLeader__sub_8009A7A0(void);
void TObjEneMe1CanadinLeader__sub_8009A934(void);
void *TObjEneMe1CanadinLeader__sub_8009AA0C(void *arg0, s16 arg1);
void TObjEneMe1CanadinLeader__vt104(void *arg0);
u8 TObjEneMe1CanadinLeader__vt107(void *arg0);
void TObjEneMe1CanadinLeader__vt111(void *arg0);
void *__dt__23TObjEneMe1CanadinLeaderFv(void *arg0, s16 arg1);
void *create__23TObjEneMe1CanadinLeaderFPv(void *arg0);
void *TObjEneMe1CanadinLeader__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__17TObjEneMe1CanadinFv(void *, int);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

void TObjEneMe1CanadinLeader__sub_8009A7A0(void) {  }

void TObjEneMe1CanadinLeader__sub_8009A934(void) {  }

extern M2C_UNK lbl_8048FE94[];

void *TObjEneMe1CanadinLeader__sub_8009AA0C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048FE94;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 TObjEneMe1CanadinLeader__vt107(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x4D0) <= 0);
}

extern s32 *lbl_805D4FE4;
extern s32 *lbl_805D4FE8;

void TObjEneMe1CanadinLeader__vt111(void *arg0) {
    *lbl_805D4FE4 = M2C_FIELD(arg0, s32 *, 0x4B4);
    *lbl_805D4FE8 = M2C_FIELD(arg0, s32 *, 0x4B4);
}

extern void *lbl_805D4FD0;

void TObjEneMe1CanadinLeader__vt104(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 0x1C);
}

extern M2C_UNK __vt__23TObjEneMe1CanadinLeader[];

void *__dt__23TObjEneMe1CanadinLeaderFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TObjEneMe1CanadinLeader;
        __dt__17TObjEneMe1CanadinFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void *create__23TObjEneMe1CanadinLeaderFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4F8);
    if (o != NULL) {
        o = TObjEneMe1CanadinLeader__ct(o, tl_04, arg0);
    }
    return o;
}

}
