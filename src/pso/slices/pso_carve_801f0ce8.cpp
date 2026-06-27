#include "types.h"

extern "C" {

void fn_801F0CE8(void);
void fn_801F0CEC(void);
int fn_801F0CF0(void* p);
int fn_801F0D10(void* p);
int fn_801F0D30(void);
int fn_8006A088(void*);
int TCameraCtrl__sub_8006D494(void*);
int TCameraCtrl__sub_8006D610(void*);

void fn_801F0CE8(void) {  }
void fn_801F0CEC(void) {  }
int fn_801F0CF0(void* p) { return TCameraCtrl__sub_8006D494(p); }
int fn_801F0D10(void* p) { return TCameraCtrl__sub_8006D610(p); }
int fn_801F0D30(void) { return fn_8006A088((void*)(2)); }

}
