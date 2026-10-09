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

extern "C" {

int __dl__FPv();
int init_forward__10TObjPlayerFPv(void*);
int clear_id__10TObjPlayerFPv(void*);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*, void*);
int fn_8035510C(void* a0 = 0, void* a1 = 0);
int TAdPlyPltAnimCtrlGC__sub_80355168(void* a0 = 0);
void TObjPlayer__sub_80354F8C(void* p);
void reset_field4__10TObjPlayerFPv(void* p);
void init__19TAdPlyPltAnimCtrlGCFPvPv(void* p, void* a1);
void set_player_index__10TObjPlayerFPvi(void* p, s32 v);
int TObjPlayer__sub_80354FB0(void* p);
int set_flag0_bits01__10TObjPlayerFPv(void* p);
int clear_lock_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8035501C(void* p);
int set_flag1__10TObjPlayerFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int test_flags_any(void*, int);

s32 get_quest_thread_id__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void set_player_index__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void TObjPlayer__sub_80354F8C(void* p) { fn_8035510C(p, (void*)3); }
int TObjPlayer__sub_80354FB0(void* p) { return clear_flags__11TAdRicoRingFPvUi(p, 2); }
int set_flag0_bits01__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi(p, 3); }
int clear_lock_flag__10TObjPlayerFPv(void* p) { return test_flags_any(p, 1); }
int TObjPlayer__sub_8035501C(void* p) { return clear_flags__11TAdRicoRingFPvUi(p, 3); }
int set_flag1__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi(p, 1); }
void reset_field4__10TObjPlayerFPv(void* p) { clear_id__10TObjPlayerFPv(p); *(int*)((char*)p + 0x4) = 0; }
s32 TObjPlayer__sub_80355098(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* init_and_reset_forward__10TObjPlayerFPv(void* p) { init_forward__10TObjPlayerFPv(p); reset_field4__10TObjPlayerFPv(p); return p; }

}
