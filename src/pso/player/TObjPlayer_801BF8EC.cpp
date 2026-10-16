#include "types.h"
#include "pso/misc/TMainCursor.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void set_equip_slot_entry(s32 arg0, s32 arg1, s32 arg2);
void TObjPlayer__sub_801BF8F8(s32 *p);
}

extern "C" {

void TObjPlayer__sub_801BF914(void);
s32 is_timer_running();
s32 TObjPlayer__sub_801BF640();
f32 TObjPlayer__sub_801BF6B0(void* p);
void* TObjPlayer__sub_801BF6B8(void* p);
void TObjPlayer__sub_801BF6C0(void* p, f32 v);
void TObjPlayer__sub_801BF6C8(void* p, f32 a, f32 b);
void TObjPlayer__sub_801BF6D4(void* p, s16 v);
void TObjPlayer__sub_801BF6DC(void* p, s16 v);
int TObjPlayer__sub_801BF6E4(void* p);
void TObjPlayer__sub_801BF7B8(void* p);
f32 TObjPlayer__sub_801BF814(void* p);
int TObjPlayer__sub_801BF840(void* p);
int TObjPlayer__sub_801BF8AC(void* p);
int TObjPlayer__sub_801BF8CC(void* p);
void* TObjPlayer__sub_801BF934(void* p);
void TObjPlayer__sub_801BF93C(void* p, s16 v);
void TObjPlayer__sub_801BF954(void* p, s32 v);
s32 TObjPlayer__sub_801BF95C(void* p);

void set_equip_slot_entry(s32 arg0, s32 arg1, s32 arg2) {
    *(s32 *)((s8 *)arg0 + (arg1 * 4)) = arg2;
}

void TObjPlayer__sub_801BF8F8(s32 *p) {
    s32 i;
    for (i = 0; i < 13; i++) {
        *p++ = 0;
    }
}

void TObjPlayer__sub_801BF914(void) {  }

}
