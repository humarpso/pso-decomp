#include "types.h"

extern "C" {

void TLogo__sub_8001C360(void);
void TLogo__sub_8001C364(void);
int fn_80019A60(void);

void TLogo__sub_8001C360(void) {  }

    extern int lbl_805D4A48;
void TLogo__sub_8001C364(void) { lbl_805D4A48 = fn_80019A60(); }

}
