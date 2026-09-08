#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803CC500_lbl_8047C910 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_803CC53C_lbl_8047C93C {
    M2C_UNK value;
    u8 remaining[0x70];
};

struct RecoveredGlobal_803CCB5C_lbl_8047CA28 {
    M2C_UNK value;
    u8 remaining[0x150];
};

extern "C" {
M2C_UNK TLobby__sub_803C57C8(void *);
extern RecoveredGlobal_803CC500_lbl_8047C910 lbl_8047C910;
s32 TLobby__sub_803CC500(u8 *arg0);
M2C_UNK TLobby__sub_803C57C8(void *);
extern RecoveredGlobal_803CC53C_lbl_8047C93C lbl_8047C93C;
s32 TLobby__sub_803CC53C(u8 *arg0);
M2C_UNK TLobby__sub_803C57C8(void *);
s32 TLobby__sub_803CCB98();
extern RecoveredGlobal_803CCB5C_lbl_8047CA28 lbl_8047CA28;
s32 TLobby__sub_803CCB5C(M2C_UNK arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_803CC500_lbl_8047C910_size[sizeof(RecoveredGlobal_803CC500_lbl_8047C910) == 0x2C ? 1 : -1];
s32 TLobby__sub_803CC500(u8 *arg0) {
    if (arg0 == NULL) {
        TLobby__sub_803C57C8((void *) (&lbl_8047C910.value));
        return -3;
    }
    return M2C_FIELD(arg0, s32 *, 0x10);
}
typedef char RecoveredGlobal_803CC53C_lbl_8047C93C_size[sizeof(RecoveredGlobal_803CC53C_lbl_8047C93C) == 0x74 ? 1 : -1];
s32 TLobby__sub_803CC53C(u8 *arg0) {
    if (arg0 == NULL) {
        TLobby__sub_803C57C8((void *) (&lbl_8047C93C.value));
        return -3;
    }
    return M2C_FIELD(arg0, s32 *, 0xC);
}
typedef char RecoveredGlobal_803CCB5C_lbl_8047CA28_size[sizeof(RecoveredGlobal_803CCB5C_lbl_8047CA28) == 0x154 ? 1 : -1];
s32 TLobby__sub_803CCB5C(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    if (arg2 & 0x1F) {
        TLobby__sub_803C57C8((void *) (&lbl_8047CA28.value));
        return -3;
    }
    return TLobby__sub_803CCB98();
}

}
