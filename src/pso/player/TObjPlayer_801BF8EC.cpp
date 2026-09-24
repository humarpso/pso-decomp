#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjPlayer__sub_801BF8EC(s32 arg0, s32 arg1, s32 arg2);
void TObjPlayer__sub_801BF8F8(s32 *p);
}

extern "C" {

void TObjPlayer__sub_801BF914(void);
s32 TObjPlayer__sub_801BF548();
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
void* TObjPlayer__sub_801BF934(void* p);
void TObjPlayer__sub_801BF93C(void* p, s16 v);
void TObjPlayer__sub_801BF954(void* p, s32 v);
s32 TObjPlayer__sub_801BF95C(void* p);
int check_flag_2__10TObjPlayerFPv(void* p);
int clear_fields__20TWindowSubStatusDispFPv(void*);
int clear_id__10TObjPlayerFPv(void*);
s16 get_action_id__10TObjPlayerFPv(void* p);
int get_enabled__11TMainCursorFPv(void*);
s32 get_lock_timer__10TObjPlayerFPv(void* p);
void* get_sub_object__10TObjPlayerFPv(void* p);
int get_type__11TMainCursorFPv(void*);
void* reset_sub_status_disp__10TObjPlayerFPv(void* p);
void set_action_id__10TObjPlayerFPvs(void* p, s16 v);
void set_anim_state__10TObjPlayerFPvi(void* p, s32 v);
void set_anim_state__10TObjPlayerFPvs(void* p, s16 v);
int set_flag_4__10TObjPlayerFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
void set_state__10TObjPlayerFPvs(void* p, s16 v);
int test_flag_16__10TObjPlayerFPv(void* p);
int update_main_cursor__10TObjPlayerFPv(void* p);

void TObjPlayer__sub_801BF8EC(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK *, (arg1 * 4)) = arg2;
}

void TObjPlayer__sub_801BF8F8(s32 *p) {
    s32 i;
    for (i = 0; i < 13; i++) {
        *p++ = 0;
    }
}

void TObjPlayer__sub_801BF914(void) {  }

}
