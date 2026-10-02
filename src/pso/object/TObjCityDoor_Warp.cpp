#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 *TObjPlayer__sub_80182D8C(void *, M2C_UNK, s32, void *);
u8 *TObjCityDoor_Shop__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_801819CC(M2C_UNK);
}
#define FOLD_F(o,t,p) (*(t*)((u8*)(o)+(p)))
struct Base_80182600_8018245C { char pad[0x18]; };
struct VObj_80182600_8018245C : Base_80182600_8018245C {
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
    virtual void m19();
};

extern "C" {

struct Base_8018257c_8018245C { u8 pad[0x18]; };
struct VObj_8018257c_8018245C : Base_8018257c_8018245C {
    virtual void m0() = 0;
    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual void m8() = 0;
    virtual void m9() = 0;
    virtual void m10() = 0;
    virtual void m11() = 0;
    virtual void m12() = 0;
    virtual void m13() = 0;
    virtual void m14() = 0;
    virtual void m15() = 0;
    virtual void m16() = 0;
    virtual void m17() = 0;
    virtual void m18() = 0;
    virtual void m19() = 0;
    virtual s32 m20() = 0;
};

void TObjCityDoor_Guild__sub_80182600(void *arg0);
void *TObjCityDoor_Warp__create(void *arg0);
void *dt__17TObjCityDoor_WarpFPvs(void *arg0, s16 arg1);
void teardown_door__17TObjCityDoor_WarpFPv(u8 *arg0);
s32 TLobby__sub_801819CC(M2C_UNK);
M2C_UNK TLobby__sub_801819E4(M2C_UNK);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
void *TObjCityDoor_Warp__ct(void *, void *, void *);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
void TObjPlayer__sub_80182D24(void *, int);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

void *TObjCityDoor_Warp__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjCityDoor_Warp__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5A94[];

void *dt__17TObjCityDoor_WarpFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5A94;
        TObjPlayer__sub_80182D24(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u8 lbl_80443F84[]; extern s32 lbl_805D3258;
void *TObjCityDoor_Warp__ct(void *o, void *parent, void *set) {
 TObjPlayer__sub_80182D8C(o,(s32)parent,(s32)set,lbl_80443F84);
 FOLD_F(o,s32*,0x18)=lbl_804B5A94;FOLD_F(o,s32,0)=lbl_805D3258;
 FOLD_F(o,f32,0xB0)=(f32)(FOLD_F(TLobby__sub_801819CC(8),u32,4)-1);
 return o;
}

extern s32 lbl_805D5B2C;

void teardown_door__17TObjCityDoor_WarpFPv(u8 *arg0) {

    if (((VObj_8018257c_8018245C *)arg0)->m20() != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjDoor__sub_803DC894(TLobby__sub_801819E4(0x15), TLobby__sub_801819CC(0xC), M2C_FIELD(arg0, f32 *, 0xB4));
        TObjPlayer__sub_803D9B78();
    }
}

void TObjCityDoor_Guild__sub_80182600(void *arg0) {
    struct VObj_80182600_8018245C *o = (struct VObj_80182600_8018245C *)arg0;
    o->m19();
}

}

struct Base_8018274C_8018262C { char pad[0x18]; };
struct VObj_8018274C_8018262C : Base_8018274C_8018262C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual s32 m20();
};
struct Base_801827CC_8018262C { char pad[0x18]; };
struct VObj_801827CC_8018262C : Base_801827CC_8018262C {
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
    virtual void m19();
};

extern "C" {

void *TObjCityDoor_Guild__create(void *arg0);
void TObjCityDoor_Shop__sub_801827CC(void *arg0);
void *dt__18TObjCityDoor_GuildFPvs(void *arg0, s16 arg1);
void render_door__18TObjCityDoor_GuildFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
void *TObjCityDoor_Guild__ct(void *, void *, void *);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
void TObjPlayer__sub_80182D24(void *, int);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

void *TObjCityDoor_Guild__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjCityDoor_Guild__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5AF0[];

void *dt__18TObjCityDoor_GuildFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5AF0;
        TObjPlayer__sub_80182D24(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u8 lbl_80443F68[]; extern s32 lbl_805D3254;
void *TObjCityDoor_Guild__ct(void *o, void *parent, void *set) {
 TObjPlayer__sub_80182D8C(o,(s32)parent,(s32)set,lbl_80443F68);
 FOLD_F(o,s32*,0x18)=lbl_804B5AF0;FOLD_F(o,s32,0)=lbl_805D3254;
 FOLD_F(o,f32,0xB0)=(f32)(FOLD_F(TLobby__sub_801819CC(12),u32,4)-1);
 return o;
}

extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;

void render_door__18TObjCityDoor_GuildFPv(u8 *arg0) {
    if (((VObj_8018274C_8018262C *)arg0)->m20() != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0xB8), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x54), M2C_FIELD(arg0, f32 *, 0xB4));
        TObjPlayer__sub_803D9B78();
    }
}

void TObjCityDoor_Shop__sub_801827CC(void *arg0) {
    struct VObj_801827CC_8018262C *o = (struct VObj_801827CC_8018262C *)arg0;
    o->m19();
}

}

struct RecoveredGlobal_8018289C_lbl_80443F4C
{
  M2C_UNK value;
  u8 remaining[0x18];
};

struct RecoveredGlobal_8018289C_lbl_804B5B4C
{
  M2C_UNK value;
  u8 remaining[0x58];
};

extern "C" {
u8 *TObjPlayer__sub_80182D8C(void *, M2C_UNK, s32, void *);
extern RecoveredGlobal_8018289C_lbl_80443F4C lbl_80443F4C;
extern RecoveredGlobal_8018289C_lbl_804B5B4C lbl_804B5B4C;
extern s32 lbl_805D3250;
extern u8 *lbl_805D5B28;
u8 *TObjCityDoor_Shop__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *TObjCityDoor_Shop__create(void *arg0);
void *dt__17TObjCityDoor_ShopFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_80182D24(void *, int);

extern void *tl_05;

void *TObjCityDoor_Shop__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjCityDoor_Shop__ct)(o, tl_05, arg0);
    }
    return o;
}

void *dt__17TObjCityDoor_ShopFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)&lbl_804B5B4C;
        TObjPlayer__sub_80182D24(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

extern "C" {

typedef struct RecoveredGlobal_8018289C_lbl_80443F4C RecoveredGlobal_8018289C_lbl_80443F4C;
typedef struct RecoveredGlobal_8018289C_lbl_804B5B4C RecoveredGlobal_8018289C_lbl_804B5B4C;
typedef char RecoveredGlobal_8018289C_lbl_80443F4C_size[((sizeof(RecoveredGlobal_8018289C_lbl_80443F4C)) == 0x1C) ? (1) : (-1)];
typedef char RecoveredGlobal_8018289C_lbl_804B5B4C_size[((sizeof(RecoveredGlobal_8018289C_lbl_804B5B4C)) == 0x5C) ? (1) : (-1)];
u8 *TObjCityDoor_Shop__ct(u8 *arg0, s32 arg1, s32 arg2) {
  unsigned int new_var2;
  M2C_UNK *new_var;
  new_var = &lbl_804B5B4C.value;
  TObjPlayer__sub_80182D8C(arg0, arg1, arg2, &lbl_80443F4C.value);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = new_var;
  *((s32 *) (((s8 *) arg0) + 0)) = (s32) lbl_805D3250;
  new_var2 = 1;
  *((f32 *) (((s8 *) arg0) + 0xB0)) = (f32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) (*((u8 **) (((s8 *) lbl_805D5B28) + 0x430)))) + 0x54)))) + 4))) - new_var2);
  return arg0;
}

}
