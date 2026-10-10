#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 * load_encrypted_text_archive(s32, void *);
M2C_UNK TLobby__sub_800F9A60(void *, void *, int);
void load_encrypted_archive_data(s32 arg0);
}

extern "C" {

void load_encrypted_archive_data(s32 arg0) {
    s32 sp8;
    TLobby__sub_800F9A60((void *) (arg0), (void *) (load_encrypted_text_archive(arg0, &sp8)), (int) (sp8));
}

extern M2C_UNK resource_load_task_root[];
void *__nw__7TObjectFUl(int);
void *ct_object__9TItemDropFPv(void *, void *);
void memset(void *, int, int);
void strncpy(void *, void *, int);
void apply_pointer_relocations(void *, void *);
struct VOff_800F99D0_o { char pad_0[0x28]; char f_28[1]; };

void alloc_named_object(void *arg0, void *arg1, void *arg2, void *arg3) {
    struct VOff_800F99D0_o *o;
    o = (struct VOff_800F99D0_o *)__nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = (struct VOff_800F99D0_o *)ct_object__9TItemDropFPv(o, resource_load_task_root);
    }
    memset(o->f_28, 0, 17);
    strncpy(o->f_28, arg0, 16);
    M2C_FIELD(o, void **, 0x0) = o->f_28;
    M2C_FIELD(o, void **, 0x1C) = arg1;
    M2C_FIELD(o, void **, 0x20) = arg2;
    apply_pointer_relocations(o, arg3);
}

}
