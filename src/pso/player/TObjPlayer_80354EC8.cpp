#include "types.h"

extern "C" {
s32 __destroy_arr(void *, void *, int, int);
s32 TObjPlayer__sub_80355098(s32 arg0, s16 arg1);
extern u8 lbl_80543984[];
void destroy_static_array__10TObjPlayerFv(void);
void __register_global_object(void *, void *, void *);
void __construct_array(void *, void *, void *, u32, u32);
void destroy_static_array__10TObjPlayerFv(void);
void* init_and_reset_forward__10TObjPlayerFPv(void* p);
extern u8 lbl_80543978[];
extern u8 lbl_80543984[];
void TObjPlayer__sub_80354EEC(void);
}

extern "C" {

void finish_quest_thread__10TObjPlayerFv(void);
int create_quest_thread(void);
s32 get_quest_thread_id__10TObjPlayerFPv(void* p);

void finish_quest_thread__10TObjPlayerFv(void) { ((int (*)())get_quest_thread_id__10TObjPlayerFPv)(); create_quest_thread(); }

void TObjPlayer__sub_80354EEC(void) {
    __construct_array(lbl_80543984, (void *)init_and_reset_forward__10TObjPlayerFPv, (void *)TObjPlayer__sub_80355098, 8, 4);
    __register_global_object(0, (void *)destroy_static_array__10TObjPlayerFv, lbl_80543978);
}

void destroy_static_array__10TObjPlayerFv(void) {
    __destroy_arr(lbl_80543984, (void *)TObjPlayer__sub_80355098, 8, 4);
}

}

__declspec(section ".ctors") static void *const __sinit_TObjPlayer_80354EC8_80354EC8_cpp_ref = (void *)TObjPlayer__sub_80354EEC;

#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"
#include "pso/ui/TAdPlyPltAnimCtrlGC.h"

extern "C" {

int __dl__FPv();
int fn_8035510C(void* a0 = 0, void* a1 = 0);
void TObjPlayer__sub_80354F8C(void* p);
int TObjPlayer__sub_80354FB0(void* p);
int TObjPlayer__sub_8035501C(void* p);
int set_flags__10TObjPlayerFUl(void*, int);
int clear_flags__11TAdRicoRingFUl(void*, int);
int test_flags_any(void*, int);

s32 get_quest_thread_id__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void TObjPlayer::set_player_index(s32 v) { *(s32*)((char*)this + 0x4) = v; }
void TObjPlayer__sub_80354F8C(void* p) { fn_8035510C(p, (void*)3); }
int TObjPlayer__sub_80354FB0(void* p) { return clear_flags__11TAdRicoRingFUl(p, 2); }
int TObjPlayer::set_flag0_bits01() { return set_flags__10TObjPlayerFUl(this, 3); }
int TObjPlayer::clear_lock_flag() { return test_flags_any(this, 1); }
int TObjPlayer__sub_8035501C(void* p) { return clear_flags__11TAdRicoRingFUl(p, 3); }
int TObjPlayer::set_flag1() { return set_flags__10TObjPlayerFUl(this, 1); }
void TObjPlayer::reset_field4() { clear_id(); *(int*)((char*)this + 0x4) = 0; }
s32 TObjPlayer__sub_80355098(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* init_and_reset_forward__10TObjPlayerFPv(void* p) { ((TObjPlayer *)p)->init_forward(); ((TObjPlayer *)p)->reset_field4(); return p; }

}
