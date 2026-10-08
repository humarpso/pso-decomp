#include "types.h"
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma pack(push,1)
struct Copy_801E078C { u32 w[4]; u8 b; };
struct Ent_801E078C { u8 tag[8]; u8 difficulty; u8 players; Copy_801E078C name; u8 flags; };
#pragma pack(pop)
extern "C" {

s32 __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag();

Ent_801E078C *copy_game_list_entry(Ent_801E078C *arg0, Ent_801E078C *arg1) {
    __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag();
    arg0->difficulty = arg1->difficulty;
    arg0->players = arg1->players;
    arg0->name = arg1->name;
    arg0->flags = arg1->flags;
    return arg0;
}

}
