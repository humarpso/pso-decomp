#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_801C010C { u8 pad[0x5c]; u8 arr[1]; };

struct O_801C0124 { u8 pad[0x48]; u8 arr[1]; };

extern "C" {
u8 is_action_id_none(s32 arg0);
u8 TObjPlayer__sub_801C010C(O_801C010C *self, s16 i);
u8 TObjPlayer__sub_801C0124(O_801C0124 *self, s16 i);
}

extern "C" {

int TObjPlayer__sub_801C00FC(void);
int TObjPlayer__sub_801C0104(void);
int forward_801C210C__10TObjPlayerFPv(void* p);
int get_hold_effect_count__10TObjPlayerFv(void);
int get_item_count_max__10TObjPlayerFv(void);
void set_technique_id__10TObjPlayerFPvs(void* p, s16 v);
int TObjPlayer__sub_801C210C(void*);

int forward_801C210C__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801C210C(p); }

    extern int lbl_805D6688;

u8 is_action_id_none(s32 arg0) {
    return (u8) (arg0 == -1);
}

int get_hold_effect_count__10TObjPlayerFv(void) {  return lbl_805D6688; }

int TObjPlayer__sub_801C00FC(void) { return 0; }
int TObjPlayer__sub_801C0104(void) { return 0; }

u8 TObjPlayer__sub_801C010C(O_801C010C *self, s16 i) {
    return self->arr[i];
}

void set_technique_id__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }

u8 TObjPlayer__sub_801C0124(O_801C0124 *self, s16 i) {
    return self->arr[i];
}

int get_item_count_max__10TObjPlayerFv(void) { return 255; }

}
