#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801F3DEC_TLobby__data_805127D0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct Sel_801F3E1C { s32 area; s32 terrain; s32 entities; };

struct RecoveredGlobal_801F3DEC_TLobby__data_805127D0;
extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_801F3DEC_TLobby__data_805127D0 TLobby__data_805127D0;
void clear_quest_floor_designations(void);
s32 add_player__6TLobbyFiii(s32, s32, s32);
M2C_UNK bswap_32__FPUl(void *);
extern int TLobby__data_805D5EE0;
bool load_quest_encounter_section(s32 arg0);
extern RecoveredGlobal_801F3DEC_TLobby__data_805127D0 TLobby__data_805127D0;
extern u8 lbl_80449D08[];
extern u8 lbl_80449D1C[];
extern u8 lbl_80449D30[];
void TItemDrop__sub_800FDDF4(void);
void TItemDrop__sub_800FDE7C(void *);
bool load_quest_encounter_section(s32 arg0);
s32 get_floor_map_selection(s32, Sel_801F3E1C *);
void load_area_event_set(s32, s32, s32, s32);
void load_area_enemy_set(s32, s32, s32, s32);
void load_area_object_set(s32, s32, s32, s32);
void free_data_60F0__6TLobbyFv(void);
void handle_msg_type1__6TLobbyFi(s32);
void handle_msg_type2__6TLobbyFi(s32);
void init_handle__6TLobbyFi(s32);
int init_sub_state__6TLobbyFPv(void);
int rebuild_entry__6TLobbyFPv(void);
void populate_quest_floor_sets(void);
extern RecoveredGlobal_801F3DEC_TLobby__data_805127D0 TLobby__data_805127D0;
void TLobby__sub_80207798(s32, s32, s32, s32);
void set_quest_floor_designation(s16 mode, s32 floor, s32 terrain, s32 unused);
void TLobby__sub_80207798(s32, s32, s32, s32);
extern RecoveredGlobal_801F3DEC_TLobby__data_805127D0 TLobby__data_805127D0;
void TLobby__sub_801F3C70(s16 mode, s32 floor, s32 area, s32 layout, s32 entities);
}

extern "C" {

void rebuild_all__6TLobbyFi(int a0);
int TLobby__sub_801F3B30(void);
int TLobby__sub_801F3BC4(void);
int TLobby__sub_801F4340(void);
int free_boss4rock__6TLobbyFv(void);
int TLobby__sub_8020A2AC(void);
int rebuild_entry__6TLobbyFPv(void);
int init_sub_state__6TLobbyFPv(void);

    extern int TLobby__data_805D5EE0;
    extern short TLobby__data_805D6134;
void rebuild_all__6TLobbyFi(int a0) { TLobby__data_805D5EE0 = a0; TLobby__sub_801F3BC4(); init_sub_state__6TLobbyFPv(); TLobby__sub_8020A2AC(); TLobby__sub_801F3B30(); free_boss4rock__6TLobbyFv(); rebuild_entry__6TLobbyFPv(); TLobby__sub_801F4340(); TLobby__data_805D6134 = 1; TLobby__data_805D5EE0 = 0; }
typedef char RecoveredGlobal_801F3DEC_TLobby__data_805127D0_size[sizeof(RecoveredGlobal_801F3DEC_TLobby__data_805127D0) == 0x28 ? 1 : -1];

void TLobby__sub_801F3C70(s16 mode, s32 floor, s32 area, s32 layout, s32 entities) {
    if (floor > 17 || area > 35) {
        return;
    }
    switch (mode) {
    case 0:
        TLobby__sub_80207798(floor, area, layout, 0);
        ((s16 *) &TLobby__data_805127D0)[floor] = mode;
        break;
    case 2:
        TLobby__sub_80207798(floor, area, layout, entities);
        ((s16 *) &TLobby__data_805127D0)[floor] = mode;
        break;
    case 1:
    case 3:
        ((s16 *) &TLobby__data_805127D0)[floor] = mode;
        break;
    default:
        return;
    }
}

void set_quest_floor_designation(s16 mode, s32 floor, s32 terrain, s32 unused) {
    if (floor > 17) {
        return;
    }
    switch (mode) {
    case 0:
        TLobby__sub_80207798(floor, floor, terrain, 0);
        ((s16 *)&TLobby__data_805127D0)[floor] = mode;
        break;
    case 2:
        TLobby__sub_80207798(floor, floor, terrain, 0);
        ((s16 *)&TLobby__data_805127D0)[floor] = mode;
        break;
    case 1:
    case 3:
        ((s16 *)&TLobby__data_805127D0)[floor] = mode;
        break;
    }
}

void clear_quest_floor_designations(void) {
    memset((void *) (&TLobby__data_805127D0.value), (int) (0), (int) (0x24));
}

void populate_quest_floor_sets(void) {
    s32 i;
    Sel_801F3E1C sel;
    init_handle__6TLobbyFi(0x8000);
    for (i = 0; i < 18; i++) {
        switch (((s16 *)&TLobby__data_805127D0)[i]) {
        case 0:
            handle_msg_type1__6TLobbyFi(i);
            handle_msg_type2__6TLobbyFi(i);
            load_quest_encounter_section(i);
            break;
        case 1:
        case 2:
            if (get_floor_map_selection(i, &sel) == 1 && sel.area >= 0) {
                TItemDrop__sub_800FDE7C(lbl_80449D08);
                load_area_object_set(i, sel.area, sel.terrain, sel.entities);
                TItemDrop__sub_800FDDF4();
                TItemDrop__sub_800FDE7C(lbl_80449D1C);
                load_area_enemy_set(i, sel.area, sel.terrain, sel.entities);
                TItemDrop__sub_800FDDF4();
                TItemDrop__sub_800FDE7C(lbl_80449D30);
                load_area_event_set(i, sel.area, sel.terrain, sel.entities);
                TItemDrop__sub_800FDDF4();
            }
            break;
        case 3:
            break;
        }
    }
    init_sub_state__6TLobbyFPv();
    rebuild_entry__6TLobbyFPv();
    free_data_60F0__6TLobbyFv();
}

bool load_quest_encounter_section(s32 arg0) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u8 *var_r31;
    var_r31 = (u8 *)((*(u8 * *)&TLobby__data_805D5EE0));
    if (var_r31 != NULL) {
loop_1:
        sp14 = M2C_FIELD(var_r31, s32 *, 0);
        sp10 = M2C_FIELD(var_r31, s32 *, 4);
        spC = M2C_FIELD(var_r31, s32 *, 8);
        sp8 = M2C_FIELD(var_r31, s32 *, 0xC);
        bswap_32__FPUl((void *) (&sp14));
        bswap_32__FPUl((void *) (&sp10));
        bswap_32__FPUl((void *) (&spC));
        bswap_32__FPUl((void *) (&sp8));
        if ((sp14 == 3) && (spC == arg0)) {
            return add_player__6TLobbyFiii(spC, (s32) (var_r31 + 0x10), sp8) != 0;
        }
        if (sp14 != 0) {
            var_r31 += sp10;
            goto loop_1;
        }
        goto block_6;
    }
block_6:
    return 0;
}

}
