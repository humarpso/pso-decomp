#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_0b84db { char pad[0x18]; };
struct VObj_18_0b84db : VBase_18_0b84db {
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
    virtual M2C_UNK m87();
    virtual void m88();
    virtual void m89();
    virtual M2C_UNK m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
};

extern "C" {

struct Vec_800C82A4 { f32 x, y, z; };
struct Data_800C82A4 { f32 a; Vec_800C82A4 v; };
struct Gee_800C82A4 { u8 pad[0x494]; s32 count; void *arr[8]; };
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK set_flag3c8_bit2__13TObjEneMe1GeeFPv(void *);
M2C_UNK set_state_flag__13TObjEneMe1GeeFPvii(void *, s32, s32);
s32 TObjEneMe1Gee__sub_800CB628(void *);
M2C_UNK update__13TObjEneMe1GeeFPv(void *);
M2C_UNK TObjEneMe1Gee__sub_800CBE6C(void *, f32);
M2C_UNK advance_animation_playback(void *, s32);
extern const f32 TObjEneMe1Gee__data_805DA0A8;
extern const f32 lbl_805DA0AC;
struct Gee_800C84C8 { u8 pad[0x494]; s32 count; void *arr[8]; };
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
M2C_UNK TObjEneMe1Gee__sub_800CB4DC(void *);
M2C_UNK set_flag3c8_bit4__13TObjEneMe1GeeFPv(void *);
s32 TObjEneMe1Gee__sub_800CB5A0(void *, s32);
M2C_UNK TObjEneMe1Gee__sub_800CB764(void *, s32);
extern const Data_800C82A4 TObjEneMe1Gee__data_8043BDB0;

void TObjEneMe1Gee__sub_800C82A4(u8 *arg0, s32 arg1) {
    Gee_800C82A4 *self = (Gee_800C82A4 *) arg0;
    s32 k;
    s32 i;
    s32 j;
    s32 m;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        ((VObj_18_0b84db *)(arg0))->m94();
        M2C_FIELD(arg0, f32 *, 0x46C) = TObjEneMe1Gee__data_8043BDB0.v.x;
        M2C_FIELD(arg0, f32 *, 0x470) = TObjEneMe1Gee__data_8043BDB0.v.y;
        M2C_FIELD(arg0, f32 *, 0x474) = TObjEneMe1Gee__data_8043BDB0.v.z;
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        for (k = 2, i = 0; i < self->count; k += 2, i++) {
            set_state_flag__13TObjEneMe1GeeFPvii(self->arr[i], M2C_FIELD(arg0, s32 *, 0x390), k);
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x3C8) & 2) {
            M2C_FIELD(arg0, s32 *, 0x3C8) &= ~2;
            M2C_FIELD(arg0, s32 *, 0x4B8) = 1;
            transition_enemy_state(arg0, 5);
        }
        break;
    case 0:
        ((void (*)())advance_animation_playback)();
        update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Gee__data_805DA0A8);
        switch (M2C_FIELD(arg0, s32 *, 0x434)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x404)--;
            if (M2C_FIELD(arg0, s32 *, 0x404) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x47C) = 2;
                M2C_FIELD(arg0, s32 *, 0x434) = 1;
            }
            break;
        case 1:
            if (M2C_FIELD(arg0, s32 *, 0x47C) == 0) {
                M2C_FIELD(arg0, s32 *, 0x3C8) |= 0x8000;
                for (j = 0; j < self->count; j++) {
                    if (TObjEneMe1Gee__sub_800CB628(self->arr[j]) == 0) {
                        break;
                    }
                }
                if (j == self->count) {
                    set_flag3c8_bit2__13TObjEneMe1GeeFPv(arg0);
                    for (m = 0; m < self->count; m++) {
                        set_flag3c8_bit2__13TObjEneMe1GeeFPv(self->arr[m]);
                    }
                }
            }
            update__13TObjEneMe1GeeFPv(arg0);
            break;
        }
        TObjEneMe1Gee__sub_800CBE6C(arg0, lbl_805DA0AC + M2C_FIELD(arg0, f32 *, 0x3C));
        ((VObj_18_0b84db *)(arg0))->m87();
        break;
    case 5:
        ((VObj_18_0b84db *)(arg0))->m90();
        break;
    }
}

void TObjEneMe1Gee__sub_800C84C8(u8 *arg0) {
    Gee_800C84C8 *self = (Gee_800C84C8 *) arg0;
    s32 j;
    s32 i;

    if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x10) {
        M2C_FIELD(arg0, s32 *, 0x3C8) &= ~0x10;
        M2C_FIELD(arg0, u32 *, 0x4B8) = 7;
    }
    switch (M2C_FIELD(arg0, u32 *, 0x4B8)) {
    case 1:
        TObjEneMe1Gee__sub_800CB764(arg0, 0);
        M2C_FIELD(arg0, u32 *, 0x4B8) = 2;
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0x47C) == 0) {
            M2C_FIELD(arg0, u32 *, 0x4B8) = 3;
            M2C_FIELD(arg0, s32 *, 0x3C8) &= ~8;
            copy_vec4__13TRaderMapCoreFPvPv(arg0 + 0x468, (void *)&TObjEneMe1Gee__data_8043BDB0);
            for (i = 0; i < self->count; i++) {
                if (TObjEneMe1Gee__sub_800CB5A0(self->arr[i], 0x200) != 0) {
                    set_flag3c8_bit4__13TObjEneMe1GeeFPv(self->arr[i]);
                }
            }
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x3C8) & 8) {
            M2C_FIELD(arg0, u32 *, 0x4B8) = 4;
        }
        break;
    case 4:
        TObjEneMe1Gee__sub_800CB764(arg0, 2);
        M2C_FIELD(arg0, u32 *, 0x4B8) = 5;
        break;
    case 5:
        if (M2C_FIELD(arg0, s32 *, 0x47C) == 0) {
            copy_vec4__13TRaderMapCoreFPvPv(arg0 + 0x468, (void *)&TObjEneMe1Gee__data_8043BDB0);
            M2C_FIELD(arg0, u32 *, 0x4B8) = 6;
            for (i = 0; i < self->count; i++) {
                if (TObjEneMe1Gee__sub_800CB5A0(self->arr[i], 0x100) != 0) {
                    set_flag3c8_bit4__13TObjEneMe1GeeFPv(self->arr[i]);
                }
            }
        }
        break;
    case 7:
        TObjEneMe1Gee__sub_800CB764(arg0, 4);
        M2C_FIELD(arg0, u32 *, 0x4B8) = 8;
        break;
    case 8:
        if (M2C_FIELD(arg0, s32 *, 0x47C) == 0) {
            M2C_FIELD(arg0, u32 *, 0x4B8) = 9;
            copy_vec4__13TRaderMapCoreFPvPv(arg0 + 0x468, (void *)&TObjEneMe1Gee__data_8043BDB0);
            for (j = 0; j < self->count; j++) {
                TObjEneMe1Gee__sub_800CB4DC(self->arr[j]);
            }
            TObjEneMe1Gee__sub_800CB4DC(arg0);
        }
        break;
    case 9:
        break;
    }
}

}
