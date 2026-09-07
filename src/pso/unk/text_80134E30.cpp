#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80135458 {
    s8 sp8;
    s8 sp9;
    s16 spA;
};

struct Stack_80135598 {
    M2C_UNK sp8;
    u8 trailing_storage[0x488];
};

struct RecoveredGlobal_80135198_lbl_804A7008 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80135198_lbl_804A7008_size[sizeof(RecoveredGlobal_80135198_lbl_804A7008) == 0x18 ? 1 : -1];

#include <stddef.h>
struct Stack_80135974 {
    M2C_UNK sp8;
    M2C_UNK spC;
    u8 trailing_storage[0x1FC];
};

struct RecoveredGlobal_80135974_lbl_805127F8 { M2C_UNK value; u8 remaining[0x1FC]; };
typedef char RecoveredGlobal_80135974_lbl_805127F8_size[sizeof(RecoveredGlobal_80135974_lbl_805127F8) == 0x200 ? 1 : -1];

extern "C" {
int bswap_packet_header__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_801E44D8(void *, void *);
void TLobby__sub_80135458(s32 arg0);
s32 TLobby__sub_8013A4A8(int, void *);
s32 free__11TOBoss4RockFUi(int);
u8 *alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
s32 TObjPlayer__sub_801B4CE4(void *, void *);
s32 TObjPlayer__sub_801B4FD8(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
extern s32 lbl_805D53A0;
void TLobby__sub_80135598(s32 arg0);
s32 TLobby__sub_801A51C0(void *);
s32 DateToSeconds__FP9DateStampPi(void *, void *);
s32 getDateStamp__FP9DateStamp(void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80135198_lbl_804A7008 lbl_804A7008;
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5608;
u8 *TLobby__sub_80135198(u8 *arg0, s32 arg1);
M2C_UNK bswap_and_handle_packet__6TLobbyFii(void *, void *);
M2C_UNK TLobby__sub_8013A578(void *);
M2C_UNK memcpy(void *, void *, int);
extern RecoveredGlobal_80135974_lbl_805127F8 lbl_805127F8;
void TLobby__sub_80135974(s32 arg0);
}

extern "C" {

void TLobby__sub_80135FFC(void);

u8 *TLobby__sub_80135198(u8 *arg0, s32 arg1) {
    M2C_UNK sp8;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A7008.value;
    getDateStamp__FP9DateStamp((void *) (&sp8));
    DateToSeconds__FP9DateStampPi((void *) (&sp8), (void *) (arg0 + 0x1C));
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x24) = TLobby__sub_801A51C0((void *) (lbl_805D53A0));
    M2C_FIELD(arg0, s8 *, 0x28) = 0;
    TLobby__data_805D5608 = 0;
    return arg0;
}

void TLobby__sub_80135458(s32 arg0) {
    Stack_80135458 stack;
    stack.sp8 = 0x71;
    stack.sp9 = 1;
    stack.spA = 0;
    bswap_packet_header__6TLobbyFPv(&stack.sp8);
    TLobby__sub_801E44D8((void *) (&stack.sp8), (void *) (arg0));
}

void TLobby__sub_80135598(s32 arg0) {
    Stack_80135598 stack;
    u8 *temp_r3;
    TObjPlayer__sub_801B4FD8((void *) (&stack.sp8));
    temp_r3 = (u8 *)(alloc_buffer__11TOBoss4RockFPv(0x494));
    if (temp_r3 != NULL) {
        TObjPlayer__sub_801B4CE4((void *) (TPlayerBattleCtrl4P__sub_801BA74C((void *) (lbl_805D53A0))), (void *) (temp_r3 + 8));
        M2C_FIELD(temp_r3, s8 *, 0) = 0x70;
        M2C_FIELD(temp_r3, s8 *, 1) = 0;
        M2C_FIELD(temp_r3, s16 *, 2) = (s16) lbl_805D53A0;
        M2C_FIELD(temp_r3, s32 *, 4) = 0x494;
        TLobby__sub_8013A4A8((int) (temp_r3), (void *) (arg0));
        free__11TOBoss4RockFUi((int) (temp_r3));
    }
}

void TLobby__sub_80135974(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_80135974, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80135974, spC) == 0x4) ? 1 : -1];
    Stack_80135974 stack;
    TLobby__sub_8013A578((void *) (&stack.sp8));
    memcpy((void *) (&stack.spC), (void *) (&lbl_805127F8.value), (int) (0x200));
    bswap_and_handle_packet__6TLobbyFii((void *) (&stack.sp8), (void *) (arg0));
}

void TLobby__sub_80135FFC(void) {  }

}
