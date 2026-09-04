#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *item_equip_variant_deleting_dtor_80327298(void *arg0, s16 arg1);
void *TObjPlayer__sub_803272F0(void *arg0);
void submit_com_command__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80327298(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK submit_computer_command__10TObjPlayerFPv(s32, M2C_UNK, M2C_UNK, M2C_UNK);

void submit_com_command__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xF4);
    if (temp_r3 != NULL) {
        submit_computer_command__10TObjPlayerFPv(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x2C), s32 *, 0x30), 0x10, 0, 0);
    }
}

extern M2C_UNK lbl_804ED488[];

void *item_equip_variant_deleting_dtor_80327298(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED488;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804ED488[];

void *TObjPlayer__sub_803272F0(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED488;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    return arg0;
}

}
