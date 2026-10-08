#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8032BD64_lbl_804EDAC0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct O_8032BDC4 { u8 pad[0x18]; void *vt; s32 f1c; s32 items[0x18]; s32 n; };

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_8032BD64_lbl_804EDAC0 lbl_804EDAC0;
extern int lbl_805D6CB8;
u8 *TLobby__sub_8032BD64(u8 *arg0, s16 arg1);
void __ct__7TObjectFP7TObject(void *);
extern RecoveredGlobal_8032BD64_lbl_804EDAC0 lbl_804EDAC0;
extern int lbl_805D6CB8;
O_8032BDC4 *TLobby__sub_8032BDC4(O_8032BDC4 *arg0);
}

extern "C" {

void TLobby__sub_8032BE30(void);
void TLobby__sub_8032BE3C(void);
void run_locked_update__6TLobbyFPv(void* p);
int clear_password__18TAdEnterPasswordGCFPv(void*);
int update_children__18TAdEnterPasswordGCFPv(void*);

void run_locked_update__6TLobbyFPv(void* p) { *(int*)((char*)p + 0x1c) = 1; update_children__18TAdEnterPasswordGCFPv(p); *(int*)((char*)p + 0x1c) = 0; clear_password__18TAdEnterPasswordGCFPv(p); }

    extern int lbl_805D6CB8;

typedef char RecoveredGlobal_8032BD64_lbl_804EDAC0_size[sizeof(RecoveredGlobal_8032BD64_lbl_804EDAC0) == 0x18 ? 1 : -1];
u8 *TLobby__sub_8032BD64(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804EDAC0.value;
        (*(s32 *)&lbl_805D6CB8) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

O_8032BDC4 *TLobby__sub_8032BDC4(O_8032BDC4 *arg0) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0);
    arg0->vt = ((u8 *)&lbl_804EDAC0);
    arg0->n = 0;
    lbl_805D6CB8 = (int)arg0;
    for (i = 0; i < 0x18; i++) {
        arg0->items[i] = 0;
    }
    arg0->f1c = 0;
    return arg0;
}

void TLobby__sub_8032BE30(void) { lbl_805D6CB8 = 0; }

    extern int lbl_805D6CB8;
void TLobby__sub_8032BE3C(void) { lbl_805D6CB8 = 0; }

}
