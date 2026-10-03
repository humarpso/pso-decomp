#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802CA8C8_eabed01 { char pad[0x18]; };
struct VObj_802CA8C8_eabed01 : Base_802CA8C8_eabed01 {
#define V(n) virtual void m##n();
    V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)
    V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
    V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)
    V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
    V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)
    V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
    V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)
    V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
    V(80)V(81)V(82)
#undef V
    virtual void m83();
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_802CA9AC_lbl_804E0FB8 { M2C_UNK value; u8 remaining[0x28]; };

struct RecoveredGlobal_802CA9AC___vt__14TOTrapSeabed01 { M2C_UNK value; u8 remaining[0x168]; };

extern "C" {
s32 TObjFish__sub_8001ED9C(int, int);
s32 get_bml_model(int, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TOTrap__ct(void *);
s32 TOTrapSeabed01__sub_802CA5F4(void *);
extern RecoveredGlobal_802CA9AC_lbl_804E0FB8 lbl_804E0FB8;
extern M2C_UNK __vt__14TOTrapSeabed01[];
extern s32 lbl_805D3F10;
extern u32 TOTrapSeabed01__data_805D6810;
extern const f32 lbl_805DE640;
extern const f32 TOTrapSeabed01__data_805DE644;
u8 *TOTrapSeabed01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 get_bml_model(int, int);
void *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32, s32);
u32 load_gvm_texture_file(void *);
s32 TObjDoorJung__sub_8023DBEC(u32, void *);
extern u8 lbl_804720E8[];
extern u8 lbl_80472100[];
extern u8 lbl_804E0FA8[];
extern u32 TOTrapSeabed01__data_805D6810;
extern u32 TOTrapSeabed01__data_805D6814;
extern s32 lbl_805D6818;
extern s32 lbl_805D681C;
extern s32 lbl_805D6820;
void TOTrapSeabed01__sub_802CA820(void);
}

extern "C" {

void TOTrapSeabed01__vt4(void *arg0, s16 *arg1, s32 arg2);
void TOTrapSeabed01__vt82(void);
void *__dt__14TOTrapSeabed01Fv(void *arg0, s16 arg1);
void *create__14TOTrapSeabed01FPv(void *arg0);
void free_static_resources__14TOTrapSeabed01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_80226294(s32);
M2C_UNK TLobby__sub_803DA16C(void*);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__6TOTrapFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK fn_802C9D38(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK set_flag8__6TLobbyFPv(void *);

void TOTrapSeabed01__vt82(void) {  }

extern void *tl_05;

void *create__14TOTrapSeabed01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x35C);
    if (o != NULL) {
        o = TOTrapSeabed01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOTrapSeabed01__data_805D6810;
extern u32 TOTrapSeabed01__data_805D6814;

void free_static_resources__14TOTrapSeabed01Fv(void) {
    if ((u32) TOTrapSeabed01__data_805D6814 != 0U) {
        TLobby__sub_803DA16C((void*)TOTrapSeabed01__data_805D6814);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TOTrapSeabed01__data_805D6814);
        TOTrapSeabed01__data_805D6814 = 0U;
    }
    if ((u32) TOTrapSeabed01__data_805D6810 != 0U) {
        TLobby__sub_8001FE7C((void*)TOTrapSeabed01__data_805D6810, 1);
        TOTrapSeabed01__data_805D6810 = 0U;
    }
}

void TOTrapSeabed01__sub_802CA820(void) {
    void *p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != 0) {
        p = TLobby__sub_80020004(p, 5, lbl_804E0FA8, 0, 0, 0);
    }
    TOTrapSeabed01__data_805D6810 = (u32)p;
    TOTrapSeabed01__data_805D6814 = load_gvm_texture_file(lbl_804720E8);
    s32 n = count_linked_switches__23TObjSeabedSuisoBrakableFUii(get_bml_model(TOTrapSeabed01__data_805D6810, 0), 5);
    u32 t = TOTrapSeabed01__data_805D6814;
    lbl_805D6818 = n;
    lbl_805D681C = 0;
    lbl_805D6820 = -1;
    if (t != 0U) {
        lbl_805D6820 = TObjDoorJung__sub_8023DBEC(t, lbl_80472100);
    }
}

void TOTrapSeabed01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 4) {
        if (arg2 == 1) {
            ((VObj_802CA8C8_eabed01 *)arg0)->m83();
        }
        s32 tmp = M2C_FIELD(arg0, s32 *, 0x358);
        if (tmp >= 0) {
            TLobby__sub_80226294(tmp);
            tmp = -1;
            M2C_FIELD(arg0, s32 *, 0x358) = tmp;
        }
        fn_802C9D38(arg0);
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK __vt__14TOTrapSeabed01[];

void *__dt__14TOTrapSeabed01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOTrapSeabed01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__6TOTrapFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TOTrapSeabed01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TOTrap__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802CA9AC___vt__14TOTrapSeabed01 *)&__vt__14TOTrapSeabed01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F10;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((int) ((*(s32 *)&TOTrapSeabed01__data_805D6810)), (int) (0));
    M2C_FIELD(arg0, s32 *, 0xF8) = TObjFish__sub_8001ED9C((int) ((*(s32 *)&TOTrapSeabed01__data_805D6810)), (int) (0));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DE640;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) TOTrapSeabed01__data_805DE644;
    TOTrapSeabed01__sub_802CA5F4((void *) (arg0));
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804E0FB8.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x60040000);
    M2C_FIELD(arg0, s32 *, 0x344) = 0;
    M2C_FIELD(arg0, s32 *, 0x358) = -1;
    return arg0;
}

}
