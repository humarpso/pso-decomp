#include "types.h"

struct Base_801BA6BC { u8 pad[0x18]; };

struct Ctrl_801BA6BC : Base_801BA6BC {
    virtual ~Ctrl_801BA6BC();
};

extern "C" {
extern void *lbl_8050EA10[];
void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i);
extern void *lbl_8050EA10[];
void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i);
s32 obj_getField1c(void *obj);
u16 TObjPlayer__sub_80154B60(void *obj);
s32 TObjPlayer__sub_801BA6BC(void *self);
}

extern "C" {

s32 TObjPlayer__sub_801BA6BC(void *self) {
    Ctrl_801BA6BC *c = (Ctrl_801BA6BC *)TPlayerBattleCtrl4P__sub_801BA74C((u16)obj_getField1c(self));
    if (c != 0) {
        delete c;
    }
    lbl_8050EA10[(u16)obj_getField1c(self)] = self;
    return TObjPlayer__sub_80154B60(self) == (u16)0xFFFF ? 1 : 0;
}

void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i) {
    if (i == 0xFFFF) {
        return 0;
    }
    if (i < 0 || i >= 12) {
        return 0;
    }
    return lbl_8050EA10[i];
}

}
