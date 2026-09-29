#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct S_802C3720 {
    u8 pad0[0x3A4];
    u32 f3A4;
} S_802C3720;

extern "C" {
s8 get_item_count_max__10TObjPlayerFv();
void clear_30_slots__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_802C457C(void *, s16, s8);
s8 *get_action_data__10TObjPlayerFPv(void *);
void TObjPlayer__sub_802C3720(S_802C3720 *arg0);
}

extern "C" {

int TObjPlayer__sub_802C367C(void* p);
void TObjPlayer__sub_802C39CC(void *arg0);
void clear_30_slots__10TObjPlayerFPv(void* p);
void setup_effect_slots__10TObjPlayerFii(s32 arg0, s32 arg1);
int TAdSinglePlyChrSelectGC__sub_802C3AC0(void*);
M2C_UNK TObjPlayer__sub_802C38B4(u8, void *, M2C_UNK);
int TObjPlayer__sub_802C456C(void*, void*, void*);
int TObjPlayer__sub_802C46BC(void*);
M2C_UNK TObjPlayer__sub_802C46E0(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
int clear_item_slots__10TObjPlayerFPv(void*);
int set_action_state__10TObjPlayerFPvUc(void*, void*);

int TObjPlayer__sub_802C367C(void* p) { *(unsigned char*)(p) = 0; clear_item_slots__10TObjPlayerFPv(p); TObjPlayer__sub_802C46BC((char*)p + 0x3c0); TAdSinglePlyChrSelectGC__sub_802C3AC0(p); *(int*)((char*)p + 0x36c) = 300; set_action_state__10TObjPlayerFPvUc(p, (void*)1); return 1; }

void clear_30_slots__10TObjPlayerFPv(void* p) { { int i; for (i = 0; i < 30; i++) { TObjPlayer__sub_802C456C(p, (void*)i, (void*)0); } } }

void TObjPlayer__sub_802C3720(S_802C3720 *arg0) {
    s32 i;
    s8 *p;
    p = get_action_data__10TObjPlayerFPv(arg0);
    for (i = 0; i < 0x14; i++) {
        *p = get_item_count_max__10TObjPlayerFv();
        p++;
    }
    if (arg0->f3A4 & 0x80) {
        TObjPlayer__sub_802C457C(arg0, 0, 0);
    }
    clear_30_slots__10TObjPlayerFPv((void*)(arg0));
}

void setup_effect_slots__10TObjPlayerFii(s32 arg0, s32 arg1) {
    TObjPlayer__sub_802C46E0(arg1, 0, 0, 1, 0);
    TObjPlayer__sub_802C46E0(arg1, 1, 0, 1, 0);
    TObjPlayer__sub_802C46E0(arg1, 0, 1, 2, 0);
    TObjPlayer__sub_802C46E0(arg1, 0, 2, 2, 1);
    if (arg0 & 0x60) {
        TObjPlayer__sub_802C46E0(arg1, 0, 3, 4, 0);
        return;
    }
    TObjPlayer__sub_802C46E0(arg1, 0, 3, 3, 0);
}

void TObjPlayer__sub_802C39CC(void *arg0) {
    TObjPlayer__sub_802C38B4(M2C_FIELD(arg0, u8 *, 0x3A1), arg0, 0);
}

}
