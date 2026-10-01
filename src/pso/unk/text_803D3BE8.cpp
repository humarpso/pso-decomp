#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef M2C_UNK (*RecoveredCallback_4873a87e26d6)(s32, M2C_UNK *, M2C_UNK);
struct RecoveredGlobal_803CFEA0_lbl_8047DAE4 {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef s32 M2C_UNK;
struct File_803D3FCC { u8 used; u8 open; u8 pad[0x36]; };

extern "C" {
extern RecoveredGlobal_803CFEA0_lbl_8047DAE4 lbl_8047E170;
extern s32 lbl_805D767C;
extern RecoveredCallback_4873a87e26d6 lbl_805D7678;
s32 TLobby__sub_803D3E90(u8 *arg0);
void TLobby__sub_803D3988(void);
void TLobby__sub_803D39C0(void);
M2C_UNK memset(void *, int, int);
extern M2C_UNK lbl_8047E0C8[];
extern RecoveredCallback_4873a87e26d6 lbl_805D7678;
extern s32 lbl_805D767C;
void TLobby__sub_803D3FCC(File_803D3FCC *arg0);
}

extern "C" {

typedef char RecoveredGlobal_803CFEA0_lbl_8047DAE4_size[sizeof(RecoveredGlobal_803CFEA0_lbl_8047DAE4) == 0x18 ? 1 : -1];
s32 TLobby__sub_803D3E90(u8 *arg0) {
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D7678) != NULL) {
            lbl_805D7678(lbl_805D767C, &lbl_8047E170.value, 0);
        }
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x10);
}
void TLobby__sub_803D3FCC(File_803D3FCC *arg0) {
    if (arg0 != 0) {
        if (arg0 == 0) {
            if (lbl_805D7678 != 0) {
                lbl_805D7678(lbl_805D767C, lbl_8047E0C8, 0);
            }
        } else {
            TLobby__sub_803D39C0();
            arg0->open = 0;
            TLobby__sub_803D3988();
        }
        if ((s32)arg0->used == 1) {
            arg0->used = 0;
            memset(arg0, 0, sizeof(File_803D3FCC));
        }
    }
}

}
