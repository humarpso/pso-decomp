#include "types.h"

extern "C" {

void TLobby__sub_8028EA28(void);
int TAdSinglePlyChrSelectGC__sub_8029A914(void);
int TAdSinglePlyChrSelectGC__sub_8029BC4C(void);
int TCameraCtrl__sub_80069318(void);
int TKeyBoardControl__sub_80131F5C(void);
int TLobby__sub_8001FE7C(void*, void*);
int TLobby__sub_800FC3CC(void);
int TLobby__sub_8022743C(void);
int TLobby__sub_80227F7C(void);
int TWindowCtrlMain__sub_8024D690(void);
int TLobby__sub_80132F44(void);
int fn_80291138(void);
int fn_80291268(void);
int reset__11TCameraCtrlFv(void);

    extern int lbl_805D6528;
void TLobby__sub_8028EA28(void) { fn_80291138(); TLobby__sub_8022743C(); TLobby__sub_8001FE7C((void*)(lbl_805D6528), (void*)1); lbl_805D6528 = 0; TAdSinglePlyChrSelectGC__sub_8029A914(); TAdSinglePlyChrSelectGC__sub_8029BC4C(); fn_80291268(); reset__11TCameraCtrlFv(); TCameraCtrl__sub_80069318(); TWindowCtrlMain__sub_8024D690(); TKeyBoardControl__sub_80131F5C(); TLobby__sub_800FC3CC(); TLobby__sub_80132F44(); TLobby__sub_80227F7C(); }

}
