#include "types.h"

struct RecoveredGlobal_802E1024_lbl_804E2F68 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 __nw__7TObjectFUl(int);
void *init_player__22TAdMultiPlyChrSelectGCFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
extern RecoveredGlobal_802E1024_lbl_804E2F68 multi_chr_select_player_slot_table;
s32 get_or_create_player__22TAdMultiPlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void TAdChrSelPlayerGC__sub_802E10A0(void);
void *init_player__22TAdMultiPlyChrSelectGCFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TAdChrSelPlayerGC__ct(void *, void *);
void TLobby__sub_8001FE7C(void*, int);
void TObjMotion__ct(void *);

extern s32 multi_chr_select_player_actor_ops[];

void *init_player__22TAdMultiPlyChrSelectGCFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    TObjMotion__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = multi_chr_select_player_actor_ops;
    *(void **)((s8 *)arg0 + 0x10C) = arg4;
    *(void **)((s8 *)arg0 + 0x108) = arg3;
    TAdChrSelPlayerGC__ct(arg0, arg2);
    return arg0;
}

extern u32 TAdMultiPlyChrSelectGC__resource_bundle;

typedef char RecoveredGlobal_802E1024_lbl_804E2F68_size[sizeof(RecoveredGlobal_802E1024_lbl_804E2F68) == 0x10 ? 1 : -1];
s32 get_or_create_player__22TAdMultiPlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r0;
    temp_r30 = arg3 * 4;
    if ((u32) *(s32 *)((s8 *)(&multi_chr_select_player_slot_table.value) + temp_r30) == 0U) {
        temp_r3 = __nw__7TObjectFUl((int) (0x174));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = ((s32)init_player__22TAdMultiPlyChrSelectGCFPvPvPvPvPv((void *)((int) (temp_r3)), (void *)((void *) (arg0)), (void *)((void *) (arg1)), (void *)((void *) (arg2)), (void *)((void *) (arg3))));
        }
        *(s32 *)((s8 *)(&multi_chr_select_player_slot_table.value) + temp_r30) = var_r0;
    }
    return *(s32 *)((s8 *)(&multi_chr_select_player_slot_table.value) + temp_r30);
}

void TAdChrSelPlayerGC__sub_802E10A0(void) {
    if ((u32) TAdMultiPlyChrSelectGC__resource_bundle != 0U) {
        TLobby__sub_8001FE7C((void*)TAdMultiPlyChrSelectGC__resource_bundle, 1);
        TAdMultiPlyChrSelectGC__resource_bundle = 0U;
    }
}

}
