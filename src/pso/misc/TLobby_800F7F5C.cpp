#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 TLobby__sub_800F8250(void *, f32);
void set_value__15TWindowCtrlMainFii(s32, s32);
extern s32 lbl_805D53A0;
void TLobby__sub_800F838C(u8 *arg0);
}

extern "C" {

void TLobby__sub_800F8530(void);
void *ct_register__6TLobbyFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_80499970[];
extern void * lbl_805D5330;

void *ct_register__6TLobbyFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80499970;
    lbl_805D5330 = arg0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

void TLobby__sub_800F838C(u8 *arg0) {
    s32 temp_r3;
    set_value__15TWindowCtrlMainFii(lbl_805D53A0, TLobby__sub_800F8250(arg0, (f32) M2C_FIELD(arg0, s32 *, 0x20) / (f32) M2C_FIELD(arg0, s32 *, 0x24)));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x20) + 1;
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r3;
    if (temp_r3 > (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void TLobby__sub_800F8530(void) {  }

}
