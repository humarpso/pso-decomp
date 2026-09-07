#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
void TPlayerBattleCtrl4P__vt11(u8 *arg0);
}

extern "C" {

void TPlayerBattleCtrl4P__vt10(void *arg0);
void TPlayerBattleCtrl4P__vt12(void *arg0);
void TPlayerBattleCtrl4P__vt13(void *arg0);
void TPlayerBattleCtrl4P__vt14(void *arg0);
void TPlayerBattleCtrl4P__vt15(void* p);
void TPlayerBattleCtrl4P__vt18(void *arg0);
void TPlayerBattleCtrl4P__vt19(void *arg0);
void TPlayerBattleCtrl4P__vt8(void *arg0);
M2C_UNK __ct__15TDuelEffectCtrlFP7TObjectUc(void *, void *, M2C_UNK);
u8 TLobby__sub_801D7064(M2C_UNK *);
M2C_UNK TPlayerBattleCtrl4P__sub_803112AC(void *, M2C_UNK);
int TPlayerBattleCtrl4P__sub_80311618(void*);
M2C_UNK TWindow__close(void *);
void *__nw__7TObjectFUl(M2C_UNK);
s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void *);
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
M2C_UNK update_all_players__19TPlayerBattleCtrl4PFv();

void TPlayerBattleCtrl4P__vt19(void *arg0) {
    s32 temp_r0;

    update_all_players__19TPlayerBattleCtrl4PFv();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        M2C_FIELD(arg0, s32 *, 0x24C) = 0x1E;
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(arg0), (void*)(8));
    }
}

void TPlayerBattleCtrl4P__vt18(void *arg0) {
    s32 temp_r0;

    update_all_players__19TPlayerBattleCtrl4PFv();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        M2C_FIELD(arg0, s32 *, 0x240) = 0x5A;
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(arg0), (void*)(2));
    }
}

void TPlayerBattleCtrl4P__vt15(void* p) { TPlayerBattleCtrl4P__sub_80311618(p); set_score__19TPlayerBattleCtrl4PFPvi((void*)((void*)(p)), (void*)((void*)((void*)1))); }

void TPlayerBattleCtrl4P__vt14(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x20);
    if ((u32) temp_r3 != 0U) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    }
    TPlayerBattleCtrl4P__sub_803112AC(arg0, 2);
}

void TPlayerBattleCtrl4P__vt13(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        set_score__19TPlayerBattleCtrl4PFPvi((void*)((void*)(arg0)), (void*)((void*)(8)));
    }
}

void TPlayerBattleCtrl4P__vt12(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24C) = (s32) (M2C_FIELD(arg0, s32 *, 0x24C) - 1);
    if ((check_all_players_flag__19TPlayerBattleCtrl4PFv(arg0) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x24C) >= 0)) {
        if (M2C_FIELD(arg0, void **, 0x20) != (void *) 0) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x20));
        M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        {
            void *temp = __nw__7TObjectFUl(0x28);
            if (temp != 0) {
                __ct__15TDuelEffectCtrlFP7TObjectUc(temp, arg0, 0);
            }
        }
        M2C_FIELD(arg0, s32 *, 0x240) = 0x96;
        set_score__19TPlayerBattleCtrl4PFPvi((void*)((void*)(arg0)), (void*)((void*)(7)));
        }
    }
}

void TPlayerBattleCtrl4P__vt11(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24C) = 0x384;
    set_score__19TPlayerBattleCtrl4PFPvi((void*)(arg0), (void*)(6));
}

void TPlayerBattleCtrl4P__vt10(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(arg0), (void*)(5));
    }
}

extern M2C_UNK lbl_8050EA40[];

void TPlayerBattleCtrl4P__vt8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        if (TLobby__sub_801D7064(lbl_8050EA40) == 1) {
            set_score__19TPlayerBattleCtrl4PFPvi((void*)(arg0), (void*)(3));
            return;
        }
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(arg0), (void*)(5));
    }
}

}
