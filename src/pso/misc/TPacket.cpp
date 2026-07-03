#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TPacket__ct(void *arg0);
void TPacket__sub_801A558C(void *);
void TUdpSocket__ct(void *);

extern M2C_UNK __vt__7TPacket[];
extern void *lbl_805D34C0;

void *TPacket__ct(void *arg0) {
    TUdpSocket__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TPacket;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D34C0;
    TPacket__sub_801A558C(arg0);
    return arg0;
}

}
