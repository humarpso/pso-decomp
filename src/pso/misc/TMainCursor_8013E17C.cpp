#include "types.h"

extern "C" {

void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void TMainCursor__sub_8013E1C0(void* p, s32 v);

void publish_nearest_target__11TMainCursorFPv(void* p) {
    TMainCursor__sub_8013E18C(p, ((s16 (*)(void *))TMainCursor__sub_8013E194)(p));
    TMainCursor__sub_8013E17C(p, TMainCursor__sub_8013E184(p));
}

}

#include "types.h"
#include "pso/misc/TMainCursor.h"

extern "C" {

void TMainCursor__sub_8013E17C(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
f32 TMainCursor__sub_8013E184(void* p) { return *(f32*)((char*)p + 0xc); }
void TMainCursor__sub_8013E18C(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }
u16 TMainCursor__sub_8013E194(void* p) { return *(u16*)((char*)p + 0x6); }
void TMainCursor::set_target(s32 a1) { TMainCursor__sub_8013E1C0((char*)this + 0x3c, a1); }
void TMainCursor__sub_8013E1C0(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

}
