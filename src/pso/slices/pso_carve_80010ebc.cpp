#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_80010F54 { u8 pad[0x2D4]; u16 id; u16 id2; };

extern "C" {
s32 TObjPlayer__sub_80010C04(s32 id);
s32 add_id_to_slots__10TObjPlayerFiUs(void *, s32);
s32 is_split_screen();
void record_attack_source(Obj_80010F54 *self, s32 id);
}

extern "C" {

s32 add_id_to_slots__10TObjPlayerFiUs(void *, s32);
s32 obj_getArrU16_FC(s32, s32);
s32 is_split_screen();
s32 obj_getField1c(u32);
void fn_80010EBC(void);
void fn_80010EC0(void);
void fn_80010EC4(void);
void fn_80010EC8(void);
u16 fn_80010F4C(void* p);
void TObjPlayer__sub_80011010(void);

void fn_80010EBC(void) {  }
void fn_80010EC0(void) {  }
void fn_80010EC4(void) {  }
void fn_80010EC8(void) {  }
void assign_slots_from_list(void *arg0, s32 arg1) {
    s32 var_r31;

    if (arg1 != 0) {
        if (is_split_screen() != 0) {
            var_r31 = 0;
            do {
                add_id_to_slots__10TObjPlayerFiUs(arg0, obj_getArrU16_FC(arg1, var_r31));
                var_r31 += 1;
            } while (var_r31 != 4);
            return;
        }
        if (M2C_FIELD(arg0, u16 *, 0x2D6) == 0xFFFF) {
            M2C_FIELD(arg0, u16 *, 0x2D6) = fn_80010F4C((void*)(arg1));
        }
    }
}
u16 fn_80010F4C(void* p) { return *(u16*)((char*)p + 0x2d6); }
void record_attack_source(Obj_80010F54 *self, s32 id) {
    if ((u16)id != 0xFFFF) {
        self->id = id;
        if (self->id < 0x1000 && TObjPlayer__sub_80010C04(self->id) != 0) {
            if (is_split_screen() == 0) {
                self->id2 = self->id;
            } else {
                add_id_to_slots__10TObjPlayerFiUs(self, id);
            }
        }
    }
}

}
