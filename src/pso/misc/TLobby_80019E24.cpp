#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80019E60_lbl_804340D8 { char value[0x13]; };
typedef char RecoveredGlobal_80019E60_lbl_804340D8_size[sizeof(RecoveredGlobal_80019E60_lbl_804340D8) == 0x13 ? 1 : -1];

extern "C" {
s32 get_type__8TItemMagFPv(void *);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * load_buffer__9TItemLoadFPvUii(void *, u32, s32);
extern RecoveredGlobal_80019E60_lbl_804340D8 lbl_804340D8;
extern s32 lbl_805D49D8;
extern u32 lbl_805D49DC;
void TLobby__sub_80019E60(void);
}

extern "C" {

void free_item_loader__6TLobbyFv(void);
void __dt__9TItemLoadFPvs(void*, int);

extern s32 lbl_805D49D8;
extern u32 lbl_805D49DC;

void free_item_loader__6TLobbyFv(void) {
    if ((u32) lbl_805D49DC != 0U) {
        __dt__9TItemLoadFPvs((void*)lbl_805D49DC, 1);
        lbl_805D49DC = 0U;
        lbl_805D49D8 = 0;
    }
}
void TLobby__sub_80019E60(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)8);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_buffer__9TItemLoadFPvUii((void *) temp_r3, (u32) &lbl_804340D8.value, 0x4800));
    }
    (*(u8 * *)&lbl_805D49DC) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 != 0U) {
        lbl_805D49D8 = get_type__8TItemMagFPv((void *) var_r0);
    }
}

}
