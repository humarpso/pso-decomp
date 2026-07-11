#include "types.h"

extern "C" {

int TCameraCtrl__sub_80068958(void*);
int fn_801F494C(void);
int is_not_split_screen__13TRaderMapCoreFv(void*);
void fn_801F487C(void* p);

void fn_801F487C(void* p) { if (is_not_split_screen__13TRaderMapCoreFv(p) == 1) { TCameraCtrl__sub_80068958((void*)0); fn_801F494C(); } }

}
