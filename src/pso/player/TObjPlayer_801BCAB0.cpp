#include "types.h"

extern "C" {

s32 obj_isState2_324();
s32 is_current_room__10TObjRoomIdFPv(s32);
s32 fn_801AEE10();
s32 fn_801BAA00(s32);
s32 TObjPlayer__sub_801BE3B4(s32);
int queue_destruction__7TObjectFv(void*);
void destroy_owned_object__10TObjPlayerFPv(void* p);
int fn_801058F8(void*);
int fn_801AFF50(void*);
int fn_801AFF80(void*);
void update_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void TObjPlayer__sub_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
int TObjPlayer__sub_801BCC30(void* p);
void TObjPlayer__sub_801BCC50(void);
int fn_801AFDD8(void*);

void TObjPlayer__sub_801BCAB0(void) {  }
void TObjPlayer__sub_801BCAB4(s32 arg0) {
    if (obj_isState2_324() != 0) {
        TObjPlayer__sub_801BE3B4(arg0);
    } else {
        fn_801AFF80((void*)(arg0));
        fn_801AFF50((void*)(arg0));
    }
    if ((fn_801AEE10() != 0) && (is_current_room__10TObjRoomIdFPv(arg0) != 0)) {
        fn_801BAA00(arg0);
    }
}
void TObjPlayer__sub_801BCB28(void) {  }
void update_if_active__10TObjPlayerFPv(void* p) { if (fn_801058F8(p) != 0) { fn_801AFF80(p); fn_801AFF50(p); } }

}
