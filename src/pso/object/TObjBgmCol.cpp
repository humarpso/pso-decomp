#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Zone_8017E748 { u8 pad[0x9C]; s32 category; };

extern "C" {
void play_lobby_theme_music__14TObjBgmColCtrlFv();
s32 check__10TObjBgmColFPv(void *arg0);
s32 get_bgm_object__13TQuestBgmCtrlFv();
void play_area_music(s32);
extern s32 lbl_804B5780[];
extern s32 bgm_zone_category;
extern s32 lbl_805D5B04;
void run_task__10TObjBgmColFv(Zone_8017E748 *zone);
}

extern "C" {

s32 check__10TObjBgmColFPv(void *arg0);

s32 is_within_distance__10TObjBgmColFif(f32);

s32 check__10TObjBgmColFPv(void *arg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x98);
    if (is_within_distance__10TObjBgmColFif(temp_f0 * temp_f0) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 0) {
            M2C_FIELD(arg0, s32 *, 0x90) = 0;
            return 1;
        }
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 0) {
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    return 3;
}
void run_task__10TObjBgmColFv(Zone_8017E748 *zone) {
    if (get_bgm_object__13TQuestBgmCtrlFv() == 0) {
        switch (check__10TObjBgmColFPv(zone)) {
        case 1:
            if (bgm_zone_category != zone->category) {
                if (zone->category == 4) {
                    play_lobby_theme_music__14TObjBgmColCtrlFv();
                } else {
                    play_area_music(lbl_804B5780[zone->category]);
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
