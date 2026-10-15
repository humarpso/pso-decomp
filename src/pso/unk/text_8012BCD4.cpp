#include "types.h"

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

struct RecoveredGlobal_8012BCD4_lbl_804A4F60 { s32 value; u8 remaining[0xF4]; };
typedef char RecoveredGlobal_8012BCD4_lbl_804A4F60_size[sizeof(RecoveredGlobal_8012BCD4_lbl_804A4F60) == 0xF8 ? 1 : -1];

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_psycho_wand(s32 arg0);
s32 construct_target_cursor_records__10TObjPlayerFv(s32);
u8 * TItemWeapon__ct(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, s32);
extern RecoveredGlobal_8012BCD4_lbl_804A4F60 psycho_wand_weapon_vtable;
extern const f32 lbl_805DAEC8;
u8 *psycho_wand_ct(u8 *arg0, u8 *arg1, s32 _w2);
}

extern "C" {

u8 *psycho_wand_ct(u8 *arg0, u8 *arg1, s32 _w2) {
    TItemWeapon__ct(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &psycho_wand_weapon_vtable.value;
    construct_target_cursor_records__10TObjPlayerFv((s32) (arg0 + 0x208));
    set_status_flags__10TObjPlayerFPvUi(arg0, 0x22);
    *(s32 *)((s8 *)arg0 + 0x278) = 0;
    *(f32 *)((s8 *)arg0 + 0x274) = (f32) lbl_805DAEC8;
    *(s16 *)((s8 *)arg0 + 0x1F8) = -1;
    *(f32 *)((s8 *)arg0 + 0x204) = (f32) lbl_805DAEC8;
    *(f32 *)((s8 *)arg0 + 0x200) = (f32) lbl_805DAEC8;
    *(f32 *)((s8 *)arg0 + 0x1FC) = (f32) lbl_805DAEC8;
    *(s32 *)((s8 *)arg0 + 0x264) = 0;
    *(s32 *)((s8 *)arg0 + 0x208) = 0;
    return arg0;
}

u8 *create_psycho_wand(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x27c));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(psycho_wand_ct((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"

#include "types.h"

}
