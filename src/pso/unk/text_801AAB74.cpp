#include "types.h"
typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
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
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
u8 *find_entity_by_id(u16);
M2C_UNK TCameraCtrl__sub_801A7310(void *, int);
M2C_UNK spawn_photon_blast_opening_effects(int, int);
M2C_UNK TObjPlayer__sub_801A7748(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801AA6F8(void *, int);
M2C_UNK TPhotonMagicSquare__sub_801AD218(void *, void *, int, void *, int);
u8 *TPhotonRainbow__ct(u8 *arg0, s32 arg1_unused, s32 arg2);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_cue_stream_file(void *);
void *__nw__7TObjectFUl(int);
extern u8 lbl_80446D10[];
extern u8 lbl_80446D1C[];
extern u8 lbl_804C34B8[];
extern M2C_UNK __vt__13TPhotonEstlla[];
extern s32 lbl_805D34D8;
extern u8 *lbl_805D5D28;
extern const f32 lbl_805DC140;
u8 *TPhotonEstlla__ct(u8 *arg0, u8 *arg1);
}

extern "C" {

u8 *TPhotonEstlla__ct(u8 *arg0, u8 *arg1) {
    Stack_801AAB74 pos;
    u8 *e;
    void *p;
    photon_base_ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TPhotonEstlla;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D34D8;
    M2C_FIELD(arg0, s32 *, 0x138) = 1;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg1);
    M2C_FIELD(arg0, u16 *, 0x17C) = M2C_FIELD(arg1, u16 *, 0xC);
    e = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x17C));
    if (e != NULL) {
        M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(e, s32 *, 0x60);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0x98);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0x9C);
    set_field_d8__10TObjPlayerFPvi(arg0, (s32) lbl_804C34B8);
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD(lbl_805D5D28, s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    M2C_FIELD(arg0, s16 *, 0x190) = 1;
    M2C_FIELD(arg0, s32 *, 0x194) = M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x198) = M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    ((VObj_18_801AAB74 *) arg0)->m12();
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
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
    TObjPlayer__sub_801AA6F8(arg0, M2C_FIELD(arg1, u8 *, 0x1C));
    if (M2C_FIELD(arg0, s32 *, 0x198) == 1) {
        M2C_FIELD(arg0, s32 *, 0x154) |= 1;
    }
    M2C_FIELD(arg0, f32 *, 0x150) = M2C_FIELD(arg1, f32 *, 0x20);
    if (M2C_FIELD(arg0, s32 *, 0x194) == 0) {
        set_field_b8__14TObjEnePanarmsFPvs(arg0, 0);
        TCameraCtrl__sub_801A7310(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x194) = 1;
        M2C_FIELD(arg0, s16 *, 0x190) = 0;
        M2C_FIELD(arg0, s32 *, 0x19C) = 1;
        e = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x17C));
        if (e != NULL) {
            pos.x = M2C_FIELD(e, f32 *, 0x38);
            pos.y = lbl_805DC140 + M2C_FIELD(e, f32 *, 0x3C);
            pos.z = M2C_FIELD(e, f32 *, 0x40);
        }
        p = __nw__7TObjectFUl(0xD0);
        if (p != NULL) {
            TPhotonMagicSquare__sub_801AD218(p, arg0, 1, &pos, 0x78);
        }
        TObjPlayer__sub_801A7748(arg0, 1);
        play_cue_stream_file(lbl_80446D10);
    } else {
        spawn_photon_blast_opening_effects(1, M2C_FIELD(arg0, u16 *, 0x17C));
        play_cue_stream_file(lbl_80446D1C);
    }
    return arg0;
}

}
