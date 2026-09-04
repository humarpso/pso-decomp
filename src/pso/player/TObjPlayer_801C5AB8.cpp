#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801C5B18(void* a0);
void clear_target_lock__10TObjPlayerFPv(void* p);
void enter_battle_state__10TObjPlayerFPv(void *arg0);
void reset_ring__10TObjPlayerFPv(void* p);
void set_vec4_const__10TObjPlayerFPv(void* a0);
void update_target_lock__10TObjPlayerFii(s32 arg0, s32 arg1);
void write_ids__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_800196EC();
M2C_UNK TObjPlayer__sub_801B130C(s32);
s32 TObjPlayer__sub_801C5C38(s32);
s32 TObjPlayer__sub_801C6F90();
int TObjPlayer__sub_803DED84(void*);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
int clear_flags__11TAdRicoRingFPvUi(void*, void*);
M2C_UNK clear_target_lock_flag__10TObjPlayerFPv(s32);
s32 fn_801C6F2C(void *);
s32 fn_8020C354(s32, s32);
s32 get_stat_by_key_state__10TObjPlayerFPv(s32);
int set_flags__10TObjPlayerFPvUi(void*, void*);
int set_global_pair__10TObjPlayerFii(void*, void*);
s32 set_lock_flag__10TObjPlayerFPv(s32);
int set_lock_timer__10TObjPlayerFPvi(void*, void*);
int set_some_id__FUl(void*);
int set_target_id__6TLobbyFi(void*);

void enter_battle_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0));
    if ((temp_r3 != 0) && (fn_801C6F2C(arg0) == 0)) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        TObjPlayer__sub_801B130C(temp_r3);
        M2C_FIELD(arg0, s16 *, 2) = 4;
    }
}

    extern const float lbl_805DC320;
void TObjPlayer__sub_801C5B18(void* a0) { *(float*)((char*)a0 + 0x1c) = lbl_805DC320; }

void write_ids__10TObjPlayerFPv(void* p) { set_some_id__FUl(*(void**)((char*)p + 0x0)); set_global_pair__10TObjPlayerFii(*(void**)((char*)p + 0x4), *(void**)((char*)p + 0x8)); TObjPlayer__sub_803DED84((char*)p + 0xc); }

    extern const float lbl_805DC320;
void set_vec4_const__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x1c) = lbl_805DC320; *(float*)((char*)a0 + 0x20) = lbl_805DC320; *(float*)((char*)a0 + 0x24) = lbl_805DC320; *(float*)((char*)a0 + 0x28) = lbl_805DC320; }

void reset_ring__10TObjPlayerFPv(void* p) { clear_flags__11TAdRicoRingFPvUi(p, (void*)1); set_lock_timer__10TObjPlayerFPvi((void*)(p), (void*)((void*)-1)); set_target_id__6TLobbyFi((void*)0); }

void clear_target_lock__10TObjPlayerFPv(void* p) { set_flags__10TObjPlayerFPvUi(p, (void*)1); set_target_id__6TLobbyFi((void*)1); }

void update_target_lock__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 temp_r31;

    if (TObjPlayer__sub_801C6F90() == 0) {
        temp_r31 = get_stat_by_key_state__10TObjPlayerFPv(arg1);
        if (fn_8020C354(TObjPlayer__sub_800196EC(), temp_r31) != 0) {
            if (set_lock_flag__10TObjPlayerFPv(arg0) != 0) {
                clear_target_lock_flag__10TObjPlayerFPv(arg0);
                set_lock_timer__10TObjPlayerFPvi((void*)(arg0), (void*)(0x5A));
                return;
            }
            if (TObjPlayer__sub_801C5C38(arg0) == 0) {
                reset_ring__10TObjPlayerFPv((void*)(arg0));
            }
        } else if (set_lock_flag__10TObjPlayerFPv(arg0) == 0) {
            clear_target_lock__10TObjPlayerFPv((void*)(arg0));
        }
    }
}

}
