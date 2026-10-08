#include "types.h"

struct Obj_8020BBA0 { u8 pad[0xC]; Obj_8020BBA0 *next; u8 pad2[4]; Obj_8020BBA0 *child; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void destroy_child_recursive__6TLobbyFPvPv(Obj_8020BBA0 *arg0, Obj_8020BBA0 *arg1);
}

extern "C" {

void init_scene_objects__6TLobbyFv(void);
int get_current_floor(void);
int create_floor_quest_thread(void);
int TRaderMapCore__sub_801F9630(int);
int clear_floor_event_flags(void);
int init_sub_objects__6TLobbyFv(void);
int create_objects__6TLobbyFi(void);
int attach_objects_by_id__6TLobbyFi(void);
int reset_id_tables__6TLobbyFv(void);
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
