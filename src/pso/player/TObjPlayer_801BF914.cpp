#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801BF548();
s32 TObjPlayer__sub_801BF640();
int clear_fields__20TWindowSubStatusDispFPv(void*);
void* reset_sub_status_disp__10TObjPlayerFPv(void* p);
f32 TObjPlayer__sub_801BF6B0(void* p);
void* TObjPlayer__sub_801BF6B8(void* p);
void TObjPlayer__sub_801BF6C0(void* p, f32 v);
void TObjPlayer__sub_801BF6C8(void* p, f32 a, f32 b);
void TObjPlayer__sub_801BF6D4(void* p, s16 v);
void TObjPlayer__sub_801BF6DC(void* p, s16 v);
int TObjPlayer__sub_801BF6E4(void* p);
int update_main_cursor__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BF7B8(void* p);
void set_anim_state__10TObjPlayerFPvi(void* p, s32 v);
void set_state__10TObjPlayerFPvs(void* p, s16 v);
void set_anim_state__10TObjPlayerFPvs(void* p, s16 v);
void set_action_id__10TObjPlayerFPvs(void* p, s16 v);
f32 TObjPlayer__sub_801BF814(void* p);
int test_flag_16__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BF840(void* p);
int set_flag_4__10TObjPlayerFPv(void* p);
int check_flag_2__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BF8AC(void* p);
int TObjPlayer__sub_801BF8CC(void* p);
void TObjPlayer__sub_801BF914(void);
s16 get_action_id__10TObjPlayerFPv(void* p);
void* TObjPlayer__sub_801BF934(void* p);
void TObjPlayer__sub_801BF93C(void* p, s16 v);
void* get_sub_object__10TObjPlayerFPv(void* p);
s32 get_lock_timer__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BF954(void* p, s32 v);
s32 TObjPlayer__sub_801BF95C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_id__10TObjPlayerFPv(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);

void TObjPlayer__sub_801BF914(void) {  }

}
