#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800F9B84_lbl_8050113C {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RelHdr_800F9BAC { u32 reloc_ofs; u32 count; u8 pad8[8]; u32 root; u8 pad14[0xC]; u16 relocs[1]; };

struct Obj_800F9BAC { u8 pad[0x1C]; u32 base; u8 pad20[4]; u32 root; };

extern "C" {
void delete_children__7TObjectFv(void *);
extern RecoveredGlobal_800F9B84_lbl_8050113C lbl_8050113C;
void TLobby__sub_800F9B84(void);
u32 apply_pointer_relocations(Obj_800F9BAC *self, RelHdr_800F9BAC *hdr);
}

extern "C" {

typedef char RecoveredGlobal_800F9B84_lbl_8050113C_size[sizeof(RecoveredGlobal_800F9B84_lbl_8050113C) == 0x3C ? 1 : -1];
void TLobby__sub_800F9B84(void) {
    delete_children__7TObjectFv(&lbl_8050113C.value);
}
u32 apply_pointer_relocations(Obj_800F9BAC *self, RelHdr_800F9BAC *hdr) {
    u32 i;
    u32 n = hdr->count;
    u16 *p = hdr->relocs;
    u32 *q = (u32 *)self->base;
    for (i = 0; i < n; i++) {
        q += *p++;
        *q += self->base;
    }
    self->root = hdr->root + self->base;
    return self->root;
}

}
