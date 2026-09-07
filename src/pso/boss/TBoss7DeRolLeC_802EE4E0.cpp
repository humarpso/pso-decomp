#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802EE4E0_lbl_804E3C5C {
    M2C_UNK value;
    u8 remaining[0x48];
};

extern "C" {
u8 * TLobby__sub_8001FE7C(void *, s16);
void TLobby__sub_800FD6A0(s32, u32);
extern RecoveredGlobal_802EE4E0_lbl_804E3C5C lbl_804E3C5C;
extern u8 *lbl_805D6918;
void TBoss7DeRolLeC__sub_802EE4E0(void);
}

extern "C" {

void *create__14TBoss7DeRolLeCFPv(void *arg0);
void *TBoss7DeRolLeC__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

typedef char RecoveredGlobal_802EE4E0_lbl_804E3C5C_size[sizeof(RecoveredGlobal_802EE4E0_lbl_804E3C5C) == 0x4C ? 1 : -1];
void TBoss7DeRolLeC__sub_802EE4E0(void) {
    TLobby__sub_800FD6A0((s32) &lbl_804E3C5C.value, 0x30U);
    if ((void *) lbl_805D6918 != NULL) {
        TLobby__sub_8001FE7C(lbl_805D6918, 1);
        lbl_805D6918 = NULL;
    }
}

void *create__14TBoss7DeRolLeCFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x7D4);
    if (o != NULL) {
        o = TBoss7DeRolLeC__ct(o, tl_04, arg0);
    }
    return o;
}

}
