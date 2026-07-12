#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_char_select_slot__17TWindowMainMenu1PFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void TWindowSubEquip__sub_80263B28(void *);
void fn_802640E4(void *);
void *TAdChrSelSlotGC__sub_802C7250(void *, void *, void *);

void create_char_select_slot__17TWindowMainMenu1PFPv(void *arg0) {
    void *o;
    fn_802640E4(arg0);
    TWindowSubEquip__sub_80263B28(arg0);
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = TAdChrSelSlotGC__sub_802C7250(o, arg0, M2C_FIELD(arg0, void **, 0x54));
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
}

}
