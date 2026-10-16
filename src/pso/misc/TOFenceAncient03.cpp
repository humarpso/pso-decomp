#include "types.h"
#include "pso/player/TUnk_804B1B80.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/misc/TOFenceAncient03.h"
#include "pso/misc/TOFenceAncient01.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
extern char lbl_80441598[];
extern char lbl_804415B0[];
extern char lbl_804415C8[];
extern const char *bm_fd_obj_n_saku_4x4_model_names[2];
extern const char *bm_fd_obj_n_saku_4x4_motion_names[2];
extern BmlResourceDescriptor TOFenceAncient03_resource_descriptor;
}

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_801674E0_lbl_804B1DB8 {
    s32 value;
    u8 remaining[0x15C];
};

struct RecoveredGlobal_801674E0___vt__16TOFenceAncient03 {
    s32 value;
    u8 remaining[0x44];
};

struct Sub_801673C4 { u8 pad[0xC]; void *c; };

struct O_801673C4 { u8 pad[0x42C]; Sub_801673C4 *sub; };

struct Arr_801673C4 { void *a; s32 b; s32 c; s32 d; };

extern "C" {
u8 *TLobby__sub_8001FE7C(void *, s16);
void mem_free(u32);
extern u8 *TOFenceAncient03__shared_resource_object;
extern u32 TOFenceAncient03__texture_lists;
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int, int, f32);
s32 init_fields__13TUnk_804B1B80Fv();
s32 sub_80166E64__13TUnk_804B1B80Fv(void *);
s32 sub_80166EA8__13TUnk_804B1B80Fi(void *, int);
extern RecoveredGlobal_801674E0_lbl_804B1DB8 TOFenceAncient03_collision_body_parts;
extern s32 __vt__16TOFenceAncient03[];
extern s32 TOFenceAncient03__class_name;
extern u8 *TOFenceAncient03__shared_resource_object;
extern u32 TOFenceAncient03__texture_lists;
extern const f32 lbl_805DB630;
extern const f32 lbl_805DB634;
extern const f32 lbl_805DB638;
u8 *TOFenceAncient03__ct(u8 *arg0, s32 arg1, s32 arg2);
O_801673C4 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
O_801673C4 *alloc__23TAdSinglePlyChrSelectGCFv(s32);
Arr_801673C4 *mem_alloc(s32);
s32 load_gvm_texture_file(void *);
extern char lbl_804415F8[];
extern char lbl_80441610[];
extern char lbl_80441628[];
extern u8 *TOFenceAncient03__shared_resource_object;
extern u32 TOFenceAncient03__texture_lists;
}

extern "C" {

void vfunc_14__16TOFenceAncient03Fv(void* p);
void vfunc_15__16TOFenceAncient03Fv(void* p);
void vfunc_16__16TOFenceAncient03Fv(void);
void *__dt__16TOFenceAncient03Fv(void *arg0, s16 arg1);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int set_indexed_flags(void*, void*, void*);

void TOFenceAncient03::vfunc_16() {  }
void TOFenceAncient03::vfunc_15() { *(int*)((char*)this + 0xac) = 0; *(int*)((char*)this + 0xd0) = 0; { int i; for (i = 0; i < 4; i++) { ((TObjPlayer *)this)->clear_player_status_flag((s32)((void*)i), (u32)((void*)8)); } } }
void TOFenceAncient03::vfunc_14() { *(int*)((char*)this + 0xac) = 1; *(int*)((char*)this + 0xd0) = 1; { int i; for (i = 0; i < 4; i++) { set_indexed_flags(this, (void*)i, (void*)8); } } }

extern void *tl_05;

void *TOFenceAncient03::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient03__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__16TOFenceAncient03[];

void TOFenceAncient03::free_shared_resources() {
  s32 var_r31;
  s32 var_r30;
  if (((u32) TOFenceAncient03__texture_lists) != 0)
  {
    var_r30 = 1;
    var_r31 = 4;
    do
    {
      TObjPlayer::free_if_valid(*((s32 *) (((s8 *) TOFenceAncient03__texture_lists) + var_r31)));
      var_r30 += 1;
      var_r31 += 4;
    }
    while (var_r30 < 4);
    if (((u32) TOFenceAncient03__texture_lists) != 0)
    {
      mem_free(TOFenceAncient03__texture_lists);
      TOFenceAncient03__texture_lists = 0;
    }
  }
  if (((void *) TOFenceAncient03__shared_resource_object) != 0)
  {
    TLobby__sub_8001FE7C(TOFenceAncient03__shared_resource_object, 1);
    TOFenceAncient03__shared_resource_object = 0;
  }
}

void TOFenceAncient03::load_resources() {
    O_801673C4 *o;
    Arr_801673C4 *r;
    o = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
    if (o != NULL) {
        o = load_resource_from_descriptor(o, 1, &TOFenceAncient03_resource_descriptor, 0, 0, 0);
    }
    (*(O_801673C4 * *)&TOFenceAncient03__shared_resource_object) = o;
    r = mem_alloc(0x10);
    (*(Arr_801673C4 * *)&TOFenceAncient03__texture_lists) = r;
    r->a = (*(O_801673C4 * *)&TOFenceAncient03__shared_resource_object)->sub->c;
    (*(Arr_801673C4 * *)&TOFenceAncient03__texture_lists)->b = load_gvm_texture_file(lbl_804415F8);
    (*(Arr_801673C4 * *)&TOFenceAncient03__texture_lists)->c = load_gvm_texture_file(lbl_80441610);
    (*(Arr_801673C4 * *)&TOFenceAncient03__texture_lists)->d = load_gvm_texture_file(lbl_80441628);
}

void *__dt__16TOFenceAncient03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TOFenceAncient03;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        ((TUnk_804B1B80 *)arg0)->destroy(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_801674E0_lbl_804B1DB8_size[sizeof(RecoveredGlobal_801674E0_lbl_804B1DB8) == 0x160 ? 1 : -1];
typedef char RecoveredGlobal_801674E0___vt__16TOFenceAncient03_size[sizeof(RecoveredGlobal_801674E0___vt__16TOFenceAncient03) == 0x48 ? 1 : -1];
u8 *TOFenceAncient03__ct(u8 *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    u8 *temp_r4;
    u8 *temp_r6;
    init_fields__13TUnk_804B1B80Fv();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_801674E0___vt__16TOFenceAncient03 *)&__vt__16TOFenceAncient03).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOFenceAncient03__class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    temp_r4 = (u8 *)(*(u8 **)((s8 *)TOFenceAncient03__shared_resource_object + 0x42C));
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)temp_r4 + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)((*(s32 *)&TOFenceAncient03__texture_lists) + (sub_80166EA8__13TUnk_804B1B80Fi((void *) (arg0), (int) (temp_r4)) * 4)) + 0);
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)TOFenceAncient03__shared_resource_object + 0x430)) + 4));
    temp_r6 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xBC));
    temp_f1 = (f32) *(u32 *)((s8 *)temp_r6 + 4);
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) (temp_f1 - lbl_805DB630);
    init_collision_body_parts((void *) (arg0), (void *) (&TOFenceAncient03_collision_body_parts.value), (int) (8), (int) (temp_r6), (f32) (temp_f1));
    refresh_collision_body_centers((void *) (arg0));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    sub_80166E64__13TUnk_804B1B80Fv((void *) (arg0));
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB634;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DB638;
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *bm_fd_obj_n_saku_4x4_model_names[2] = { lbl_80441598, NULL };
__declspec(section ".data") const char *bm_fd_obj_n_saku_4x4_motion_names[2] = { lbl_804415B0, NULL };
BmlResourceDescriptor TOFenceAncient03_resource_descriptor = { lbl_804415C8, bm_fd_obj_n_saku_4x4_model_names, bm_fd_obj_n_saku_4x4_motion_names, 1, 1 };
}
