#include "types.h"

struct O_801AA64C { u16 a; u16 b; };

extern "C" {
void TObjPlayer__sub_801AA64C(O_801AA64C *p);
}

extern "C" {

s32 __destroy_arr(s32, s32 *, s32, s32);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
int __dl__FPv(void* a0 = 0);
int TObjPlayer__sub_801AA6E4(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_801AA66C(void* p, void* a1);
void* TObjPlayer__sub_801AA61C(void* p);
s16 get_hp__10TObjPlayerFPv(void* p);
u16 get_section_id__10TObjPlayerFPv(void* p);
void set_field_2__10TObjPlayerFPvs(void* p, s16 v);
void set_type__10TObjPlayerFPvs(void* p, s16 v);
u16 get_entity_type__10TObjPlayerFPv(void* p);

void TObjPlayer__sub_801AA64C(O_801AA64C *p) {
    p->a = 0xFFFF;
    p->b = 0;
}

}
