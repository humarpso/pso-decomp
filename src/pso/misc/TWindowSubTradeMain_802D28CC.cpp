#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void draw_offer__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1);
void draw_request__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1);
void TLobby__sub_802D3228(int, void *, void *);
void fn_802D1DE4(void *, void *, void *);
void fn_802D1E64(void *, void *, void *);
void fn_80330AF0(void *);

extern M2C_UNK lbl_80540BD0[];
extern void *lbl_805D6898;

void draw_offer__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1) {
    TLobby__sub_802D3228(2, arg0, arg1);
    fn_802D1DE4(lbl_80540BD0, arg0, arg1);
    if (lbl_805D6898 != NULL) {
        fn_80330AF0(lbl_805D6898);
    }
}

extern M2C_UNK lbl_80540BD0[];
extern void *lbl_805D6898;

void draw_request__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1) {
    TLobby__sub_802D3228(1, arg0, arg1);
    fn_802D1E64(lbl_80540BD0, arg0, arg1);
    if (lbl_805D6898 != NULL) {
        fn_80330AF0(lbl_805D6898);
    }
}

}
