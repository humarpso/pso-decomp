#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8001EDF4_lbl_804FE148 {
    s8 value;
    u8 remaining[0x1F];
};

extern "C" {
s32 TLobby__sub_8039DAFC(void *, void *);
extern RecoveredGlobal_8001EDF4_lbl_804FE148 lbl_804FE148;
extern s32 lbl_805D4AD4;
void TLobby__sub_8001EDF4(u8 *arg0);
}

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

typedef char RecoveredGlobal_8001EDF4_lbl_804FE148_size[sizeof(RecoveredGlobal_8001EDF4_lbl_804FE148) == 0x20 ? 1 : -1];
void TLobby__sub_8001EDF4(u8 *arg0) {
    if (((s32) lbl_805D4AD4 == 0) && (TLobby__sub_8039DAFC(&lbl_804FE148.value, arg0) == 0)) {
        lbl_805D4AD4 = 1;
        lbl_804FE148.value = 0;
    }
}

s32 TLobby__sub_8001EEF4(void) {
    return lbl_805D4AD4;
}

}
