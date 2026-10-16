#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TWindowCtrlMain.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

int TKeyBoardControl__sub_80131F5C(void);
int TLobby__sub_8001FE7C(void*, void*);
int TLobby__sub_800FC3CC(void);
int fn_80291138(void);
int fn_80291268(void);
int reset__11TCameraCtrlFv(void);

    extern int creation_menu_main_obj;
void TLobby::free_all_resources() { fn_80291138(); TLobby::stop_audio_streams(); TLobby__sub_8001FE7C((void*)(creation_menu_main_obj), (void*)1); creation_menu_main_obj = 0; TAdSinglePlyChrSelectGC::free_global(); TAdSinglePlyChrSelectGC::free_singleton_805D65C0(); fn_80291268(); reset__11TCameraCtrlFv(); TCameraCtrl::reset_default_view(); TWindowCtrlMain::free_all_windows(); TKeyBoardControl__sub_80131F5C(); TLobby__sub_800FC3CC(); TLobby::free_keyboard_soft_resources(); TLobby::refresh_render_state(); }

}
