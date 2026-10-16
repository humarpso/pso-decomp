#include "types.h"
#include "pso/misc/TOKeyAncient01.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKey.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Base_8016AE84_8016AD58 { char pad[0x18]; };
struct VObj_8016AE84_8016AD58 : Base_8016AE84_8016AD58 {
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
};

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
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual s32 m18();
};
struct VBase18 { char pad[0x18]; };

struct VObj18 : VBase18 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_8016B0A0_lbl_804B29D0 { s32 value; u8 remaining[0x28]; };

struct RecoveredGlobal_8016B0A0___vt__14TOKeyAncient01 { s32 value; u8 remaining[0x70]; };

struct Inner_8016AF84 { u8 pad[0xC]; s32 f0C; };

struct Big_8016AF84 { u8 pad[0x42C]; Inner_8016AF84 *p; };

struct Buf_8016AF84 { s32 a; s32 b; s32 c; s32 d; };

extern "C" {
s32 update_anim_phase__13TUnk_804AFBF8Fv();
void TOKeyAncient01__vt15(u8 *arg0);
s32 rotate_matrix_y(int, void *);
s32 rotate_matrix_z(int, void *);
s32 rotate_matrix_x(int, void *);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_model(void *);
s32 draw_ginja_model_with_motion(void *, int, f32);
u8 *TLobby__sub_8001FE7C(void *, s16);
void mem_free(u32);
extern u8 *TOKeyAncient01__shared_resource_object;
extern u32 TOKeyAncient01__texture_lists;
u32 init_collision_body_parts(void *, s32, s32);
u8 * TOKey__ct(void *);
s32 refresh_collision_body_centers(void *);
extern RecoveredGlobal_8016B0A0_lbl_804B29D0 lbl_804B29D0;
extern s32 __vt__14TOKeyAncient01[];
extern s32 TOKeyAncient01__class_name;
extern u8 *TOKeyAncient01__shared_resource_object;
extern u32 TOKeyAncient01__texture_lists;
extern const f32 lbl_805DB6E8;
extern const f32 lbl_805DB6EC;
extern const f32 lbl_805DB6F0;
extern const f32 lbl_805DB6F4;
extern const f32 lbl_805DB6F8;
u8 *TOKeyAncient01__ct(u8 *arg0, s32 arg1, s32 arg2);
Big_8016AF84 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
Buf_8016AF84 *mem_alloc(s32);
s32 load_gvm_texture_file(void *);
extern u8 lbl_804419B8[];
extern u8 lbl_804419D0[];
extern u8 lbl_804419E8[];
extern u8 bm_fd_obj_n_switch_resource_descriptor[];
extern u8 *TOKeyAncient01__shared_resource_object;
extern u32 TOKeyAncient01__texture_lists;
}

extern "C" {

void TOKeyAncient01__vt14(void *arg0);
void TOKeyAncient01__vt23(void);
void *__dt__14TOKeyAncient01Fv(void *arg0, s16 arg1);
int TLobby__send_and_handle_60(void*);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
int bswap_16__FPUs(void*);
int init_6x04_packet(void* a0 = 0);

void TOKeyAncient01::set_type() { *(s32*)((char*)this + 0x0) = 3; }

void TOKeyAncient01__vt23(void) {  }

void TOKeyAncient01::render() {
    u8 *arg0 = (u8 *)this;
    if (((VObj18*)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (void *) (*(s32 *)((s8 *)arg0 + 0x60)));
        TObjFish::set_global_param((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        if ((s32) *(s32 *)((s8 *)arg0 + 0xD4) != 1) {
            draw_ginja_model_with_motion((void *) (*(u8 **)((s8 *)arg0 + 0x34)), (int) (*(s32 *)((s8 *)arg0 + 0xBC)), (f32) (*(f32 *)((s8 *)arg0 + 0xB0)));
        } else {
            push_matrix();
            post_translate_matrix((void *) (*(u8 **)((s8 *)arg0 + 0x34) + 8));
            rotate_matrix_z((int) (0), (void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x34)) + 0x1C)));
            rotate_matrix_x((int) (0), (void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x34)) + 0x14)));
            rotate_matrix_y((int) (0), (void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x34)) + 0x18)));
            draw_ginja_model((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x34)) + 4)));
            pop_matrix();
        }
        pop_matrix();
    }
}

void TOKeyAncient01__vt15(u8 *arg0) {
    update_anim_phase__13TUnk_804AFBF8Fv();
    ((VObj_18 *)(arg0))->m18();
}

void TOKeyAncient01__vt14(void *arg0) {
    struct VObj_8016AE84_8016AD58 *o = (struct VObj_8016AE84_8016AD58 *)arg0;
    o->m18();
}

extern void *tl_05;

void *TOKeyAncient01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOKeyAncient01__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__14TOKeyAncient01[];

void TOKeyAncient01::free_shared_resources() {
  s32 var_r31;
  s32 var_r30;
  if (((u32) TOKeyAncient01__texture_lists) != 0)
  {
    var_r30 = 1;
    var_r31 = 4;
    do
    {
      TObjPlayer::free_if_valid(*((s32 *) (((s8 *) TOKeyAncient01__texture_lists) + var_r31)));
      var_r30 += 1;
      var_r31 += 4;
    }
    while (var_r30 < 4);
    if (((u32) TOKeyAncient01__texture_lists) != 0)
    {
      mem_free(TOKeyAncient01__texture_lists);
      TOKeyAncient01__texture_lists = 0;
    }
  }
  if (((void *) TOKeyAncient01__shared_resource_object) != 0)
  {
    TLobby__sub_8001FE7C(TOKeyAncient01__shared_resource_object, 1);
    TOKeyAncient01__shared_resource_object = 0;
  }
}

void TOKeyAncient01::load_resources() {
    Big_8016AF84 *v = (Big_8016AF84 *)((TAdSinglePlyChrSelectGC *)0x440)->alloc();
    if (v != NULL) {
        v = load_resource_from_descriptor(v, 1, bm_fd_obj_n_switch_resource_descriptor, 0, 0, 0);
    }
    (*(Big_8016AF84 * *)&TOKeyAncient01__shared_resource_object) = v;
    (*(Buf_8016AF84 * *)&TOKeyAncient01__texture_lists) = mem_alloc(0x10);
    (*(Buf_8016AF84 * *)&TOKeyAncient01__texture_lists)->a = (*(Big_8016AF84 * *)&TOKeyAncient01__shared_resource_object)->p->f0C;
    (*(Buf_8016AF84 * *)&TOKeyAncient01__texture_lists)->b = load_gvm_texture_file(lbl_804419B8);
    (*(Buf_8016AF84 * *)&TOKeyAncient01__texture_lists)->c = load_gvm_texture_file(lbl_804419D0);
    (*(Buf_8016AF84 * *)&TOKeyAncient01__texture_lists)->d = load_gvm_texture_file(lbl_804419E8);
}

void *__dt__14TOKeyAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TOKeyAncient01;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TOKeyAncient01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    TOKey__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8016B0A0___vt__14TOKeyAncient01 *)&__vt__14TOKeyAncient01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOKeyAncient01__class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    ((TOKey *)arg0)->init_switch_id();
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x88);
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x88) = 0;
    } else if (temp_r0 > 3) {
        *(s32 *)((s8 *)arg0 + 0x88) = 3;
    }
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)(*(s32 *)&TOKeyAncient01__texture_lists) + (*(s32 *)((s8 *)arg0 + 0x88) * 4));
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)TOKeyAncient01__shared_resource_object + 0x42C)) + 8);
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)TOKeyAncient01__shared_resource_object + 0x430)) + 4));
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB6E8);
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) lbl_805DB6EC;
    init_collision_body_parts(arg0, (s32) &lbl_804B29D0.value, 1);
    refresh_collision_body_centers((void *) (arg0));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB6F0;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DB6F4;
    if ((s32) *(s32 *)((s8 *)arg0 + 0xD0) != 2) {
        if (*(f32 *)((s8 *)arg0 + 0x68) < lbl_805DB6F8) {
            *(s32 *)((s8 *)arg0 + 0xD0) = 1;
        } else {
            goto block_7;
        }
    } else {
block_7:
        *(s32 *)((s8 *)arg0 + 0xD0) = 0;
    }
    return arg0;
}

}
