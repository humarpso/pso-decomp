#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

unsigned char TLobby__sub_801F2D2C(void);
s32 dispatch_quest__6TLobbyFi(s32 arg0);
void close_windows__6TLobbyFv(void);
M2C_UNK TLobby__sub_801F2EF4(s32);
M2C_UNK TLobby__sub_801F301C();
M2C_UNK TWindow__close(s32);
M2C_UNK queue_destruction__7TObjectFv(s32);

    extern unsigned char* TLobby__data_805D5E70;
    extern int TLobby__data_805D5E90;
unsigned char TLobby__sub_801F2D2C(void) { return TLobby__data_805D5E70[TLobby__data_805D5E90++]; }

s32 dispatch_quest_opcode();

s32 dispatch_quest__6TLobbyFi(s32 arg0) {
    s32 temp_r31;

    TLobby__sub_801F301C();
    temp_r31 = dispatch_quest_opcode();
    TLobby__sub_801F2EF4(arg0);
    return temp_r31;
}

extern u32 TLobby__data_805D5E7C;
extern u32 TLobby__data_805D5E80;
extern u32 TLobby__data_805D5E84;
extern u32 TLobby__data_805D5EB0;
extern u32 TLobby__data_805D5EB4;
extern u32 TLobby__data_805D5EB8;
extern u32 TLobby__data_805D5EBC;
extern u32 TLobby__data_805D5EC0;

void close_windows__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D5E7C != 0U) {
        TWindow__close(TLobby__data_805D5E7C);
        TLobby__data_805D5E7C = 0U;
    }
    if ((u32) TLobby__data_805D5E80 != 0U) {
        TWindow__close(TLobby__data_805D5E80);
        TLobby__data_805D5E80 = 0U;
    }
    if ((u32) TLobby__data_805D5E84 != 0U) {
        TWindow__close(TLobby__data_805D5E84);
        TLobby__data_805D5E84 = 0U;
    }
    if ((u32) TLobby__data_805D5EB0 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EB0);
        TLobby__data_805D5EB0 = 0U;
    }
    if ((u32) TLobby__data_805D5EB4 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EB4);
        TLobby__data_805D5EB4 = 0U;
    }
    if ((u32) TLobby__data_805D5EB8 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EB8);
        TLobby__data_805D5EB8 = 0U;
    }
    if ((u32) TLobby__data_805D5EBC != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EBC);
        TLobby__data_805D5EBC = 0U;
    }
    if ((u32) TLobby__data_805D5EC0 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EC0);
        TLobby__data_805D5EC0 = 0U;
    }
}

}
