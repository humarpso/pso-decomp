#ifndef PSO_QUEST_TQUESTTHREAD_H
#define PSO_QUEST_TQUESTTHREAD_H

#include "types.h"
#include "pso/quest/QuestVm.h"

extern "C" {
void *TObjItemNameEntry__ct(void *arg0, void *parent);
u8 *TQuestThreadBoard__ct(u8 *arg0, s32 arg1, s32 arg2);
void TQuestThread__sub_801F5D88(void *p);
u8 *__ct__12TQuestThreadFv(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__13TUnk_804C8678Fv(void *arg0, s16 arg1);
void clear_all_floor_handlers(void *_w0);
void clear_buffer__12TQuestThreadFPv(void *p);
}
void clear_floor_handler(s32 i);
extern "C" {
void clear_thread_state__12TQuestThreadFv(void);
}
void copy_quest_script_context(QuestVmContext *dst, QuestVmContext *src);
extern "C" {
u32 create__12TQuestThreadFi(s32 arg0);
void *create__17TObjItemNameEntryFPv(void *arg0);
s32 create_by_mode__12TQuestThreadFv(void);
u8 *create_floor_quest_thread(void);
s32 create_instance__17TQuestThreadBoardFi(s32 arg0);
u8 *create_quest_thread(s32 arg0);
void destroy_quest_obj__12TQuestThreadFv(void);
void fn_801F4F20(s32 arg0);
void fn_801F6520(void *p);
void free_menu_object(void *p);
char *get_quest_name__12TQuestThreadFv(void);
s32 get_register__12TQuestThreadFPvi(u8 *arg0, s32 arg1);
}
void handle_6x77_sync_quest_register(u8 *arg0);
extern "C" {
u8 *init_from_script__12TQuestThreadFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
}
void load_area_dialogue_script(void);
u8 *load_quest_root_script(u8 *arg0, void *parent, void *arg2, s32 arg3);
extern "C" {
int queue_destruction__12TQuestThreadFPv(void *p);
}
void set_floor_handler(s32 i, s32 v);
extern "C" {
void set_item_name_selection_index(int a0);
void set_status_flag_80__12TQuestThreadFPv(void *p);
}

#endif
