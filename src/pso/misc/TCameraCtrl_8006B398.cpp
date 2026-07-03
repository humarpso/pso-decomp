#include "types.h"

extern "C" {

int TCameraCtrl__sub_8006B398(void* p);
int TCameraCtrl__sub_8006B3B8(void* p);
int TCameraCtrl__sub_8006CCEC(void*);
int TCameraCtrl__sub_8006CD78(void*);

int TCameraCtrl__sub_8006B398(void* p) { return TCameraCtrl__sub_8006CCEC(p); }
int TCameraCtrl__sub_8006B3B8(void* p) { return TCameraCtrl__sub_8006CD78(p); }

}
