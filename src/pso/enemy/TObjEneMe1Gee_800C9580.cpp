#include <stddef.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_455f6b { char pad[0x18]; };

struct VObj_18_455f6b : VBase_18_455f6b {
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
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual void m106();
    virtual s32 m107();
    virtual void m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual void m112();
    virtual void m113();
    virtual void m114();
    virtual M2C_UNK m115(void *);
};

struct VBase_14_87d649 { char pad[0x14]; };

struct VObj_14_87d649 : VBase_14_87d649 {
    virtual void m0();
    virtual M2C_UNK m1(M2C_UNK);
    virtual M2C_UNK m2();
    virtual void m3();
    virtual s32 m4();
};

struct RecoveredFields_800C9580_arg0 {
    u8 unknown_0[0x30];
    s32 field_30;
    u8 unknown_34[0x84];
    s16 field_B8;
    u8 unknown_BA[0x306];
    u8 * field_3C0;
    s32 field_3C4;
    s32 field_3C8;
    u8 unknown_3CC[0xC0];
    u16 field_48C;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void set_field_378__9TObjEneDDFPvi(void *, s32);
u8 * TPhotonMylla__sub_80154CB4(u16);
s32 send_entity_set_flags__6TLobbyFPv(void *);
void TObjEneMe1Gee__sub_800C9580(u8 *arg0, s32 arg1);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
typedef char RecoveredFields_800C9580_arg0_30_offset[offsetof(RecoveredFields_800C9580_arg0, field_30) == 0x30 ? 1 : -1];
typedef char RecoveredFields_800C9580_arg0_B8_offset[offsetof(RecoveredFields_800C9580_arg0, field_B8) == 0xB8 ? 1 : -1];
typedef char RecoveredFields_800C9580_arg0_3C0_offset[offsetof(RecoveredFields_800C9580_arg0, field_3C0) == 0x3C0 ? 1 : -1];
typedef char RecoveredFields_800C9580_arg0_3C4_offset[offsetof(RecoveredFields_800C9580_arg0, field_3C4) == 0x3C4 ? 1 : -1];
typedef char RecoveredFields_800C9580_arg0_3C8_offset[offsetof(RecoveredFields_800C9580_arg0, field_3C8) == 0x3C8 ? 1 : -1];
typedef char RecoveredFields_800C9580_arg0_48C_offset[offsetof(RecoveredFields_800C9580_arg0, field_48C) == 0x48C ? 1 : -1];
void TObjEneMe1Gee__sub_800C9580(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    switch (arg1) {
    case 4:
        ((RecoveredFields_800C9580_arg0 *)arg0)->field_B8 = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 0xC);
        ((VObj_18_455f6b *)(arg0))->m93();
        ((RecoveredFields_800C9580_arg0 *)arg0)->field_3C8 = (s32) (((RecoveredFields_800C9580_arg0 *)arg0)->field_3C8 & 0xFFBFFFFF);
        ((RecoveredFields_800C9580_arg0 *)arg0)->field_30 = (s32) (((RecoveredFields_800C9580_arg0 *)arg0)->field_30 | 0x800);
        if ((s32) ((RecoveredFields_800C9580_arg0 *)arg0)->field_3C4 == 1) {
            ((RecoveredFields_800C9580_arg0 *)arg0)->field_3C0 = TPhotonMylla__sub_80154CB4(((RecoveredFields_800C9580_arg0 *)arg0)->field_48C);
            temp_r3 = (u8 *)(((RecoveredFields_800C9580_arg0 *)arg0)->field_3C0);
            ((VObj_18_455f6b *)(temp_r3))->m115(arg0);
        } else {
            send_entity_set_flags__6TLobbyFPv(arg0);
        }
        ((VObj_14_87d649 *)((u8 *)(arg0) + (972)))->m1(0x19);
        ((VObj_14_87d649 *)((u8 *)(arg0) + (972)))->m2();
        return;
    case 3:
        if ((((VObj_14_87d649 *)((u8 *)(arg0) + (972)))->m4() != 0) && (((VObj_18_455f6b *)(arg0))->m107() != 0)) {
            queue_destruction__7TObjectFv(arg0);
        }
    case 5:
    case 0:
        return;
    }
}
#pragma pop

}
