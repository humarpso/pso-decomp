#include "types.h"
struct Rec_8020BCE4 { u8 pad[0xA]; u16 fA; u8 pad2[0x3C]; };

struct Ent_8020BC50 { u8 pad1[0x40]; u32 f40; };

extern "C" {
void obj_setFlags30(u32, int);
s32 TObjPlayer__sub_800196EC();
u32 TPhotonMylla__sub_80154CB4(int);
Rec_8020BCE4 *resolve_matching_object__6TLobbyFPv();
s32 get_object_type__6TLobbyFi();
void TLobby__sub_8020BCE4(void);
s32 TObjPlayer__sub_800196EC();
Ent_8020BC50 *get_object_count__6TLobbyFPv();
s32 get_obj_table_entry__6TLobbyFi();
void TLobby__sub_8020BBA0(int, int);
extern s32 tl_02;
extern s32 tl_05;
extern s32 tl_06;
extern s32 tl_07;
void TLobby__sub_8020BC50(void);
}

extern "C" {

void TLobby__sub_8020BC50(void) {
    s32 n;
    Ent_8020BC50 *p;
    s32 i;
    TObjPlayer__sub_800196EC();
    p = get_object_count__6TLobbyFPv();
    TObjPlayer__sub_800196EC();
    n = get_obj_table_entry__6TLobbyFi();
    for (i = 0; i < n; i++, p++) {
        if (p->f40 != 0) {
            TLobby__sub_8020BBA0(tl_02, p->f40);
            TLobby__sub_8020BBA0(tl_05, p->f40);
            TLobby__sub_8020BBA0(tl_06, p->f40);
            TLobby__sub_8020BBA0(tl_07, p->f40);
            p->f40 = 0;
        }
    }
}

void TLobby__sub_8020BCE4(void) {
    Rec_8020BCE4 *p;
    s32 n;
    s32 i;
    TObjPlayer__sub_800196EC();
    p = resolve_matching_object__6TLobbyFPv();
    TObjPlayer__sub_800196EC();
    n = get_object_type__6TLobbyFi();
    for (i = 0; i < n; i++, p++) {
        u32 r = TPhotonMylla__sub_80154CB4(p->fA);
        if (r != 0) {
            obj_setFlags30(r, 0x800);
        }
    }
}

}
