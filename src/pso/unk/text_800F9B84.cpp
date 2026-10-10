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
s32 apply_rel_relocations(void *);
u8 *ct_object__9TItemDropFPv(u8 *, M2C_UNK *);
s32 set_stream_and_load_file__6TLobbyFi(s32);
s32 update_lobby_scene__6TSceneFPv();
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK strncpy(void *, s32, M2C_UNK);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern RecoveredGlobal_800F9B84_lbl_8050113C resource_load_task_root;
void clear_resource_load_tasks(void);
u32 apply_pointer_relocations(Obj_800F9BAC *self, RelHdr_800F9BAC *hdr);
}

extern "C" {

s32 create_named_object(s32 arg0) {
    s32 temp_r3;
    u8 *var_r30;

    temp_r3 = update_lobby_scene__6TSceneFPv();
    if (temp_r3 > 0) {
        var_r30 = __nw__7TObjectFUl(0x3C);
        if (var_r30 != NULL) {
            var_r30 = ct_object__9TItemDropFPv(var_r30, (M2C_UNK *)&resource_load_task_root);
        }
        memset(var_r30 + 0x28, 0, 0x11);
        strncpy(var_r30 + 0x28, arg0, 0x10);
        M2C_FIELD(var_r30, void **, 0) = (void *) (var_r30 + 0x28);
        M2C_FIELD(var_r30, s32 *, 0x1C) = set_stream_and_load_file__6TLobbyFi(arg0);
        M2C_FIELD(var_r30, s32 *, 0x20) = temp_r3;
        return apply_rel_relocations(var_r30);
    }
    return 0;
}

typedef char RecoveredGlobal_800F9B84_lbl_8050113C_size[sizeof(RecoveredGlobal_800F9B84_lbl_8050113C) == 0x3C ? 1 : -1];
void clear_resource_load_tasks(void) {
    delete_children__7TObjectFv(&resource_load_task_root.value);
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
