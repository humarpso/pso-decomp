#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TLobby__sub_80228AF0(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);
void memset(void *, int, int);

extern M2C_UNK lbl_804CC048[];

void *TLobby__sub_80228AF0(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC048;
    M2C_FIELD(arg0, void **, 0x10A0) = arg2;
    M2C_FIELD(arg0, void **, 0x10A4) = arg3;
    memset((void *)((char *)arg0 + 28), 0, 4096);
    M2C_FIELD(arg0, u32 *, 0x109C) = 0;
    return arg0;
}

}
