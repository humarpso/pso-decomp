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
}

extern "C" {

s32 TLobby__sub_8038012C(void) {
    return ((u16) *(u16 *)0xCC005000 >> 0xFU) & 1;
}

s32 TLobby__sub_8038013C(void) {
    return ((u16) *(u16 *)0xCC005004 >> 0xFU) & 1;
}

void TLobby__sub_803802A0(s32 arg0, ...) {}

}
