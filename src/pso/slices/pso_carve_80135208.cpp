#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TPacket__ct(void *, void *);
extern void *lbl_805D5E48;

void *TLobby__sub_80135208(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE70);
    if (o != NULL) {
        TPacket__ct(o, lbl_805D5E48);
    }
    return o;
}

}
