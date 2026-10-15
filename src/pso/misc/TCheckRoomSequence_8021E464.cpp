#include "types.h"
#include "pso/misc/TCheckRoomSequence.h"

extern "C" {

int get_check_room_slot_active_flag(int a0);
void *TCheckRoomSequence__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TCheckRoomSequence::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = TCheckRoomSequence__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int TCheckRoomSequence__slot_active_flags[];
int get_check_room_slot_active_flag(int a0) {  return TCheckRoomSequence__slot_active_flags[a0]; }

}
