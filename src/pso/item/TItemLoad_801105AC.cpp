#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801105AC { char pad[0x18]; };
struct VObj_801105AC : Base_801105AC {
    virtual void m0(s32);
};

extern "C" {

void free_all__9TItemLoadFv(void);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
M2C_UNK TItemLoad__sub_8010F52C();
M2C_UNK TItemLoad__sub_8010FDC4();

extern s32 TItemLoad__data_805D5480;
extern void *TItemLoad__data_805D5484;
extern void *TItemLoad__data_805D5488;
extern s32 TItemLoad__data_805D548C;
extern s32 lbl_805D5490;

void free_all__9TItemLoadFv(void) {
    free__11TOBoss4RockFUi(TItemLoad__data_805D548C);
    if ((void *) TItemLoad__data_805D5484 != NULL) {
        ((VObj_801105AC *)TItemLoad__data_805D5484)->m0(1);
    }
    if ((void *) TItemLoad__data_805D5488 != NULL) {
        ((VObj_801105AC *)TItemLoad__data_805D5488)->m0(1);
    }
    TLobby__sub_8001FE7C(TItemLoad__data_805D5480, 1);
    lbl_805D5490 = 0;
    TItemLoad__data_805D5480 = 0;
    TItemLoad__data_805D5484 = NULL;
    TItemLoad__data_805D5488 = NULL;
    TItemLoad__data_805D548C = 0;
    TItemLoad__sub_8010F52C();
    TItemLoad__sub_8010FDC4();
}

}
