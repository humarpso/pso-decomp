#include "types.h"

extern "C" {

void update__11TCameraCtrlFv(void);
int TCameraCtrl__sub_80069D7C(void);
int TCameraCtrl__sub_80069DA8(void);

void update__11TCameraCtrlFv(void) { TCameraCtrl__sub_80069DA8(); TCameraCtrl__sub_80069D7C(); }

}
