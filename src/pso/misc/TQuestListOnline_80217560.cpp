#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int get_selected_quest_id__16TQuestListOnlineFv(void);

extern void *TQuestListOnline__data_805D6194;
extern void *TQuestListOnline__data_805D61E0;

int get_selected_quest_id__16TQuestListOnlineFv(void) {
    if (((void *) TQuestListOnline__data_805D61E0 != NULL) && ((u32) M2C_FIELD(TQuestListOnline__data_805D61E0, u32 *, 0x40) != 0U)) {
        return M2C_FIELD(TQuestListOnline__data_805D6194, u8 *, 1);
    }
    return -1;
}

}
