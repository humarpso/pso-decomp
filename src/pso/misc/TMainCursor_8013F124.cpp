#include "types.h"

extern "C" {

int init_forward__10TObjPlayerFPv(void*);
int fn_8004438C(void*);
int fn_80072004(void*);
int TMainCursor__sub_8013E240(void*);
int TMainCursor__sub_8013E780(void*);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
void reset_fields__13TLockOnCursorFPv(void* p);
void fn_8013F104(void* p, s32 v);
void fn_8013F10C(void* p, s32 v);
void fn_8013F114(void* p);
void TMainCursor__sub_8013F124(void* p, s16 v);
void TMainCursor__sub_8013F12C(void* p, s16 v);
void TMainCursor__sub_8013F134(void* p, f32 v);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
f32 TMainCursor__sub_8013F178(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int get_rader_map__11TMainCursorFPv(void* p);
int TRaderMapCore__sub_8002F588(void*);

void TMainCursor__sub_8013F124(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void TMainCursor__sub_8013F12C(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void TMainCursor__sub_8013F134(void* p, f32 v) { *(f32*)((char*)p + 0x4) = v; }

}
