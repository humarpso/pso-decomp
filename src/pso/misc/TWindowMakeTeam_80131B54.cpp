#include "types.h"
#include "pso/misc/TWindowMakeTeam.h"

extern "C" {

s32 export_keyboard_text(s32, s32);
s32 measure_text_overflow__19TWindowKeyBoardSoftFv(s32);
s32 mem_alloc();
int get_field_6c__19TWindowKeyBoardSoftFv(void*);
int is_active__16TKeyBoardControlFPv(void*);
int is_key_active__16TKeyBoardControlFPv(void*);
int is_keyboard_active__17TWindowSubComCardFv(void* p);
s32 save_position__17TWindowSubComCardFPv(void *, int, int, f32);
int update_keyboard__17TWindowSubComCardFv(void* p);

extern const f32 lbl_805DB078;
extern const f32 lbl_805DB07C;

void TWindowMakeTeam::set_sub_position(u8 *arg1) {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    u8 *temp_r4;
    u8 *temp_r5;

    temp_r5 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x20));
    *(f32 *)((s8 *)temp_r5 + 0x30) = (f32) (*(f32 *)((s8 *)arg1 + 0) - lbl_805DB078);
    temp_f1 = *(f32 *)((s8 *)arg1 + 4);
    temp_r4 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x20));
    *(f32 *)((s8 *)temp_r4 + 0x34) = (f32) (temp_f1 - lbl_805DB07C);
    save_position__17TWindowSubComCardFPv((void *) (*(void **)((s8 *)arg0 + 0x20)), (int) (temp_r4), (int) (temp_r5), (f32) (temp_f1));
}

int TWindowMakeTeam::get_keyboard_field_6c() { return get_field_6c__19TWindowKeyBoardSoftFv(*(void**)((char*)this + 0x20)); }

}
