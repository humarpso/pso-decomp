#include "types.h"

extern "C" {

int init_forward__10TObjPlayerFPv(void*);
int fn_8004438C(void*);
int init_gc_tag(void*);
int TMainCursor__sub_8013E240(void*);
int reset__11TMainCursorFi(void*);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
void reset_fields__13TLockOnCursorFPv(void* p);
void TMainCursor__sub_8013F104(void* p, s32 v);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F114(void* p);
void set_cursor_id__11TMainCursorFPvs(void* p, s16 v);
void set_field2__11TMainCursorFPvs(void* p, s16 v);
void set_size__11TMainCursorFPvf(void* p, f32 v);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
f32 get_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int get_rader_map__11TMainCursorFPv(void* p);
int copy_vec4__13TRaderMapCoreFPvPv(void*);

void* init_cursor__13TLockOnCursorFPv(void* p) { TMainCursor__sub_8013E240(p); return p; }
void* init_forward__13TLockOnCursorFPv(void* p) { TLockOnCursor__sub_8013EC1C(p); return p; }
void* cleanup__13TLockOnCursorFPv(void* p) { init_gc_tag((char*)p + 0x8); reset__11TMainCursorFi((char*)p + 0xc); reset__11TMainCursorFi((char*)p + 0x14); TLockOnCursor__sub_8013EC38(p); return p; }

}
