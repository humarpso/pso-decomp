#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s16 m14();
};

struct RecoveredGlobal_801258A0_lbl_804A2564 {
    M2C_UNK value;
    u8 remaining[0xF8];
};

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_panzer_faust(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv(void *);
u8 * TItemWeapon__ct(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, s32);
extern RecoveredGlobal_801258A0_lbl_804A2564 lbl_804A2564;
extern const f32 lbl_805DAD50;
extern const f32 lbl_805DAD58;
extern const f32 lbl_805DAD60;
u8 *construct_panzer_faust(u8 *arg0, u8 *arg1, s32 _w2);
}

extern "C" {

typedef char RecoveredGlobal_801258A0_lbl_804A2564_size[sizeof(RecoveredGlobal_801258A0_lbl_804A2564) == 0xFC ? 1 : -1];
u8 *construct_panzer_faust(u8 *arg0, u8 *arg1, s32 _w2) {
    TItemWeapon__ct(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A2564.value;
    M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DAD58;
    M2C_FIELD(arg0, f32 *, 0x1FC) = (f32) lbl_805DAD58;
    M2C_FIELD(arg0, f32 *, 0x1F8) = (f32) lbl_805DAD58;
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    M2C_FIELD(arg0, f32 *, 0x1E4) = (f32) lbl_805DAD50;
    set_status_flags__10TObjPlayerFPvUi(arg0, 0x8000);
    if (get_slot_count__14TItemProShieldFPv(arg0) == 1) {
        M2C_FIELD(arg0, f32 *, 0x238) = (f32) lbl_805DAD50;
        M2C_FIELD(arg0, s32 *, 0x23C) = 0x80;
    } else {
        M2C_FIELD(arg0, f32 *, 0x238) = (f32) lbl_805DAD60;
        M2C_FIELD(arg0, s32 *, 0x23C) = 0;
    }
    return arg0;
}

u8 *create_panzer_faust(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x240));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_panzer_faust((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

}
