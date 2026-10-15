#include "types.h"
struct E_80074E48 { f32 a; f32 b; f32 c; };

extern "C" {
extern E_80074E48 tombstone_position_table[];
extern const f32 lbl_805D9170;
void reset_tombstone_values__6TLobbyFv(void);
}

extern "C" {

void reset_tombstone_values__6TLobbyFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        tombstone_position_table[i].b = lbl_805D9170;
    }
}

}
