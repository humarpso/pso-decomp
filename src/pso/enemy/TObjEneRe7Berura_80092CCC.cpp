#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BeruraBase_800931C8_80093180 { char pad[0x14]; };
struct BeruraV_800931C8_80093180 : BeruraBase_800931C8_80093180 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

struct Vec_80093470 { f32 x, y, z; };

struct BeruraBase_80093470 { char pad[0x18]; };

struct Berura_80093470 : BeruraBase_80093470 {
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
    virtual void m93();
    virtual void m94();
};

struct Fields_80093470 {
    u8 pad0[0x38];
    Vec_80093470 pos;
    u8 pad44[0xB8 - 0x44];
    s16 fieldB8;
    u8 padBA[0x308 - 0xBA];
    Vec_80093470 vel;
    u8 pad314[0x378 - 0x314];
    s32 field378;
    u8 pad37C[0x3C0 - 0x37C];
    u32 field3C0;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
void clear_field_388__9TObjEneDDFPv(void *p);
void set_active__9TObjEneDDFPv(void *p);
void TObjEneDD__sub_800BACA4(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void TBoss8Dragon__sub_800BB780(void *);
s32 TObjEneDD__sub_800BBA18(void *, s32);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(s32, void *, s32, s32);
s32 TBoss1Dragon__sub_80143504(void *);
extern const f32 TObjEneRe7Berura__data_805D9738;
void TObjEneRe7Berura__sub_80093470(Berura_80093470 *obj, s32 mode);
}

extern "C" {

void advance_state__16TObjEneRe7BeruraFv(void);
void demo_frame_callback__16TObjEneRe7BeruraFv(void);
M2C_UNK get_camera_ctrl__9TObjEneDDFPv(s32, s32);

extern s32 lbl_805D4F68;
extern s32 lbl_805D4F6C;
extern s32 some_id_805c6f74;

void advance_state__16TObjEneRe7BeruraFv(void) {
    switch ((s32) lbl_805D4F68) {
    case 25:
        lbl_805D4F6C = some_id_805c6f74;
        some_id_805c6f74 &= 0xFFFF7FFF;
        break;
    case 26:
        some_id_805c6f74 = lbl_805D4F6C;
        break;
    }
    lbl_805D4F68 += 1;
}

extern s32 lbl_805D4F68;
extern s32 lbl_805D4F6C;
extern s32 lbl_805D4F70;
extern s32 lbl_805D4F74;
extern s32 lbl_805D4F78;
extern void *lbl_805D4F7C;
extern s32 some_id_805c6f74;

void demo_frame_callback__16TObjEneRe7BeruraFv(void) {
    switch ((s32) lbl_805D4F68) {
    case 0x2:
        lbl_805D4F6C = some_id_805c6f74;
        some_id_805c6f74 &= 0xFFFF7FFF;
        break;
    case 0x3:
        some_id_805c6f74 = lbl_805D4F6C;
        break;
    case 0x4C:
    case 0x50:
        get_camera_ctrl__9TObjEneDDFPv(lbl_805D4F70, lbl_805D4F70);
        lbl_805D4F70 += 0xC;
        break;
    case 0x21:
        if ((s32) lbl_805D4F74 != 0) {
            ((BeruraV_800931C8_80093180 *)lbl_805D4F7C)->m6();
        }
        break;
    case 0x38:
        if ((s32) lbl_805D4F78 != 0) {
            ((BeruraV_800931C8_80093180 *)lbl_805D4F7C)->m6();
        }
        break;
    case 0x32:
        if ((s32) lbl_805D4F74 != 0) {
            ((BeruraV_800931C8_80093180 *)lbl_805D4F7C)->m7();
        }
        break;
    case 0x49:
        if ((s32) lbl_805D4F78 != 0) {
            ((BeruraV_800931C8_80093180 *)lbl_805D4F7C)->m7();
        }
        break;
    }
    lbl_805D4F68 += 1;
}
void TObjEneRe7Berura__sub_80093470(Berura_80093470 *obj, s32 mode) {
    Fields_80093470 *self = (Fields_80093470 *)obj;
    Vec_80093470 v;
    f32 speed;
    switch (mode) {
    case 4:
        self->fieldB8 = 6;
        obj->m94();
        self->field3C0 &= ~7;
        TBoss1Dragon__sub_80143504(self);
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(self, 0x4003A826), &self->pos, 0, 0);
        set_active__9TObjEneDDFPv(self);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(self) != 0) {
            TObjEneDD__sub_800BBA18(self, self->field378);
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504(self);
        VecCopy__FP3VecPC3Vec(&v, &self->vel);
        speed = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        TObjEneDD__sub_800BACA4(self, v.x, v.z, speed);
        self->vel.x *= TObjEneRe7Berura__data_805D9738;
        self->vel.z *= TObjEneRe7Berura__data_805D9738;
        break;
    case 5:
        TBoss8Dragon__sub_800BB780(self);
        clear_field_388__9TObjEneDDFPv(self);
        break;
    }
}

}
