#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802302A0___vt__8TTecFoie { M2C_UNK value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_802302A0___vt__8TTecFoie_size[sizeof(RecoveredGlobal_802302A0___vt__8TTecFoie) == 0x28 ? 1 : -1];

struct RecoveredGlobal_80230308___vt__8TTecFoie { M2C_UNK value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_80230308___vt__8TTecFoie_size[sizeof(RecoveredGlobal_80230308___vt__8TTecFoie) == 0x28 ? 1 : -1];

struct Band_802301EC { void *bindings; u32 count; };

struct Foie_802301EC { u8 pad[0x1C]; u32 owner; u8 pos[0xA6]; s16 band; u16 ownerId; u8 pad2[0x66]; void **emitters; };

extern "C" {
u16 obj_getField1c(void *);
void fn_8022FB70(void *);
void TTecFoie__sub_8022FC94(void *);
void TTecFoie__sub_8022FE84(void *);
u8 * TObjPlayer__sub_8023A7B4(void *, s32, void *, void *, s16);
extern RecoveredGlobal_802302A0___vt__8TTecFoie __vt__8TTecFoie;
u8 *TTecFoie__sub_802302A0(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4);
u16 obj_getField1c(void *);
void fn_8022FB70(void *);
void TTecFoie__sub_8022FC94(void *);
void TTecFoie__sub_8022FE84(void *);
u8 * TObjPlayer__sub_8023AA4C(void *, s32, void *, s32, s16);
extern RecoveredGlobal_802302A0___vt__8TTecFoie __vt__8TTecFoie;
extern s32 lbl_805D37B0;
u8 *TTecFoie__ct(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s16 arg4);
extern Band_802301EC TTecFoie__data_8044D13C[];
u32 TPhotonMylla__sub_80154CB4(u16);
void queue_destruction__7TObjectFv(void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void fn_8023A694(u8 *arg0);
void advance_lifetime_or_destroy(void *arg0);
void TObjPlayer__sub_8023A148(void *, s32);
void run_task__8TTecFoieFv(Foie_802301EC *self);
}

extern "C" {

void run_task__8TTecFoieFv(Foie_802301EC *self) {
    u32 i;
    self->owner = TPhotonMylla__sub_80154CB4(self->ownerId);
    if (self->owner == 0) {
        queue_destruction__7TObjectFv(self);
        return;
    }
    for (i = 0; i < TTecFoie__data_8044D13C[self->band].count; i++) {
        if (self->emitters[i] != 0) {
            copy_pos__11TNowLoadingFPvPv(self->emitters[i], self->pos);
        }
    }
    fn_8023A694((u8 *)self);
    advance_lifetime_or_destroy(self);
    TObjPlayer__sub_8023A148(self, 1);
}

u8 *TTecFoie__sub_802302A0(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4) {
    u8 *temp_r3;
    TObjPlayer__sub_8023A7B4(arg0, arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TTecFoie.value;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, u16 *, 0xC8) = obj_getField1c(temp_r3);
    }
    TTecFoie__sub_8022FE84(arg0);
    TTecFoie__sub_8022FC94(arg0);
    fn_8022FB70(arg0);
    return arg0;
}
u8 *TTecFoie__ct(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s16 arg4) {
    u8 *temp_r3;
    TObjPlayer__sub_8023AA4C(arg0, arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TTecFoie.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D37B0;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, u16 *, 0xC8) = obj_getField1c(temp_r3);
    }
    TTecFoie__sub_8022FE84(arg0);
    TTecFoie__sub_8022FC94(arg0);
    fn_8022FB70(arg0);
    return arg0;
}

}
