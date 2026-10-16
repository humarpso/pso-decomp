#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowSubQuestBoardSelect.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_8027D230_lbl_805129F8 {
    s32 value;
    u8 remaining[0xD4];
};

extern "C" {
void measure_message_text_width(void *, f32);
void set_text_entry_string(void *, u32, s32);
extern RecoveredGlobal_8027D230_lbl_805129F8 quest_board_handlers;
extern const f32 lbl_805DD690;
extern const f32 lbl_805DD694;
}

extern "C" {

typedef char RecoveredGlobal_8027D230_lbl_805129F8_size[sizeof(RecoveredGlobal_8027D230_lbl_805129F8) == 0xD8 ? 1 : -1];
void TWindowSubQuestBoardSelect::sub_8027D230() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r31 = (u8 *)&quest_board_handlers.value + ((s8) this->m_61 * 0x24);
    temp_r3 = (u8 *)(((TUnk_804CE018 *)arg0)->get_array_entry(1));
    set_text_entry_string(temp_r3, (u32) temp_r31, 0);
    measure_message_text_width(temp_r3, lbl_805DD690);
    *(f32 *)((s8 *)temp_r3 + 8) = (f32) (lbl_805DD694 - *(f32 *)((s8 *)temp_r3 + 0x10));
}

}
