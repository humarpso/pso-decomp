#include "types.h"

extern "C" {
s16 TObjPlayer__sub_801BF57C(void* p);
void TObjPlayer__sub_801BF5F0(void* p, s32 v);
int TObjPlayer__sub_801BFFA0(void*);
u8 is_timer_running(u8 *arg0);
void TObjPlayer__sub_801BF5F0(void* p, s32 v);
s32 TObjPlayer__sub_801BF584(u8 *arg0);
int TObjPlayer__sub_801BF640(void* p);
s32 TObjPlayer__sub_801BF60C(u8 *arg0);
extern const f32 TObjPlayer__data_805DC278;
void TObjPlayer__sub_801BF690(u8 *arg0);
s32 TObjPlayer__sub_801BF5F8(void *arg0, s32 arg1);
s32 TObjPlayer__sub_801BF560(s16 *arg0);
}

extern "C" {

void TObjPlayer__sub_801BF47C(void* p);
int update_action_palette__10TObjPlayerFv(void* p);
int set_action_palette_mode__10TObjPlayerFv(void* p);
int clear_flag0_bit1__10TObjPlayerFv(void* p);
int set_flag_2__10TObjPlayerFv(void* p);
int clear_flags__11TAdRicoRingFUl(void*, int);
int set_flags__10TObjPlayerFUl(void*, int);
int set_slot__20TWindowActionPaletteFUc(void*);
int set_mode__20TWindowActionPaletteFUc(void*);

u8 is_timer_running(u8 *arg0) {
    return (u8) (*(s32 *)((s8 *)arg0 + 4) != -1);
}

s32 TObjPlayer__sub_801BF560(s16 *arg0) {
  s16 temp_r4;
  unsigned int new_var;
  temp_r4 = (*arg0 = (*arg0) - 1);
  new_var = (u32) temp_r4;
  return (new_var >> 0x1FU) ^ 1;
}

s16 TObjPlayer__sub_801BF57C(void* p) { return *(s16*)((char*)p + 0x0); }

s32 TObjPlayer__sub_801BF584(u8 *arg0) {
    if ((TObjPlayer__sub_801BF5F8((void *)((void *) (arg0)), (s32)((int) (TObjPlayer__sub_801BF60C((u8 *)(arg0))))) != 0) && (TObjPlayer__sub_801BF5F8((void *)((void *) (arg0)), (s32)((int) (*(s32 *)((s8 *)arg0 + 8)))) != 0)) {
        TObjPlayer__sub_801BF5F0((void*)((void *) (arg0)), (s32)((int) (0x96)));
        return 1;
    }
    return 0;
}

void TObjPlayer__sub_801BF5F0(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

s32 TObjPlayer__sub_801BF5F8(void *arg0, s32 arg1) {
    return (u8) ((arg1 & 0xC) != 0);
}

s32 TObjPlayer__sub_801BF60C(u8 *arg0) {
    return *(s32 *)((s8 *)arg0 + 8) ^ ((s32)TObjPlayer__sub_801BF640((void*)(arg0)));
}

int TObjPlayer__sub_801BF640(void* p) { return TObjPlayer__sub_801BFFA0(p); }

void *TObjPlayer__sub_801BF660(void *arg0) {
    TObjPlayer__sub_801BF690((u8 *)(arg0));
    return arg0;
}
void TObjPlayer__sub_801BF690(u8 *arg0) {
    *(s16 *)((s8 *)arg0 + 0) = 0;
    *(s16 *)((s8 *)arg0 + 2) = 0;
    *(f32 *)((s8 *)arg0 + 8) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 0x10) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 0xC) = (f32) TObjPlayer__data_805DC278;
}

}
