#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, s32);
s32 TODragonfly__sub_80158360(f32);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_sound_effect(s32, void *, s32, s32);
extern s32 enable_v2_features;
extern const f32 lbl_805DB3D4;
void TBoss3Volopt__sub_8015D7B0(u8 *arg0);
void set_indexed_flags(void *, int, int);
s32 TODragonfly__sub_80158360(f32);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_sound_effect(s32, void *, s32, s32);
extern s32 enable_v2_features;
extern const f32 lbl_805DB3D8;
void TBoss3Volopt__sub_8015D97C(u8 *arg0);
}

extern "C" {

void TBoss3Volopt__sub_8015D7B0(u8 *arg0) {
    if ((*(s32 *)(arg0 + 0xD0) & 1) && TODragonfly__sub_80158360(lbl_805DB3D4) != 0) {
        return;
    }
    *(s32 *)(arg0 + 0xAC) = 3;
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
    switch ((u32)get_global_state__14TOKeyMachine01Fv()) {
    case 0:
        break;
    case 3:
    case 4:
    case 5:
        play_sound_effect(0x42807, arg0 + 0x38, 0, 0);
        break;
    case 6:
    case 7:
        play_sound_effect(0x4004BC01, arg0 + 0x38, 0, 0);
        break;
    case 8:
    case 9:
    case 10:
        play_sound_effect(0x4004B708, arg0 + 0x38, 0, 0);
        break;
    case 16:
    case 17:
        if (enable_v2_features == 1) {
            play_sound_effect(0x4004AA0B, arg0 + 0x38, 0, 0);
        }
        break;
    case 28:
    case 29:
        play_sound_effect(0x4004A80C, arg0 + 0x38, 0, 0);
        break;
    case 18:
        play_sound_effect(0x42A05, arg0 + 0x38, 0, 0);
        break;
    }
}
void TBoss3Volopt__sub_8015D97C(u8 *arg0) {
    if ((*(s32 *)(arg0 + 0xD0) & 1) && TODragonfly__sub_80158360(lbl_805DB3D8) == 1) {
        *(s32 *)(arg0 + 0xAC) = 1;
        set_indexed_flags(arg0, 0, 8);
        switch ((u32)get_global_state__14TOKeyMachine01Fv()) {
        case 3:
        case 4:
        case 5:
            play_sound_effect(0x42807, arg0 + 0x38, 0, 0);
            break;
        case 6:
        case 7:
            play_sound_effect(0x4004BC01, arg0 + 0x38, 0, 0);
            break;
        case 8:
        case 9:
        case 10:
            play_sound_effect(0x4004B708, arg0 + 0x38, 0, 0);
            break;
        case 16:
        case 17:
            if (enable_v2_features == 1) {
                play_sound_effect(0x4004AA0B, arg0 + 0x38, 0, 0);
            }
            break;
        case 19:
        case 20:
            play_sound_effect(0x4BF0B, arg0 + 0x38, 0, 0);
            break;
        case 21:
        case 22:
            play_sound_effect(0x4004AA0B, arg0 + 0x38, 0, 0);
            break;
        case 18:
            play_sound_effect(0x42A04, arg0 + 0x38, 0, 0);
            break;
        case 28:
        case 29:
            play_sound_effect(0x4004A80C, arg0 + 0x38, 0, 0);
            break;
        case 0:
            break;
        }
    }
}

}
