#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 is_phase_reached__14TBoss6PlotFalzFv();
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E6C4C(s32 arg0);
}

extern "C" {

void TLobby__sub_801E6C40(int a0, int a1);
void create_singleton__6TLobbyFv(void);
int create_singleton__6TLobbyFPv(void*);

    extern int TLobby__data_805D5ED0;
    extern int lbl_805D5ED4;
void TLobby__sub_801E6C40(int a0, int a1) { TLobby__data_805D5ED0 = a0; lbl_805D5ED4 = a1; }

    extern int tl_01;

void TLobby__sub_801E6C4C(s32 arg0) {
    if (is_phase_reached__14TBoss6PlotFalzFv() != 0) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void create_singleton__6TLobbyFv(void) { create_singleton__6TLobbyFPv((void*)(tl_01)); }

}
