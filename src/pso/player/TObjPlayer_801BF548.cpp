#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern "C" {
s16 TObjPlayer__sub_801BF57C(void* p);
void TObjPlayer__sub_801BF5F0(void* p, s32 v);
int TObjPlayer__sub_801BF640(void* p);
int TObjPlayer__sub_801BFFA0(void*);
void TObjPlayer__sub_801BF690(void *);
}

extern "C" {

void TObjPlayer__sub_801BF47C(void* p);
int update_action_palette__10TObjPlayerFPv(void* p);
int set_action_palette_mode__10TObjPlayerFPv(void* p);
int clear_flag0_bit1__10TObjPlayerFPv(void* p);
int set_flag_2__10TObjPlayerFPv(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int set_flags__10TObjPlayerFPvUi(void*, int);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);

int TObjPlayer__sub_801BF548(void) { return 0; }
int TObjPlayer__sub_801BF560(void) { return 0; }

s16 TObjPlayer__sub_801BF57C(void* p) { return *(s16*)((char*)p + 0x0); }

void TObjPlayer__sub_801BF5F0(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

int TObjPlayer__sub_801BF640(void* p) { return TObjPlayer__sub_801BFFA0(p); }

void *TObjPlayer__sub_801BF660(void *arg0) {
    TObjPlayer__sub_801BF690(arg0);
    return arg0;
}

}
