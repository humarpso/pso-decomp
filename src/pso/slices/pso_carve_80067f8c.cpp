#include "types.h"

extern "C" {

int TCameraCtrl__sub_80067D20(void*);
int TCameraCtrl__sub_80067EE0(void*);
void TCameraCtrl__sub_80067F8C(void* p);

void TCameraCtrl__sub_80067F8C(void* p) { TCameraCtrl__sub_80067EE0(p); TCameraCtrl__sub_80067D20(p); }

}
