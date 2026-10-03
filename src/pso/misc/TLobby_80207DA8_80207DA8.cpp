#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80207E88_lbl_804C8FC0 {
    M2C_UNK value;
    u8 remaining[0x11C];
};

struct RecoveredGlobal_80207E88_lbl_804C9270 {
    M2C_UNK value;
    u8 remaining[0x11C];
};

extern "C" {
s32 is_online_ready__6TLobbyFv();
extern RecoveredGlobal_80207E88_lbl_804C8FC0 lbl_804C8FC0;
extern RecoveredGlobal_80207E88_lbl_804C9270 lbl_804C9270;
s32 get_floor_scene_table(s32 arg0);
}

extern "C" {

void reset_story_select__6TLobbyFv(void);
s32 is_scene_ready__6TLobbyFv(void);
int TLobby__sub_80207E24(void* p);
void TLobby__sub_80207E44(void);
int TLobby__sub_80207E48(void* p);
int lookup_scene_object__6TLobbyFPv(void* p);
int set_state__16TAdStorySelectGCFi(void*);
int get_floor_map_selection(void*);
int TLobby__sub_8020780C(void*);
int randomize_adventure_maps(void*);
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_status__6TSceneFv();

    extern int lbl_805D3628;
void reset_story_select__6TLobbyFv(void) { set_state__16TAdStorySelectGCFi((void*)0); lbl_805D3628 = -1; }

s32 is_scene_ready__6TLobbyFv(void) {
    s32 temp_r3;

    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
        return 0;
    }
    temp_r3 = get_status__6TSceneFv();
    if ((temp_r3 >= 0xD) && (temp_r3 < 0xF)) {
        return 1;
    }
    return 0;
}
int TLobby__sub_80207E24(void* p) { return TLobby__sub_8020780C(p); }
void TLobby__sub_80207E44(void) {  }
int TLobby__sub_80207E48(void* p) { return randomize_adventure_maps(p); }
int lookup_scene_object__6TLobbyFPv(void* p) { return get_floor_map_selection(p); }
typedef char RecoveredGlobal_80207E88_lbl_804C8FC0_size[sizeof(RecoveredGlobal_80207E88_lbl_804C8FC0) == 0x120 ? 1 : -1];
typedef char RecoveredGlobal_80207E88_lbl_804C9270_size[sizeof(RecoveredGlobal_80207E88_lbl_804C9270) == 0x120 ? 1 : -1];
s32 get_floor_scene_table(s32 arg0) {
    if (arg0 > 0x23) {
        return 0;
    }
    if (is_online_ready__6TLobbyFv() != 0) {
        return M2C_FIELD(((u8 *)(&lbl_804C9270.value) + (arg0 * 8)), s32 *, 0);
    }
    return M2C_FIELD(((u8 *)(&lbl_804C8FC0.value) + (arg0 * 8)), s32 *, 0);
}

}
