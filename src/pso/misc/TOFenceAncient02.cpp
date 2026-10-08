#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8016713C_lbl_804B1CD0 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_8016713C___vt__16TOFenceAncient02 {
    M2C_UNK value;
    u8 remaining[0x40];
};

struct Sub_80167020 { u8 pad[0xC]; void *c; };

struct O_80167020 { u8 pad[0x42C]; Sub_80167020 *sub; };

struct Arr_80167020 { void *a; s32 b; s32 c; s32 d; };

extern "C" {
u8 *TLobby__sub_8001FE7C(void *, s16);
void free__11TOBoss4RockFUi(u32);
void free_if_valid__10TObjPlayerFi(s32);
extern u8 *TOFenceAncient02__data_805D59B8;
extern u32 TOFenceAncient02__data_805D59BC;
void TOFenceAncient02__sub_80166F98(void);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK init_collision_body_parts(void *, void *, int, int, f32);
M2C_UNK init_fields__16TOFenceAncient01FPv();
M2C_UNK fn_80166E64(void *);
s32 fn_80166EA8(void *, int);
extern RecoveredGlobal_8016713C_lbl_804B1CD0 lbl_804B1CD0;
extern M2C_UNK __vt__16TOFenceAncient02[];
extern s32 lbl_805D2FD0;
extern u8 *TOFenceAncient02__data_805D59B8;
extern u32 TOFenceAncient02__data_805D59BC;
extern const f32 lbl_805DB620;
extern const f32 lbl_805DB624;
extern const f32 lbl_805DB628;
u8 *TOFenceAncient02__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
O_80167020 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
O_80167020 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
Arr_80167020 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 load_gvm_texture_file(void *);
extern char lbl_80441548[];
extern char lbl_80441560[];
extern char lbl_80441578[];
extern char lbl_804B1CC0[];
extern u8 *TOFenceAncient02__data_805D59B8;
extern u32 TOFenceAncient02__data_805D59BC;
void load_assets__16TOFenceAncient02Fv(void);
}

extern "C" {

void *__dt__16TOFenceAncient02Fv(void *arg0, s16 arg1);
void *create__16TOFenceAncient02FPv(void *arg0);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy__16TOFenceAncient01FPvs(void *, M2C_UNK);

extern void *tl_05;

void *create__16TOFenceAncient02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient02__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__16TOFenceAncient02[];

void TOFenceAncient02__sub_80166F98(void) {
  s32 var_r31;
  s32 var_r30;
  int new_var;
  if (((u32) TOFenceAncient02__data_805D59BC) != 0)
  {
    var_r30 = 1;
    var_r31 = 4;
    do
    {
      free_if_valid__10TObjPlayerFi(*((M2C_UNK *) (((s8 *) TOFenceAncient02__data_805D59BC) + var_r31)));
      var_r30 += 1;
      var_r31 += 4;
    }
    while (var_r30 < 4);
    if (((u32) TOFenceAncient02__data_805D59BC) != 0)
    {
      free__11TOBoss4RockFUi(TOFenceAncient02__data_805D59BC);
      TOFenceAncient02__data_805D59BC = 0;
    }
  }
  new_var = ((void *) TOFenceAncient02__data_805D59B8) != 0;
  if (new_var)
  {
    TLobby__sub_8001FE7C(TOFenceAncient02__data_805D59B8, 1);
    TOFenceAncient02__data_805D59B8 = 0;
  }
}

void load_assets__16TOFenceAncient02Fv(void) {
    O_80167020 *o;
    Arr_80167020 *r;
    o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (o != NULL) {
        o = load_resource_from_descriptor(o, 1, lbl_804B1CC0, 0, 0, 0);
    }
    (*(O_80167020 * *)&TOFenceAncient02__data_805D59B8) = o;
    r = alloc_buffer__11TOBoss4RockFPv(0x10);
    (*(Arr_80167020 * *)&TOFenceAncient02__data_805D59BC) = r;
    r->a = (*(O_80167020 * *)&TOFenceAncient02__data_805D59B8)->sub->c;
    (*(Arr_80167020 * *)&TOFenceAncient02__data_805D59BC)->b = load_gvm_texture_file(lbl_80441548);
    (*(Arr_80167020 * *)&TOFenceAncient02__data_805D59BC)->c = load_gvm_texture_file(lbl_80441560);
    (*(Arr_80167020 * *)&TOFenceAncient02__data_805D59BC)->d = load_gvm_texture_file(lbl_80441578);
}

void *__dt__16TOFenceAncient02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOFenceAncient02;
        unregister_object_by_id((M2C_UNK *)arg0);
        free_collision_body_parts(arg0);
        destroy__16TOFenceAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8016713C_lbl_804B1CD0_size[sizeof(RecoveredGlobal_8016713C_lbl_804B1CD0) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_8016713C___vt__16TOFenceAncient02_size[sizeof(RecoveredGlobal_8016713C___vt__16TOFenceAncient02) == 0x44 ? 1 : -1];
u8 *TOFenceAncient02__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    f32 temp_f1;
    u8 *temp_r4;
    u8 *temp_r6;
    init_fields__16TOFenceAncient01FPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8016713C___vt__16TOFenceAncient02 *)&__vt__16TOFenceAncient02).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2FD0;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    temp_r4 = (u8 *)(M2C_FIELD(TOFenceAncient02__data_805D59B8, u8 **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r4, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(((*(s32 *)&TOFenceAncient02__data_805D59BC) + (fn_80166EA8((void *) (arg0), (int) (temp_r4)) * 4)), s32 *, 0);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD(TOFenceAncient02__data_805D59B8, u8 **, 0x430), void **, 4));
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xBC));
    temp_f1 = (f32) M2C_FIELD(temp_r6, u32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) (temp_f1 - lbl_805DB620);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B1CD0.value), (int) (3), (int) (temp_r6), (f32) (temp_f1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    fn_80166E64((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB624;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB628;
    return arg0;
}

}
