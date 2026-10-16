#include "types.h"
#include "pso/misc/TWindowMakeTeam.h"
#include "pso/misc/TWindowKeyBoardSoft.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 export_keyboard_text(s32, s32);
s32 mem_alloc();
int is_active__16TKeyBoardControlFPv(void*);
int is_key_active__16TKeyBoardControlFPv(void*);
s32 save_position__17TWindowSubComCardFPv(void *, int, int, f32);

extern const f32 lbl_805DB078;
extern const f32 lbl_805DB07C;

void TWindowMakeTeam::set_sub_position(u8 *arg1) {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    u8 *temp_r4;
    u8 *temp_r5;

    temp_r5 = (unsigned char *) (*(void * *)&this->m_20);
    *(f32 *)((s8 *)temp_r5 + 0x30) = (f32) (*(f32 *)((s8 *)arg1 + 0) - lbl_805DB078);
    temp_f1 = *(f32 *)((s8 *)arg1 + 4);
    temp_r4 = (unsigned char *) (*(void * *)&this->m_20);
    *(f32 *)((s8 *)temp_r4 + 0x34) = (f32) (temp_f1 - lbl_805DB07C);
    save_position__17TWindowSubComCardFPv((void *) (*(void * *)&this->m_20), (int) (temp_r4), (int) (temp_r5), (f32) (temp_f1));
}

int TWindowMakeTeam::get_keyboard_field_6c() { return ((TWindowKeyBoardSoft *)(*(void* *)&this->m_20))->get_field_6c(); }

}
