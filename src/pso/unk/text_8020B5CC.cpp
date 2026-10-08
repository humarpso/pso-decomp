#include "types.h"
struct Ent_8020BB18 { u8 pad0[2]; s16 a; u8 pad1[0x3C]; u32 f40; };

extern "C" {
void destroy_child_recursive__6TLobbyFPvPv(int, int);
extern Ent_8020BB18 *TLobby__data_805D611C;
extern s32 TLobby__data_805D6120;
extern s32 tl_02;
extern s32 tl_05;
extern s32 tl_06;
extern s32 tl_07;
void TLobby__sub_8020BB18(void);
}

extern "C" {

void TLobby__sub_8020BB18(void) {
    Ent_8020BB18 *p = TLobby__data_805D611C;
    s32 i;
    for (i = 0; i < TLobby__data_805D6120; i++, p++) {
        if (p->f40 != 0) {
            destroy_child_recursive__6TLobbyFPvPv(tl_02, p->f40);
            destroy_child_recursive__6TLobbyFPvPv(tl_05, p->f40);
            destroy_child_recursive__6TLobbyFPvPv(tl_06, p->f40);
            destroy_child_recursive__6TLobbyFPvPv(tl_07, p->f40);
            p->a = 0;
            p->f40 = 0;
        }
    }
}

}
