#include "types.h"

struct Obj_8015C88C {
    u8 pad[0x18];
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

extern "C" {
extern const f32 lbl_805DB398;
extern const f32 lbl_805DB39C;
f32 call_vt5_and_get_default_scale__10TObjPlayerFPv(Obj_8015C88C *self);
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
u32 *alloc_buffer__11TOBoss4RockFPv(u32);
u32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern char lbl_8044083C[];
extern char lbl_80440850[];
extern char lbl_8044086C[];
extern char lbl_80440888[];
extern char lbl_804408A4[];
extern char lbl_804408C4[];
extern char lbl_804408E4[];
extern char lbl_80440900[];
extern char lbl_80440920[];
extern u8 lbl_804B0068[];
extern s32 enable_v2_features;
extern void *lbl_805D58E8;
extern u32 *lbl_805D58EC;
void load_container_fragment_textures__9TLanguageFv(void);
}

extern "C" {

void TLobby__sub_8015C8C4(void);
int TLobby__sub_8015C8C8(void);
int check_accuracy_hit__17TObjContainerBaseFv(void);
int TObjPlayer__sub_8015C884(void);

void load_container_fragment_textures__9TLanguageFv(void) {
    u8 *tbl = lbl_804B0068;
    s32 state = get_global_state__14TOKeyMachine01Fv();
    void *p;
    if (enable_v2_features == 1 &&
        (state == 0x10 || state == 0x15 || state == 0x16 || state == 0x21)) {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, tbl + 0x50, 0, 0, 0);
        }
        lbl_805D58E8 = p;
        lbl_805D58EC = alloc_buffer__11TOBoss4RockFPv(0xC);
        lbl_805D58EC[0] = load_gvm_texture_file(lbl_8044083C);
        lbl_805D58EC[1] = load_gvm_texture_file(lbl_80440850);
        lbl_805D58EC[2] = load_gvm_texture_file(lbl_8044086C);
    } else if (enable_v2_features == 1 &&
               (state == 0x11 || state == 0x13 || state == 0x14 || state == 0x20)) {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, tbl + 0x30, 0, 0, 0);
        }
        lbl_805D58E8 = p;
        lbl_805D58EC = alloc_buffer__11TOBoss4RockFPv(0xC);
        lbl_805D58EC[0] = load_gvm_texture_file(lbl_80440888);
        lbl_805D58EC[1] = load_gvm_texture_file(lbl_804408A4);
        lbl_805D58EC[2] = load_gvm_texture_file(lbl_804408C4);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, tbl + 0x10, 0, 0, 0);
        }
        lbl_805D58E8 = p;
        lbl_805D58EC = alloc_buffer__11TOBoss4RockFPv(0xC);
        lbl_805D58EC[0] = load_gvm_texture_file(lbl_804408E4);
        lbl_805D58EC[1] = load_gvm_texture_file(lbl_80440900);
        lbl_805D58EC[2] = load_gvm_texture_file(lbl_80440920);
    }
}

int TObjPlayer__sub_8015C884(void) { return 1; }

f32 call_vt5_and_get_default_scale__10TObjPlayerFPv(Obj_8015C88C *self) {
    self->m20(0, lbl_805DB398);
    return lbl_805DB39C;
}

void TLobby__sub_8015C8C4(void) {  }
int TLobby__sub_8015C8C8(void) { return 1; }
int check_accuracy_hit__17TObjContainerBaseFv(void) { return 1; }

}
