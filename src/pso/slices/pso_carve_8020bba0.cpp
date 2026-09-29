#include "types.h"

struct Obj_8020BBA0 { u8 pad[0xC]; Obj_8020BBA0 *next; u8 pad2[4]; Obj_8020BBA0 *child; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TLobby__sub_8020BBA0(Obj_8020BBA0 *arg0, Obj_8020BBA0 *arg1);
}

extern "C" {

void init_scene_objects__6TLobbyFv(void);
int TObjPlayer__sub_800196EC(void);
int TQuestThread__sub_801F5B5C(void);
int TRaderMapCore__sub_801F9630(int);
int TLobby__sub_802089B0(void);
int init_sub_objects__6TLobbyFv(void);
int create_objects__6TLobbyFi(void);
int attach_objects_by_id__6TLobbyFi(void);
int TLobby__sub_8020DBCC(void);
int TSwitch__sub_8022945C(void);

void TLobby__sub_8020BBA0(Obj_8020BBA0 *arg0, Obj_8020BBA0 *arg1) {
    Obj_8020BBA0 *p = arg0->child;
    Obj_8020BBA0 *cur;
    while (arg0->child != 0 && p != 0) {
        cur = p;
        p = p->next;
        if (cur == arg1) {
            queue_destruction__7TObjectFv(cur);
        } else {
            TLobby__sub_8020BBA0(cur, arg1);
        }
    }
}

}
