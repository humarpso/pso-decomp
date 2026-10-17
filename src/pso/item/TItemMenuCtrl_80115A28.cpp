#include "types.h"
#include "pso/item/TItemMenuCtrl_80115A28.h"
#include "pso/TItemMenuCtrl.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__13TItemMenuCtrl[];
extern void * TItemMenuCtrl__instance;
extern void *lbl_805D2C18;

void *TItemMenuCtrl__ct(void *item_menu_ctrl) {
    __ct__7TObjectFP7TObject(item_menu_ctrl);
    *(s32 **)((s8 *)item_menu_ctrl + 0x18) = __vt__13TItemMenuCtrl;
    ((TObjPlayer *)((char *)item_menu_ctrl + 28))->init_forward();
    TItemMenuCtrl__instance = item_menu_ctrl;
    *(void * *)&((TItemMenuCtrl *)item_menu_ctrl)->m_name = lbl_805D2C18;
    return item_menu_ctrl;
}

}
