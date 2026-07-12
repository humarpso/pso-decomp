#include "types.h"

extern "C" {

void update_recobox__10TObjPlayerFi(s32 arg0);
void destroy_child__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801BE9A8(s32);
s32 TObjPlayer__sub_801BE9CC(s32);
s32 TObjPlayer__sub_802034EC();
int queue_destruction__7TObjectFv(void*);

void update_recobox__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_802034EC() != 0) {
        TObjPlayer__sub_801BE9A8(arg0);
        return;
    }
    TObjPlayer__sub_801BE9CC(arg0);
}
void destroy_child__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0xd00); if (m) queue_destruction__7TObjectFv(m); }

}
