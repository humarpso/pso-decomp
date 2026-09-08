#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TLobby__sub_803802A0(s32 arg0, ...);
    extern int TQuestListVM__data_805D6200;
    extern int TQuestListVM__data_805D6200;
extern s32 TQuestVmDownLoadServer__data_805D5F24;
void TLobby__sub_803802A0(s32 arg0, ...);
void TLobby__sub_803802A0(s32 arg0, ...);
    extern int TQuestListVM__data_805D6200;
    extern int TQuestListVM__data_805D6200;
extern s32 TQuestVmDownLoadServer__data_805D5F24;
void TLobby__sub_803802A0(s32 arg0, ...);
s32 TLobby__sub_8038012C(void);
s32 TLobby__sub_8038013C(void);
extern u8 *lbl_805D72BC;
extern u8 *lbl_805D72C0;
extern u8 *lbl_805D72C4;
void TLobby__sub_80380AE0(u8 *arg0);
}

extern "C" {

s32 TLobby__sub_8038012C(void) {
    return ((u16) *(u16 *)0xCC005000 >> 0xFU) & 1;
}

s32 TLobby__sub_8038013C(void) {
    return ((u16) *(u16 *)0xCC005004 >> 0xFU) & 1;
}

void TLobby__sub_803802A0(s32 arg0, ...) {}
#pragma push
#pragma scheduling off
void TLobby__sub_80380AE0(u8 *arg0) {
    u8 *temp_r0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 3;
    if ((void *) lbl_805D72C0 == arg0) {
        temp_r0 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x38));
        if (temp_r0 != NULL) {
            lbl_805D72C0 = temp_r0;
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x38), void **, 0x3C) = NULL;
            return;
        }
        lbl_805D72C4 = NULL;
        lbl_805D72BC = NULL;
        lbl_805D72C0 = NULL;
        return;
    }
    if ((void *) lbl_805D72BC == arg0) {
        lbl_805D72BC = M2C_FIELD(arg0, u8 **, 0x3C);
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3C), void **, 0x38) = NULL;
        lbl_805D72C4 = lbl_805D72C0;
        return;
    }
    lbl_805D72C4 = M2C_FIELD(arg0, u8 **, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3C), void **, 0x38) = (void *) M2C_FIELD(arg0, u8 **, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x38), void **, 0x3C) = (void *) M2C_FIELD(arg0, u8 **, 0x3C);
}
#pragma pop

}
