#include "types.h"

#include <stddef.h>
struct Stack_800F5D80 {
    s32 sp8;
    u8 pad_C[0x2];
    s16 spE;
};

extern "C" {
s32 exchange_object_state__6TLobbyFPvis(void *, void *, int);
void clear_lobby_object_state(s32 arg0);
}

extern "C" {

void *alloc_tables__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 collect_model_strips_by_texture(void *, s32, s32, s32);
s32 count_model_strips_by_texture();
s32 get_target_id__13TWindowLockOnFPv(void* p);
int initialize_enemy_photon_effect(void* p);
int reset_photon_effect__12TBoss3VoloptFPv(void*);
void set_param__12TObjEneLappyFPvi(void* p, s32 v);

extern s32 lbl_805D5318;
extern s32 lbl_805D531C;
extern s32 plist_texture_matches_filter;

void *alloc_tables__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r6;

    *(s32 *)((s8 *)arg0 + 4) = 0;
    *(s32 *)((s8 *)arg0 + 0) = 0;
    plist_texture_matches_filter = 0;
    count_model_strips_by_texture();
    *(s32 *)((s8 *)arg0 + 8) = alloc_buffer__11TOBoss4RockFPv(*(s32 *)((s8 *)arg0 + 4) * 8);
    *(s32 *)((s8 *)arg0 + 0xC) = alloc_buffer__11TOBoss4RockFPv(*(s32 *)((s8 *)arg0 + 0) * 4);
    lbl_805D5318 = *(s32 *)((s8 *)arg0 + 8);
    temp_r6 = *(s32 *)((s8 *)arg0 + 0xC);
    lbl_805D531C = temp_r6;
    plist_texture_matches_filter = 0;
    collect_model_strips_by_texture(arg0, arg1, arg2, temp_r6);
    return arg0;
}
void clear_lobby_object_state(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_800F5D80, sp8) == 0x0) ? 1 : -1];
    typedef char spE_offset[(offsetof(Stack_800F5D80, spE) == 0x6) ? 1 : -1];
    Stack_800F5D80 stack;
    if (exchange_object_state__6TLobbyFPvis((void *) (arg0), (void *) (&stack.sp8), (int) (1)) != 0) {
        stack.sp8 = 0;
        stack.spE = 0;
        exchange_object_state__6TLobbyFPvis((void *) (arg0), (void *) (&stack.sp8), (int) (0));
    }
}

}
