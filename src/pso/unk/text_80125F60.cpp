#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80125FD8_lbl_804A2868 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

struct Obj_80125FB8 { u8 pad[0x1f8]; s32 a; };

struct Out_80125FB8 { u8 pad0[0x10]; s32 f10; u8 pad1[0x74 - 0x14]; void *f74; s32 f78; };

extern "C" {
u8 * TObjPlayer__sub_80125F24(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80125F60(u8 *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80126054(u8 *arg0);
u8 get_slot_count__14TItemProShieldFPv(void *);
u8 * TItemWeapon__ct(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, s32);
extern RecoveredGlobal_80125FD8_lbl_804A2868 lbl_804A2868;
extern const f32 lbl_805DAD68;
u8 *TObjPlayer__sub_80125FD8(u8 *arg0, u8 *arg1, s32 _w2);
void fn_80108F8C();
void TObjPlayer__sub_80125FB8(Obj_80125FB8 *self, Out_80125FB8 *o);
}

extern "C" {

u8 *TObjPlayer__sub_80125F60(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_80125F24(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

typedef char RecoveredGlobal_80125FD8_lbl_804A2868_size[sizeof(RecoveredGlobal_80125FD8_lbl_804A2868) == 0xF8 ? 1 : -1];

void TObjPlayer__sub_80125FB8(Obj_80125FB8 *self, Out_80125FB8 *o) {
    o->f78 = 0x1bb;
    o->f74 = (void *)fn_80108F8C;
    o->f10 = self->a;
}

u8 *TObjPlayer__sub_80125FD8(u8 *arg0, u8 *arg1, s32 _w2) {
    TItemWeapon__ct(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A2868.value;
    set_status_flags__10TObjPlayerFPvUi(arg0, 0x8000);
    M2C_FIELD(arg0, f32 *, 0x1E4) = (f32) lbl_805DAD68;
    if (get_slot_count__14TItemProShieldFPv(arg0) == 1) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 0xA;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 1;
    }
    return arg0;
}

u8 *TObjPlayer__sub_80126054(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_80125FD8((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
