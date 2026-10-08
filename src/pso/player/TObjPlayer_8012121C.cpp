#include "types.h"

extern "C" {

int is_flag_b0_4__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80121228(void* p, u32 v);
s16 TObjPlayer__sub_80121238(void* p);
u16 get_uid__10TObjPlayerFPv(void* p);

int is_flag_b0_4__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0xb0) & 0x4; }
void TObjPlayer__sub_80121228(void* p, u32 v) { *(u32*)((char*)p + 0x28) |= v; }
s16 TObjPlayer__sub_80121238(void* p) { return *(s16*)((char*)p + 0x2); }
u16 get_uid__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }

}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_80121248 { u8 pad[0x4]; s32 arr[1]; };

extern "C" {
s32 TObjPlayer__sub_8012125C(s32 *arg0);
s32 *TObjPlayer__sub_80121248(Obj_80121248 *self, s32 i);
}

extern "C" {

int is_flag_b0_4__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80121228(void* p, u32 v);
s16 TObjPlayer__sub_80121238(void* p);
u16 get_uid__10TObjPlayerFPv(void* p);

s32 *TObjPlayer__sub_80121248(Obj_80121248 *self, s32 i) {
    return &self->arr[i];
}

s32 TObjPlayer__sub_8012125C(s32 *arg0) {
    s32 temp_r3;
    temp_r3 = *arg0;
    if ((temp_r3 < 0) || (temp_r3 > 0xA)) {
        return 0;
    }
    return temp_r3;
}

}
