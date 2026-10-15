#include "types.h"

extern "C" {

void* TObjPlayer__sub_801AA66C(void* p, void* a1);
void TObjPlayer__sub_801AA6E4(u8 *arg0, u8 *arg1);
void TObjPlayer__sub_801AA6F8(void* a0);
u16 get_entity_type__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
void* TObjPlayer__sub_801AA61C(void* p);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
s32 __destroy_arr(s32, s32 *, s32, s32);
int __dl__FPv(void* a0 = 0);
s16 get_hp__10TObjPlayerFPv(void* p);
u16 get_section_id__10TObjPlayerFPv(void* p);
void set_field_2__10TObjPlayerFPvs(void* p, s16 v);
void set_type__10TObjPlayerFPvs(void* p, s16 v);

u16 get_entity_type__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }
void* TObjPlayer__sub_801AA66C(void* p, void* a1) { *(short*)(p) = *(unsigned short*)(a1); *(short*)((char*)p + 0x2) = *(short*)((char*)a1 + 0x2); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); TObjPlayer__sub_801AA6E4((u8 *)((char*)p + 0x8), (u8 *)((char*)a1 + 0x8)); TObjPlayer__sub_801AA6E4((u8 *)((char*)p + 0xc), (u8 *)((char*)a1 + 0xc)); TObjPlayer__sub_801AA6E4((u8 *)((char*)p + 0x10), (u8 *)((char*)a1 + 0x10)); TObjPlayer__sub_801AA6E4((u8 *)((char*)p + 0x14), (u8 *)((char*)a1 + 0x14)); return p; }

void TObjPlayer__sub_801AA6E4(u8 *arg0, u8 *arg1) {
    *(u16 *)((s8 *)arg0 + 0) = (u16) *(u16 *)((s8 *)arg1 + 0);
    *(s16 *)((s8 *)arg0 + 2) = (s16) *(s16 *)((s8 *)arg1 + 2);
}

    extern const float lbl_805DC138;
void TObjPlayer__sub_801AA6F8(void* a0) { *(float*)((char*)a0 + 0x180) = lbl_805DC138; *(float*)((char*)a0 + 0x184) = lbl_805DC138; *(float*)((char*)a0 + 0x188) = lbl_805DC138; *(float*)((char*)a0 + 0x18c) = lbl_805DC138; }

}
