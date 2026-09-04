#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801F25A4(int a0, int a1);
void qst_op_exit(void);
void qst_op_grev(s32 arg0);
void qst_op_leta_letb(int a0, int a1);
void qst_op_leti(int a0, int a1);
void qst_op_nop(void);
void qst_op_ret(void);
void qst_op_sync(void);
s32 TLobby__sub_801F2BCC();
M2C_UNK TLobby__sub_801F45FC(s32);
s32 TODoorVoShip__sub_801F44BC(s32);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);

void qst_op_grev(s32 arg0) {
    u16 v = arg0;
    if (TODoorVoShip__sub_801F44BC(v) != 0) {
        TLobby__sub_801F45FC(v);
        return;
    }
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(v);
}

    extern int* TLobby__data_805D5E78;
void TLobby__sub_801F25A4(int a0, int a1) { TLobby__data_805D5E78[(unsigned char)(a0)] = (a1 & 0xffff); }

    extern int* TLobby__data_805D5E78;
void qst_op_leta_letb(int a0, int a1) { TLobby__data_805D5E78[(unsigned char)(a0)] = (a1 & 0xff); }

    extern int* TLobby__data_805D5E78;
void qst_op_leti(int a0, int a1) { TLobby__data_805D5E78[(unsigned char)(a0)] = a1; }

extern s32 TLobby__data_805D5E98;

void qst_op_sync(void) { TLobby__data_805D5E98 = 1; }

void qst_op_exit(void) { TLobby__data_805D5E98 = 3; }

extern s32 TLobby__data_805D5E8C;
extern s32 TLobby__data_805D5E90;

void qst_op_ret(void) {
    u32 temp_r31;

    temp_r31 = (u32) (-TLobby__data_805D5E8C & ~TLobby__data_805D5E8C) >> 0x1FU;
    if (temp_r31 != 0) {
        TLobby__data_805D5E90 = TLobby__sub_801F2BCC();
    }
    if (temp_r31 == 0) {
        TLobby__data_805D5E98 = 2;
    }
}

void qst_op_nop(void) {  }

}
