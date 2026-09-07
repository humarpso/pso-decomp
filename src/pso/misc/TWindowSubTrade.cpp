#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802B1F98___vt__15TWindowSubTrade { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
void __dl__7TObjectFPv(s32);
void TWindow__close(void *);
int close__17TWindowSubComCardFPv(void *);
s32 TLobby__sub_802D2A2C(u32);
void check_flags_and_proceed__6TLobbyFv(void);
M2C_UNK __dt__7TObjectFv(void *, int);
extern M2C_UNK __vt__15TWindowSubTrade[];
u8 *__dt__15TWindowSubTradeFv(u8 *arg0, s16 arg1);
}

extern "C" {

void *TWindowSubTrade__ct(void *arg0, void *arg1, void *arg2);
void render__15TWindowSubTradeFv(void);
void TLobby__sub_802D2A50(void *);
void __ct__7TObjectFP7TObject(void *);

void render__15TWindowSubTradeFv(void) {  }

extern M2C_UNK __vt__15TWindowSubTrade[];
extern void *lbl_805D3EA8;

u8 *__dt__15TWindowSubTradeFv(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802B1F98___vt__15TWindowSubTrade *)&__vt__15TWindowSubTrade).value;
        TLobby__sub_802D2A2C((u32) arg0);
        check_flags_and_proceed__6TLobbyFv();
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
        if (temp_r3 != NULL) {
            close__17TWindowSubComCardFPv(temp_r3);
            M2C_FIELD(arg0, u8 **, 0x34) = NULL;
        }
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
        if (temp_r3_2 != NULL) {
            TWindow__close(temp_r3_2);
            M2C_FIELD(arg0, u8 **, 0x30) = NULL;
        }
        temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2C));
        if (temp_r3_3 != NULL) {
            TWindow__close(temp_r3_3);
            M2C_FIELD(arg0, u8 **, 0x2C) = NULL;
        }
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

void *TWindowSubTrade__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowSubTrade;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3EA8;
    M2C_FIELD(arg0, void **, 0x28) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x24) = 4;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    TLobby__sub_802D2A50(arg0);
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
