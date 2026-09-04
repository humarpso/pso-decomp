#ifndef PSO_CLASS_PACKAGE
#include "pso/TQuestThreadBoard.h"

extern "C" void TWindow__close(void*);
extern "C" void close_windows__6TLobbyFv(void);
extern s32 lbl_805D5EF0;

void TQuestThreadBoard::run_task() {}

TQuestThreadBoard::~TQuestThreadBoard() {
    if (m_28 != nullptr) {
        TWindow__close(m_28);
        m_28 = nullptr;
    }
    if (m_2c != nullptr) {
        TWindow__close(m_2c);
        m_2c = nullptr;
    }
    close_windows__6TLobbyFv();
    lbl_805D5EF0 = 0;
}
#else
#if PSO_CLASS_PACKAGE == 0x801F5200
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_instance__17TQuestThreadBoardFi(s32 arg0);
s32 TQuestThreadBoard__ct(s32, u32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_parent__7TObjectFP7TObject(s32, s32);

extern u32 lbl_805D5EE8;
extern s32 tl_00;

s32 create_instance__17TQuestThreadBoardFi(s32 arg0) {
    s32 var_r31;

    if ((u32) lbl_805D5EE8 != 0U) {
        var_r31 = __nw__7TObjectFUl(0x194);
        if (var_r31 != 0) {
            var_r31 = TQuestThreadBoard__ct(var_r31, lbl_805D5EE8, arg0);
        }
        set_parent__7TObjectFP7TObject(var_r31, tl_00);
        return var_r31;
    }
    return 0;
}

}
#endif
#endif
