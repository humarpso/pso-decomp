#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
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

#define M2C_BITWISE(type, expr) ((type)(expr))
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
    virtual M2C_UNK m18();
};
struct VBase18 { char pad[0x18]; };

struct VObj18 : VBase18 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual M2C_UNK m8(f32, f32); };

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8016B0A0_lbl_804B29D0 { M2C_UNK value; u8 remaining[0x28]; };

struct RecoveredGlobal_8016B0A0___vt__14TOKeyAncient01 { M2C_UNK value; u8 remaining[0x70]; };

struct Inner_8016AF84 { u8 pad[0xC]; s32 f0C; };

struct Big_8016AF84 { u8 pad[0x42C]; Inner_8016AF84 *p; };

struct Buf_8016AF84 { s32 a; s32 b; s32 c; s32 d; };

extern "C" {
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv();
void TOKeyAncient01__vt15(u8 *arg0);
M2C_UNK rotate_matrix_y(int, void *);
M2C_UNK rotate_matrix_z(int, void *);
M2C_UNK rotate_matrix_x(int, void *);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TOSignCave03__sub_803DB510(void *);
M2C_UNK TObjDoor__sub_803DC894(void *, int, f32);
void render__14TOKeyAncient01Fv(u8 *arg0);
u8 *TLobby__sub_8001FE7C(void *, s16);
void free__11TOBoss4RockFUi(u32);
void free_if_valid__10TObjPlayerFi(s32);
extern u8 *TOKeyAncient01__data_805D59F8;
extern u32 TOKeyAncient01__data_805D59FC;
void TOKeyAncient01__sub_8016AEFC(void);
u32 TObjEneGibbles__sub_80156780(void *, s32, s32);
u8 * TOKey__ct(void *);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK init_switch_id__5TOKeyFPv(void *);
extern RecoveredGlobal_8016B0A0_lbl_804B29D0 lbl_804B29D0;
extern M2C_UNK __vt__14TOKeyAncient01[];
extern s32 lbl_805D3018;
extern u8 *TOKeyAncient01__data_805D59F8;
extern u32 TOKeyAncient01__data_805D59FC;
extern const f32 lbl_805DB6E8;
extern const f32 lbl_805DB6EC;
extern const f32 lbl_805DB6F0;
extern const f32 lbl_805DB6F4;
extern const f32 lbl_805DB6F8;
u8 *TOKeyAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
Big_8016AF84 *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
Buf_8016AF84 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 TLanguage__sub_801E4874(void *);
extern u8 lbl_804419B8[];
extern u8 lbl_804419D0[];
extern u8 lbl_804419E8[];
extern u8 lbl_804B29C0[];
extern u8 *TOKeyAncient01__data_805D59F8;
extern u32 TOKeyAncient01__data_805D59FC;
void TOKeyAncient01__sub_8016AF84(void);
}

extern "C" {

void TOKeyAncient01__vt14(void *arg0);
void TOKeyAncient01__vt23(void);
void *__dt__14TOKeyAncient01Fv(void *arg0, s16 arg1);
void *create__14TOKeyAncient01FPv(void *arg0);
void set_type__14TOKeyAncient01FPv(void* p);
int TLobby__send_and_handle_60(void*);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
int bswap_16__FPUs(void*);
int fn_8016AD3C(void* a0 = 0);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);

void set_type__14TOKeyAncient01FPv(void* p) { *(s32*)((char*)p + 0x0) = 3; }

void TOKeyAncient01__vt23(void) {  }

void render__14TOKeyAncient01Fv(u8 *arg0) {
    if (((VObj18*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (void *) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1) {
            TObjDoor__sub_803DC894((void *) (M2C_FIELD(arg0, u8 **, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xBC)), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
        } else {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (M2C_FIELD(arg0, u8 **, 0x34) + 8));
            rotate_matrix_z((int) (0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), s32 *, 0x1C)));
            rotate_matrix_x((int) (0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), s32 *, 0x14)));
            rotate_matrix_y((int) (0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), s32 *, 0x18)));
            TOSignCave03__sub_803DB510((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), s32 *, 4)));
            TObjPlayer__sub_803D9B78();
        }
        TObjPlayer__sub_803D9B78();
    }
}

void TOKeyAncient01__vt15(u8 *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    ((VObj_18 *)(arg0))->m18();
}

void TOKeyAncient01__vt14(void *arg0) {
    struct VObj_8016AE84_8016AD58 *o = (struct VObj_8016AE84_8016AD58 *)arg0;
    o->m18();
}

extern void *tl_05;

void *create__14TOKeyAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOKeyAncient01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__14TOKeyAncient01[];

void TOKeyAncient01__sub_8016AEFC(void) {
  s32 var_r31;
  s32 var_r30;
  if (((u32) TOKeyAncient01__data_805D59FC) != 0)
  {
    var_r30 = 1;
    var_r31 = 4;
    do
    {
      free_if_valid__10TObjPlayerFi(*((M2C_UNK *) (((s8 *) TOKeyAncient01__data_805D59FC) + var_r31)));
      var_r30 += 1;
      var_r31 += 4;
    }
    while (var_r30 < 4);
    if (((u32) TOKeyAncient01__data_805D59FC) != 0)
    {
      free__11TOBoss4RockFUi(TOKeyAncient01__data_805D59FC);
      TOKeyAncient01__data_805D59FC = 0;
    }
  }
  if (((void *) TOKeyAncient01__data_805D59F8) != 0)
  {
    TLobby__sub_8001FE7C(TOKeyAncient01__data_805D59F8, 1);
    TOKeyAncient01__data_805D59F8 = 0;
  }
}

void TOKeyAncient01__sub_8016AF84(void) {
    Big_8016AF84 *v = (Big_8016AF84 *)alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (v != NULL) {
        v = TLobby__sub_80020004(v, 1, lbl_804B29C0, 0, 0, 0);
    }
    (*(Big_8016AF84 * *)&TOKeyAncient01__data_805D59F8) = v;
    (*(Buf_8016AF84 * *)&TOKeyAncient01__data_805D59FC) = alloc_buffer__11TOBoss4RockFPv(0x10);
    (*(Buf_8016AF84 * *)&TOKeyAncient01__data_805D59FC)->a = (*(Big_8016AF84 * *)&TOKeyAncient01__data_805D59F8)->p->f0C;
    (*(Buf_8016AF84 * *)&TOKeyAncient01__data_805D59FC)->b = TLanguage__sub_801E4874(lbl_804419B8);
    (*(Buf_8016AF84 * *)&TOKeyAncient01__data_805D59FC)->c = TLanguage__sub_801E4874(lbl_804419D0);
    (*(Buf_8016AF84 * *)&TOKeyAncient01__data_805D59FC)->d = TLanguage__sub_801E4874(lbl_804419E8);
}

void *__dt__14TOKeyAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyAncient01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TOKeyAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    TOKey__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8016B0A0___vt__14TOKeyAncient01 *)&__vt__14TOKeyAncient01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3018;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    init_switch_id__5TOKeyFPv((void *) (arg0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
    } else if (temp_r0 > 3) {
        M2C_FIELD(arg0, s32 *, 0x88) = 3;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD((*(s32 *)&TOKeyAncient01__data_805D59FC), M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x88) * 4));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TOKeyAncient01__data_805D59F8, u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD(TOKeyAncient01__data_805D59F8, u8 **, 0x430), void **, 4));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB6E8);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB6EC;
    TObjEneGibbles__sub_80156780(arg0, (s32) &lbl_804B29D0.value, 1);
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB6F0;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB6F4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) != 2) {
        if (M2C_FIELD(arg0, f32 *, 0x68) < lbl_805DB6F8) {
            M2C_FIELD(arg0, s32 *, 0xD0) = 1;
        } else {
            goto block_7;
        }
    } else {
block_7:
        M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    }
    return arg0;
}

}
