#include "types.h"
#include "pso/player/TObjPlayer.h"

struct Vec_8017E550 { f32 x, y, z; };

struct Row_8017E550 { Vec_8017E550 pos; f32 radius; s32 category; };

struct Set_8017E550 {
    u8 pad[0xC];
    Vec_8017E550 pos;
    u8 pad18[0x24 - 0x18];
    f32 radius;
    u8 pad28[0x30 - 0x28];
    s32 category;
    u8 pad34[0x40 - 0x34];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_8017E550 *, const Vec_8017E550 *);
void *TObjBgmCol__ct(void *, s32, Set_8017E550 *);
s32 get_global_state__14TOKeyMachine01Fv();
void TLobby__sub_80207F30(Set_8017E550 *);
void *__nw__7TObjectFUl(u32);
extern Row_8017E550 lbl_80443690[];
extern Row_8017E550 lbl_80443780[];
extern s32 bgm_zone_category;
extern s32 TObjBgmColCtrl__instance;
void create_bgm_col_zones(void);
}

extern "C" {

s32 is_not_split_screen__13TRaderMapCoreFv();
s32 get_quest_bgm_issued_flag();
s32 play_area_music(s32);

extern s32 area_music_filename_table[];
extern s32 bgm_zone_category;

void TObjPlayer::set_camera_mode(s32 arg0) {
    if ((get_quest_bgm_issued_flag() == 0) && (is_not_split_screen__13TRaderMapCoreFv() != 1) && (arg0 != (s32) bgm_zone_category)) {
        bgm_zone_category = arg0;
        play_area_music(area_music_filename_table[arg0]);
    }
}
void create_bgm_col_zones(void) {
    Set_8017E550 set;
    s32 i;
    void *p;
    bgm_zone_category = 4;
    TLobby__sub_80207F30(&set);
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0:
        for (i = 0; i < 12; i++) {
            VecCopy__FP3VecPC3Vec(&set.pos, &lbl_80443690[i].pos);
            set.radius = lbl_80443690[i].radius;
            set.category = lbl_80443690[i].category;
            p = __nw__7TObjectFUl(0xA0);
            if (p != NULL) {
                TObjBgmCol__ct(p, TObjBgmColCtrl__instance, &set);
            }
        }
        break;
    case 18:
        for (i = 0; i < 12; i++) {
            VecCopy__FP3VecPC3Vec(&set.pos, &lbl_80443780[i].pos);
            set.radius = lbl_80443780[i].radius;
            set.category = lbl_80443780[i].category;
            p = __nw__7TObjectFUl(0xA0);
            if (p != NULL) {
                TObjBgmCol__ct(p, TObjBgmColCtrl__instance, &set);
            }
        }
        break;
    }
}

}
