#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_objects__6TLobbyFv(void);
M2C_UNK TLobby__sub_80103F68();
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
M2C_UNK TObjPlayer__sub_8001BF40(M2C_UNK *);
s32 TCheckRoomSequence__sub_80396920(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK drop_stacked_item_passthrough__6TLobbyFi[];
extern s32 lbl_805D5418;
extern s32 lbl_805D541C;
extern s32 lbl_805D5420;
extern s32 lbl_805D5424;
extern s32 lbl_805D5428;
extern s32 lbl_805D542C;
extern M2C_UNK lbl_805D5430;

void alloc_objects__6TLobbyFv(void) {
    lbl_805D5418 = TCheckRoomSequence__sub_80396920(alloc_buffer__11TOBoss4RockFPv(0x1E610), drop_stacked_item_passthrough__6TLobbyFi, 0, 0x24, 0xD80);
    lbl_805D541C = alloc_buffer__11TOBoss4RockFPv(0x48);
    lbl_805D5420 = alloc_buffer__11TOBoss4RockFPv(0x48);
    lbl_805D5424 = alloc_buffer__11TOBoss4RockFPv(0x40);
    lbl_805D5428 = 0;
    lbl_805D542C = alloc_buffer__11TOBoss4RockFPv(0x24);
    TObjPlayer__sub_8001BF40(&lbl_805D5430);
    TLobby__sub_80103F68();
}

}
