#include "types.h"

extern "C" {

s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1);
int __dl__FPv();
int TMainCursor__sub_8013DF1C(void* p);
u8 TMainCursor__sub_8013DF3C(void* p);
u8 TMainCursor__sub_8013DF44(void* p);
void TWindowActionPalette__sub_8013DF4C(void* p, u8 v);
void TWindowActionPalette__sub_8013DF54(void* p, u8 v);
s32 TMainCursor__sub_8013DFD4(void* p);
void TForceOperate__sub_8013E018(void* p, s16 v);
u16 fn_8013E03C(void* p);
int fn_801D7A78(void*);

void TWindowActionPalette__sub_8013DF4C(void* p, u8 v) { *(u8*)((char*)p + 0x1) = v; }
void TWindowActionPalette__sub_8013DF54(void* p, u8 v) { *(u8*)((char*)p + 0x0) = v; }

}
