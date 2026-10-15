#include "types.h"
#include "pso/object/TObjBgmCol.h"

struct Zone_8017E748 { u8 pad[0x9C]; s32 category; };

extern "C" {
void play_lobby_theme_music__14TObjBgmColCtrlFv();
s32 get_quest_bgm_issued_flag();
void play_area_music(s32);
extern s32 area_music_filename_table[];
extern s32 bgm_zone_category;
extern s32 lbl_805D5B04;
}

extern "C" {

s32 is_within_distance__10TObjBgmColFf(f32);

s32 TObjBgmCol::check() {
    f32 temp_f0;

    temp_f0 = *(f32 *)((s8 *)this + 0x98);
    if (is_within_distance__10TObjBgmColFf(temp_f0 * temp_f0) != 0) {
        if ((s32) *(s32 *)((s8 *)this + 0x90) != 0) {
            *(s32 *)((s8 *)this + 0x90) = 0;
            return 1;
        }
        return 0;
    }
    if ((s32) *(s32 *)((s8 *)this + 0x90) != 0) {
        return 2;
    }
    *(s32 *)((s8 *)this + 0x90) = 1;
    return 3;
}
void TObjBgmCol::run_task() {
    Zone_8017E748 *zone = (Zone_8017E748 *)this;
    if (get_quest_bgm_issued_flag() == 0) {
        switch (check()) {
        case 1:
            if (bgm_zone_category != zone->category) {
                if (zone->category == 4) {
                    play_lobby_theme_music__14TObjBgmColCtrlFv();
                } else {
                    play_area_music(area_music_filename_table[zone->category]);
                }
                bgm_zone_category = zone->category;
            }
            lbl_805D5B04 = 1;
            return;
        case 0:
            lbl_805D5B04 = 1;
            break;
        case 2:
            break;
        }
    }
}

}
