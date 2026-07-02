#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80134DA0(int a0);
int TLobby__sub_80134DA8(void* p);
int TLobby__sub_80134DC8(void* p);
int TLobby__sub_80134DE8(void* p);
void TLobby__sub_80134E08(void);
M2C_UNK fn_8001E5D0();
int fn_800779A0(void*);
int fn_80077AE8(void*);
M2C_UNK fn_801DB4E4(s32);
int fn_8034C18C(void*);

    extern int lbl_805D55A0;
void TLobby__sub_80134DA0(int a0) { lbl_805D55A0 = a0; }

int TLobby__sub_80134DA8(void* p) { return fn_8034C18C(p); }
int TLobby__sub_80134DC8(void* p) { return fn_800779A0(p); }
int TLobby__sub_80134DE8(void* p) { return fn_80077AE8(p); }

extern s32 lbl_805D5580;

void TLobby__sub_80134E08(void) {
    fn_8001E5D0();
    fn_801DB4E4(lbl_805D5580);
}

}
