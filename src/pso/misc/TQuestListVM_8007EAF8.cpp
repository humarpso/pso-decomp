#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8007EB20(s32 arg0, ...);
void TLobby__sub_8007EB70(void);
s32 TQuestVmDownLoadServer__sub_8007EB14(void);
void __dl__FPv(void);
void debug_print__FPCc(void);
int get_instance__12TQuestListVMFv(void);
s32 get_quest_id__12TQuestListVMFPv(u8 *arg0);
void reset__12TQuestListVMFv(void);
M2C_UNK xfree__FPv();

s32 get_quest_id__12TQuestListVMFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2B0);
}

    extern int TQuestListVM__decrypted_quest_buffer;
int get_instance__12TQuestListVMFv(void) {  return TQuestListVM__decrypted_quest_buffer; }

    extern int TQuestListVM__decrypted_quest_buffer;
void reset__12TQuestListVMFv(void) { TQuestListVM__decrypted_quest_buffer = 0; }

extern s32 TQuestVmDownLoadServer__instance;

s32 TQuestVmDownLoadServer__sub_8007EB14(void) {
    return TQuestVmDownLoadServer__instance;
}

void debug_print__FPCc(void) {

}

void TLobby__sub_8007EB20(s32 arg0, ...) {}
void TLobby__sub_8007EB70(void) {  }

void __dl__FPv(void) {
    xfree__FPv();
}

}
