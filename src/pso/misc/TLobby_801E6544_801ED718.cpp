#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Item_801ED7BC {
    u8 data[12];
    s32 id;
    u32 f10;
};

extern "C" {
s32 is_split_screen(void);
M2C_UNK TLobby__sub_801F36F0(int);
M2C_UNK TLobby__sub_801F3700(int);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801ED764(s32 arg0);
s32 is_split_screen(void);
void init__9TItemDataFv(Item_801ED7BC *);
s32 advance_item_id_counter(u16);
void TLobby__sub_801F3708(s32, s32, s32, Item_801ED7BC *);
void TLobby__sub_801F36F8(s32, s32, s32, Item_801ED7BC *);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801ED7BC(u8 arg0);
}

extern "C" {

void update_split_screen_camera__6TLobbyFv(void);
M2C_UNK TObjPlayer__sub_80071BC0(s32);
M2C_UNK TLobby__sub_80292730(s32);

s32 is_split_screen(void);
struct Glob_80512220 { s32 field0; char pad[0x100]; };
extern struct Glob_80512220 TLobby__data_80512220;

void update_split_screen_camera__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = TLobby__data_80512220.field0;
    if (is_split_screen() == 1) {
        TLobby__sub_80292730(temp_r31);
        return;
    }
    TObjPlayer__sub_80071BC0(temp_r31);
}
void TLobby__sub_801ED764(s32 arg0) {
    if (is_split_screen() == 1) {
        TLobby__sub_801F3700((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_801F36F0((int) (M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}
#define REGS_801ED7BC ((s32 *)TLobby__data_805D5E78)
void TLobby__sub_801ED7BC(u8 arg0) {
    Item_801ED7BC item;
    s32 a;
    s32 b;
    s32 c;
    a = REGS_801ED7BC[(u8)arg0++];
    b = REGS_801ED7BC[(u8)arg0++];
    c = REGS_801ED7BC[(u8)arg0++];
    init__9TItemDataFv(&item);
    item.data[0] = REGS_801ED7BC[(u8)arg0++];
    item.data[1] = REGS_801ED7BC[(u8)arg0++];
    item.data[2] = REGS_801ED7BC[(u8)arg0++];
    item.data[3] = REGS_801ED7BC[(u8)arg0++];
    item.data[4] = REGS_801ED7BC[(u8)arg0++];
    item.data[5] = REGS_801ED7BC[(u8)arg0];
    item.id = advance_item_id_counter(lbl_805D53A0);
    if (is_split_screen() == 1) {
        TLobby__sub_801F3708(a, b, c, &item);
    } else {
        TLobby__sub_801F36F8(a, b, c, &item);
    }
}

}
