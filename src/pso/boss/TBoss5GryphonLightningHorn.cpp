#include "pso/TBoss5GryphonLightningHorn.h"

TBoss5GryphonLightningHorn::~TBoss5GryphonLightningHorn() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TBoss5GryphonLightning__ct(f32);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int, f32, f32);
extern M2C_UNK __vt__26TBoss5GryphonLightningHorn[];
extern s32 lbl_805D41A0;
extern const f32 lbl_805DF630;
extern const f32 lbl_805DF634;
extern const f32 lbl_805DF644;
extern const f32 lbl_805DF650;
u8 *__ct__26TBoss5GryphonLightningHornFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *item_equip_variant_deleting_dtor_80326520(void *arg0, s16 arg1);
void render__26TBoss5GryphonLightningHornFv(void);
void run_task__26TBoss5GryphonLightningHornFv(void* p);
int fn_80324E10(void*);
int fn_80325F7C(void*);
int fn_80326074(void*);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80326520(void *arg0, s16 arg1);

void render__26TBoss5GryphonLightningHornFv(void) {  }
void run_task__26TBoss5GryphonLightningHornFv(void* p) { fn_80326074(p); fn_80325F7C(p); fn_80324E10(p); }
u8 *__ct__26TBoss5GryphonLightningHornFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp_f1;
    TBoss5GryphonLightning__ct((f32) (lbl_805DF644));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__26TBoss5GryphonLightningHorn;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D41A0;
    M2C_FIELD(arg0, s32 *, 0xA4) = arg3;
    temp_f1 = lbl_805DF650 * TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0xA4)));
    M2C_FIELD(arg0, f32 *, 0x98) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DF630;
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) (lbl_805DF650 * TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0xA4)), (f32) (temp_f1), (f32) (lbl_805DF650)));
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805DF634;
    M2C_FIELD(arg0, s32 *, 0x90) = 4;
    return arg0;
}

extern M2C_UNK lbl_804ECDC0[];

void *item_equip_variant_deleting_dtor_80326520(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ECDC0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
