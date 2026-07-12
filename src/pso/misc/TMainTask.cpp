#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TMainTask__sub_80229540(void);
void clear_flag3_all_tasks__9TMainTaskFv(void);
void delete_all_task_children__9TMainTaskFv(void);
void TMainTask__sub_80229754(void);
void TMainTask__sub_802297F0(void);
void TMainTask__sub_8022988C(void *);
void render_screen_overlay__9TMainTaskFv(void *arg0);
void some_empty_func__9TMainTaskFv(void);
int clear_flag_3__7TObjectFv(void*);
int delete_children__7TObjectFv(void*);
M2C_UNK empty_func__7TObjectFv(void *);
int TMainTask__sub_801F34D0(void*);
M2C_UNK TLobby__sub_803384D4();
M2C_UNK render_clipout_and_fade__9TMainTaskFv();

void render_screen_overlay__9TMainTaskFv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) & 0x100) {
        render_clipout_and_fade__9TMainTaskFv();
        empty_func__7TObjectFv(arg0);
        TMainTask__sub_8022988C(arg0);
        TLobby__sub_803384D4();
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFE7F);
}

void some_empty_func__9TMainTaskFv(void) {

}

    extern int tl_00;
    extern int tl_camera;
    extern int tl_01;
    extern int tl_02;
    extern int tl_03;
    extern int tl_item_equip;
    extern int tl_loc_start;
    extern int tl_04;
    extern int tl_05;
    extern int tl_06;
    extern int tl_07;
    extern int tl_loc_end;
    extern int tl_window;
    extern int tl_particlemodel;
    extern int tl_radermap;
    extern int tl_clipout;
    extern int tl_fade;
    extern int tl_fadeafter;
void TMainTask__sub_80229540(void) { TMainTask__sub_801F34D0((void*)(tl_00)); TMainTask__sub_801F34D0((void*)(tl_camera)); TMainTask__sub_801F34D0((void*)(tl_01)); TMainTask__sub_801F34D0((void*)(tl_02)); TMainTask__sub_801F34D0((void*)(tl_03)); TMainTask__sub_801F34D0((void*)(tl_item_equip)); TMainTask__sub_801F34D0((void*)(tl_loc_start)); TMainTask__sub_801F34D0((void*)(tl_04)); TMainTask__sub_801F34D0((void*)(tl_05)); TMainTask__sub_801F34D0((void*)(tl_06)); TMainTask__sub_801F34D0((void*)(tl_07)); TMainTask__sub_801F34D0((void*)(tl_loc_end)); TMainTask__sub_801F34D0((void*)(tl_window)); TMainTask__sub_801F34D0((void*)(tl_particlemodel)); TMainTask__sub_801F34D0((void*)(tl_radermap)); TMainTask__sub_801F34D0((void*)(tl_clipout)); TMainTask__sub_801F34D0((void*)(tl_fade)); TMainTask__sub_801F34D0((void*)(tl_fadeafter)); }

    extern int tl_00;
    extern int tl_camera;
    extern int tl_01;
    extern int tl_02;
    extern int tl_03;
    extern int tl_item_equip;
    extern int tl_loc_start;
    extern int tl_04;
    extern int tl_05;
    extern int tl_06;
    extern int tl_07;
    extern int tl_loc_end;
    extern int tl_window;
    extern int tl_particle;
    extern int tl_particlemodel;
    extern int tl_radermap;
    extern int tl_clipout;
    extern int tl_fade;
    extern int tl_fadeafter;
void clear_flag3_all_tasks__9TMainTaskFv(void) { clear_flag_3__7TObjectFv((void*)(tl_00)); clear_flag_3__7TObjectFv((void*)(tl_camera)); clear_flag_3__7TObjectFv((void*)(tl_01)); clear_flag_3__7TObjectFv((void*)(tl_02)); clear_flag_3__7TObjectFv((void*)(tl_03)); clear_flag_3__7TObjectFv((void*)(tl_item_equip)); clear_flag_3__7TObjectFv((void*)(tl_loc_start)); clear_flag_3__7TObjectFv((void*)(tl_04)); clear_flag_3__7TObjectFv((void*)(tl_05)); clear_flag_3__7TObjectFv((void*)(tl_06)); clear_flag_3__7TObjectFv((void*)(tl_07)); clear_flag_3__7TObjectFv((void*)(tl_loc_end)); clear_flag_3__7TObjectFv((void*)(tl_window)); clear_flag_3__7TObjectFv((void*)(tl_particle)); clear_flag_3__7TObjectFv((void*)(tl_particlemodel)); clear_flag_3__7TObjectFv((void*)(tl_radermap)); clear_flag_3__7TObjectFv((void*)(tl_clipout)); clear_flag_3__7TObjectFv((void*)(tl_fade)); clear_flag_3__7TObjectFv((void*)(tl_fadeafter)); }

    extern int tl_00;
    extern int tl_camera;
    extern int tl_01;
    extern int tl_02;
    extern int tl_03;
    extern int tl_item_equip;
    extern int tl_loc_start;
    extern int tl_04;
    extern int tl_05;
    extern int tl_06;
    extern int tl_07;
    extern int tl_loc_end;
    extern int tl_window;
    extern int tl_particle;
    extern int tl_particlemodel;
    extern int tl_radermap;
    extern int tl_clipout;
    extern int tl_fade;
    extern int tl_fadeafter;
void delete_all_task_children__9TMainTaskFv(void) { delete_children__7TObjectFv((void*)(tl_00)); delete_children__7TObjectFv((void*)(tl_camera)); delete_children__7TObjectFv((void*)(tl_01)); delete_children__7TObjectFv((void*)(tl_02)); delete_children__7TObjectFv((void*)(tl_03)); delete_children__7TObjectFv((void*)(tl_item_equip)); delete_children__7TObjectFv((void*)(tl_loc_start)); delete_children__7TObjectFv((void*)(tl_04)); delete_children__7TObjectFv((void*)(tl_05)); delete_children__7TObjectFv((void*)(tl_06)); delete_children__7TObjectFv((void*)(tl_07)); delete_children__7TObjectFv((void*)(tl_loc_end)); delete_children__7TObjectFv((void*)(tl_window)); delete_children__7TObjectFv((void*)(tl_particle)); delete_children__7TObjectFv((void*)(tl_particlemodel)); delete_children__7TObjectFv((void*)(tl_radermap)); delete_children__7TObjectFv((void*)(tl_clipout)); delete_children__7TObjectFv((void*)(tl_fade)); delete_children__7TObjectFv((void*)(tl_fadeafter)); }

    extern int tl_02;
    extern int tl_03;
    extern int tl_item_equip;
    extern int tl_loc_start;
    extern int tl_04;
    extern int tl_05;
    extern int tl_06;
    extern int tl_07;
    extern int tl_loc_end;
    extern int tl_window;
    extern int tl_particle;
    extern int tl_particlemodel;
    extern int tl_radermap;
    extern int tl_clipout;
    extern int tl_fade;
    extern int tl_fadeafter;
void TMainTask__sub_80229754(void) { TMainTask__sub_801F34D0((void*)(tl_02)); TMainTask__sub_801F34D0((void*)(tl_03)); TMainTask__sub_801F34D0((void*)(tl_item_equip)); TMainTask__sub_801F34D0((void*)(tl_loc_start)); TMainTask__sub_801F34D0((void*)(tl_04)); TMainTask__sub_801F34D0((void*)(tl_05)); TMainTask__sub_801F34D0((void*)(tl_06)); TMainTask__sub_801F34D0((void*)(tl_07)); TMainTask__sub_801F34D0((void*)(tl_loc_end)); TMainTask__sub_801F34D0((void*)(tl_window)); TMainTask__sub_801F34D0((void*)(tl_particle)); TMainTask__sub_801F34D0((void*)(tl_particlemodel)); TMainTask__sub_801F34D0((void*)(tl_radermap)); TMainTask__sub_801F34D0((void*)(tl_clipout)); TMainTask__sub_801F34D0((void*)(tl_fade)); TMainTask__sub_801F34D0((void*)(tl_fadeafter)); }

    extern int tl_02;
    extern int tl_03;
    extern int tl_item_equip;
    extern int tl_loc_start;
    extern int tl_04;
    extern int tl_05;
    extern int tl_06;
    extern int tl_07;
    extern int tl_loc_end;
    extern int tl_window;
    extern int tl_particle;
    extern int tl_particlemodel;
    extern int tl_radermap;
    extern int tl_clipout;
    extern int tl_fade;
    extern int tl_fadeafter;
void TMainTask__sub_802297F0(void) { clear_flag_3__7TObjectFv((void*)(tl_02)); clear_flag_3__7TObjectFv((void*)(tl_03)); clear_flag_3__7TObjectFv((void*)(tl_item_equip)); clear_flag_3__7TObjectFv((void*)(tl_loc_start)); clear_flag_3__7TObjectFv((void*)(tl_04)); clear_flag_3__7TObjectFv((void*)(tl_05)); clear_flag_3__7TObjectFv((void*)(tl_06)); clear_flag_3__7TObjectFv((void*)(tl_07)); clear_flag_3__7TObjectFv((void*)(tl_loc_end)); clear_flag_3__7TObjectFv((void*)(tl_window)); clear_flag_3__7TObjectFv((void*)(tl_particle)); clear_flag_3__7TObjectFv((void*)(tl_particlemodel)); clear_flag_3__7TObjectFv((void*)(tl_radermap)); clear_flag_3__7TObjectFv((void*)(tl_clipout)); clear_flag_3__7TObjectFv((void*)(tl_fade)); clear_flag_3__7TObjectFv((void*)(tl_fadeafter)); }

void TMainTask__sub_8022988C(void *) {  }

}
