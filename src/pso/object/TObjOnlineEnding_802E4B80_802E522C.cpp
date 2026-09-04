#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__16TObjOnlineEndingFPv(void *arg0);
void free_global_instance__14TBoss4DarkFalzFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjOnlineEnding__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__16TObjOnlineEndingFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x158);
    if (o != NULL) {
        o = TObjOnlineEnding__ct(o, arg0);
    }
    return o;
}

extern u32 lbl_805D68F4;

void free_global_instance__14TBoss4DarkFalzFv(void) {
    if ((u32) lbl_805D68F4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D68F4, 1);
        lbl_805D68F4 = 0U;
    }
}

}
