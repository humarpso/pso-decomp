#include "types.h"
#include "pso/TObject.h"

extern "C" {

void run_all_lists__9TMainTaskFv(void);
void clear_flag3_all_tasks__9TMainTaskFv(void);
void delete_all_task_children__9TMainTaskFv(void);
void update_all_task_lists__9TMainTaskFv(void);
void clear_all_flag3__9TMainTaskFv(void);
void TMainTask__sub_8022988C(void *);
void render_screen_overlay__9TMainTaskFv(void *arg0);
void some_empty_func__9TMainTaskFv(void);
int clear_flag_3__7TObjectFv(void*);
int TMainTask__sub_801F34D0(void*);
s32 TLobby__sub_803384D4();
s32 render_clipout_and_fade__9TMainTaskFv();

void render_screen_overlay__9TMainTaskFv(void *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0x1C) & 0x100) {
        render_clipout_and_fade__9TMainTaskFv();
        ((TObject *)arg0)->empty_func();
        TMainTask__sub_8022988C(arg0);
        TLobby__sub_803384D4();
    }
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (*(s32 *)((s8 *)arg0 + 0x1C) & 0xFFFFFE7F);
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
void run_all_lists__9TMainTaskFv(void) { TMainTask__sub_801F34D0((void*)(tl_00)); TMainTask__sub_801F34D0((void*)(tl_camera)); TMainTask__sub_801F34D0((void*)(tl_01)); TMainTask__sub_801F34D0((void*)(tl_02)); TMainTask__sub_801F34D0((void*)(tl_03)); TMainTask__sub_801F34D0((void*)(tl_item_equip)); TMainTask__sub_801F34D0((void*)(tl_loc_start)); TMainTask__sub_801F34D0((void*)(tl_04)); TMainTask__sub_801F34D0((void*)(tl_05)); TMainTask__sub_801F34D0((void*)(tl_06)); TMainTask__sub_801F34D0((void*)(tl_07)); TMainTask__sub_801F34D0((void*)(tl_loc_end)); TMainTask__sub_801F34D0((void*)(tl_window)); TMainTask__sub_801F34D0((void*)(tl_particlemodel)); TMainTask__sub_801F34D0((void*)(tl_radermap)); TMainTask__sub_801F34D0((void*)(tl_clipout)); TMainTask__sub_801F34D0((void*)(tl_fade)); TMainTask__sub_801F34D0((void*)(tl_fadeafter)); }

    extern int tl_particle;
void clear_flag3_all_tasks__9TMainTaskFv(void) { clear_flag_3__7TObjectFv((void*)(tl_00)); clear_flag_3__7TObjectFv((void*)(tl_camera)); clear_flag_3__7TObjectFv((void*)(tl_01)); clear_flag_3__7TObjectFv((void*)(tl_02)); clear_flag_3__7TObjectFv((void*)(tl_03)); clear_flag_3__7TObjectFv((void*)(tl_item_equip)); clear_flag_3__7TObjectFv((void*)(tl_loc_start)); clear_flag_3__7TObjectFv((void*)(tl_04)); clear_flag_3__7TObjectFv((void*)(tl_05)); clear_flag_3__7TObjectFv((void*)(tl_06)); clear_flag_3__7TObjectFv((void*)(tl_07)); clear_flag_3__7TObjectFv((void*)(tl_loc_end)); clear_flag_3__7TObjectFv((void*)(tl_window)); clear_flag_3__7TObjectFv((void*)(tl_particle)); clear_flag_3__7TObjectFv((void*)(tl_particlemodel)); clear_flag_3__7TObjectFv((void*)(tl_radermap)); clear_flag_3__7TObjectFv((void*)(tl_clipout)); clear_flag_3__7TObjectFv((void*)(tl_fade)); clear_flag_3__7TObjectFv((void*)(tl_fadeafter)); }

void delete_all_task_children__9TMainTaskFv(void) { ((TObject *)tl_00)->delete_children(); ((TObject *)tl_camera)->delete_children(); ((TObject *)tl_01)->delete_children(); ((TObject *)tl_02)->delete_children(); ((TObject *)tl_03)->delete_children(); ((TObject *)tl_item_equip)->delete_children(); ((TObject *)tl_loc_start)->delete_children(); ((TObject *)tl_04)->delete_children(); ((TObject *)tl_05)->delete_children(); ((TObject *)tl_06)->delete_children(); ((TObject *)tl_07)->delete_children(); ((TObject *)tl_loc_end)->delete_children(); ((TObject *)tl_window)->delete_children(); ((TObject *)tl_particle)->delete_children(); ((TObject *)tl_particlemodel)->delete_children(); ((TObject *)tl_radermap)->delete_children(); ((TObject *)tl_clipout)->delete_children(); ((TObject *)tl_fade)->delete_children(); ((TObject *)tl_fadeafter)->delete_children(); }

void update_all_task_lists__9TMainTaskFv(void) { TMainTask__sub_801F34D0((void*)(tl_02)); TMainTask__sub_801F34D0((void*)(tl_03)); TMainTask__sub_801F34D0((void*)(tl_item_equip)); TMainTask__sub_801F34D0((void*)(tl_loc_start)); TMainTask__sub_801F34D0((void*)(tl_04)); TMainTask__sub_801F34D0((void*)(tl_05)); TMainTask__sub_801F34D0((void*)(tl_06)); TMainTask__sub_801F34D0((void*)(tl_07)); TMainTask__sub_801F34D0((void*)(tl_loc_end)); TMainTask__sub_801F34D0((void*)(tl_window)); TMainTask__sub_801F34D0((void*)(tl_particle)); TMainTask__sub_801F34D0((void*)(tl_particlemodel)); TMainTask__sub_801F34D0((void*)(tl_radermap)); TMainTask__sub_801F34D0((void*)(tl_clipout)); TMainTask__sub_801F34D0((void*)(tl_fade)); TMainTask__sub_801F34D0((void*)(tl_fadeafter)); }

void clear_all_flag3__9TMainTaskFv(void) { clear_flag_3__7TObjectFv((void*)(tl_02)); clear_flag_3__7TObjectFv((void*)(tl_03)); clear_flag_3__7TObjectFv((void*)(tl_item_equip)); clear_flag_3__7TObjectFv((void*)(tl_loc_start)); clear_flag_3__7TObjectFv((void*)(tl_04)); clear_flag_3__7TObjectFv((void*)(tl_05)); clear_flag_3__7TObjectFv((void*)(tl_06)); clear_flag_3__7TObjectFv((void*)(tl_07)); clear_flag_3__7TObjectFv((void*)(tl_loc_end)); clear_flag_3__7TObjectFv((void*)(tl_window)); clear_flag_3__7TObjectFv((void*)(tl_particle)); clear_flag_3__7TObjectFv((void*)(tl_particlemodel)); clear_flag_3__7TObjectFv((void*)(tl_radermap)); clear_flag_3__7TObjectFv((void*)(tl_clipout)); clear_flag_3__7TObjectFv((void*)(tl_fade)); clear_flag_3__7TObjectFv((void*)(tl_fadeafter)); }

void TMainTask__sub_8022988C(void *) {  }

}
