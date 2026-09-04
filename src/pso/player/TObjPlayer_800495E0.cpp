#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800496D4(void);
void TObjPlayer__sub_80049A0C(void* p);
u8 check_flag__10TObjPlayerFPvi(void *arg0, s32 arg1);
void *destroy__10TObjPlayerFPvs(void *arg0, s16 arg1);
void draw_obj_model(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
void TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);

u8 check_flag__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x334) & arg1) != 0);
}

void TObjPlayer__sub_800496D4(void) {  }

extern M2C_UNK lbl_80484A94[];

void *destroy__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484A94;
        TObjEneGibbles__sub_80156720(arg0);
        if (M2C_FIELD(arg0, void **, 0xD4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD4)); }
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD8)); }
        if (M2C_FIELD(arg0, void **, 0x10) != NULL) { TObjPlayer__sub_80049A0C((void*)(M2C_FIELD(arg0, void **, 0x10))); }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_80049A0C(void* p) { *(u32*)((char*)p + 0x388) &= 0xffefffff; }

extern s32 some_id_805c6f74;

void draw_obj_model(u8 *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xB0));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    some_id_805c6f74 &= 0xFFFFFBFF;
    TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0xAC));
    TObjPlayer__sub_803D9B78();
}

}
