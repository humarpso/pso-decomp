#include "pso/TQuestThreadBoard.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801F5630___vt__17TQuestThreadBoard {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 copy_quest_script_context(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, int);
extern RecoveredGlobal_801F5630___vt__17TQuestThreadBoard __vt__17TQuestThreadBoard;
extern s32 lbl_805D35D4;
extern s32 lbl_805D5EF0;
u8 *TQuestThreadBoard__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {
void TWindow__close(void*);
}
extern "C" {
void close_windows__6TLobbyFv(void);
}
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

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_instance__17TQuestThreadBoardFi(s32 arg0);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_parent__7TObjectFP7TObject(s32, s32);

extern u32 lbl_805D5EE8;
extern s32 tl_00;

s32 create_instance__17TQuestThreadBoardFi(s32 arg0) {
    s32 var_r31;

    if ((u32) lbl_805D5EE8 != 0U) {
        var_r31 = __nw__7TObjectFUl(0x194);
        if (var_r31 != 0) {
            var_r31 = ((s32)TQuestThreadBoard__ct((u8 *)(var_r31), (s32)(lbl_805D5EE8), (s32)(arg0)));
        }
        set_parent__7TObjectFP7TObject(var_r31, tl_00);
        return var_r31;
    }
    return 0;
}
typedef char RecoveredGlobal_801F5630___vt__17TQuestThreadBoard_size[sizeof(RecoveredGlobal_801F5630___vt__17TQuestThreadBoard) == 0x18 ? 1 : -1];
u8 *TQuestThreadBoard__ct(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *) (arg0), (int) (0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TQuestThreadBoard.value;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D35D4;
    copy_quest_script_context((void *) ((u8 *)(arg0) + 0x1C), (void *) (arg1 + 0x24));
    M2C_FIELD(arg0, s32 *, 0x3C) = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x20) + (arg2 * 4)), s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    (*(u8 * *)&lbl_805D5EF0) = arg0;
    return arg0;
}

}
