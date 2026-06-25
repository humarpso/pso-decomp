#include "types.h"

extern "C" {

int fn_80076BBC(void*);
void fn_8030E45C(void* p);
void fn_8030E4D0(void* p);
int fn_801FDB14(void);
int fn_802004D8(void*);
void fn_8030E498(void* p);
void fn_8030E5B0(void* p);
void fn_8030E5E8(void* p);
void fn_8030E458(void);
void fn_8030E550(void);
void fn_8030E620(void);

void fn_8030E458(void) {  }
void fn_8030E45C(void* p) { if (fn_80076BBC(p) == 0) { *(int*)((char*)p + 0x1c) = 29; } }
void fn_8030E498(void* p) { fn_802004D8(p); fn_801FDB14(); *(int*)((char*)p + 0x1c) = 28; }
void fn_8030E4D0(void* p) { if (fn_80076BBC(p) == 0) { *(int*)((char*)p + 0x1c) = 0; } }
int fn_8030E50C(void) { return 0; }
void fn_8030E550(void) {  }
int fn_8030E554(void) { return 0; }
void fn_8030E5B0(void* p) { fn_802004D8(p); fn_801FDB14(); *(int*)((char*)p + 0x1c) = 26; }
void fn_8030E5E8(void* p) { fn_802004D8(p); fn_801FDB14(); *(int*)((char*)p + 0x1c) = 23; }
void fn_8030E620(void) {  }

}
