#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_dialog_window__16TObjCurtainLobbyFv(void);
void *create__16TObjCurtainLobbyFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TObjCurtainLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TObjCurtainLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TObjCurtainLobby__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TObjCurtainLobby__data_805D6F58;

void close_dialog_window__16TObjCurtainLobbyFv(void) {
    if ((u32) TObjCurtainLobby__data_805D6F58 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjCurtainLobby__data_805D6F58, 1);
        TObjCurtainLobby__data_805D6F58 = 0U;
    }
}

}
