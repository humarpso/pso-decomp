#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void zero_vec3(void* a0);
    extern const float TObjPlayer__data_805DC278;
void zero_vec3(void* a0);
u8 TObjPlayer__sub_801BF918(u8 *arg0);
}

extern "C" {

void* TObjPlayer__sub_801BF934(void* p);
void TObjPlayer__sub_801BF93C(void* p, s16 v);
void TObjPlayer__sub_801BF954(void* p, s32 v);
s32 TObjPlayer__sub_801BF95C(void* p);
s32 is_timer_running();
s32 TObjPlayer__sub_801BF640();
f32 TObjPlayer__sub_801BF6B0(void* p);
void* TObjPlayer__sub_801BF6B8(void* p);
void TObjPlayer__sub_801BF6C0(void* p, f32 v);
void TObjPlayer__sub_801BF6C8(void* p, f32 a, f32 b);
void TObjPlayer__sub_801BF6D4(void* p, s16 v);
void TObjPlayer__sub_801BF6DC(void* p, s16 v);
int TObjPlayer__sub_801BF6E4(void* p);
void TObjPlayer__sub_801BF7B8(void* p);
f32 TObjPlayer__sub_801BF814(void* p);
int TObjPlayer__sub_801BF840(void* p);
int TObjPlayer__sub_801BF8AC(void* p);
int TObjPlayer__sub_801BF8CC(void* p);
void TObjPlayer__sub_801BF914(void);
int check_flag_2__10TObjPlayerFv(void* p);
int clear_fields__20TWindowSubStatusDispFv(void*);
int clear_id__10TObjPlayerFv(void*);
int get_enabled__11TMainCursorFv(void*);
int get_type__11TMainCursorFv(void*);
void* reset_sub_status_disp__10TObjPlayerFv(void* p);
void set_action_id__10TObjPlayerFs(void* p, s16 v);
void set_anim_state__10TObjPlayerFl(void* p, s32 v);
void set_anim_state__10TObjPlayerFs(void* p, s16 v);
int set_flag_4__10TObjPlayerFv(void* p);
int set_flags__10TObjPlayerFUl(void*, int);
void set_state__10TObjPlayerFs(void* p, s16 v);
int test_flag_16__10TObjPlayerFv(void* p);
int update_main_cursor__10TObjPlayerFv(void* p);

u8 TObjPlayer__sub_801BF918(u8 *arg0) {
    return (u8) (*(s32 *)((s8 *)arg0 + 4) == 2);
}

s16 TObjPlayer::get_action_id() { return *(s16*)((char*)this + 0x2); }
void* TObjPlayer__sub_801BF934(void* p) { return (char*)p + 0xc; }
void TObjPlayer__sub_801BF93C(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void*TObjPlayer::get_sub_object() { return (char*)this + 0x8; }
s32 TObjPlayer::get_lock_timer() { return *(s32*)((char*)this + 0x4); }
void TObjPlayer__sub_801BF954(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s32 TObjPlayer__sub_801BF95C(void* p) { return *(s32*)((char*)p + 0x0); }

void zero_vec3(void* a0) { *(float*)((char*)a0 + 0x0) = TObjPlayer__data_805DC278; *(float*)((char*)a0 + 0x4) = TObjPlayer__data_805DC278; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC278; }

}
