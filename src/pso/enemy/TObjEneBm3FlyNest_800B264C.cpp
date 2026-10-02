#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800B2948_lbl_8043B2A4 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_800B2948_lbl_80500B00 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct NestAttachmentPoint { f32 x,y,z; };

struct Obj_800B2A5C { u8 pad[0x3b0]; s32 count; u8 pad2[4]; u16 ids[6]; };

struct Obj_800B2AF4 { u8 pad[0x3b0]; s32 count; u8 pad2[4]; u16 ids[6]; };

struct VBase_14_aa9368 { char pad[0x14]; };

struct VObj_14_aa9368 : VBase_14_aa9368 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};

struct VBase_18_113a45 { char pad[0x18]; };

struct VObj_18_113a45 : VBase_18_113a45 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
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
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

struct Vec_800B264C { f32 x, y, z; };

struct Cam_800B264C { u8 b[0x1C]; };

struct Nest_800B264C {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x38 - 0x28];
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x2FC - 0x64];
    Vec_800B264C f2FC;
    u8 pad308[0x326 - 0x308];
    s16 f326;
    u8 pad328[0x3AC - 0x328];
    s32 f3AC;
    u8 pad3B0[0x3C8 - 0x3B0];
    Vec_800B264C f3C8;
    u8 pad3D4[0x3E0 - 0x3D4];
    u8 f3E0[0x440 - 0x3E0];
    Cam_800B264C cams[4];
    f32 f4B0;
};

struct VBase_18_9c7b63 { char pad[0x18]; };

struct VObj_18_9c7b63 : VBase_18_9c7b63 {
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
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Vec_800B2C24 { f32 x, y, z; };

extern "C" {
extern RecoveredGlobal_800B2948_lbl_8043B2A4 lbl_8043B2A4;
extern RecoveredGlobal_800B2948_lbl_80500B00 lbl_80500B00;
extern s32 lbl_805D510C;
extern s32 lbl_805D5114;
extern s32 lbl_805D5118;
void TObjEneBm3FlyNest__sub_800B2948(s32 arg0);
extern RecoveredGlobal_800B2948_lbl_80500B00 lbl_80500B00;
extern s32 lbl_805D510C;
extern NestAttachmentPoint *lbl_805D5110;
extern void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
void capture_attachment__17TObjEneBm3FlyNestFv(void * _w0);
u8 *TPhotonMylla__sub_80154CB4(u16);
void TObjEneBm3FlyNest__sub_800B2A5C(Obj_800B2A5C *self, u8 *child);
u8 *TPhotonMylla__sub_80154CB4(u16);
u16 get_active_id__13TObjEneBm3FlyFPv(void *);
s32 check_v2_mode__9TObjEneDDFv();
s32 TObjEneBm3FlyNest__sub_800B2AF4(Obj_800B2AF4 *self, u16 id);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, void *, int);
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK TObjPlayer__sub_800D7BB0(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void TObjEneBm3FlyNest__sub_800B2948(s32 arg0);
void capture_attachment__17TObjEneBm3FlyNestFv(void * _w0);
extern Vec_800B264C lbl_8043B310;
extern s32 lbl_805D510C;
extern NestAttachmentPoint *lbl_805D5110;
extern s32 lbl_805D5114;
extern s32 lbl_805D5118;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9CF8;
extern const f32 lbl_805D9CFC;
extern const f32 lbl_805D9D00;
extern const f32 lbl_805D9D08;
extern const f32 lbl_805D9D0C;
extern const f32 lbl_805D9D10;
extern const f32 lbl_805D9D14;
extern const f32 lbl_805D9D18;
extern const f32 lbl_805D9D1C;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
void TObjEneBm3FlyNest__sub_800B264C(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK TObjBoss2Tunnel__sub_8007E7D8(void *, void *, int);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
s32 get_random_scaled__9TObjEneDDFv(void *);
f32 rand_range__9TObjEneDDFff(void *, f32, f32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK set_field_e4__10TObjPlayerFii(void *, int, f32);
M2C_UNK TObjPlayer__sub_800D9398(void *, int);
int copy_target_state__14TObjEnePanarmsFPvPv(void*);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805D9CF8;
extern const f32 lbl_805D9D08;
extern const f32 lbl_805D9D10;
extern const f32 lbl_805D9D1C;
extern const f32 lbl_805D9D20;
extern const f32 lbl_805D9D24;
extern const f32 lbl_805D9D28;
extern const f32 lbl_805D9D2C;
void TObjEneBm3FlyNest__sub_800B2C24(u8 *arg0, s32 arg1);
}

extern "C" {

struct Base_800B2BAC_800B2A14 { char pad[0x18]; };
struct VObj_800B2BAC_800B2A14 : Base_800B2BAC_800B2A14 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52();
    virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56();
    virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60();
    virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68();
    virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72();
    virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76();
    virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80();
    virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88();
    virtual void m89(); virtual void m90(); virtual void m91(); virtual void m92();
    virtual void m93();
};

void* TObjEneBm3FlyNest__sub_800B2A54(void* p);
int copy_target_state__17TObjEneBm3FlyNestFPv(void* p);
void handle_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
int init__17TObjEneBm3FlyNestFPv(void* p);
int copy_target_state__14TObjEnePanarmsFPvPv(void*);
int init_params__17TObjEneBm3FlyNestFPv(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv();

typedef char RecoveredGlobal_800B2948_lbl_8043B2A4_size[sizeof(RecoveredGlobal_800B2948_lbl_8043B2A4) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_800B2948_lbl_80500B00_size[sizeof(RecoveredGlobal_800B2948_lbl_80500B00) == 0x40 ? 1 : -1];

void TObjEneBm3FlyNest__sub_800B264C(u8 *arg0) {
    Cam_800B264C *cm;
    s32 cam;
    s32 res;
    s32 draw;
    Nest_800B264C *self = (Nest_800B264C *)arg0;
    f32 t;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_113a45 *)(arg0))->m103();
        return;
    }
    cam = 0;
    if (is_split_screen() != 0) {
        cam = get_camera_mode__11TCameraCtrlFv();
    }
    self->f3AC = 0;
    if (self->f326 != 9) {
        if (is_main_phase_15__9TObjEneDDFv() != 0) {
            res = ((VObj_18_113a45 *)(arg0))->m9(lbl_805D9D08 + lbl_805D9E88, lbl_805D9D0C + lbl_805D9E84, lbl_805D9D00);
        } else if (((VObj_18_113a45 *)(arg0))->m8(lbl_805D9CFC, lbl_805D9D00) != 0) {
            res = 1;
        } else {
            res = 0;
        }
        if (res != 0) {
            draw = 1;
            self->f3AC = 1;
            lbl_805D5660 = some_id_805c6f74;
            lbl_805D5664 = lbl_805D7784;
            lbl_805D5668 = lbl_805D7780;
            cm = &self->cams[cam];
            TObjPlayer__sub_800D7BB0(cm);
            if (updateFromCamera__15RenderFadeStateFPCf(cm, &self->f2FC) != 0) {
                ((VObj_14_aa9368 *)(cm))->m6();
                if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                    draw = 0;
                }
            }
            if (self->f326 != 9) {
                Vec_800B264C v = lbl_8043B310;
                if (self->f326 == 0) {
                    t = lbl_805D9D10 / (self->f4B0 - lbl_805D9D14);
                    if (t < lbl_805D9D18 && t > lbl_805D9CF8) {
                        v.x = v.z = lbl_805D9D1C * t;
                    }
                }
                update_player_state__9TObjEneDDFPv(arg0, &v, 1);
            }
            if (draw != 0) {
                update_secondary_light__9TObjEneDDFPv(arg0);
                set_global_param__8TObjFishFi(self->f24);
                TObjPlayer__sub_803D9B2C();
                lbl_805D510C = 0;
                lbl_805D5110 = (NestAttachmentPoint *)&self->f3C8;
                TOHangerMachine01__sub_803D9C00(self->f38);
                TObjPlayer__sub_803D9624(0, lbl_805D9CF8, self->f4B0, lbl_805D9CF8);
                if (self->f326 == 0) {
                    lbl_805D5118 = 0;
                    lbl_805D5114 = (s32)self->f3E0;
                    set_global_state__16TObjEneRe7BeruraFi((void *)TObjEneBm3FlyNest__sub_800B2948);
                } else {
                    set_global_state__16TObjEneRe7BeruraFi((void *)capture_attachment__17TObjEneBm3FlyNestFv);
                }
                rotate_matrix_y(0, self->f60);
                clear_global_flag_400__9TObjEneDDFv();
                toggle_particle_effect__10TObjPlayerFv();
                if (res == 1) {
                    draw__16TObjEneRe7BeruraFPv(arg0);
                } else {
                    render_world_model__10TObjPlayerFPv(arg0);
                }
                end_effect_render__13TParticleCtrlFv();
                set_global_state__16TObjEneRe7BeruraFi(NULL);
                TObjPlayer__sub_803D9B78();
            }
            update_primary_light__9TObjEneDDFPv(arg0);
            if (updateFromCamera__15RenderFadeStateFPCf(cm, &self->f2FC) != 0) {
                ((VObj_14_aa9368 *)(cm))->m7();
            }
            some_id_805c6f74 = lbl_805D5660;
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
        }
    }
    VecCopy__FP3VecPC3Vec(&self->f2FC, &self->f3C8);
}

void TObjEneBm3FlyNest__sub_800B2948(s32 arg0) {
    s32 temp_r4;
    if ((s32) lbl_805D510C == (s32) M2C_FIELD(&lbl_8043B2A4.value, M2C_UNK *, (lbl_805D5118 * 4))) {
        temp_r4 = lbl_805D5114;
        lbl_805D5118 += 1;
        lbl_805D5114 = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_80500B00.value, temp_r4);
    }
    capture_attachment__17TObjEneBm3FlyNestFv((void *)((void *) (arg0)));
}

void capture_attachment__17TObjEneBm3FlyNestFv(void * _w0) {
    switch (lbl_805D510C) {
    case 36: case 45:
        get_camera_ctrl__9TObjEneDDFPv((s32)(&lbl_80500B00), (s32)(lbl_805D5110++));
        break;
    }
    ++lbl_805D510C;
}

int init__17TObjEneBm3FlyNestFPv(void* p) { return init_params__17TObjEneBm3FlyNestFPv(p); }
int copy_target_state__17TObjEneBm3FlyNestFPv(void* p) { return copy_target_state__14TObjEnePanarmsFPvPv(p); }
void* TObjEneBm3FlyNest__sub_800B2A54(void* p) { return (char*)p + 0x3d4; }

void TObjEneBm3FlyNest__sub_800B2A5C(Obj_800B2A5C *self, u8 *child) {
    s32 i;
    for (i = 0; i < 6; i++) {
        if (TPhotonMylla__sub_80154CB4(self->ids[i]) == child) {
            self->count--;
            self->ids[i] = self->ids[self->count];
            self->ids[self->count] = 0xFFFF;
            return;
        }
    }
}

s32 TObjEneBm3FlyNest__sub_800B2AF4(Obj_800B2AF4 *self, u16 id) {
    s32 n = 0;
    s32 i;
    for (i = 0; i < self->count; i++) {
        u8 *p = TPhotonMylla__sub_80154CB4(self->ids[i]);
        if (p != 0 && id == get_active_id__13TObjEneBm3FlyFPv(p)) {
            n++;
        }
    }
    if (check_v2_mode__9TObjEneDDFv()) {
        return n < 4;
    }
    return n < 2;
}

void handle_state__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((struct VObj_800B2BAC_800B2A14 *) arg0)->m93();
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3B0) == 0) {
            send_entity_set_flags__6TLobbyFPv();
            queue_destruction__7TObjectFv(arg0);
        }
    case 5:
    case 0:
        return;
    }
}
#pragma push
#pragma fp_contract on
void TObjEneBm3FlyNest__sub_800B2C24(u8 *arg0, s32 arg1) {
    Vec_800B2C24 v;
    Vec_800B2C24 p;
    f32 r;
    s32 a;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        ((VObj_18_9c7b63 *)(arg0))->m94();
        M2C_FIELD(arg0, f32 *, 0x4B0) = lbl_805D9CF8;
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x4C8) = 4;
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0x14;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        M2C_FIELD(arg0, f32 *, 0x4D8) = lbl_805D9CF8;
        break;
    case 3:
        if (M2C_FIELD(arg0, f32 *, 0x4D8) >= lbl_805D9D20) {
            TObjEneDD__sub_800BBA18(arg0, 9);
        }
        break;
    case 5:
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x4D0)) {
        case 0:
            TBoss1Dragon__sub_80143504();
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 1;
                v.x = lbl_805D9D24;
                v.y = lbl_805D9CF8;
                v.z = lbl_805D9D28;
                TObjBoss2Tunnel__sub_8007E7D8(&v, &v.z, M2C_FIELD(arg0, s32 *, 0x60));
                TBoss4Zako__sub_803D8910(&v, arg0 + 0x38);
                TObjPlayer__sub_800D9398(&v, 0x32);
                set_field_e4__10TObjPlayerFii(&v, 0x46, lbl_805D9D10);
            }
            if (M2C_FIELD(arg0, f32 *, 0xC0) < lbl_805D9D08) {
                M2C_FIELD(arg0, s32 *, 0x4C8) += 1;
                if (M2C_FIELD(arg0, s32 *, 0x4C8) >= 4) {
                    r = rand_range__9TObjEneDDFff(arg0, lbl_805D9D1C, lbl_805D9D10);
                    a = get_random_scaled__9TObjEneDDFv(arg0);
                    VecCopy__FP3VecPC3Vec(&p, arg0 + 0x2FC);
                    p.x = r * TBoss8Dragon__sub_803D64C0(a) + p.x;
                    p.y += lbl_805D9D1C;
                    p.z = r * TBoss8Dragon__sub_803D64DC(a) + p.z;
                    TObjEneDellBiter__sub_80087350(&p, 0xF1);
                    M2C_FIELD(arg0, s32 *, 0x4C8) = 0;
                }
                M2C_FIELD(arg0, s32 *, 0x4CC) += 1;
                if (M2C_FIELD(arg0, s32 *, 0x4CC) >= 0x14) {
                    TBoss3Volopt__sub_8022675C(((int (*)(void *, s32))copy_target_state__14TObjEnePanarmsFPvPv)(arg0, 0x4003AD2B), arg0 + 0x38, 0, 0);
                    M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
                }
            }
            ((VObj_18_9c7b63 *)(arg0))->m100();
            break;
        case 1:
            M2C_FIELD(arg0, f32 *, 0x4D8) += lbl_805D9D2C;
            M2C_FIELD(arg0, f32 *, 0x3C) -= lbl_805D9D2C;
            break;
        }
        break;
    }
}
#pragma pop

}
