#include "types.h"
#include "pso/misc/TWindowSubQuestBoardSelect.h"

extern "C" {

s32 get_register__12TQuestThreadFPvi(s32, s32);
extern s32 quest_mission_manager;

s32 get_slot_flag__26TWindowSubQuestBoardSelectFic(s32 arg0, s8 arg1) {
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 > 6) {
        return 0;
    }
    return get_register__12TQuestThreadFPvi(quest_mission_manager, arg1 + 0x4A);
}

}

#include "types.h"

extern "C" {

u16 *get_array_entry__13TUnk_804CE018Fi(void *, s32);

void TWindowSubQuestBoardSelect::update_slot_display_flags() {
    s32 var_r30;
    s32 var_r29;
    u16 *temp_r31;
    u16 *temp_r3;

    var_r29 = 1;
    var_r30 = 0;
    do {
        temp_r31 = get_array_entry__13TUnk_804CE018Fi(this, var_r30 + 2);
        if (((s32 (*)(void *, s8))get_slot_flag__26TWindowSubQuestBoardSelectFic)(this, (s8) var_r30) == 0) {
            *temp_r31 |= 2;
        } else {
            var_r29 = 0;
            *temp_r31 &= 0xFFFFFFFD;
        }
        var_r30 += 1;
    } while (var_r30 < 6);
    temp_r3 = get_array_entry__13TUnk_804CE018Fi(this, 1);
    if (var_r29 != 0) {
        *(s8 *)&this->m_61 = -1;
        *temp_r3 |= 2;
        this->m_60 = (u8) (this->m_60 | 4);
        return;
    }
    *temp_r3 &= 0xFFFFFFFD;
    this->m_60 = (u8) (this->m_60 & 0xFFFFFFFB);
}

}

#include "types.h"
#include "pso/misc/TWindowSubQuestBoardSelect.h"

extern "C" {

s32 is_shortcut_active__26TWindowSubQuestBoardSelectFv();

void TWindowSubQuestBoardSelect::select_next() {
    u8 temp_r3;

    if ((is_shortcut_active__26TWindowSubQuestBoardSelectFv() == 0) && (((s32 (*)(void *, u8))get_slot_flag__26TWindowSubQuestBoardSelectFic)(this, this->m_61) == 0)) {
        do {
            this->m_61 = (u8) (this->m_61 + 1);
            temp_r3 = this->m_61;
            if ((s8) temp_r3 > 6) {
                this->m_61 = (u8) (temp_r3 - 6);
            }
        } while (((s32 (*)(void *, u8))get_slot_flag__26TWindowSubQuestBoardSelectFic)(this, this->m_61) == 0);
        sub_8027D230();
    }
}

}
