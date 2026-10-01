#include "pso/TItemDisconnectCtrl.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK disconnect_protocol__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
extern s32 lbl_805D5450;
}

extern "C" {

void *TItemDisconnectCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
void disallow_rendering__7TObjectFv(void *);

extern void *tl_05;
extern M2C_UNK __vt__19TItemDisconnectCtrl[];
extern void *lbl_805D2B70;

void run_task__19TItemDisconnectCtrlFv(s32 arg0) {
    if ((get_global_state__14TOKeyMachine01Fv() != 0xF) && ((s32) lbl_805D5450 != 0)) {
        disconnect_protocol__6TLobbyFv();
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

TItemDisconnectCtrl::~TItemDisconnectCtrl() {}
void *TItemDisconnectCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TItemDisconnectCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2B70;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
