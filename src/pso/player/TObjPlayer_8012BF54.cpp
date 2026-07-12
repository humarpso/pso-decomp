#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_positions__10TObjPlayerFPv(void* p);
void init_pair_1f8__10TObjPlayerFPv(void* p);
void apply_conveyor_move__10TObjPlayerFPv(void *arg0);
void *init_vtable_and_handlers__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
int TObjPlayer__sub_80115BC0(void*, void*, void*);
void TObjPlayer__sub_80120D50(void *);
s32 TObjPlayer__sub_80121200();

void init_positions__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80115BC0((char*)p + 0x1f8, (void*)-910, (void*)-7281); TObjPlayer__sub_80115BC0((char*)p + 0x1fc, (void*)-910, (void*)-9102); }

void init_pair_1f8__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80115BC0((char*)p + 0x1f8, (void*)1820, (void*)0); TObjPlayer__sub_80115BC0((char*)p + 0x1fc, (void*)1820, (void*)0); }

void apply_conveyor_move__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_80121200();
    switch (temp_r3) {
    case 1:
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    case 2:
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    case 3:
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    }
}

extern M2C_UNK lbl_804A5150[];
extern M2C_UNK fn_8011BDC8[];
extern M2C_UNK fn_80109CBC[];
extern M2C_UNK fn_80109A30[];

void *init_vtable_and_handlers__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5150;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = fn_8011BDC8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = fn_80109CBC;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = fn_80109A30;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    return arg0;
}

}
