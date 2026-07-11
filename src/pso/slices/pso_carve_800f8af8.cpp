#include "types.h"

extern "C" {

void fn_800F8AF8(void);
void fn_800F8BD8(void);
int TKeyBoardControl__sub_8000F92C(void);
int fn_800F8C2C(int);
int TKeyBoardControl__sub_801A57C4(void);

void fn_800F8AF8(void) { fn_800F8C2C(0); TKeyBoardControl__sub_801A57C4(); }
int fn_800F8B20(void) { return 0; }
void fn_800F8BD8(void) { TKeyBoardControl__sub_801A57C4(); TKeyBoardControl__sub_8000F92C(); }

}
