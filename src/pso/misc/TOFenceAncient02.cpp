#include "types.h"
#include "pso/misc/TOFenceAncient02.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_8016713C_lbl_804B1CD0 {
    s32 value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_8016713C___vt__16TOFenceAncient02 {
    s32 value;
    u8 remaining[0x40];
};

struct Sub_80167020 { u8 pad[0xC]; void *c; };

struct O_80167020 { u8 pad[0x42C]; Sub_80167020 *sub; };

struct Arr_80167020 { void *a; s32 b; s32 c; s32 d; };

extern "C" {
u8 *TLobby__sub_8001FE7C(void *, s16);
void mem_free(u32);
void free_if_valid__10TObjPlayerFl(s32);
extern u8 *TOFenceAncient02__model_resource;
extern u32 TOFenceAncient02__texture_variants;
s32 reset_photon_effect__10TObjPlayerFv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int, int, f32);
s32 init_fields__16TOFenceAncient01Fv();
s32 fn_80166E64(void *);
s32 fn_80166EA8(void *, int);
extern RecoveredGlobal_8016713C_lbl_804B1CD0 lbl_804B1CD0;
extern s32 __vt__16TOFenceAncient02[];
extern s32 TOFenceAncient02__class_name;
extern u8 *TOFenceAncient02__model_resource;
extern u32 TOFenceAncient02__texture_variants;
extern const f32 lbl_805DB620;
extern const f32 lbl_805DB624;
extern const f32 lbl_805DB628;
u8 *TOFenceAncient02__ct(u8 *arg0, s32 arg1, s32 arg2);
O_80167020 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
O_80167020 *alloc__23TAdSinglePlyChrSelectGCFv(s32);
Arr_80167020 *mem_alloc(s32);
s32 load_gvm_texture_file(void *);
extern char lbl_80441548[];
extern char lbl_80441560[];
extern char lbl_80441578[];
extern char bm_fd_obj_n_saku_6x2_resource_descriptor[];
extern u8 *TOFenceAncient02__model_resource;
extern u32 TOFenceAncient02__texture_variants;
}

extern "C" {

void *__dt__16TOFenceAncient02Fv(void *arg0, s16 arg1);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 destroy__16TOFenceAncient01Fs(void *, s32);

extern void *tl_05;

void *TOFenceAncient02::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient02__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__16TOFenceAncient02[];

void TOFenceAncient02::free_resources() {
  s32 var_r31;
  s32 var_r30;
  int new_var;
  if (((u32) TOFenceAncient02__texture_variants) != 0)
  {
    var_r30 = 1;
    var_r31 = 4;
    do
    {
      free_if_valid__10TObjPlayerFl(*((s32 *) (((s8 *) TOFenceAncient02__texture_variants) + var_r31)));
      var_r30 += 1;
      var_r31 += 4;
    }
    while (var_r30 < 4);
    if (((u32) TOFenceAncient02__texture_variants) != 0)
    {
      mem_free(TOFenceAncient02__texture_variants);
      TOFenceAncient02__texture_variants = 0;
    }
  }
  new_var = ((void *) TOFenceAncient02__model_resource) != 0;
  if (new_var)
  {
    TLobby__sub_8001FE7C(TOFenceAncient02__model_resource, 1);
    TOFenceAncient02__model_resource = 0;
  }
}

void TOFenceAncient02::load_assets() {
    O_80167020 *o;
    Arr_80167020 *r;
    o = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
    if (o != NULL) {
        o = load_resource_from_descriptor(o, 1, bm_fd_obj_n_saku_6x2_resource_descriptor, 0, 0, 0);
    }
    (*(O_80167020 * *)&TOFenceAncient02__model_resource) = o;
    r = mem_alloc(0x10);
    (*(Arr_80167020 * *)&TOFenceAncient02__texture_variants) = r;
    r->a = (*(O_80167020 * *)&TOFenceAncient02__model_resource)->sub->c;
    (*(Arr_80167020 * *)&TOFenceAncient02__texture_variants)->b = load_gvm_texture_file(lbl_80441548);
    (*(Arr_80167020 * *)&TOFenceAncient02__texture_variants)->c = load_gvm_texture_file(lbl_80441560);
    (*(Arr_80167020 * *)&TOFenceAncient02__texture_variants)->d = load_gvm_texture_file(lbl_80441578);
}

void *__dt__16TOFenceAncient02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TOFenceAncient02;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        destroy__16TOFenceAncient01Fs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8016713C_lbl_804B1CD0_size[sizeof(RecoveredGlobal_8016713C_lbl_804B1CD0) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_8016713C___vt__16TOFenceAncient02_size[sizeof(RecoveredGlobal_8016713C___vt__16TOFenceAncient02) == 0x44 ? 1 : -1];
u8 *TOFenceAncient02__ct(u8 *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    u8 *temp_r4;
    u8 *temp_r6;
    init_fields__16TOFenceAncient01Fv();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8016713C___vt__16TOFenceAncient02 *)&__vt__16TOFenceAncient02).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOFenceAncient02__class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    temp_r4 = (u8 *)(*(u8 **)((s8 *)TOFenceAncient02__model_resource + 0x42C));
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)temp_r4 + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)((*(s32 *)&TOFenceAncient02__texture_variants) + (fn_80166EA8((void *) (arg0), (int) (temp_r4)) * 4)) + 0);
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)TOFenceAncient02__model_resource + 0x430)) + 4));
    temp_r6 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xBC));
    temp_f1 = (f32) *(u32 *)((s8 *)temp_r6 + 4);
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) (temp_f1 - lbl_805DB620);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B1CD0.value), (int) (3), (int) (temp_r6), (f32) (temp_f1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFv((void *) (arg0));
    fn_80166E64((void *) (arg0));
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB624;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DB628;
    return arg0;
}

}
