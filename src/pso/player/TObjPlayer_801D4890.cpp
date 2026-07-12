#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct Base_A_801d48f8 { char pad[0x18]; };
struct V_A_801d48f8 : Base_A_801d48f8 {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual s32 m34();
    virtual void m35(s32);
};

extern "C" {

int TObjPlayer__sub_801D4890(void* a0, int a1);
int TObjPlayer__sub_801D48C4(void* a0, int a1);
s32 TObjPlayer__sub_801D48F8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
M2C_UNK TItem__sub_80102424(void *, s16, s32, M2C_UNK);
s16 TObjPlayer__sub_801A1EB0(s32);
M2C_UNK unequip_item__10TObjPlayerFiPv(s32, void *);
s32 TObjPlayer__sub_801C1A70(void *);
s32 start_inventory_update__10TObjPlayerFPvi(void *, s32);
int TObjPlayer__sub_801D51A0(void*);
int TObjPlayer__sub_801D5220(void*);
void *get_owner_if_alive__10TObjPlayerFPv();
M2C_UNK queue_destruction__7TObjectFv(s32, s16);

    extern int lbl_805D5DEC;
    extern int lbl_805D5DF4;
int TObjPlayer__sub_801D4890(void* a0, int a1) { lbl_805D5DEC = a1; lbl_805D5DF4 = 0; TObjPlayer__sub_801D51A0((void*)(*(int*)((char*)a0 + 0x1c4))); return lbl_805D5DF4; }

    extern int lbl_805D5DF4;
    extern int lbl_805D5E00;
int TObjPlayer__sub_801D48C4(void* a0, int a1) { lbl_805D5E00 = a1; lbl_805D5DF4 = 0; TObjPlayer__sub_801D5220((void*)(*(int*)((char*)a0 + 0x1c4))); return lbl_805D5DF4; }

s32 TObjPlayer__sub_801D48F8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s16 temp_r4;
    void *temp_r3_2;
    s32 temp_r3;

    if (arg4 < 0) {
        return 0;
    }
    temp_r3 = start_inventory_update__10TObjPlayerFPvi(arg0, arg2);
    if (temp_r3 == 0) {
        return 0;
    }
    temp_r3_2 = get_owner_if_alive__10TObjPlayerFPv();
    if (temp_r3_2 == NULL) {
        return 0;
    }
    if ((((V_A_801d48f8 *) temp_r3_2)->m34() - arg4) > 0) {
        ((V_A_801d48f8 *) temp_r3_2)->m35(arg4);
        return 1;
    }
    if (TObjPlayer__sub_801C1A70(temp_r3_2) != 0) {
        unequip_item__10TObjPlayerFiPv(arg1, temp_r3_2);
    }
    M2C_FIELD(temp_r3_2, s16 *, 0x28) = TObjPlayer__sub_801A1EB0(arg1);
    TItem__sub_80102424(temp_r3_2, arg5, arg3, 0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (temp_r4 - 1);
    queue_destruction__7TObjectFv(temp_r3, temp_r4);
    return 1;
}

}
