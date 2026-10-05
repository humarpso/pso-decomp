#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Inner_800EDAB4 { u8 pad0[0xC]; s32 fC; u8 pad10[8]; s32 f18; };

struct Obj_800EDAB4 { u8 pad0[0x42C]; Inner_800EDAB4 *f42C; };

struct Dst_800EDAB4 { s32 a[2]; s32 b[2]; s32 c[2]; s32 d[2]; };

extern "C" {
s32 register_boss__6TLobbyFPv(s32);
s32 dispatch_shared_handler_b__6TLobbyFPv(s32);
s32 register_object__6TLobbyFPv(s32);
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
extern s32 lbl_8043D2B0[];
extern s32 lbl_8043D2B8[];
extern s32 lbl_8043D2C0[];
extern s32 lbl_8043D2C8[];
extern s32 lbl_805D52C8;
extern s32 lbl_805D52CC;
extern Obj_800EDAB4 *lbl_805D52E0;
void TObjEneRe4Bit__sub_800EDAB4(void);
}

extern "C" {

void TObjEneRe4Bit__sub_800EDAB0(void);
void * create__13TObjEneRe4BitFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void create_disabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
void create_enabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
void *TObjEneRe4Bit__ct(void *, void *, void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create_enabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    create__13TObjEneRe4BitFPvPvPvPvPv((void *)(arg0), (void *)(arg1), (void *)(1), (void *)(arg2), (void *)(arg3));
}

void create_disabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    create__13TObjEneRe4BitFPvPvPvPvPv((void *)(arg0), (void *)(arg1), (void *)(0), (void *)(arg2), (void *)(arg3));
}

extern void *tl_04;

void * create__13TObjEneRe4BitFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x410);
    if (o != NULL) {
        o = TObjEneRe4Bit__ct(o, tl_04, arg0, arg1, arg2, arg3, arg4);
    }
    return o;
}

void TObjEneRe4Bit__sub_800EDAB0(void) {  }
__declspec(section ".data") s32 lbl_80501050[2];
__declspec(section ".data") s32 lbl_80501058[2];
__declspec(section ".data") s32 lbl_80501060[2];
__declspec(section ".data") s32 lbl_80501068[2];
void TObjEneRe4Bit__sub_800EDAB4(void) {
    s32 i;
    lbl_805D52C8 = lbl_805D52E0->f42C->f18;
    lbl_805D52CC = lbl_805D52E0->f42C->fC;
    for (i = 0; i < 2; i++) {
        lbl_80501050[i] = register_boss__6TLobbyFPv(lbl_8043D2B0[i]);
        lbl_80501058[i] = dispatch_shared_handler_b__6TLobbyFPv(lbl_8043D2B8[i]);
        lbl_80501060[i] = register_object__6TLobbyFPv(lbl_8043D2C0[i]);
        lbl_80501068[i] = dispatch_shared_handler_a__6TLobbyFPv(lbl_8043D2C8[i]);
    }
}

}
