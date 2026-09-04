#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_80226308(void* p);
void TTecRaFoie__sub_80226254(void);
int get_lobby_data__6TLobbyFv(void);
void update_technique_slot__10TTecRaFoieFi(s32 arg0);
int TLobby__sub_80226328(void*);
M2C_UNK TLobby__sub_8023F8F4();

    extern int lbl_805D6280;
int get_lobby_data__6TLobbyFv(void) {  return lbl_805D6280; }

void TTecRaFoie__sub_80226254(void) {  }

extern s32 lbl_805D62B0;

void update_technique_slot__10TTecRaFoieFi(s32 arg0) {
    if (((s32) lbl_805D62B0 != 0) && (arg0 >= 0) && (arg0 < 0x28)) {
        TLobby__sub_8023F8F4();
    }
}

int TLobby__sub_80226308(void* p) { return TLobby__sub_80226328(p); }

}
