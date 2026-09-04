#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_800C4FB4(void* p);
void *destroy_and_free__10TObjPlayerFPvs(void *arg0, s16 arg1);
void *dt_with_child_destroy__10TObjPlayerFPvs(void *arg0, s16 arg1);
void *init_target_ref__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
void update_equip_effect_if_active__10TObjPlayerFPv(u8 *arg0);
s32 TBoss8Dragon__sub_8008741C(s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
s32 is_alive__9TObjEneDDFPv(s32);
int queue_destruction__7TObjectFv(void*);

void update_equip_effect_if_active__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x100) != 0) {
        TObjEneDD__sub_800B9D94(arg0 + 0x38, arg0 + 0xD8, 0, 0);
    }
}

extern M2C_UNK lbl_804933D8[];

void *destroy_and_free__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804933D8;
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { queue_destruction__7TObjectFv((void*)(M2C_FIELD(arg0, void **, 0xFC))); M2C_FIELD(arg0, M2C_UNK *, 0xFC) = 0; }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80493438[];

void *dt_with_child_destroy__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80493438;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv((void*)(M2C_FIELD(arg0, void **, 0x24))); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80493438[];
extern s32 lbl_805D2A58;

void *init_target_ref__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80493438;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2A58;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x20)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = TBoss8Dragon__sub_8008741C(M2C_FIELD(arg0, s32 *, 0x20) + 0x38, 0xDE, 0x40);
    }
    return arg0;
}

int TObjPlayer__sub_800C4FB4(void* p) { return queue_destruction__7TObjectFv((void*)(p)); }

}
