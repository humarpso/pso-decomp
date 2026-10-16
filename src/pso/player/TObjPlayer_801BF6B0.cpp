#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 is_timer_running();
s32 TObjPlayer__sub_801BF640();
int clear_fields__20TWindowSubStatusDispFv(void*);
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
void* TObjPlayer__sub_801BF934(void* p);
void TObjPlayer__sub_801BF93C(void* p, s16 v);
void TObjPlayer__sub_801BF954(void* p, s32 v);
s32 TObjPlayer__sub_801BF95C(void* p);
int set_flags__10TObjPlayerFUl(void*, int);
int clear_id__10TObjPlayerFv(void*);
int get_enabled__11TMainCursorFv(void*);
int get_type__11TMainCursorFv(void*);

f32 TObjPlayer__sub_801BF6B0(void* p) { return *(f32*)((char*)p + 0x8); }
void* TObjPlayer__sub_801BF6B8(void* p) { return (char*)p + 0xc; }
void TObjPlayer__sub_801BF6C0(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
void TObjPlayer__sub_801BF6C8(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0xc) = a; *(f32*)((char*)p + 0x10) = b; }
void TObjPlayer__sub_801BF6D4(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void TObjPlayer__sub_801BF6DC(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
int TObjPlayer__sub_801BF6E4(void* p) { return get_enabled__11TMainCursorFv((char*)p + 0x4); }
int TObjPlayer::update_main_cursor() { return get_type__11TMainCursorFv((char*)this + 0x4); }
void*TObjPlayer::reset_sub_status_disp() { clear_fields__20TWindowSubStatusDispFv(this); *(short*)((char*)this + 0x18) = 0; *(short*)((char*)this + 0x16) = 0; return this; }
s32 TObjPlayer::update_timer() {
    s32 temp_r0;

    if (is_timer_running() != 0) {
        temp_r0 = *(s32 *)((s8 *)this + 4) - 1;
        *(s32 *)((s8 *)this + 4) = temp_r0;
        if (temp_r0 < 0) {
            TObjPlayer__sub_801BF7B8(this);
        }
    }
    return *(s32 *)((s8 *)this + 4);
}
void TObjPlayer__sub_801BF7B8(void* p) { *(s32*)((char*)p + 0x4) = -1; }
void TObjPlayer::update_field8() {
    *(s32 *)((s8 *)this + 8) = TObjPlayer__sub_801BF640();
}
void TObjPlayer::set_anim_state(s32 v) { *(s32*)((char*)this + 0x4) = v; }
void TObjPlayer::set_state(s16 v) { *(s16*)((char*)this + 0x0) = v; }
void TObjPlayer::set_anim_state(s16 v) { *(s16*)((char*)this + 0x8) = v; }
void TObjPlayer::set_action_id(s16 v) { *(s16*)((char*)this + 0x2) = v; }
f32 TObjPlayer__sub_801BF814(void* p) { return *(f32*)((char*)p + 0x0); }
int TObjPlayer::test_flag_16() { return set_flags__10TObjPlayerFUl(this, 16); }
int TObjPlayer__sub_801BF840(void* p) { return set_flags__10TObjPlayerFUl(p, 8); }
int TObjPlayer::set_flag_4() { return set_flags__10TObjPlayerFUl(this, 4); }
int TObjPlayer::check_flag_2() { return set_flags__10TObjPlayerFUl(this, 2); }
int TObjPlayer__sub_801BF8AC(void* p) { return TObjPlayer__sub_801BF8CC(p); }
int TObjPlayer__sub_801BF8CC(void* p) { return clear_id__10TObjPlayerFv(p); }

}
