#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_char_select_slot__17TWindowMainMenu1PFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void set_scale_f__15TWindowSubEquipFPv(void *);
void destroy_submenu__15TWindowMainMenuFPv(void *);
void *TAdChrSelSlotGC__sub_802C7250(void *, void *, void *);

void create_char_select_slot__17TWindowMainMenu1PFPv(void *arg0) {
    void *o;
    destroy_submenu__15TWindowMainMenuFPv(arg0);
    set_scale_f__15TWindowSubEquipFPv(arg0);
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = TAdChrSelSlotGC__sub_802C7250(o, arg0, M2C_FIELD(arg0, void **, 0x54));
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
}

}
