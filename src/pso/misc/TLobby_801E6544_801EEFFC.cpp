#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void qst_op_set_qt_cancel(u16 arg0);
int THunterGuildSeqOffline__sub_801F3728(void*);
void qst_op_set_qt_cancel(u16 arg0);
void qst_op_set_qt_success(u16 arg0);
int THunterGuildSeqOffline__sub_801F3738(void*);
void qst_op_set_qt_success(u16 arg0);
void qst_op_set_qt_failure(u16 arg0);
int THunterGuildSeqOffline__sub_801F3748(void*);
void qst_op_set_qt_failure(u16 arg0);
}

extern "C" {

int TLobby__sub_801EF24C(void* p);
int qst_op_clr_qt_cancel(void);
int qst_op_clr_qt_failure(void);
int qst_op_clr_qt_success(void);
void qst_op_p_return_guild(void);
int THunterGuildSeqOffline__sub_801F3728(void*);
int THunterGuildSeqOffline__sub_801F3738(void*);
int THunterGuildSeqOffline__sub_801F3748(void*);
int TObjCityMainWarp__sub_80186634(void*);
M2C_UNK TObjPlayer__sub_801B30BC(u32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

int qst_op_clr_qt_cancel(void) { return THunterGuildSeqOffline__sub_801F3728((void*)(-1)); }
int qst_op_clr_qt_success(void) { return THunterGuildSeqOffline__sub_801F3738((void*)(-1)); }
int qst_op_clr_qt_failure(void) { return THunterGuildSeqOffline__sub_801F3748((void*)(-1)); }

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_set_qt_cancel(u16 arg0) {
    THunterGuildSeqOffline__sub_801F3728((void *) (arg0));
}

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_set_qt_success(u16 arg0) {
    THunterGuildSeqOffline__sub_801F3738((void *) (arg0));
}

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_set_qt_failure(u16 arg0) {
    THunterGuildSeqOffline__sub_801F3748((void *) (arg0));
}

int TLobby__sub_801EF24C(void* p) { return TObjCityMainWarp__sub_80186634(p); }

extern s32 lbl_805D53A0;

void qst_op_p_return_guild(void) {
    u32 player = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (player != 0U) {
        TObjPlayer__sub_801B30BC(player, 0);
    }
}

}
