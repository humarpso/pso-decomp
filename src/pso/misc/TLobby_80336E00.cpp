#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
    extern int lbl_805D6D50;
void TLobby__sub_80336E48(void);
extern int lbl_805D6D50;
void set_global_flags__6TLobbyFi(s32 arg0);
void TLobby__sub_80336E64(void);
void TLobby__sub_80336E68(void);
}

extern "C" {

void TLobby__sub_80336E44(void);
void *construct__6TLobbyFPvPv(void *arg0, void *arg1);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_804EEF80[];

void *construct__6TLobbyFPvPv(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EEF80;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    return arg0;
}

void TLobby__sub_80336E44(void) {  }
void TLobby__sub_80336E48(void) { lbl_805D6D50 = 0; }
void set_global_flags__6TLobbyFi(s32 arg0) {
    (*(s32 *)&lbl_805D6D50) |= arg0;
}
void TLobby__sub_80336E64(void) {  }
void TLobby__sub_80336E68(void) {  }

}
