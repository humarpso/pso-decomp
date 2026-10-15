#include "types.h"

extern "C" {

void *TQuestListOnline__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__13GameListEntryFv(void *);
void __ct__15TShopWindowBaseFv(void *);
void set_field_20__12TQuestListVMFPvi(void *, int);

extern s32 __vt__16TQuestListOnline[];
extern void *TQuestListOnline__class_name;
void memset(void *, int, int);
extern void * TQuestListOnline__instance;
struct VOff_80218310_arg0 { char pad_0[0x4C]; char f_4C[1]; };

void *TQuestListOnline__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    struct VOff_80218310_arg0 *self = (struct VOff_80218310_arg0 *)arg0;
    __ct__15TShopWindowBaseFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TQuestListOnline;
    __ct__13GameListEntryFv(self->f_4C);
    *(void **)((s8 *)arg0 + 0x0) = TQuestListOnline__class_name;
    *(u32 *)((s8 *)arg0 + 0x38) = 0;
    *(u32 *)((s8 *)arg0 + 0x3C) = 0;
    *(u32 *)((s8 *)arg0 + 0x40) = 0;
    *(u32 *)((s8 *)arg0 + 0x44) = 0;
    *(void **)((s8 *)arg0 + 0x6C) = arg2;
    *(u32 *)((s8 *)arg0 + 0x48) = 0;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    *(u32 *)((s8 *)arg0 + 0x68) = 0;
    *(void **)((s8 *)arg0 + 0x24) = arg3;
    memset(self->f_4C, 0, 28);
    set_field_20__12TQuestListVMFPvi(arg0, 0);
    TQuestListOnline__instance = arg0;
    return arg0;
}

}
