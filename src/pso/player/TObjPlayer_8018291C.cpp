#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80182954_8018291C { char pad[0x18]; };
struct VObj_80182954_8018291C : Base_80182954_8018291C {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
};
struct Base_80182A58_8018291C { char pad[0x18]; };
struct VObj_80182A58_8018291C : Base_80182A58_8018291C {
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
    virtual s32 m12(f32);
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct M2CCopy_28 { u8 bytes[0x28]; };

struct M2CCopy_2C { u8 bytes[0x2c]; };

struct RecoveredGlobal_80182D8C_lbl_80443F20 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80182D8C_lbl_804B5BA8 {
    M2C_UNK value;
    u8 remaining[0x5C];
};

#define F(o,t,p) (*(t*)((u8*)(o)+(p)))
struct CityDoorProbeBase {char pad[0x18];};

struct CityDoorProbe : CityDoorProbeBase {
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
virtual s32 m12(f32);
virtual void m13();virtual void m14();virtual void m15();virtual void m16();
virtual void m17();virtual void m18();virtual void m19();virtual s32 m20();
};

extern "C" {
s32 is_player_in_range__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0);
s32 check_player_in_range__10TObjPlayerFPv(void *arg0, s32 _w1, f32 _w2);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
extern M2C_UNK lbl_804B5BA8[];
void *TObjPlayer__sub_80182D24(void *arg0, s16 arg1);
extern void *lbl_805D4E28;
s32 TLobby__sub_80182E60(void);
    extern const float lbl_805DBC00;
void fn_80182E7C(void* a0);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK TObjEneGibbles__sub_80156780(void *, void *, int, int);
M2C_UNK TObjPlayer__sub_801569F4();
extern RecoveredGlobal_80182D8C_lbl_80443F20 lbl_80443F20;
extern M2C_UNK lbl_804B5BA8[];
extern const f32 lbl_805DBBE8;
u8 *TObjPlayer__sub_80182D8C(u8 *arg0, M2C_UNK arg1, s32 arg2, u8 *arg3);
void city_door_tick_opening(void* o);
}

extern "C" {

struct Vec_8018291C { char pad14[0x14]; f32 x; f32 y; };
struct Base_8018291C { char pad[0x18]; };
struct VObj_8018291C : Base_8018291C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m10(f32, f32);
    char pad2[0xB8 - 0x18 - 4];
    Vec_8018291C *m;
};
struct Base_80182C04_8018291C { char pad[0x18]; };
struct VObj_80182C04_8018291C : Base_80182C04_8018291C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual s32 m12(f32);
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17();
    virtual void m18();
};

void TObjPlayer__sub_8018291C(VObj_8018291C *arg0);
void TObjPlayer__sub_801829E8(s32 arg0);
void TObjPlayer__sub_80182A20(s32 arg0);
void begin_state_1__10TObjPlayerFPv(void *arg0);
void check_ground_or_fall__10TObjPlayerFPv(void *arg0);
void dispatch_state__10TObjPlayerFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
f32 TObjPlayer__sub_80141CF8(s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_field_3e0__12TBoss3VoloptFPv();

void TObjPlayer__sub_8018291C(VObj_8018291C *arg0) {
    arg0->m10(arg0->m->x, arg0->m->y);
}

void dispatch_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        ((VObj_80182954_8018291C *)arg0)->m13();
        return;
    case 1:
        ((VObj_80182954_8018291C *)arg0)->m15();
        return;
    case 2:
        ((VObj_80182954_8018291C *)arg0)->m16();
        return;
    case 3:
        ((VObj_80182954_8018291C *)arg0)->m14();
        return;
    }
}

void TObjPlayer__sub_801829E8(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x42A04, arg0 + 0x38, 0, 0);
}

void TObjPlayer__sub_80182A20(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x42A05, arg0 + 0x38, 0, 0);
}

void check_ground_or_fall__10TObjPlayerFPv(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xB8);
    if (((VObj_80182A58_8018291C *)arg0)->m12(M2C_FIELD(temp_r4, f32 *, 8)) == 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        ((VObj_80182A58_8018291C *)arg0)->m17();
    }
}

void city_door_tick_opening(void* o) {
void* params=F(o,void*,0xB8);
if(((CityDoorProbe*)o)->m12(F(params,f32,8))==0) {
 F(o,s32,0xAC)=3;((CityDoorProbe*)o)->m17();return;
}
F(o,f32,0xB4)=F(o,f32,0xB4)+F(F(o,void*,0xB8),f32,0);
f32 last=F(o,f32,0xB0);
if(F(o,f32,0xB4)>=last) {F(o,f32,0xB4)=F(o,f32,0xB0);F(o,s32,0xAC)=2;}
}

void begin_state_1__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;
    VObj_80182C04_8018291C *obj = (VObj_80182C04_8018291C *)arg0;

    temp_r4 = M2C_FIELD(arg0, void **, 0xB8);
    if (obj->m12(M2C_FIELD(temp_r4, f32 *, 4)) != 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        obj->m18();
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
    }
}

s32 is_player_in_range__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r30;

    var_r30 = 0;
loop_1:
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r30);
    if ((temp_r3 != 0) && ((temp_r3_2 = get_field_3e0__12TBoss3VoloptFPv(), ((temp_r3_2 == 0) != 0)) || (temp_r3_2 == 0x12)) && (TObjPlayer__sub_80141CF8(arg1, temp_r3 + 0x38) < farg0)) {
        return 1;
    }
    var_r30 += 1;
    if (var_r30 >= 4) {
        return 0;
    }
    goto loop_1;
}
s32 check_player_in_range__10TObjPlayerFPv(void *arg0, s32 _w1, f32 _w2) { return is_player_in_range__10TObjPlayerFiif((s32)(arg0), (s32)((s8 *)arg0 + 0x38), _w2); }
void *TObjPlayer__sub_80182D24(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5BA8;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80182D8C_lbl_80443F20_size[sizeof(RecoveredGlobal_80182D8C_lbl_80443F20) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80182D8C_lbl_804B5BA8_size[sizeof(RecoveredGlobal_80182D8C_lbl_804B5BA8) == 0x60 ? 1 : -1];
u8 *TObjPlayer__sub_80182D8C(u8 *arg0, M2C_UNK arg1, s32 arg2, u8 *arg3) {
    struct CopyStack_80182D8C { u8 bytes[0x2C]; };
    CopyStack_80182D8C copy_storage_80182D8C;
    u8 *temp_r4;
    u8 *temp_r6;
    TObjPlayer__sub_801569F4();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80182D8C_lbl_804B5BA8 *)&lbl_804B5BA8).value;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    temp_r4 = (u8 *)&lbl_80443F20.value - 4;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DBBE8;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805DBBE8;
    M2C_FIELD(arg0, u8 **, 0xB8) = arg3;
    *(M2CCopy_2C *)(copy_storage_80182D8C.bytes) = *(const M2CCopy_2C *)((s32) temp_r4 + 4);
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xB8));
    (*(f32 *)(copy_storage_80182D8C.bytes + 0xC)) = M2C_FIELD(temp_r6, f32 *, 0xC);
    (*(f32 *)(copy_storage_80182D8C.bytes + 0x10)) = M2C_FIELD(temp_r6, f32 *, 0x10);
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) ((copy_storage_80182D8C.bytes)), (int) (1), (int) (temp_r6));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

s32 TLobby__sub_80182E60(void) {
    if ((void *) lbl_805D4E28 == NULL) {
        return -1;
    }
    return M2C_FIELD(lbl_805D4E28, s32 *, 0x1C);
}
void fn_80182E7C(void* a0) { *(float*)((char*)a0 + 0x9c) = lbl_805DBC00; *(int*)((char*)a0 + 0x90) = 1; }

}
