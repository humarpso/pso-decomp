#include "types.h"

extern "C" {

int TMainCursor__sub_8013E1FC(void* a0 = 0, void* a1 = 0);
void update_cursor_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
s16 TMainCursor__sub_8013E194(void* p);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);

void publish_nearest_target__11TMainCursorFPv(void* p) {
    TMainCursor__sub_8013E18C(p, TMainCursor__sub_8013E194(p));
    TMainCursor__sub_8013E17C(p, TMainCursor__sub_8013E184(p));
}

}
