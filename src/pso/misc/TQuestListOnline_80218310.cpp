#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TQuestListOnline__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__13GameListEntryFv(void *);
void __ct__15TShopWindowBaseFv(void *);
void set_field_20__12TQuestListVMFPvi(void *, int);

extern M2C_UNK __vt__16TQuestListOnline[];
extern void *TQuestListOnline__class_name;
void memset(void *, int, int);
extern void * TQuestListOnline__data_805D61E0;
struct VOff_80218310_arg0 { char pad_0[0x4C]; char f_4C[1]; };

void *TQuestListOnline__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    struct VOff_80218310_arg0 *self = (struct VOff_80218310_arg0 *)arg0;
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TQuestListOnline;
    __ct__13GameListEntryFv(self->f_4C);
    M2C_FIELD(arg0, void **, 0x0) = TQuestListOnline__class_name;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    M2C_FIELD(arg0, void **, 0x6C) = arg2;
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x68) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    memset(self->f_4C, 0, 28);
    set_field_20__12TQuestListVMFPvi(arg0, 0);
    TQuestListOnline__data_805D61E0 = arg0;
    return arg0;
}

}
