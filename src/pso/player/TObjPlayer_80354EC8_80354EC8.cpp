#include "types.h"

extern "C" {
s32 __destroy_arr(void *, void *, int, int);
void TObjPlayer__sub_80355098(void);
extern u8 lbl_80543984[];
void destroy_static_array__10TObjPlayerFv(void);
void __register_global_object(void *, void *, void *);
void __construct_array(void *, void *, void *, u32, u32);
void destroy_static_array__10TObjPlayerFv(void);
void TObjPlayer__sub_80355098(void);
void init_and_reset_forward__10TObjPlayerFPv(void);
extern u8 lbl_80543978[];
extern u8 lbl_80543984[];
void TObjPlayer__sub_80354EEC(void);
}

extern "C" {

void finish_quest_thread__10TObjPlayerFv(void);
int create_quest_thread(void);
int get_quest_thread_id__10TObjPlayerFPv(void);

void finish_quest_thread__10TObjPlayerFv(void) { get_quest_thread_id__10TObjPlayerFPv(); create_quest_thread(); }

void TObjPlayer__sub_80354EEC(void) {
    __construct_array(lbl_80543984, (void *)init_and_reset_forward__10TObjPlayerFPv, (void *)TObjPlayer__sub_80355098, 8, 4);
    __register_global_object(0, (void *)destroy_static_array__10TObjPlayerFv, lbl_80543978);
}

void destroy_static_array__10TObjPlayerFv(void) {
    __destroy_arr(lbl_80543984, (void *)TObjPlayer__sub_80355098, 8, 4);
}

}

__declspec(section ".ctors") static void *const __sinit_TObjPlayer_80354EC8_80354EC8_cpp_ref = (void *)TObjPlayer__sub_80354EEC;
