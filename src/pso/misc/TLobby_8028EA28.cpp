#include "types.h"

extern "C" {

void free_all_resources__6TLobbyFv(void);
int free_global__23TAdSinglePlyChrSelectGCFv(void);
int free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv(void);
int TCameraCtrl__sub_80069318(void);
int TKeyBoardControl__sub_80131F5C(void);
int TLobby__sub_8001FE7C(void*, void*);
int TLobby__sub_800FC3CC(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);
int TWindowCtrlMain__sub_8024D690(void);
int free_keyboard_soft_resources__6TLobbyFv(void);
int fn_80291138(void);
int fn_80291268(void);
int reset__11TCameraCtrlFv(void);

    extern int lbl_805D6528;
void free_all_resources__6TLobbyFv(void) { fn_80291138(); TLobby__sub_8022743C(); TLobby__sub_8001FE7C((void*)(lbl_805D6528), (void*)1); lbl_805D6528 = 0; free_global__23TAdSinglePlyChrSelectGCFv(); free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv(); fn_80291268(); reset__11TCameraCtrlFv(); TCameraCtrl__sub_80069318(); TWindowCtrlMain__sub_8024D690(); TKeyBoardControl__sub_80131F5C(); TLobby__sub_800FC3CC(); free_keyboard_soft_resources__6TLobbyFv(); refresh_render_state__6TLobbyFv(); }

}
