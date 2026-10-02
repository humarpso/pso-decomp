#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TBJ_8003688C { char pad[0x18]; };
struct VTbj_8003688C : TBJ_8003688C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93(); virtual void m94();
    virtual void m95(); virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100(); virtual void m101();
    virtual void m102();
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
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual M2C_UNK m81();
    virtual void m82();
    virtual void m83();
    virtual s32 m84();
    virtual M2C_UNK m85(s16, M2C_UNK);
    virtual M2C_UNK m86();
};

struct VBase_18_67c185 { char pad[0x18]; };

struct VObj_18_67c185 : VBase_18_67c185 {
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
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual M2C_UNK m95();
    virtual M2C_UNK m96();
};

struct RecoveredGlobal_80036FC8___vt__11TBoss2Joint {
    M2C_UNK value;
    u8 remaining[0x1A4];
};

struct RecoveredGlobal_80036A90_lbl_80435A68 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct V3_80037178 { f32 x, y, z; };

struct Obj_80037178 { u8 pad[0x1c]; V3_80037178 ring[20]; s32 idx; };

typedef struct Vec_80037074 {
    f32 x, y, z;
} Vec_80037074;

typedef struct Laser_80037074 {
    u8 pad0[0x1C];
    Vec_80037074 pts[20];
    s32 head;
    s32 cur;
    s32 limit;
    s32 unk118;
    void *ptcl;
    s32 state;
} Laser_80037074;

struct JBase_80036EA8 { char pad[0x18]; };

struct Joint_80036EA8 : JBase_80036EA8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(s16, s32); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93(); virtual void m94();
    u8 pad1C[0x24 - 0x1C];
    s32 unk24;
    u8 pad28[0x34 - 0x28];
    s32 unk34;
    u8 pad38[0x2B8 - 0x38];
    s16 hp2B8;
    u8 pad2BA[0x326 - 0x2BA];
    s16 unk326;
    u8 pad328[0x32C - 0x328];
    s16 hp32C;
    u8 pad32E[0x33E - 0x32E];
    s16 unk33E;
    u8 pad340[0x350 - 0x340];
    void *unk350;
    u8 pad354[0x37C - 0x354];
    f32 unk37C;
    u8 pad380[0x38C - 0x380];
    s32 unk38C;
    u8 pad390[4];
    s32 unk394;
    u8 pad398[0x3A0 - 0x398];
    s32 unk3A0;
    f32 unk3A4;
    f32 unk3A8;
    u8 unk3AC[0x10];
};

typedef struct Param_80036EA8 {
    s32 unk0;
    s32 pad4;
    s32 unk8;
    s32 padC;
    s32 unk10;
    s32 pad14;
    u8 unk18[0x1C];
    u8 unk34[1];
} Param_80036EA8;

extern "C" {
s32 VecCopy__FP3VecPC3Vec(s32, s32);
M2C_UNK TBoss2Joint__sub_80036940(void *);
void update_position_history__11TBoss2JointFi(s32 arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK TObjEneDD__sub_800BBA0C(void *);
M2C_UNK TRaderMapCore__sub_801F99EC(void *, int, int, int, f32);
extern const f32 lbl_805D848C;
void run_task__11TBoss2JointFv(u8 *arg0);
M2C_UNK TObjEneDD__vt91(void *);
M2C_UNK TObjEneDD__vt90(void *);
M2C_UNK TObjEneDD__sub_800BA934(void *);
extern const f32 lbl_805D8258;
extern const f32 lbl_805D847C;
extern const f32 lbl_805D8480;
void TBoss2Joint__vt86(u8 *arg0);
void TBoss2Joint__sub_8003688C(u8 *arg0);
void initialize_enemy_state__9TObjEneDDFPv(void *, s32);
void init_common_from__9TObjEneDDFPvPv(void *, void *);
u8 * TObjEneDD__ct(void *);
extern M2C_UNK __vt__11TBoss2Joint[];
extern s32 lbl_805D26C0;
u8 *TBoss2Joint__ct(u8 *arg0, u8 *arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_80036A90_lbl_80435A68 lbl_80435A68;
extern const f32 TBoss2Joint__data_805D8474;
void TBoss2Joint__sub_80036A90(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
extern const f32 lbl_805D8498;
void TBoss2DeRolLe__sub_80037178(Obj_80037178 *self, V3_80037178 *src);
void *TBoss8Dragon__sub_8008741C(Vec_80037074 *, s32, s32);
void copy_pos__11TNowLoadingFPvPv(void *, Vec_80037074 *);
void enable__13TParticleCtrlFPv(void *);
void TBoss2LaserLight__sub_80037074(Laser_80037074 *self);
s32 register_object__6TLobbyFPv(s32);
s32 dispatch_shared_handler_b__6TLobbyFPv(s32);
s32 register_boss__6TLobbyFPv(s32);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 TBoss2Joint_get_shell_max_hp(void);
void reset_hp__9TObjEneDDFPv(void *, s32, s32, s32);
void check_state_flag_2__9TObjEneDDFPv(void *);
void init_model__9TObjEneDDFPv(void *, void *, s32);
void init_position_vectors__9TObjEneDDFPv(void *);
extern RecoveredGlobal_80036A90_lbl_80435A68 lbl_80435A68;
extern Param_80036EA8 lbl_80482A50;
extern const f32 lbl_805D846C;
extern const f32 TBoss2Joint__data_805D8474;
extern const f32 lbl_805D8490;
M2C_UNK TBoss2Joint__sub_80036EA8(void *arg0);
}

extern "C" {

void TBoss2Joint__vt26(void);
void TBoss2Joint__vt42(void);
void TBoss2Joint__vt43(void);
void TBoss2Joint__vt44(void);
void TBoss2Joint__vt45(void);
void TBoss2Joint__vt46(void);
void TBoss2Joint__vt47(void);
void TBoss2Joint__vt48(void);
void TBoss2Joint__vt59(void);
void TBoss2Joint__vt60(u8 *arg0);
void TBoss2Joint__vt61(void* p);
void TBoss2Joint__vt91(void *arg0);
void *__dt__11TBoss2JointFv(void *arg0, s16 arg1);
void call_36A90_with_1__11TBoss2JointFPv(void* p);
void update_position_history__11TBoss2JointFi(s32 arg0);
M2C_UNK TBoss2DeRolLe__sub_800339BC(void *, f32, f32);
M2C_UNK TBoss2DeRolLe__sub_80034134(s32, s32, u16);
M2C_UNK TBoss8Dragon__sub_800BB780(void *);
void TObjEneDD__vt0(void *, int);
void TObjEneGibbles__sub_80156720(void *);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);

void TBoss2Joint__sub_8003688C(u8 *arg0) {
  u32 temp_r5;
  s32 *temp_r3;
  s32 *temp_r4;
  u32 temp_r5_2;
  u8 *temp_r6;
  int new_var;
  u8 *temp_r6_2;
  new_var = ~0xFF000000;
  if ((*((s32 *) (((s8 *) arg0) + 0x38C))) & 1)
  {
    temp_r5 = *((u32 *) (((s8 *) arg0) + 0x3A0));
    temp_r6 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x398)));
    *((s32 *) (((s8 *) temp_r6) + 0)) = (s32) (((((temp_r5 >> 0x10U) & new_var) | ((temp_r5 << 0x10) & 0xFF000000)) & (~0xFF0000)) | ((temp_r5 << 0x10) & 0xFF0000));
    *((u16 *) (((s8 *) temp_r6) + 0x10)) = (u16) ((*((u16 *) (((s8 *) temp_r6) + 0x10))) | 0x800);
    *((s16 *) (((s8 *) temp_r6) + (-4))) = 0x2517;
    temp_r4 = (s32 *) (*((s32 **) (((s8 *) arg0) + 0x39C)));
    *temp_r4 = ((*temp_r4) & (~0xFF00)) | ((((u32) (*((u32 *) (((s8 *) arg0) + 0x3A0)))) >> 0x10U) & 0xFF00);
    return;
  }
  temp_r5_2 = *((u32 *) (((s8 *) arg0) + 0x3A0));
  temp_r6_2 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x398)));
  *((s32 *) (((s8 *) temp_r6_2) + 0)) = (s32) (((((temp_r5_2 >> 0x10U) & new_var) | ((temp_r5_2 << 0x10) & 0xFF000000)) & (~0xFF0000)) | ((temp_r5_2 << 0x10) & 0xFF0000));
  *((u16 *) (((s8 *) temp_r6_2) + 0x10)) = (u16) ((*((u16 *) (((s8 *) temp_r6_2) + 0x10))) & 0xFFFFF7FF);
  *((s16 *) (((s8 *) temp_r6_2) + (-4))) = 0x2517;
  temp_r3 = (s32 *) (*((s32 **) (((s8 *) arg0) + 0x39C)));
  *temp_r3 |= 0xFF00;
}

void call_36A90_with_1__11TBoss2JointFPv(void* p) { TBoss2Joint__sub_80036A90((u8 *)((void*)(p)), (s32)((int)(1))); }

typedef char RecoveredGlobal_80036A90_lbl_80435A68_size[sizeof(RecoveredGlobal_80036A90_lbl_80435A68) == 0x20 ? 1 : -1];
void TBoss2Joint__sub_80036A90(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TBoss2Joint__data_805D8474;
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0x3AC), (void *) ((u8 *)&lbl_80435A68.value + (arg1 * 0x10)));
}

void TBoss2Joint__vt91(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 6) {
        TObjEneDD__vt90((void *)(arg0));
        return;
    }
    TObjEneDD__vt91((void *)(arg0));
}

void TBoss2Joint__vt86(u8 *arg0) {
    u8 *temp_r3;
    if (M2C_FIELD(arg0, f32 *, 0x3C) < (lbl_805D8258 - lbl_805D847C)) {
        TObjEneDD__vt91((void *)(arg0));
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFF9);
    } else {
        TObjEneDD__vt90((void *)(arg0));
        if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805D8480) {
            ((VObj_18_67c185 *)(arg0))->m95();
        } else {
            ((VObj_18_67c185 *)(arg0))->m96();
        }
    }
    TObjEneDD__sub_800BA934((void *) (arg0));
}

void update_position_history__11TBoss2JointFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TBoss2Joint__vt59(void) {  }

extern const f32 lbl_805D8484;
extern const f32 lbl_805D8488;

void TBoss2Joint__vt60(u8 *arg0) {
    s32 temp_r31;
    struct TBJ_8003688C *self = (struct TBJ_8003688C *)arg0;

    temp_r31 = M2C_FIELD(self, s16 *, 0x2B8) - M2C_FIELD(self, s16 *, 0x32C);
    if (!(M2C_FIELD(self, s32 *, 0x38C) & 1)) {
        TBoss2Joint__sub_80036A90((u8 *)((void*)(self)), (s32)((int)(0)));
        M2C_FIELD(self, s32 *, 0x394) = (s32) (M2C_FIELD(self, s32 *, 0x394) - temp_r31);
        if ((s32) M2C_FIELD(self, s32 *, 0x394) <= 0) {
            M2C_FIELD(self, s32 *, 0x394) = 0;
            ((VTbj_8003688C *)self)->m102();
        }
    } else {
        TBoss2DeRolLe__sub_800339BC(arg0 + 0x38, lbl_805D8484, lbl_805D8488);
        TBoss2DeRolLe__sub_80034134(M2C_FIELD(self, s32 *, 0x10), temp_r31, M2C_FIELD(self, u16 *, 0x2D4));
    }
    M2C_FIELD(self, s16 *, 0x32C) = (s16) M2C_FIELD(self, s16 *, 0x2B8);
    TBoss8Dragon__sub_800BB780(arg0);
}

void TBoss2Joint__vt61(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffff7ff; }
void TBoss2Joint__vt26(void) {  }

extern M2C_UNK __vt__11TBoss2Joint[];

void run_task__11TBoss2JointFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 0) {
        VecCopy__FP3VecPC3Vec((s32)((void *) (arg0 + 0x38)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x390))));
        ((VObj_18 *)(arg0))->m81();
        if (((VObj_18 *)(arg0))->m84() == 0) {
            ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 3);
        }
        ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 0);
        TObjEneDD__sub_800BBA0C((void *) (arg0));
        TBoss2Joint__sub_80036940((void *) (arg0));
        update_position_history__11TBoss2JointFi((s32)((void *) (arg0)));
        ((VObj_18 *)(arg0))->m86();
        set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
        TRaderMapCore__sub_801F99EC((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805D848C));
    }
}

void *__dt__11TBoss2JointFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TBoss2Joint;
        TObjEneGibbles__sub_80156720(arg0);
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80036FC8___vt__11TBoss2Joint_size[sizeof(RecoveredGlobal_80036FC8___vt__11TBoss2Joint) == 0x1A8 ? 1 : -1];

#pragma push
#pragma opt_propagation off
struct RecoveredGlobal_80036A90_lbl_80435A68;
typedef s32 M2C_UNK;
M2C_UNK TBoss2Joint__sub_80036EA8(void *arg0) {
    Param_80036EA8 *prm;
    Joint_80036EA8 *self = (Joint_80036EA8 *)arg0;
    prm = &lbl_80482A50;
    init_position_vectors__9TObjEneDDFPv(self);
    self->unk34 = 0;
    self->unk24 = 0;
    init_model__9TObjEneDDFPv(self, prm->unk34, 1);
    reset_hp__9TObjEneDDFPv(self, register_boss__6TLobbyFPv(prm->unk0), dispatch_shared_handler_b__6TLobbyFPv(prm->unk8), register_object__6TLobbyFPv(prm->unk10));
    self->hp32C = 0x4E20;
    self->hp2B8 = 0x4E20;
    check_state_flag_2__9TObjEneDDFPv(self);
    self->unk350 = prm->unk18;
    self->unk33E = self->hp2B8;
    self->unk37C = lbl_805D8490;
    self->m94();
    self->unk326 = 0;
    self->m85(self->unk326, 4);
    self->unk38C = 0;
    self->unk394 = TBoss2Joint_get_shell_max_hp();
    self->unk3A0 = -1;
    self->unk3A4 = TBoss2Joint__data_805D8474;
    self->unk3A8 = lbl_805D846C;
    copy_vec4__13TRaderMapCoreFPvPv(self->unk3AC, &lbl_80435A68);
}
#pragma pop

u8 *TBoss2Joint__ct(u8 *arg0, u8 *arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6) {
    TObjEneDD__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80036FC8___vt__11TBoss2Joint *)&__vt__11TBoss2Joint).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D26C0;
    init_common_from__9TObjEneDDFPvPv(arg0, arg1);
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x390) = arg4;
    M2C_FIELD(arg0, s32 *, 0x398) = arg5;
    M2C_FIELD(arg0, s32 *, 0x39C) = arg6;
    initialize_enemy_state__9TObjEneDDFPv(arg0, 0x2D);
    TBoss2Joint__sub_80036EA8((void *)((void *) (arg0)));
    return arg0;
}

void TBoss2Joint__vt42(void) {  }
void TBoss2Joint__vt43(void) {  }
void TBoss2Joint__vt44(void) {  }
void TBoss2Joint__vt45(void) {  }
void TBoss2Joint__vt46(void) {  }
void TBoss2Joint__vt47(void) {  }
void TBoss2Joint__vt48(void) {  }

void TBoss2LaserLight__sub_80037074(Laser_80037074 *self) {
    if (self->ptcl == NULL) {
        self->ptcl = TBoss8Dragon__sub_8008741C(self->pts, self->unk118, 0x40);
        if (self->ptcl != NULL) {
            enable__13TParticleCtrlFPv(self->ptcl);
        }
    } else {
        switch (self->state) {
        case 0:
            if (self->head >= self->limit) {
                self->state = 1;
                self->cur = 0;
            }
            enable__13TParticleCtrlFPv(self->ptcl);
            break;
        case 1:
            copy_pos__11TNowLoadingFPvPv(self->ptcl, &self->pts[self->cur]);
            self->cur++;
            if (self->cur >= 20) {
                self->cur = 0;
            }
            if (self->cur == self->head) {
                self->state = 2;
            }
            break;
        case 2:
            enable__13TParticleCtrlFPv(self->ptcl);
            break;
        }
    }
}

void TBoss2DeRolLe__sub_80037178(Obj_80037178 *self, V3_80037178 *src) {
    VecCopy__FP3VecPC3Vec((s32)&self->ring[self->idx], (s32)src);
    self->ring[self->idx].y += lbl_805D8498;
    self->idx++;
    if (self->idx >= 20) {
        self->idx = 0;
    }
}

}
