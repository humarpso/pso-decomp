#include "types.h"

extern "C" {
u8 * load_encrypted_text_archive(s32, void *);
s32 TLobby__sub_800F9A60(void *, void *, int);
void load_encrypted_archive_data(s32 arg0);
}

extern "C" {

void load_encrypted_archive_data(s32 arg0) {
    s32 sp8;
    TLobby__sub_800F9A60((void *) (arg0), (void *) (load_encrypted_text_archive(arg0, &sp8)), (int) (sp8));
}

extern s32 resource_load_task_root[];
void *__nw__7TObjectFUl(int);
void *ct_object__9TItemDropFv(void *, void *);
void memset(void *, int, int);
void strncpy(void *, void *, int);
void apply_pointer_relocations(void *, void *);
struct VOff_800F99D0_o { char pad_0[0x28]; char f_28[1]; };

void alloc_named_object(void *arg0, void *arg1, void *arg2, void *arg3) {
    struct VOff_800F99D0_o *o;
    o = (struct VOff_800F99D0_o *)__nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = (struct VOff_800F99D0_o *)ct_object__9TItemDropFv(o, resource_load_task_root);
    }
    memset(o->f_28, 0, 17);
    strncpy(o->f_28, arg0, 16);
    *(void **)((s8 *)o + 0x0) = o->f_28;
    *(void **)((s8 *)o + 0x1C) = arg1;
    *(void **)((s8 *)o + 0x20) = arg2;
    apply_pointer_relocations(o, arg3);
}

}
