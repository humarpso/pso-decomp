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

struct RecoveredGlobal_80166D5C_lbl_804B1BE8 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_80166D5C___vt__16TOFenceAncient01 {
    M2C_UNK value;
    u8 remaining[0x40];
};

struct Sub_80166C40 { u8 pad[0xC]; void *c; };

struct O_80166C40 { u8 pad[0x42C]; Sub_80166C40 *sub; };

struct Arr_80166C40 { void *a; s32 b; s32 c; s32 d; };

extern "C" {
s32 fn_80166E64(u8 *arg0);
u8 *TLobby__sub_8001FE7C(void *, s16);
void free__11TOBoss4RockFUi(u32);
void free_if_valid__10TObjPlayerFi(s32);
extern u8 *TOFenceAncient01__data_805D59B0;
extern u32 TOFenceAncient01__data_805D59B4;
void TOFenceAncient01__sub_80166BB8(void);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK init_collision_body_parts(void *, void *, int, int, f32);
M2C_UNK init_fields__16TOFenceAncient01FPv();
s32 fn_80166E64(u8 *arg0);
s32 fn_80166EA8(u8 *arg0, int);
extern RecoveredGlobal_80166D5C_lbl_804B1BE8 lbl_804B1BE8;
extern M2C_UNK __vt__16TOFenceAncient01[];
extern s32 lbl_805D2FC8;
extern u8 *TOFenceAncient01__data_805D59B0;
extern u32 TOFenceAncient01__data_805D59B4;
extern const f32 lbl_805DB610;
extern const f32 lbl_805DB614;
extern const f32 lbl_805DB618;
u8 *TOFenceAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
O_80166C40 *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
O_80166C40 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
Arr_80166C40 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 load_gvm_texture_file(void *);
extern char lbl_80441498[];
extern char lbl_804414B0[];
extern char lbl_804414C8[];
extern char lbl_804B1BD8[];
extern u8 *TOFenceAncient01__data_805D59B0;
extern u32 TOFenceAncient01__data_805D59B4;
void TOFenceAncient01__sub_80166C40(void);
}

extern "C" {

void TOFenceAncient02__vt12(void* p);
void TOFenceAncient02__vt13(void* p);
void TOFenceAncient02__vt14(void);
void *__dt__16TOFenceAncient01Fv(void *arg0, s16 arg1);
void *create__16TOFenceAncient01FPv(void *arg0);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
M2C_UNK destroy__16TOFenceAncient01FPvs(void *, M2C_UNK);
int set_indexed_flags(void*, void*, void*);

extern void *tl_05;

void *create__16TOFenceAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__16TOFenceAncient01[];

void TOFenceAncient01__sub_80166BB8(void) {
  s32 var_r31;
  s32 var_r30;
  if (((u32) TOFenceAncient01__data_805D59B4) != 0)
  {
    var_r30 = 1;
    var_r31 = 4;
    do
    {
      free_if_valid__10TObjPlayerFi(*((M2C_UNK *) (((s8 *) TOFenceAncient01__data_805D59B4) + var_r31)));
      var_r30 += 1;
      var_r31 += 4;
    }
    while (var_r30 < 4);
    if (((u32) TOFenceAncient01__data_805D59B4) != 0)
    {
      free__11TOBoss4RockFUi(TOFenceAncient01__data_805D59B4);
      TOFenceAncient01__data_805D59B4 = 0;
    }
  }
  if (((void *) TOFenceAncient01__data_805D59B0) != 0)
  {
    TLobby__sub_8001FE7C(TOFenceAncient01__data_805D59B0, 1);
    TOFenceAncient01__data_805D59B0 = 0;
  }
}

void TOFenceAncient01__sub_80166C40(void) {
    O_80166C40 *o;
    Arr_80166C40 *r;
    o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (o != NULL) {
        o = TLobby__sub_80020004(o, 1, lbl_804B1BD8, 0, 0, 0);
    }
    (*(O_80166C40 * *)&TOFenceAncient01__data_805D59B0) = o;
    r = alloc_buffer__11TOBoss4RockFPv(0x10);
    (*(Arr_80166C40 * *)&TOFenceAncient01__data_805D59B4) = r;
    r->a = (*(O_80166C40 * *)&TOFenceAncient01__data_805D59B0)->sub->c;
    (*(Arr_80166C40 * *)&TOFenceAncient01__data_805D59B4)->b = load_gvm_texture_file(lbl_80441498);
    (*(Arr_80166C40 * *)&TOFenceAncient01__data_805D59B4)->c = load_gvm_texture_file(lbl_804414B0);
    (*(Arr_80166C40 * *)&TOFenceAncient01__data_805D59B4)->d = load_gvm_texture_file(lbl_804414C8);
}

void *__dt__16TOFenceAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOFenceAncient01;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy__16TOFenceAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80166D5C_lbl_804B1BE8_size[sizeof(RecoveredGlobal_80166D5C_lbl_804B1BE8) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_80166D5C___vt__16TOFenceAncient01_size[sizeof(RecoveredGlobal_80166D5C___vt__16TOFenceAncient01) == 0x44 ? 1 : -1];
u8 *TOFenceAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    f32 temp_f1;
    u8 *temp_r4;
    u8 *temp_r6;
    init_fields__16TOFenceAncient01FPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80166D5C___vt__16TOFenceAncient01 *)&__vt__16TOFenceAncient01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2FC8;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    temp_r4 = (u8 *)(M2C_FIELD(TOFenceAncient01__data_805D59B0, u8 **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r4, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(((*(s32 *)&TOFenceAncient01__data_805D59B4) + (fn_80166EA8((u8 *)((void *) (arg0)), (int)((int) (temp_r4))) * 4)), s32 *, 0);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD(TOFenceAncient01__data_805D59B0, u8 **, 0x430), void **, 4));
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xBC));
    temp_f1 = (f32) M2C_FIELD(temp_r6, u32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) (temp_f1 - lbl_805DB610);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B1BE8.value), (int) (3), (int) (temp_r6), (f32) (temp_f1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    fn_80166E64((u8 *)((void *) (arg0)));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB614;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB618;
    return arg0;
}

s32 fn_80166E64(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xCC);
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xCC);
}

s32 fn_80166EA8(u8 *arg0, int _w1) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD4);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    } else if (temp_r0 >= 4) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 3;
    }
    return M2C_FIELD(arg0, s32 *, 0xD4);
}

void TOFenceAncient02__vt14(void) {  }
void TOFenceAncient02__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; clear_player_status_flag__10TObjPlayerFPviUi(p, (void*)0, (void*)8); }
void TOFenceAncient02__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; set_indexed_flags(p, (void*)0, (void*)8); }

}
