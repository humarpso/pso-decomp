#include "types.h"

struct VBase_18_801AAB74 { char pad[0x18]; };

struct VObj_18_801AAB74 : VBase_18_801AAB74 {
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
};

struct Stack_801AAB74 { f32 x, y, z; };

extern "C" {
u8 *photon_base_ct(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, s32);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
u8 *find_entity_by_id(u16);
s32 begin_photon_summon_camera(void *, int);
s32 spawn_photon_blast_opening_effects(int, int);
s32 spawn_photon_blast_attachment_effects(void *, s32);
s32 TObjPlayer__sub_801AA6F8(void *, int);
s32 construct_photon_magic_square_normal(void *, void *, int, void *, int);
u8 *TPhotonRainbow__ct(u8 *arg0, s32 arg1_unused, s32 arg2);
s32 get_global_state__14TOKeyMachine01Fv();
s32 play_cue_stream_file(void *);
void *__nw__7TObjectFUl(int);
extern u8 lbl_80446D10[];
extern u8 lbl_80446D1C[];
extern u8 photon_estlla_param_table[];
extern s32 __vt__13TPhotonEstlla[];
extern s32 lbl_805D34D8;
extern u8 *photon_blast_shared_resource;
extern const f32 lbl_805DC140;
u8 *TPhotonEstlla__ct(u8 *arg0, u8 *arg1);
}

extern "C" {

u8 *TPhotonEstlla__ct(u8 *arg0, u8 *arg1) {
    Stack_801AAB74 pos;
    u8 *e;
    void *p;
    photon_base_ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TPhotonEstlla;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D34D8;
    *(s32 *)((s8 *)arg0 + 0x138) = 1;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg1);
    *(u16 *)((s8 *)arg0 + 0x17C) = *(u16 *)((s8 *)arg1 + 0xC);
    e = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x17C));
    if (e != NULL) {
        *(s32 *)((s8 *)arg0 + 0x60) = *(s32 *)((s8 *)e + 0x60);
    }
    *(s32 *)((s8 *)arg0 + 0x34) = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x98);
    *(s32 *)((s8 *)arg0 + 0x24) = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x9C);
    set_field_d8__10TObjPlayerFPvi(arg0, (s32) photon_estlla_param_table);
    set_field_dc__10TObjPlayerFPvi(arg0, *(s32 *)((s8 *)photon_blast_shared_resource + 0x430));
    *(s16 *)((s8 *)arg0 + 0xB8) = 1;
    set_animation__10TObjPlayerFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    *(s16 *)((s8 *)arg0 + 0x190) = 1;
    *(s32 *)((s8 *)arg0 + 0x194) = *(s32 *)((s8 *)arg1 + 0x10);
    *(s32 *)((s8 *)arg0 + 0x198) = *(s32 *)((s8 *)arg1 + 0x14);
    *(s32 *)((s8 *)arg0 + 0x19C) = 0;
    *(s32 *)((s8 *)arg0 + 0x134) = 0;
    ((VObj_18_801AAB74 *) arg0)->m12();
    *(s32 *)((s8 *)arg0 + 0x1A0) = 0;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 11: case 12: case 13: case 14:
    case 30: case 31: case 32: case 33:
        p = __nw__7TObjectFUl(0xAC);
        if (p != NULL) {
            ((u8 *(*)(void *, void *, void *, int)) TPhotonRainbow__ct)(p, arg0, arg0 + 0x38, 1);
        }
        break;
    default:
        p = __nw__7TObjectFUl(0xAC);
        if (p != NULL) {
            ((u8 *(*)(void *, void *, void *, int)) TPhotonRainbow__ct)(p, arg0, arg0 + 0x38, 0);
        }
        break;
    }
    TObjPlayer__sub_801AA6F8(arg0, *(u8 *)((s8 *)arg1 + 0x1C));
    if (*(s32 *)((s8 *)arg0 + 0x198) == 1) {
        *(s32 *)((s8 *)arg0 + 0x154) |= 1;
    }
    *(f32 *)((s8 *)arg0 + 0x150) = *(f32 *)((s8 *)arg1 + 0x20);
    if (*(s32 *)((s8 *)arg0 + 0x194) == 0) {
        set_field_b8__14TObjEnePanarmsFPvs(arg0, 0);
        begin_photon_summon_camera(arg0, 0);
        *(s32 *)((s8 *)arg0 + 0x194) = 1;
        *(s16 *)((s8 *)arg0 + 0x190) = 0;
        *(s32 *)((s8 *)arg0 + 0x19C) = 1;
        e = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x17C));
        if (e != NULL) {
            pos.x = *(f32 *)((s8 *)e + 0x38);
            pos.y = lbl_805DC140 + *(f32 *)((s8 *)e + 0x3C);
            pos.z = *(f32 *)((s8 *)e + 0x40);
        }
        p = __nw__7TObjectFUl(0xD0);
        if (p != NULL) {
            construct_photon_magic_square_normal(p, arg0, 1, &pos, 0x78);
        }
        spawn_photon_blast_attachment_effects(arg0, 1);
        play_cue_stream_file(lbl_80446D10);
    } else {
        spawn_photon_blast_opening_effects(1, *(u16 *)((s8 *)arg0 + 0x17C));
        play_cue_stream_file(lbl_80446D1C);
    }
    return arg0;
}

}
