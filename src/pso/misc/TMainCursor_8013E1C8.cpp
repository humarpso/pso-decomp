#include "types.h"
struct Obj_8013E240 { s32 a; u16 b; u16 c; f32 d; f32 e; };

extern "C" {

void* copy_from__11TMainCursorFPvPv(void* p, void* a1);
void update_cursor_pos__11TMainCursorFPv(void* p);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);
int TObjPlayer__sub_8013A820(void* a0 = 0);
extern const f32 TMainCursor__data_805DB0C0;
extern const f32 lbl_805DB0C4;
void reset_nearest_target_record(Obj_8013E240 *self);
void set_sub_cursor_value__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E290(void* p, s32 v);
s16 TMainCursor__sub_8013E298(void* p);
s32 TMainCursor__sub_8013E2A0(void* p);
s32 get_index__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E2B0(void* p);
void reset_slot__11TMainCursorFPv(void* p);
void set_type__11TMainCursorFPvi(void* p, s32 v);
int get_cursor_state__11TMainCursorFv(void);
int TMainCursor__sub_8013E2DC(void);
extern int main_cursor_model;
extern int lock_on_cursor_model;

void set_target_index__11TMainCursorFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }
void update_cursor_pos__11TMainCursorFPv(void* p) { copy_from__11TMainCursorFPvPv((char*)p + 0x14, (char*)p + 0xc); }

void* copy_from__11TMainCursorFPvPv(void* p, void* a1) { TObjPlayer__sub_8013A820(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

void reset_nearest_target_record(Obj_8013E240 *self) {
    self->a = 0;
    self->b = 0xffff;
    self->c = 0xffff;
    self->d = TMainCursor__data_805DB0C0;
    self->e = lbl_805DB0C4;
}

void set_sub_cursor_value__11TMainCursorFPvi(void* p, s32 a1) { TMainCursor__sub_8013E290((void*)((char*)p + 0x3c), a1); }
void TMainCursor__sub_8013E290(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s16 TMainCursor__sub_8013E298(void* p) { return *(s16*)((char*)p + 0x0); }
s32 TMainCursor__sub_8013E2A0(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_index__11TMainCursorFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void TMainCursor__sub_8013E2B0(void* p) { *(s16*)((char*)p + 0x2) = 0; *(s16*)((char*)p + 0x0) = 0; }
void reset_slot__11TMainCursorFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void set_type__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

int get_cursor_state__11TMainCursorFv(void) {  return main_cursor_model; }

int TMainCursor__sub_8013E2DC(void) {  return lock_on_cursor_model; }

}
