#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Glob_801E75F0 { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; u8 rest[0xC]; };

struct ItemData_801E72B4 {
    u8 data1[12];
    u32 id;
    u8 data2[4];
};

extern "C" {
M2C_UNK TAdStorySelectGC__sub_80207D44(int);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E73B4(s32 arg0);
u32 __nw__7TObjectFUl(u32);
void TLobby__sub_800F8498(u32, s32, s32, s32, u8, u8, u8, u8);
extern Glob_801E75F0 TLobby__data_80512220;
extern s32 tl_01;
void TLobby__sub_801E75F0(void);
void init__9TItemDataFv(ItemData_801E72B4 *);
u32 TLobby__sub_8011AF58(u16);
void update_entries__18TChallenge4PResultFii(ItemData_801E72B4 *, s32);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E72B4(u8 i);
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
s32 get_game_mode__6TLobbyFv(void);
s32 get_lobby_flag__6TLobbyFv(void);
s32 get_field_d4(void *);
s32 fn_get_field_3ac(void *);
void set_field28__11TWindowCtrlFs(u16);
void open_default__11TWindowCtrlFPvi(u16, s32);
extern Glob_801E75F0 TLobby__data_80512220;
void TLobby__sub_801E7408(void);
}

extern "C" {

void request_1c38_1_7__6TLobbyFv(void);
void reset_and_set_mode__6TLobbyFv(void);
M2C_UNK TLobby__sub_801F1C38(M2C_UNK, M2C_UNK);
int TLobby__sub_801F1C8C(void*, void*);

void request_1c38_1_7__6TLobbyFv(void) {
    TLobby__sub_801F1C38(1, 7);
}

    extern int TLobby__data_805D5EA4;
void reset_and_set_mode__6TLobbyFv(void) { TLobby__data_805D5EA4 = 0; TLobby__sub_801F1C8C((void*)1, (void*)7); }

void TLobby__sub_801E72B4(u8 i) {
    ItemData_801E72B4 item;
    s32 mode = ((s32 *)TLobby__data_805D5E78)[i++];
    init__9TItemDataFv(&item);
    item.data1[0] = ((s32 *)TLobby__data_805D5E78)[i++];
    item.data1[1] = ((s32 *)TLobby__data_805D5E78)[i++];
    item.data1[2] = ((s32 *)TLobby__data_805D5E78)[i++];
    item.data1[3] = ((s32 *)TLobby__data_805D5E78)[i++];
    item.data1[4] = ((s32 *)TLobby__data_805D5E78)[i++];
    item.data1[5] = ((s32 *)TLobby__data_805D5E78)[i];
    item.id = TLobby__sub_8011AF58(lbl_805D53A0);
    switch (mode) {
    case 0:
        update_entries__18TChallenge4PResultFii(&item, 2);
        break;
    case 1:
        update_entries__18TChallenge4PResultFii(&item, 0);
        break;
    case 2:
        update_entries__18TChallenge4PResultFii(&item, 1);
        break;
    }
}

void TLobby__sub_801E73B4(s32 arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC));
    switch (temp_r0) {
    case 0:
        TAdStorySelectGC__sub_80207D44((int) (0));
        return;
    case 1:
        TAdStorySelectGC__sub_80207D44((int) (1));
        return;
    }
}

void TLobby__sub_801E7408(void) {
    s32 id = TLobby__data_80512220.f0;
    s32 arg = TLobby__data_80512220.f4;
    void *player;
    s32 start;
    s32 end;
    s32 i;
    s32 win;
    s32 v;
    if (id < 100) {
        open_default__11TWindowCtrlFPvi(id, arg);
        set_field28__11TWindowCtrlFs(id);
        return;
    }
    start = get_game_mode__6TLobbyFv();
    end = start + get_lobby_flag__6TLobbyFv();
    for (i = start; i < end; i++) {
        player = get_player_data__10TObjPlayerFi(i);
        if (player != NULL) {
            win = obj_getField1c(player);
            if (win < 0x4000) {
                v = fn_get_field_3ac(player);
            } else {
                v = get_field_d4(player);
            }
            if (v == id) {
                open_default__11TWindowCtrlFPvi(win, arg);
                set_field28__11TWindowCtrlFs(win);
                return;
            }
        }
    }
}

void TLobby__sub_801E75F0(void) {
    s32 a = TLobby__data_80512220.f0;
    s32 b = TLobby__data_80512220.f4;
    s32 c = TLobby__data_80512220.f8;
    s32 d = TLobby__data_80512220.fC;
    s32 e = TLobby__data_80512220.f10;
    u32 obj = __nw__7TObjectFUl(0x30);
    if (obj != 0) {
        TLobby__sub_800F8498(obj, tl_01, 0, e, (u8)d, (u8)a, (u8)b, (u8)c);
    }
}

}
