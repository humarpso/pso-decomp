#include "types.h"

struct Obj_8020BBA0 { u8 pad[0xC]; Obj_8020BBA0 *next; u8 pad2[4]; Obj_8020BBA0 *child; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void destroy_child_recursive__6TLobbyFPvPv(Obj_8020BBA0 *arg0, Obj_8020BBA0 *arg1);
}

extern "C" {

int get_current_floor(void);
int create_floor_quest_thread(void);
int clear_floor_event_flags(void);
int create_objects__6TLobbyFl(void);
int attach_objects_by_id__6TLobbyFl(void);
int init_switch_table(void);

void destroy_child_recursive__6TLobbyFPvPv(Obj_8020BBA0 *arg0, Obj_8020BBA0 *arg1) {
    Obj_8020BBA0 *p = arg0->child;
    Obj_8020BBA0 *cur;
    while (arg0->child != 0 && p != 0) {
        cur = p;
        p = p->next;
        if (cur == arg1) {
            queue_destruction__7TObjectFv(cur);
        } else {
            destroy_child_recursive__6TLobbyFPvPv(cur, arg1);
        }
    }
}

}

#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TRaderMapCore.h"

extern "C" {

int get_current_floor(void);
int create_floor_quest_thread(void);
int clear_floor_event_flags(void);
int create_objects__6TLobbyFl(void);
int attach_objects_by_id__6TLobbyFl(void);
int init_switch_table(void);

void TLobby::init_scene_objects() { TLobby::init_sub_objects(); TLobby::reset_id_tables(); clear_floor_event_flags(); init_switch_table(); TRaderMapCore::set_piece_flags(1); get_current_floor(); attach_objects_by_id__6TLobbyFl(); get_current_floor(); create_objects__6TLobbyFl(); create_floor_quest_thread(); }

}
