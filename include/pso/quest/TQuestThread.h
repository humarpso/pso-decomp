#ifndef PSO_QUEST_TQUESTTHREAD_H
#define PSO_QUEST_TQUESTTHREAD_H

#include "types.h"
#include "pso/TObject.h"
#include "pso/quest/QuestVm.h"

struct QuestRoot;

class TQuestThread : public TObject {
public:
    QuestVmContext ctx;
    quest_suspend_reason state;

    TQuestThread(TObject *parent, s32 label);
    virtual void run_task();
    virtual ~TQuestThread();

    static u32 create(int label);
    static TQuestThread *create_in_root(s32 label);
    static u8 *create_for_floor();
    static void set_floor_handler(s32 floor, s32 label);
    static void clear_floor_handler(s32 floor);
    static void clear_all_floor_handlers();
    static s32 create_by_mode();
    static void *init_from_script(void *self, int parent, int script, int size);
    static QuestRoot *construct_load_quest(QuestRoot *self, void *parent, void *scene);
    static void destroy_quest_obj();
    static void clear_buffer(void *root);
    static void clear_thread_state();
    static char *get_quest_name();
    static s32 get_register(void *root, int index);
    static int queue_destruction(void *obj);
    static void set_status_flag_80(void *window);

    s32 tick_com_card();
    s32 update_board_card();
    s32 update_com_card();
};

class TQuestThreadBoard : public TObject {
public:
    u8 _pad1C[0xC];
    void *m_28;
    void *m_2c;

    virtual void run_task();
    virtual ~TQuestThreadBoard();

    static s32 create_instance(int label);
    static void destroy_board();
};

class TObjItemNameEntry : public TObject {
public:
    void *m_1c;
    void *m_20;

    // never defined; keeps the vtable hand-written in TQuestThread.cpp from being emitted
    virtual void render();
    virtual ~TObjItemNameEntry();

    static void *create(void *parent);
};

void handle_6x77_sync_quest_register(u8 *packet);
void load_area_dialogue_script();
u8 *load_quest_root_script(u8 *self, void *parent, void *scene, s32 kind);

extern "C" {
void free_menu_object(void *window);
}

#endif
