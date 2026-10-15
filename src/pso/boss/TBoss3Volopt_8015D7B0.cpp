#include "types.h"
#include "pso/boss/TBoss3Volopt.h"

extern "C" {
void clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);
s32 is_any_player_within_radius_xz(f32);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_sound_effect(s32, void *, s32, s32);
extern s32 enable_v2_features;
extern const f32 lbl_805DB3D4;
void TBoss3Volopt__sub_8015D7B0(u8 *arg0);
void set_indexed_flags(void *, int, int);
s32 is_any_player_within_radius_xz(f32);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_sound_effect(s32, void *, s32, s32);
extern s32 enable_v2_features;
extern const f32 lbl_805DB3D8;
}

extern "C" {

void TBoss3Volopt__sub_8015D7B0(u8 *arg0) {
    if ((*(s32 *)(arg0 + 0xD0) & 1) && is_any_player_within_radius_xz(lbl_805DB3D4) != 0) {
        return;
    }
    *(s32 *)(arg0 + 0xAC) = 3;
    clear_player_status_flag__10TObjPlayerFlUl(arg0, 0, 8);
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
void TBoss3Volopt::play_proximity_sound() {
    u8 *arg0 = (u8 *)this;
    if ((*(s32 *)(arg0 + 0xD0) & 1) && is_any_player_within_radius_xz(lbl_805DB3D8) == 1) {
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
