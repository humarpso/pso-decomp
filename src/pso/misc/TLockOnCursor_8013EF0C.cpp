#include "types.h"

extern "C" {

int TObjPlayer__sub_8001BF10(void*);
int fn_8004438C(void*);
int fn_80072004(void*);
int TMainCursor__sub_8013E240(void*);
int fn_8013E780(void*);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
void reset_fields__13TLockOnCursorFPv(void* p);
void fn_8013F104(void* p, s32 v);
void fn_8013F10C(void* p, s32 v);
void fn_8013F114(void* p);
void fn_8013F124(void* p, s16 v);
void fn_8013F12C(void* p, s16 v);
void fn_8013F134(void* p, f32 v);
f32 fn_8013F14C(void* p);
s32 fn_8013F168(void* p);
void fn_8013F170(void* p, s32 v);
f32 TMainCursor__sub_8013F178(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int TMainCursor__sub_8013F188(void* p);
int fn_8002F588(void*);

void* TLockOnCursor__sub_8013EF0C(void* p) { TMainCursor__sub_8013E240(p); return p; }
void* TLockOnCursor__sub_8013EF3C(void* p) { TLockOnCursor__sub_8013EC1C(p); return p; }
void* cleanup__13TLockOnCursorFPv(void* p) { fn_80072004((char*)p + 0x8); fn_8013E780((char*)p + 0xc); fn_8013E780((char*)p + 0x14); TLockOnCursor__sub_8013EC38(p); return p; }

}
