#include "types.h"

extern "C" {

int fn_803280C8(void* p);
void fn_803280E8(void);
int GXSetNumIndStages(int);
int GXSetTevDirect(int);
int fn_802A8260(void*);
int fn_803DC83C(int);

int fn_80328048(void) { return 0; }
int fn_80328090(void) { return 0; }
int fn_803280C8(void* p) { return fn_802A8260(p); }
void fn_803280E8(void) { GXSetTevDirect(1); GXSetNumIndStages(0); fn_803DC83C(0); }
int fn_8032811C(void) { return 0; }

}
