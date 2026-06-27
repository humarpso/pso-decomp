#include "types.h"

extern "C" {

int fn_8024D838(void);
void fn_8024D85C(void* p);
void fn_8024D87C(void* p);
void fn_8024D8A8(void* p);
void fn_8024D8D4(void* p);
void fn_8024D900(void* p);
int fn_802437C4(void*);
int TWindowCtrlMain__sub_8024D7C0(void*);
int fn_80263B34(void*);
int fn_80263B70(void*);
int fn_80269C6C(void*);

int fn_8024D838(void) { return TWindowCtrlMain__sub_8024D7C0((void*)(0)); }
void fn_8024D85C(void* p) { *(s16*)((char*)p + 0x20) = 60; }
int fn_8024D868(void) { return 0; }
void fn_8024D87C(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) fn_80269C6C(m); }
void fn_8024D8A8(void* p) { void* m = *(void**)((char*)p + 0x34); if (m) fn_802437C4(m); }
void fn_8024D8D4(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80263B34(m); }
void fn_8024D900(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80263B70(m); }
int fn_8024D92C(void) { return 0; }
int fn_8024D960(void) { return 0; }

}
