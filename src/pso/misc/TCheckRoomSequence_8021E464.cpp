#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TCheckRoomSequence__sub_8021E4B0(int a0);
void *create__18TCheckRoomSequenceFPv(void *arg0);
void *TCheckRoomSequence__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__18TCheckRoomSequenceFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = TCheckRoomSequence__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int TCheckRoomSequence__data_80513DB8[];
int TCheckRoomSequence__sub_8021E4B0(int a0) {  return TCheckRoomSequence__data_80513DB8[a0]; }

}
