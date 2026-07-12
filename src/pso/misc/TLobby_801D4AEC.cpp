#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801D4AEC { char pad[0x18]; };
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct VObj_801D4AEC : Base_801D4AEC {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m27(s16);
VA
VA
VA
VA
VA
VA
    virtual s32 m34();
    virtual void m35(s32);
};

extern "C" {

void reduce_item_amount__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK unequip_item__10TObjPlayerFiPv(s32, void *);
s32 TObjPlayer__sub_801C1A70(void *);
void *get_owner_if_alive__10TObjPlayerFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(s32);

void reduce_item_amount__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;
    VObj_801D4AEC *temp_r3;

    temp_r3 = (VObj_801D4AEC *)get_owner_if_alive__10TObjPlayerFPv(arg2);
    if ((temp_r3 != NULL) && (arg3 >= 0)) {
        if ((temp_r3->m34() - arg3) > 0) {
            temp_r3->m35(arg3);
            return;
        }
        if (TObjPlayer__sub_801C1A70(temp_r3) != 0) {
            unequip_item__10TObjPlayerFiPv(arg1, temp_r3);
        }
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (temp_r4 - 1);
        temp_r3->m27(temp_r4);
        queue_destruction__7TObjectFv(arg2);
    }
}

}
