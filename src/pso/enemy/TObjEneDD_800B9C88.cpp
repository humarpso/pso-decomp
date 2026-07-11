#include "types.h"

extern "C" {

s32 get_main_phase();
int TObjEneDD__sub_800B9C88(void* p);
int TObjEneDD__sub_800B9CA8(void* p);
int fn_800C6C10(void*);
int fn_801A85A0(void*);

int TObjEneDD__sub_800B9C88(void* p) { return fn_801A85A0(p); }
int TObjEneDD__sub_800B9CA8(void* p) { return fn_800C6C10(p); }
u8 TObjEneDD__sub_800B9CC8(void) {
    return (u8) (get_main_phase() == 0xE);
}
u8 TObjEneDD__sub_800B9CF4(void) {
    return (u8) (get_main_phase() == 0xF);
}

}
