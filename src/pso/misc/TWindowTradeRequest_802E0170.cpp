#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802E0224___vt__19TWindowTradeRequest {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK __dt__7TObjectFv(void *, int);
M2C_UNK init_parts__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK fn_8024AADC(void *, int);
M2C_UNK TLobby__sub_8024AC20(void *);
M2C_UNK TWindowReturnCity__sub_8024ACA8(void *);
M2C_UNK close__17TWindowSubComCardFPv(void *);
extern RecoveredGlobal_802E0224___vt__19TWindowTradeRequest __vt__19TWindowTradeRequest;
extern s32 lbl_805D53A0;
u8 *__dt__19TWindowTradeRequestFv(u8 *arg0, s16 arg1);
}

extern "C" {

void render__19TWindowTradeRequestFv(void);
int run_task__19TWindowTradeRequestFv(void);

void render__19TWindowTradeRequestFv(void) {  }

int run_task__19TWindowTradeRequestFv(void) { return 0; }
typedef char RecoveredGlobal_802E0224___vt__19TWindowTradeRequest_size[sizeof(RecoveredGlobal_802E0224___vt__19TWindowTradeRequest) == 0x18 ? 1 : -1];
u8 *__dt__19TWindowTradeRequestFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__19TWindowTradeRequest.value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        TWindowReturnCity__sub_8024ACA8((void *) (lbl_805D53A0));
        TLobby__sub_8024AC20((void *) (lbl_805D53A0));
        if (TPlayerBattleCtrl4P__sub_801BA74C((void *) (lbl_805D53A0)) != 0U) {
            init_parts__10TObjPlayerFPv();
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 2U) {
            fn_8024AADC((void *) (lbl_805D53A0), (int) (0x1D));
        }
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
