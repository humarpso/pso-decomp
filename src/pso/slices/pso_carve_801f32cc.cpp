#include "types.h"

extern "C" {

void fn_801F32F0(void *arg0);
int fn_801F3360(void* p);
int fn_801F3384(void* p);
int fn_801F33A8(void* p);
int fn_801F33CC(void* p);
int fn_801F33F0(void* p);
int fn_801F3414(void* p);
int fn_801F3438(void* p);
int fn_801F345C(void* p);
int fn_801F3480(void* p);
int fn_801F34A0(void* p);
s32 fn_801F34C0(void* p);
s32 fn_801F34C8(void* p);
void fn_801F34E0(void* p, s16 v);
int fn_800822E8(void*, int);
int fn_801B3540(void*);
int fn_801B3564(void*);

int fn_801F32CC(void) { return 0; }
void fn_801F32F0(void *arg0) {
    fn_800822E8(arg0, 0x40000);
}
int fn_801F3314(void) { return 0; }
int fn_801F3338(void) { return 0; }
int fn_801F3360(void* p) { return fn_800822E8(p, 24576); }
int fn_801F3384(void* p) { return fn_800822E8(p, 1024); }
int fn_801F33A8(void* p) { return fn_800822E8(p, 512); }
int fn_801F33CC(void* p) { return fn_800822E8(p, 256); }
int fn_801F33F0(void* p) { return fn_800822E8(p, 224); }
int fn_801F3414(void* p) { return fn_800822E8(p, 16); }
int fn_801F3438(void* p) { return fn_800822E8(p, 4); }
int fn_801F345C(void* p) { return fn_800822E8(p, 2); }
int fn_801F3480(void* p) { return fn_801B3540(p); }
int fn_801F34A0(void* p) { return fn_801B3564(p); }
s32 fn_801F34C0(void* p) { return *(s32*)((char*)p + 0xd4); }
s32 fn_801F34C8(void* p) { return *(s32*)((char*)p + 0x3ac); }
int fn_801F34D0(void) { return 0; }
void fn_801F34E0(void* p, s16 v) { *(s16*)((char*)p + 0x11a) = v; }

}
