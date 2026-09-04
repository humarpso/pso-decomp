#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_8001EDD8(void);
s32 TLobby__sub_8001EEF4(void);
int TObjFish__sub_8001ED9C(void);
int TObjFish__sub_8001EDB0(void);
int TObjFish__sub_8001EDC4(void);
int fn_8001ED90(void* p);
s32 TLobby__sub_8001ED88(void* p);

int fn_8001ED90(void* p) { return (*(u32*)((char*)p + 0x0) >> 10) & 0x1; }
int TObjFish__sub_8001ED9C(void) { return 0; }
int TObjFish__sub_8001EDB0(void) { return 0; }
int TObjFish__sub_8001EDC4(void) { return 0; }
int TLobby__sub_8001EDD8(void) { return 0; }

extern s32 lbl_805D4AD4;

s32 TLobby__sub_8001EEF4(void) {
    return lbl_805D4AD4;
}

}
