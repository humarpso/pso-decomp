#include "types.h"

extern "C" {

int TWindowSubStatusDisp__sub_80077760(void*);
int fn_8007A8F8(void);
int fn_8007B6D8(void);
int fn_802421C4(void);
int TWindowSubComCard__sub_80265BF8(void*);
void fn_80272180(void);
int fn_8026CBB8(int);
int fn_802754EC(void);

int fn_80272034(void) { return 0; }
void fn_8027208C(void* p, void* a1) { TWindowSubStatusDisp__sub_80077760((char*)a1 + 0xa6); }
int fn_802720B0(void) { return 0; }
int fn_802720FC(void) { return 0; }
int fn_80272134(void) { return 0; }
void fn_80272180(void) { fn_8026CBB8(133); fn_802754EC(); }
void TWindowSubComCard__sub_802721A8(void* p) { TWindowSubComCard__sub_80265BF8(*(void**)((char*)p + 0x84)); fn_8007A8F8(); fn_8007B6D8(); fn_802421C4(); }
int fn_802721D8(void) { return 0; }
int fn_80272240(void) { return 0; }

}
