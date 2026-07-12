#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cast_shifta_deband__10TObjPlayerFPv(void *arg0);
int grow_field1f8__10TObjPlayerFPv(void* p);
int apply_recoil_backward__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8012EB7C(void* p);
void release_container_if_ready__10TObjPlayerFPv(void* p);
void *init_variant_a__10TObjPlayerFPv(void *arg0);
int TObjContainerIdo__sub_803D96A8(void*, void*);
int TObjPlayer__sub_80115BC0(void*, int, int);
s32 TObjPlayer__sub_8011E384();
int TObjPlayer__sub_8011E618(void*);
s32 TObjPlayer__sub_8011F5E0(void *);
void TObjPlayer__sub_80120D50(void *);
void TObjPlayer__sub_8012106C(void *, int);
int TObjPlayer__sub_80121200(void*);
s32 TObjPlayer__sub_80121CA8(void *);
void TObjPlayer__sub_80121CB0(void *, int);
s32 create__10TTecDebandFiii(s32, s32, s32);
s32 create__9TTecSiftaFPvPvPv(s32, s32, s32);

void cast_shifta_deband__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    if (TObjPlayer__sub_8011E384() != 0) {
        if (TObjPlayer__sub_80121CA8(arg0) == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0xF0);
            create__10TTecDebandFiii(temp_r3, temp_r3 + 0x38, 2);
        } else {
            temp_r3_2 = M2C_FIELD(arg0, s32 *, 0xF0);
            create__9TTecSiftaFPvPvPv(temp_r3_2, temp_r3_2 + 0x38, 2);
        }
        TObjPlayer__sub_8011E618(arg0);
        return;
    }
    TObjPlayer__sub_8011F5E0(arg0);
}
int grow_field1f8__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, 1820, 10922); }
int apply_recoil_backward__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, -1820, 0); }
void TObjPlayer__sub_8012EB7C(void* p) { TObjPlayer__sub_8011E618(p); TObjPlayer__sub_8011E618(p); }
void release_container_if_ready__10TObjPlayerFPv(void* p) { if (TObjPlayer__sub_80121200(p) == 1) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern M2C_UNK lbl_804A5F18[];

void *init_variant_a__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5F18;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 10922;
    TObjPlayer__sub_8012106C(arg0, 1570);
    TObjPlayer__sub_80121CB0(arg0, 2);
    return arg0;
}

}
