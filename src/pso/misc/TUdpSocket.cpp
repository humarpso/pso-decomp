#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TUdpSocket__ct(void *arg0);
void __ct__7TSocketFP7TObject(void *);

extern M2C_UNK __vt__10TUdpSocket[];
extern void *lbl_805D28B4;

void *TUdpSocket__ct(void *arg0) {
    __ct__7TSocketFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TUdpSocket;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D28B4;
    return arg0;
}

}
