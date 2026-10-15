#include "types.h"

extern "C" {

int is_flag_b0_4__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80121228(void* p, u32 v);
s16 get_captured_target_collider_index(void* p);
u16 get_uid__10TObjPlayerFPv(void* p);

int is_flag_b0_4__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0xb0) & 0x4; }
void TObjPlayer__sub_80121228(void* p, u32 v) { *(u32*)((char*)p + 0x28) |= v; }
s16 get_captured_target_collider_index(void* p) { return *(s16*)((char*)p + 0x2); }
u16 get_uid__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }

}

#include "types.h"

struct Obj_80121248 { u8 pad[0x4]; s32 arr[1]; };

extern "C" {
s32 get_captured_target_count(s32 *arg0);
s32 *get_captured_target_entry(Obj_80121248 *self, s32 i);
}

extern "C" {

int is_flag_b0_4__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80121228(void* p, u32 v);
s16 get_captured_target_collider_index(void* p);
u16 get_uid__10TObjPlayerFPv(void* p);

s32 *get_captured_target_entry(Obj_80121248 *self, s32 i) {
    return &self->arr[i];
}

s32 get_captured_target_count(s32 *arg0) {
    s32 temp_r3;
    temp_r3 = *arg0;
    if ((temp_r3 < 0) || (temp_r3 > 0xA)) {
        return 0;
    }
    return temp_r3;
}

}
