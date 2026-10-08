#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_80208E8C { u8 pad[4]; void *data; u8 pad2[4]; };

struct Terr_80208E8C { Ent_80208E8C *ents; s32 count; };

struct Area_80208E8C { Terr_80208E8C *terrs; s32 count; };

struct Buf_80208E8C { u8 data[0x20]; };

extern "C" {
extern Area_80208E8C *TLobby__data_805D6068;
extern u8 lbl_8044BAC8[];
extern s32 lbl_805D6094;
extern M2C_UNK lbl_805139F8[];
void replace_file_extension__6TLobbyFPvPvPv(Buf_80208E8C *, void *, void *);
s32 update_lobby_scene__6TSceneFPv(Buf_80208E8C *);
s32 heap_alloc__5THeapFUl(s32, s32);
void read_disc_file(Buf_80208E8C *, void *);
M2C_UNK bswap_floor_event_set(s32);
s32 load_area_event_set(s32 floor, s32 area, s32 terrain, s32 entities);
void heap_free__5THeapFPv(void *, void *);
extern M2C_UNK lbl_805139F8[];
extern s32 lbl_805D6094;
void TLobby__sub_80208E30(void);
}

extern "C" {

s32 add_player__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK bswap_floor_event_set(s32);
M2C_UNK move_data__6TLobbyFv(s32, s32, s32);
s32 heap_alloc__5THeapFUl(s32, s32);

extern M2C_UNK lbl_805139F8[];
extern s32 lbl_805D6094;

s32 add_player__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r29;
    s32 temp_r3;

    if (arg0 > 0x11) {
        return 0;
    }
    temp_r29 = arg0 * 4;
    if ((u32) *((s32 *)((s8 *)lbl_805139F8 + temp_r29)) != 0U) {
        return 0;
    }
    temp_r3 = heap_alloc__5THeapFUl(lbl_805D6094, arg2);
    if (temp_r3 != 0) {
        move_data__6TLobbyFv(temp_r3, arg1, arg2);
        *((s32 *)((s8 *)lbl_805139F8 + temp_r29)) = temp_r3;
        bswap_floor_event_set(arg0);
        return 1;
    }
    return 0;
}

void TLobby__sub_80208E30(void) {
    s32 i;
    for (i = 17; i >= 0; i--) {
        if ((u32)((s32 *)&lbl_805139F8)[i] != 0) {
            heap_free__5THeapFPv((void *)lbl_805D6094, (void *)((s32 *)&lbl_805139F8)[i]);
            ((s32 *)&lbl_805139F8)[i] = 0;
        }
    }
}

s32 load_area_event_set(s32 floor, s32 area, s32 terrain, s32 entities) {
    Buf_80208E8C buf;
    s32 n;
    void *p;
    if (TLobby__data_805D6068[area].terrs == 0 || TLobby__data_805D6068[area].count - 1 < terrain) {
        return 0;
    }
    if (TLobby__data_805D6068[area].terrs[terrain].ents == 0 || TLobby__data_805D6068[area].terrs[terrain].count - 1 < entities) {
        return 0;
    }
    replace_file_extension__6TLobbyFPvPvPv(&buf, TLobby__data_805D6068[area].terrs[terrain].ents[entities].data, lbl_8044BAC8);
    n = update_lobby_scene__6TSceneFPv(&buf);
    if (n > 0) {
        p = ((void *)heap_alloc__5THeapFUl((s32)((*(void * *)&lbl_805D6094)), (s32)(n)));
        if (p != 0) {
            read_disc_file(&buf, p);
            ((void * *)&lbl_805139F8)[floor] = p;
            bswap_floor_event_set(floor);
            return 1;
        }
    }
    return 0;
}

}
