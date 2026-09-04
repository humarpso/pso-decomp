#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801104C4_80110010 { char pad[0x18]; };
struct VObj_801104C4_80110010 : Base_801104C4_80110010 {
    virtual int m0();
    virtual int m1();
};

extern "C" {

void *TItemLoad__sub_80110010(void *arg0, s16 arg1);
void get_data_entry__9TItemLoadFiPv(s32 arg0, s32 *arg1);
void get_item_params__9TItemLoadFPvPvPv(s32 *arg0, s32 *arg1, s32 *arg2);
void get_model_ids__9TItemLoadFUcPvPv(u8 arg0, s32 *arg1, s32 *arg2);
void lookup_item_data__9TItemLoadFiPv(s32 arg0, s32 *arg1);
void update__9TItemLoadFv(void);
s32 TItemLoad__sub_801107F4(void *);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, s32);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK free_texture__9TItemLoadFPv(M2C_UNK *);
M2C_UNK set_parent__7TObjectFP7TObject(void *, u32);
M2C_UNK update_all__9TItemLoadFv();

extern M2C_UNK lbl_8049F43C[];

void *TItemLoad__sub_80110010(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK *, 0x14) = (M2C_UNK)lbl_8049F43C;
        free_texture__9TItemLoadFPv((M2C_UNK *)arg0);
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern s32 TItemLoad__data_805D5480;

void get_data_entry__9TItemLoadFiPv(s32 arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = TObjFish__sub_8001EDB0(TItemLoad__data_805D5480, 0);
    }
}

extern s32 TItemLoad__data_805D5480;

void lookup_item_data__9TItemLoadFiPv(s32 arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = TObjFish__sub_8001EDC4((s32)(TItemLoad__data_805D5480), (s32)(arg0));
    }
}

extern s32 TItemLoad__data_805D5480;

void get_item_params__9TItemLoadFPvPvPv(s32 *arg0, s32 *arg1, s32 *arg2) {
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        *arg0 = TObjFish__sub_8001EDC4((s32)(TItemLoad__data_805D5480), (s32)(1));
        *arg1 = TObjFish__sub_8001EDB0(TItemLoad__data_805D5480, 0);
        *arg2 = TObjFish__sub_8001ED9C(TItemLoad__data_805D5480, 0);
    }
}

extern s32 TItemLoad__data_805D5480;

void get_model_ids__9TItemLoadFUcPvPv(u8 arg0, s32 *arg1, s32 *arg2) {
    if ((arg1 != NULL) && (arg2 != NULL)) {
        *arg1 = TObjFish__sub_8001EDC4((s32)(TItemLoad__data_805D5480), (s32)(arg0 + 2));
        *arg2 = TObjFish__sub_8001EDB0(TItemLoad__data_805D5480, 0);
    }
}

extern void *TItemLoad__data_805D5484;
extern u32 TItemLoad__data_805D5488;

void update__9TItemLoadFv(void) {
    void *temp_r31;

    update_all__9TItemLoadFv();
    if (((void *) TItemLoad__data_805D5484 != NULL) && ((u32) TItemLoad__data_805D5488 != 0U)) {
        temp_r31 = M2C_FIELD(TItemLoad__data_805D5484, void **, 0x14);
        if (temp_r31 != NULL) {
            ((VObj_801104C4_80110010 *)temp_r31)->m1();
            if (TItemLoad__sub_801107F4(temp_r31) == 1) {
                set_parent__7TObjectFP7TObject(temp_r31, TItemLoad__data_805D5488);
            }
        }
    }
}

}
