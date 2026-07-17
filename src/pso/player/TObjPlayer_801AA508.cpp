#include "types.h"

extern "C" {

s32 TObjPlayer__sub_803966F8(s32, s32 *, s32, s32);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
int __dl__FPv(void* a0 = 0);
int TObjPlayer__sub_801AA6E4(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_801AA66C(void* p, void* a1);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
void* TObjPlayer__sub_801AA61C(void* p);
s16 get_hp__10TObjPlayerFPv(void* p);
u16 get_section_id__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801AA518(void* p, s16 v);
void TObjPlayer__sub_801AA520(void* p, s16 v);
u16 TObjPlayer__sub_801AA664(void* p);

s16 get_hp__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2cc); }
u16 get_section_id__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }
void TObjPlayer__sub_801AA518(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void TObjPlayer__sub_801AA520(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
s32 TObjPlayer__sub_801AA528(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        TObjPlayer__sub_803966F8(arg0 + 8, (s32 *)TObjPlayer__sub_801AA584, 4, 4);
        if (arg1 > 0) {
            __dl__FPv((void*)(arg0));
        }
    }
    return arg0;
}

}
