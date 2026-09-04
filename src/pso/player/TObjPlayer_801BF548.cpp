#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s16 TObjPlayer__sub_801BF57C(void* p);
void TObjPlayer__sub_801BF5F0(void* p, s32 v);
int TObjPlayer__sub_801BF640(void* p);
int TObjPlayer__sub_801BFFA0(void*);
void TObjPlayer__sub_801BF690(void *);
u8 TObjPlayer__sub_801BF548(u8 *arg0);
void TObjPlayer__sub_801BF5F0(void* p, s32 v);
s32 TObjPlayer__sub_801BF5F8(void *, int);
s32 TObjPlayer__sub_801BF60C();
s32 TObjPlayer__sub_801BF584(u8 *arg0);
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

u8 TObjPlayer__sub_801BF548(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 4) != -1);
}

int TObjPlayer__sub_801BF560(void) { return 0; }

s16 TObjPlayer__sub_801BF57C(void* p) { return *(s16*)((char*)p + 0x0); }

s32 TObjPlayer__sub_801BF584(u8 *arg0) {
    if ((TObjPlayer__sub_801BF5F8((void *) (arg0), (int) (TObjPlayer__sub_801BF60C())) != 0) && (TObjPlayer__sub_801BF5F8((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 8))) != 0)) {
        TObjPlayer__sub_801BF5F0((void*)((void *) (arg0)), (s32)((int) (0x96)));
        return 1;
    }
    return 0;
}

void TObjPlayer__sub_801BF5F0(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

int TObjPlayer__sub_801BF640(void* p) { return TObjPlayer__sub_801BFFA0(p); }

void *TObjPlayer__sub_801BF660(void *arg0) {
    TObjPlayer__sub_801BF690(arg0);
    return arg0;
}

}
