#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Self_80312994 {
    u8 pad0[0x298];
    s32 mode;
    void m0();
    void m1();
    void m2();
    void m3();
    void m4();
    void m5();
};
typedef void (Self_80312994::*Action_80312994)();

extern "C" {
static u32 pad_80312994[14] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
}

extern "C" {

void TPlayerBattleCtrl4P__vt0(void* p);
void TPlayerBattleCtrl4P__vt7(void *arg0);
int TPlayerBattleCtrl4P__sub_803112AC(void*, void*);
int TPlayerBattleCtrl4P__sub_8031171C(void*);
void send_and_handle__6TLobbyFPvii(void *, void *, int);
void set_score__19TPlayerBattleCtrl4PFPvi(void *, int);

void TPlayerBattleCtrl4P__vt7(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x20) != NULL) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, void **, 0x20), (void *)((char *)arg0 + 56), 128);
    }
    M2C_FIELD(arg0, u32 *, 0x240) = 240;
    set_score__19TPlayerBattleCtrl4PFPvi(arg0, 2);
}

void TPlayerBattleCtrl4P__vt0(void* p) { TPlayerBattleCtrl4P__sub_8031171C(p); TPlayerBattleCtrl4P__sub_803112AC(p, (void*)1); }

void TPlayerBattleCtrl4P__sub_80312994(Self_80312994 *self) {
    static Action_80312994 tbl[6] = {
        &Self_80312994::m0, &Self_80312994::m1, &Self_80312994::m2,
        &Self_80312994::m3, &Self_80312994::m4, &Self_80312994::m5,
    };
    (self->*tbl[self->mode])();
}

}
