#include "types.h"

extern "C" {

int fn_802657E4(void*);
int TWindowSubComCard__sub_802A57FC(void* a0 = 0);
void TWindowMessageYesNo__vt1(void* p);
int fn_802A58AC(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void fn_802A596C(void* p, void* a1, void* a2);
void fn_802A56C4(void* p);
void fn_802A56F0(void* p);
void fn_802A571C(void* p);
int TWindowSubComCard__sub_802A5748(void* p);
void fn_802A5768(void* p);
int fn_800740FC(void*);
int fn_80186AE4(void*);
int fn_80265C10(void*);
int fn_80287560(void*);
int queue_destruction__7TObjectFv(void*);

int fn_802A55E0(void) { return 0; }
int fn_802A5628(void) { return 0; }
void fn_802A56C4(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) fn_800740FC(m); }
void fn_802A56F0(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) fn_80287560(m); }
void fn_802A571C(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) fn_80186AE4(m); }
int TWindowSubComCard__sub_802A5748(void* p) { return queue_destruction__7TObjectFv(p); }
void fn_802A5768(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) fn_80265C10(m); }
int TWindowSubComCard__sub_802A5794(void) { return 0; }
int TWindowSubComCard__sub_802A57C8(void) { return 0; }
int TWindowSubComCard__sub_802A57FC(void*) { return 0; }
int fn_802A5830(void) { return 0; }
int fn_802A58AC(void*, void*, void*, void*) { return 0; }
void fn_802A596C(void* p, void* a1, void* a2) { fn_802A58AC(p, (void*)0, a1, a2); }
int TWindowMessageYesNo__vt2(void) { return 0; }
void TWindowMessageYesNo__vt1(void* p) { if (TWindowSubComCard__sub_802A57FC(p) != 0) { fn_802657E4(*(void**)((char*)p + 0x28)); } }
int fn_802A59D8(void) { return 0; }

}
