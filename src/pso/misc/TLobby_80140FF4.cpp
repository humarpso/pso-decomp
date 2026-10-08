#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TLobby__sub_80141038(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void* TLobby__sub_80141030(void* p);
void create_map_csn_ctrl__6TLobbyFv(void);
void *TMapCsnCtrl__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;
extern void *map_csn_ctrl_instance;

void create_map_csn_ctrl__6TLobbyFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x81C);
    if (o != NULL) {
        o = TMapCsnCtrl__ct(o, tl_05);
    }
    map_csn_ctrl_instance = o;
}

void* TLobby__sub_80141030(void* p) { return (char*)p + 0xac; }

void TLobby__sub_80141038(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r6;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    temp_r6 = arg1 + 1;
    M2C_FIELD(arg0, s32 *, 8) = temp_r6;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_r6;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

}
