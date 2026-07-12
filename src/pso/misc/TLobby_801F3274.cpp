#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_quest_vm_flag__6TLobbyFv(void);
void free_luker_object__6TLobbyFv(void);
M2C_UNK clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void*);
M2C_UNK TObjLuker__sub_8001A438(void*);

extern u32 lbl_805D5EE8;

void clear_quest_vm_flag__6TLobbyFv(void) {
    if ((u32) lbl_805D5EE8 != 0U) {
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv((void*)lbl_805D5EE8);
    }
}

extern u32 lbl_805D5EE8;

void free_luker_object__6TLobbyFv(void) {
    if ((u32) lbl_805D5EE8 != 0U) {
        TObjLuker__sub_8001A438((void*)lbl_805D5EE8);
    }
}

}
