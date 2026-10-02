#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/item/TItemData.h"
struct VBase_18_72f473 { char pad[0x18]; };

struct VObj_18_72f473 : VBase_18_72f473 {
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
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual s32 m39(TItemData*);
};

extern "C" {
s32 copy_to_item_data__5TItemFPvPv(void *, void *);
s32 TItem__sub_801005EC(u8 *arg0, u32 arg1);
}

extern "C" {

void TItem__sub_801005D8(void);
void TItem__sub_801005DC(void);
void TItem__sub_801005E0(void);
int TItem__sub_801005E4(void);
void TItem__sub_80100648(void);
void apply_switch_attack__5TItemFPvi(void *arg0, s32 arg1);
void notify_owner__5TItemFPvi(void *arg0, s32 arg1);
s32 PPCSync();
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TLobby__sub_80101AB0();
s32 TOComputerMachine01__sub_8023DDC8(s32, s32, s32, s32, s32);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
s32 set_owner_id__13TParticleCtrlFPvUs(s32, s32);
u16 TObjPlayer__sub_80100474(void* p);
s8 TObjPlayer__sub_80102C30();
s32 get_id__13TItemProArmorFPv(void *);
s32 test_flag_2000000__10TObjPlayerFPv(u32);

void notify_owner__5TItemFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flag_2000000__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0xF0)) == 0)) {
        TBoss3Volopt__sub_8022675C(arg1, M2C_FIELD(arg0, u32 *, 0xF0) + 0x38, 0, 0);
    }
}
void apply_switch_attack__5TItemFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flag_2000000__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0xF0)) == 0)) {
        temp_r3 = spawn_particle_effect_with_flags(M2C_FIELD(arg0, u32 *, 0xF0) + 0x2FC, arg1, 0x10);
        if (temp_r3 != 0) {
            set_owner_id__13TParticleCtrlFPvUs(temp_r3, get_id__13TItemProArmorFPv(arg0));
        }
    }
}
void TItem__sub_801005D8(void) {  }

void TItem__sub_801005DC(void) {  }
void TItem__sub_801005E0(void) {  }
int TItem__sub_801005E4(void) { return 0; }

s32 TItem__sub_801005EC(u8 *arg0, u32 arg1) {
    TItemData item_data;
    if (arg1 != 0U) {
        copy_to_item_data__5TItemFPvPv((void *) (arg1), (void *) (&item_data.data1.data_u8[0]));
        return ((VObj_18_72f473 *)(arg0))->m39(&item_data);
    }
    return 0;
}

void TItem__sub_80100648(void) {  }

}
