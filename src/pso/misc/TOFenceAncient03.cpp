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

struct RecoveredGlobal_801674E0_lbl_804B1DB8 {
    M2C_UNK value;
    u8 remaining[0x15C];
};

struct RecoveredGlobal_801674E0___vt__16TOFenceAncient03 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct Sub_801673C4 { u8 pad[0xC]; void *c; };

struct O_801673C4 { u8 pad[0x42C]; Sub_801673C4 *sub; };

struct Arr_801673C4 { void *a; s32 b; s32 c; s32 d; };

extern "C" {
u8 *TLobby__sub_8001FE7C(void *, s16);
void free__11TOBoss4RockFUi(u32);
void free_if_valid__10TObjPlayerFi(s32);
extern u8 *TOFenceAncient03__data_805D59C0;
extern u32 TOFenceAncient03__data_805D59C4;
void TOFenceAncient03__sub_8016733C(void);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK TObjEneGibbles__sub_80156780(void *, void *, int, int, f32);
M2C_UNK init_fields__16TOFenceAncient01FPv();
M2C_UNK fn_80166E64(void *);
s32 fn_80166EA8(void *, int);
extern RecoveredGlobal_801674E0_lbl_804B1DB8 lbl_804B1DB8;
extern M2C_UNK __vt__16TOFenceAncient03[];
extern s32 lbl_805D2FD8;
extern u8 *TOFenceAncient03__data_805D59C0;
extern u32 TOFenceAncient03__data_805D59C4;
extern const f32 lbl_805DB630;
extern const f32 lbl_805DB634;
extern const f32 lbl_805DB638;
u8 *TOFenceAncient03__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
O_801673C4 *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
O_801673C4 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
Arr_801673C4 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 TLanguage__sub_801E4874(void *);
extern char lbl_804415F8[];
extern char lbl_80441610[];
extern char lbl_80441628[];
extern char lbl_804B1DA8[];
extern u8 *TOFenceAncient03__data_805D59C0;
extern u32 TOFenceAncient03__data_805D59C4;
void TOFenceAncient03__sub_801673C4(void);
}

extern "C" {

void TOFenceAncient03__vt12(void* p);
void TOFenceAncient03__vt13(void* p);
void TOFenceAncient03__vt14(void);
void *__dt__16TOFenceAncient03Fv(void *arg0, s16 arg1);
void *create__16TOFenceAncient03FPv(void *arg0);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
M2C_UNK destroy__16TOFenceAncient01FPvs(void *, M2C_UNK);
int set_indexed_flags(void*, void*, void*);

void TOFenceAncient03__vt14(void) {  }
void TOFenceAncient03__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; { int i; for (i = 0; i < 4; i++) { clear_player_status_flag__10TObjPlayerFPviUi(p, (void*)i, (void*)8); } } }
void TOFenceAncient03__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; { int i; for (i = 0; i < 4; i++) { set_indexed_flags(p, (void*)i, (void*)8); } } }

extern void *tl_05;

void *create__16TOFenceAncient03FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient03__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__16TOFenceAncient03[];

void TOFenceAncient03__sub_8016733C(void) {
  s32 var_r31;
  s32 var_r30;
  if (((u32) TOFenceAncient03__data_805D59C4) != 0)
  {
    var_r30 = 1;
    var_r31 = 4;
    do
    {
      free_if_valid__10TObjPlayerFi(*((M2C_UNK *) (((s8 *) TOFenceAncient03__data_805D59C4) + var_r31)));
      var_r30 += 1;
      var_r31 += 4;
    }
    while (var_r30 < 4);
    if (((u32) TOFenceAncient03__data_805D59C4) != 0)
    {
      free__11TOBoss4RockFUi(TOFenceAncient03__data_805D59C4);
      TOFenceAncient03__data_805D59C4 = 0;
    }
  }
  if (((void *) TOFenceAncient03__data_805D59C0) != 0)
  {
    TLobby__sub_8001FE7C(TOFenceAncient03__data_805D59C0, 1);
    TOFenceAncient03__data_805D59C0 = 0;
  }
}

void TOFenceAncient03__sub_801673C4(void) {
    O_801673C4 *o;
    Arr_801673C4 *r;
    o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (o != NULL) {
        o = TLobby__sub_80020004(o, 1, lbl_804B1DA8, 0, 0, 0);
    }
    (*(O_801673C4 * *)&TOFenceAncient03__data_805D59C0) = o;
    r = alloc_buffer__11TOBoss4RockFPv(0x10);
    (*(Arr_801673C4 * *)&TOFenceAncient03__data_805D59C4) = r;
    r->a = (*(O_801673C4 * *)&TOFenceAncient03__data_805D59C0)->sub->c;
    (*(Arr_801673C4 * *)&TOFenceAncient03__data_805D59C4)->b = TLanguage__sub_801E4874(lbl_804415F8);
    (*(Arr_801673C4 * *)&TOFenceAncient03__data_805D59C4)->c = TLanguage__sub_801E4874(lbl_80441610);
    (*(Arr_801673C4 * *)&TOFenceAncient03__data_805D59C4)->d = TLanguage__sub_801E4874(lbl_80441628);
}

void *__dt__16TOFenceAncient03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOFenceAncient03;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy__16TOFenceAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_801674E0_lbl_804B1DB8_size[sizeof(RecoveredGlobal_801674E0_lbl_804B1DB8) == 0x160 ? 1 : -1];
typedef char RecoveredGlobal_801674E0___vt__16TOFenceAncient03_size[sizeof(RecoveredGlobal_801674E0___vt__16TOFenceAncient03) == 0x48 ? 1 : -1];
u8 *TOFenceAncient03__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    f32 temp_f1;
    u8 *temp_r4;
    u8 *temp_r6;
    init_fields__16TOFenceAncient01FPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801674E0___vt__16TOFenceAncient03 *)&__vt__16TOFenceAncient03).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2FD8;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    temp_r4 = (u8 *)(M2C_FIELD(TOFenceAncient03__data_805D59C0, u8 **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r4, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(((*(s32 *)&TOFenceAncient03__data_805D59C4) + (fn_80166EA8((void *) (arg0), (int) (temp_r4)) * 4)), s32 *, 0);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD(TOFenceAncient03__data_805D59C0, u8 **, 0x430), void **, 4));
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xBC));
    temp_f1 = (f32) M2C_FIELD(temp_r6, u32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) (temp_f1 - lbl_805DB630);
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804B1DB8.value), (int) (8), (int) (temp_r6), (f32) (temp_f1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    fn_80166E64((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB634;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB638;
    return arg0;
}

}
