#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/misc/RenderFadeState.h"
struct Base_800475A0_80044498 { char pad[0x18]; };

struct VObj_800475A0_80044498 : Base_800475A0_80044498 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58();
};

struct BaseA_80044498 { char pad[0x18]; };

struct VObjA_80044498 : BaseA_80044498 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

struct BaseB_80044498 { char pad[0x14]; };

struct VObjB_80044498 : BaseB_80044498 {
    virtual M2C_UNK n0();
    virtual M2C_UNK n1();
    virtual M2C_UNK n2();
    virtual M2C_UNK n3();
    virtual M2C_UNK n4();
    virtual M2C_UNK n5();
    virtual M2C_UNK n6();
    virtual M2C_UNK n7();
};

struct Stack_80045A04 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct VBase_18_b8f5cb { char pad[0x18]; };

struct VObj_18_b8f5cb : VBase_18_b8f5cb {
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
    virtual s32 m30();
    virtual s32 m31();
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
    virtual M2C_UNK m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
};

struct VBase_18_f1aa6a { char pad[0x18]; };

struct VObj_18_f1aa6a : VBase_18_f1aa6a {
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
    virtual M2C_UNK m63(M2C_UNK, M2C_UNK *);
};

struct RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80045628_lbl_804FF14C {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_800456E4_lbl_804FF10C {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_800457A0_lbl_804FF0CC {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct VBase_18_62ff9d { char pad[0x18]; };

struct VObj_18_62ff9d : VBase_18_62ff9d {
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
    virtual M2C_UNK m56();
};

struct RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8004585C_lbl_804FF04C {
    M2C_UNK value;
    u8 remaining[0x7C];
};

struct O_80044CB8 { u8 pad[6]; s16 arr[3]; };

struct Base_80047408 { char pad[0x18]; };

struct V_80047408 : Base_80047408 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56();
    u8 pad2[0x37c - 0x1c];
    s32 state;
};

struct Part_80044E4C { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

struct Obj_80044E4C { u8 pad[0xa4]; Part_80044E4C *parts; u8 pad2[0x388 - 0xa8]; u32 mask; };

struct V3_80044600 { f32 x, y, z; };

struct Obj_80044600 { u8 pad[0x3d8]; u8 target[0x4c8 - 0x3d8]; V3_80044600 pos[4]; void *objs[4]; };

struct Obj_800445A4 { u8 pad[0x4f8]; void *objs[4]; };

struct V2_80044DD4 { f32 x, y; };

struct Part_80044DD4 { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

struct Obj_80044DD4 { u8 pad[0xa4]; Part_80044DD4 *parts; u8 pad2[0x388 - 0xa8]; u32 mask; };

struct Obj_800450D0 { u8 pad[0x3e4]; void *objs[4]; };

struct V3_80045928 { f32 x, y, z; };

struct Obj_80045928 { u8 pad[0x480]; s32 color; V3_80045928 scale; };

struct Msg_80045328 { u8 hdr[2]; u16 id; s16 vals[4]; };

struct Obj_80045328 { u8 pad[0x1c]; u16 id; u8 pad2[0x4ac - 0x1e]; s16 vals[4]; };

struct Obj_800472D4 { u8 pad[0x30]; u32 flags; u8 pad1[0xb8 - 0x34]; s16 anim; u8 pad2[0x37c - 0xba]; s32 state; };

extern "C" {
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK fn_80048C04();
extern u16 TBoss3Volopt__data_805D2710;
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const f32 TBoss3Volopt__data_805D87E4;
extern const f32 lbl_805D8818;
void update_state__12TBoss3VoloptFPv(void *arg0);
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
void set_action_wait__12TBoss3VoloptFPvUs(void *arg0, u16 arg1);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
void set_motion__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
void check_and_trigger__12TBoss3VoloptFPv(void *arg0);
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
s32 obj_testFlags30(void*, M2C_UNK);
void set_action__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
extern s32 some_id_805c6f74;
extern const f32 lbl_805D881C;
extern const f32 lbl_805D8820;
void render__12TBoss3VoloptFPv(u8 *arg0);
void *__nw__7TObjectFUl(M2C_UNK);
void *fn_800480B0(void *, void *, void *);
extern void *tl_04;
void *TBoss3Volopt__sub_80047DD4(void *arg0);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_800D7C58(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void queue_destruction__7TObjectFv(void *);
extern M2C_UNK lbl_80484610[];
void *destroy__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
s32 TObjEneDellBiter__sub_80087350(s32, s32);
s32 TOTrapAncient01__sub_80226578(s32, s32, u32, s16, s32);
s32 rand__11TOBoss4RockFv(void);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern s32 lbl_805D53A4;
extern const f32 lbl_805D87BC;
extern const f32 lbl_805D87C8;
extern const f32 lbl_805D87CC;
extern const f32 lbl_805D87D0;
extern const f32 lbl_805D87D4;
extern const f32 TBoss3Volopt__data_805D87D8;
extern const f32 lbl_805D87DC;
void TBoss3Volopt__sub_80045A04(u8 *arg0);
s32 obj_testFlags30(void*, M2C_UNK);
f32 get_random_float__8TObjFishFv(f32);
s32 TBoss3Volopt__sub_8003F398(void);
s32 check_demo_mode__10TObjPlayerFv();
s32 minimap_render_dot(void *, s32, s16, s32);
f32 TBoss8Dragon__sub_803D64C0(s32);
M2C_UNK TObjPlayer__sub_800192DC(void *);
s32 TObjPlayer__sub_800194AC(void *, int, int);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
M2C_UNK TBoss3Volopt__sub_80044498(void *);
M2C_UNK TBoss3Volopt__sub_80047714(void *);
M2C_UNK TObjPlayer__sub_800D7BB0(void *);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
extern u8 *TBoss3Volopt__data_805D4D00;
extern const f32 TBoss3Volopt__data_805D87E4;
void TBoss3Volopt__sub_800477A0(u8 *arg0);
void set_flag8_list__12TBoss3VoloptFPv(void *);
void TBoss3Volopt__sub_800C7698(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, s32, s32, s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__data_804FF038;
extern RecoveredGlobal_80045628_lbl_804FF14C lbl_804FF14C;
void TBoss3Volopt__sub_80045628(u8 *arg0);
void set_flag8_list__12TBoss3VoloptFPv(void *);
void TBoss3Volopt__sub_800C7698(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, s32, s32, s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__data_804FF038;
extern RecoveredGlobal_800456E4_lbl_804FF10C lbl_804FF10C;
void TBoss3Volopt__sub_800456E4(u8 *arg0);
void set_flag8_list__12TBoss3VoloptFPv(void *);
void TBoss3Volopt__sub_800C7698(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, s32, s32, s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__data_804FF038;
extern RecoveredGlobal_800457A0_lbl_804FF0CC lbl_804FF0CC;
void TBoss3Volopt__sub_800457A0(u8 *arg0);
void TBoss1Dragon__sub_80143504(void *);
extern u8 *TBoss3Volopt__data_805D4D00;
extern u8 *TBoss3Volopt__data_805D4D08;
extern const f32 lbl_805D87B0;
extern const f32 TBoss3Volopt__data_805D87D8;
extern const f32 TBoss3Volopt__data_805D87E4;
extern const f32 TBoss3Volopt__data_805D87E8;
extern const f32 lbl_805D87F4;
extern const f32 lbl_805D87F8;
extern const f32 lbl_805D87FC;
void TBoss3Volopt__sub_80045DC4(u8 *arg0);
void set_flag8_list__12TBoss3VoloptFPv(void *);
void TBoss3Volopt__sub_800C7698(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, s32, s32, s32, s32);
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__data_804FF038;
extern RecoveredGlobal_8004585C_lbl_804FF04C lbl_804FF04C;
void TBoss3Volopt__sub_8004585C(u8 *arg0);
extern s16 lbl_804FF030[];
void TBoss3Volopt__sub_80044CB8(O_80044CB8 *self);
void TBoss3Volopt__sub_80047408(V_80047408 *self);
f32 TObjPlayer__sub_80014108(void *, void *, f32);
f32 TBoss3Volopt__sub_80044E4C(Obj_80044E4C *self, void *a1, f32 x);
void *__nw__7TObjectFUl(M2C_UNK);
void *ct__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2);
void TBoss3Volopt__sub_80044600(void *arg0);
void queue_destruction__7TObjectFv(void *);
void TBoss3Volopt__sub_800445A4(void *arg0);
void TObjPlayer__sub_8001311C(void *, void *, V2_80044DD4, void *, s32, s32);
void TBoss3Volopt__sub_80044DD4(Obj_80044DD4 *self, void *a1, V2_80044DD4 v, void *a3);
void queue_destruction__7TObjectFv(void *);
void TBoss3Volopt__sub_800450D0(void *arg0);
extern s32 lbl_804845C4[];
extern V3_80045928 lbl_804845AC;
extern u32 *TBoss3Volopt__data_805D4CFC;
extern u32 *TBoss3Volopt__data_805D4CEC;
extern u8 *TBoss3Volopt__data_805D4D00;
extern u8 *TBoss3Volopt__data_805D4D08;
void TBoss3Volopt__sub_80045928(void *arg0);
void TBoss3Volopt__sub_8004824C(void *);
void broadcast_state__12TBoss3VoloptFPv(void *);
void TBoss3Volopt__sub_80045328(Obj_80045328 *self);
void TBoss3Volopt__sub_80045928(void *arg0);
void TBoss1Dragon__sub_80143504(void *);
void TBoss3Volopt__sub_800472D4(Obj_800472D4 *self);
}

extern "C" {

void TBoss3Volopt__sub_80045234(void);
void apply_hit_reaction__12TBoss3VoloptFPvf(void *arg0, f32 farg0);
s32 count_dead_parts__12TBoss3VoloptFPv(void *arg0);
void create_cage__12TBoss3VoloptFPvUs(void *arg0, u16 arg1);
M2C_UNK TObjVoloptCage__ct(void *, void *, u16, u16, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void *__nw__7TObjectFUl(M2C_UNK);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);

extern f32 lbl_805D87B8;

void TBoss3Volopt__sub_800445A4(void *arg0) {
    Obj_800445A4 *self = (Obj_800445A4 *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->objs[i] != 0) {
            queue_destruction__7TObjectFv(self->objs[i]);
            self->objs[i] = 0;
        }
    }
}

void TBoss3Volopt__sub_80044600(void *arg0) {
    Obj_80044600 *self = (Obj_80044600 *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->objs[i] == 0) {
            void *o = __nw__7TObjectFUl((M2C_UNK)(0x28));
            if (o != 0) {
                o = ct__12TBoss3VoloptFPvPvPv(o, self->target, &self->pos[i]);
            }
            self->objs[i] = o;
        }
    }
}

void apply_hit_reaction__12TBoss3VoloptFPvf(void *arg0, f32 farg0) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xC)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        M2C_FIELD(arg0, f32 *, 0x508) = (f32) (lbl_805D87B8 + farg0);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xC);
    }
}

void TBoss3Volopt__sub_80044CB8(O_80044CB8 *self) {
    s32 i;
    for (i = 0; i < 3; i++) {
        lbl_804FF030[i] = self->arr[i];
    }
}

void TBoss3Volopt__sub_80044DD4(Obj_80044DD4 *self, void *a1, V2_80044DD4 v, void *a3) {
    u32 m = 0x800000;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->parts[i].flags & 0x04000000) {
            self->mask |= m;
        }
        m <<= 1;
    }
    TObjPlayer__sub_8001311C(self, a1, v, a3, -1, -1);
}

f32 TBoss3Volopt__sub_80044E4C(Obj_80044E4C *self, void *a1, f32 x) {
    u32 m = 0x800000;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->parts[i].flags & 0x04000000) {
            self->mask |= m;
        }
        m <<= 1;
    }
    return TObjPlayer__sub_80014108(self, a1, x);
}

s32 count_dead_parts__12TBoss3VoloptFPv(void *arg0) {
    s32 count = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(s16 *)((u8 *)arg0 + 1196 + i * 2) <= 0) {
            count++;
        }
    }
    return count;
}

void TBoss3Volopt__sub_800450D0(void *arg0) {
    Obj_800450D0 *self = (Obj_800450D0 *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->objs[i] != 0) {
            queue_destruction__7TObjectFv(self->objs[i]);
            self->objs[i] = 0;
        }
    }
}

void TBoss3Volopt__sub_80045234(void) {  }

extern u16 TBoss3Volopt__data_805D2710;
extern s32 lbl_805D2714;

typedef char RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8_size[sizeof(RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038_size[sizeof(RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80045628_lbl_804FF14C_size[sizeof(RecoveredGlobal_80045628_lbl_804FF14C) == 0x40 ? 1 : -1];

void TBoss3Volopt__sub_80045328(Obj_80045328 *self) {
    Msg_80045328 m;
    s32 i;
    TBoss3Volopt__sub_8004824C(&m);
    m.id = self->id;
    for (i = 0; i < 4; i++) {
        m.vals[i] = self->vals[i];
    }
    broadcast_state__12TBoss3VoloptFPv(&m);
}

void TBoss3Volopt__sub_80045628(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r4;
    u8 *temp_r5;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (!(temp_r4 & 0x80000)) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 | 0x80000);
        temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r5, s32 *, 0x9C) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x9C) & 0xEFFFFFFE);
        TBoss3Volopt__sub_800C7698(arg0);
        ((VObj_18_f1aa6a *)(arg0))->m63(0x29, &sp8);
        create_breakup_mdl__12TBoss3VoloptFiiiii(M2C_FIELD(&TBoss3Volopt__data_804FF038.value, s32 *, 0x10), (s32) &TBoss3Volopt__data_804845E8.value, M2C_FIELD(arg0, s32 *, 0x24), (s32) (arg0 + 0x2FC), M2C_FIELD(arg0, s32 *, 0x60));
        set_flag8_list__12TBoss3VoloptFPv(&lbl_804FF14C.value);
        TBoss3Volopt__sub_8022675C(0x4003A80F, (u32) (arg0 + 0x38), 0, 1);
    }
}

typedef char RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8_size[sizeof(RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038_size[sizeof(RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_800456E4_lbl_804FF10C_size[sizeof(RecoveredGlobal_800456E4_lbl_804FF10C) == 0x40 ? 1 : -1];
void TBoss3Volopt__sub_800456E4(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r4;
    u8 *temp_r5;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (!(temp_r4 & 0x40000)) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 | 0x40000);
        temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r5, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x70) & 0xEFFFFFFE);
        TBoss3Volopt__sub_800C7698(arg0);
        ((VObj_18_f1aa6a *)(arg0))->m63(0x22, &sp8);
        create_breakup_mdl__12TBoss3VoloptFiiiii(M2C_FIELD(&(*(RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__data_804FF038).value, s32 *, 0xC), (s32) &(*(RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value, M2C_FIELD(arg0, s32 *, 0x24), (s32) &sp8, M2C_FIELD(arg0, s32 *, 0x60));
        set_flag8_list__12TBoss3VoloptFPv(&lbl_804FF10C.value);
        TBoss3Volopt__sub_8022675C(0x4003A80F, (u32) (arg0 + 0x38), 0, 1);
    }
}

typedef char RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8_size[sizeof(RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038_size[sizeof(RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_800457A0_lbl_804FF0CC_size[sizeof(RecoveredGlobal_800457A0_lbl_804FF0CC) == 0x40 ? 1 : -1];
void TBoss3Volopt__sub_800457A0(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r4;
    u8 *temp_r5;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (!(temp_r4 & 0x20000)) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 | 0x20000);
        temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r5, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x44) & 0xEFFFFFFE);
        TBoss3Volopt__sub_800C7698(arg0);
        ((VObj_18_f1aa6a *)(arg0))->m63(0x32, &sp8);
        create_breakup_mdl__12TBoss3VoloptFiiiii(M2C_FIELD(&(*(RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__data_804FF038).value, s32 *, 8), (s32) &(*(RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value, M2C_FIELD(arg0, s32 *, 0x24), (s32) &sp8, M2C_FIELD(arg0, s32 *, 0x60));
        set_flag8_list__12TBoss3VoloptFPv(&lbl_804FF0CC.value);
        TBoss3Volopt__sub_8022675C(0x4003A80F, (u32) (arg0 + 0x38), 0, 1);
    }
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
typedef char RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8_size[sizeof(RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038_size[sizeof(RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8004585C_lbl_804FF04C_size[sizeof(RecoveredGlobal_8004585C_lbl_804FF04C) == 0x80 ? 1 : -1];
void TBoss3Volopt__sub_8004585C(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (!(temp_r4 & 0x10000)) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 | 0x10000);
        TBoss3Volopt__sub_800C7698((void *) (arg0));
        ((VObj_18_f1aa6a *)(arg0))->m63(2, &sp8);
        create_breakup_mdl__12TBoss3VoloptFiiiii((s32)((int) (M2C_FIELD(&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__data_804FF038).value, s32 *, 0))), (s32)((void *) (&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x24))), (s32)((void *) (&sp8)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x60))));
        ((VObj_18_f1aa6a *)(arg0))->m63(0x12, &sp8);
        create_breakup_mdl__12TBoss3VoloptFiiiii((s32)((int) (M2C_FIELD(&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__data_804FF038).value, s32 *, 4))), (s32)((void *) (&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x24))), (s32)((void *) (&sp8)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x60))));
        set_flag8_list__12TBoss3VoloptFPv((void *) (&lbl_804FF04C.value));
    }
}
#pragma pop

void TBoss3Volopt__sub_80045928(void *arg0) {
    Obj_80045928 *self = (Obj_80045928 *)arg0;
    self->color = lbl_804845C4[0];
    self->scale.x = lbl_804845AC.x;
    self->scale.y = lbl_804845AC.y;
    self->scale.z = lbl_804845AC.z;
    *TBoss3Volopt__data_805D4CFC &= ~8;
    *TBoss3Volopt__data_805D4CEC &= ~8;
    TBoss3Volopt__data_805D4D00[7] = 0xff;
    TBoss3Volopt__data_805D4D08[7] = 0xff;
}

void create_cage__12TBoss3VoloptFPvUs(void *arg0, u16 arg1) {
    void *temp_r3;
    M2C_FIELD(arg0, u16 *, 0x338) = arg1;
    M2C_FIELD(arg0, u32 *, 0x2A8) = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x338));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2A8) != 0U) {
        temp_r3 = __nw__7TObjectFUl(0x394);
        if (temp_r3 != 0) {
            TObjVoloptCage__ct(temp_r3, arg0, arg1, TBoss3Volopt__data_805D2710, lbl_805D2714);
        }
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x200000);
    }
}

#pragma push
#pragma fp_contract on
void TBoss3Volopt__sub_80045A04(u8 *arg0) {
    Stack_80045A04 stack;
    f32 temp_f31;
    s32 temp_r31;
    if (lbl_805D53A4 & 1) {
        temp_f31 = (lbl_805D87CC * (lbl_805D87BC * (f32) rand__11TOBoss4RockFv())) + lbl_805D87C8;
        temp_r31 = (s32) (lbl_805D87D0 * (lbl_805D87D4 * (lbl_805D87BC * (f32) rand__11TOBoss4RockFv())));
        stack.sp8 = (temp_f31 * TBoss8Dragon__sub_803D64DC(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x38);
        stack.spC = (lbl_805D87DC * (lbl_805D87BC * (f32) rand__11TOBoss4RockFv())) + TBoss3Volopt__data_805D87D8;
        stack.sp10 = (temp_f31 * TBoss8Dragon__sub_803D64C0(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x40);
        TObjEneDellBiter__sub_80087350((s32) &stack.sp8, 0xFB);
    }
    TOTrapAncient01__sub_80226578(0x4003AD21, (s32) arg0, (u32) (arg0 + 0x38), 0, 0);
}
#pragma pop

#pragma push
#pragma fp_contract on
void TBoss3Volopt__sub_80045DC4(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    s8 var_r4;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        M2C_FIELD(arg0, s32 *, 0x37C) = 2;
    case 2:
        TBoss1Dragon__sub_80143504(arg0);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
        var_r4 = 0;
        if (temp_f1 >= TBoss3Volopt__data_805D87D8) {
            var_r4 = (s8) (lbl_805D87F4 * (temp_f1 - TBoss3Volopt__data_805D87D8));
        }
        M2C_FIELD(TBoss3Volopt__data_805D4D00, s8 *, 7) = var_r4;
        M2C_FIELD(TBoss3Volopt__data_805D4D08, s8 *, 7) = var_r4;
        M2C_FIELD(arg0, s32 *, 0x47C) = 0x4000;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805D87B0 * -((lbl_805D87F8 * M2C_FIELD(arg0, f32 *, 0xC0)) - TBoss3Volopt__data_805D87E8));
        if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805D87FC) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            ((VObj_18_62ff9d *)(arg0))->m56();
            break;
        }
    case 1:
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        break;
    }
}
#pragma pop

void check_and_notify__12TBoss3VoloptFv(s32 _w0) {
    if (TPhotonMylla__sub_80154CB4(TBoss3Volopt__data_805D2710) != 0U) {
        fn_80048C04();
    }
}

void TBoss3Volopt__sub_800472D4(Obj_800472D4 *self) {
    switch (self->state) {
    case 0:
        self->flags &= ~0x40000;
        self->anim = 0;
        TBoss3Volopt__sub_80045928(self);
        self->state = 1;
    case 1:
        TBoss1Dragon__sub_80143504(self);
        break;
    case -1:
        break;
    }
}

void update_state__12TBoss3VoloptFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x46C) = 6;
        TBoss3Volopt__sub_80044498((void *)(arg0));
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805D8818 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x46C) * 0x3000));
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x46C) - 1;
        M2C_FIELD(arg0, s32 *, 0x46C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x380);
            M2C_FIELD(arg0, s32 *, 0x374) = temp_r0_3;
            M2C_FIELD(arg0, s16 *, 0x326) = (s16) temp_r0_3;
            M2C_FIELD(arg0, s32 *, 0x37C) = (s32) M2C_FIELD(arg0, s32 *, 0x470);
        }
        break;
    case -1:
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
        break;
    }
}

void TBoss3Volopt__sub_80047408(V_80047408 *self) {
    switch (self->state) {
    case 0:
        self->m56();
        break;
    case -1:
        break;
    }
}

void set_action_wait__12TBoss3VoloptFPvUs(void *arg0, u16 arg1) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        if ((u16) arg1 != 0xFFFF) {
            M2C_FIELD(arg0, u16 *, 0x338) = arg1;
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xA);
        }
    }
}
void set_motion__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x10000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9)) {
        M2C_FIELD(arg0, s16 *, 0x338) = arg1;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 9);
    }
}
void check_and_trigger__12TBoss3VoloptFPv(void *arg0) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xB);
    }
}
void set_action__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        M2C_FIELD(arg0, s16 *, 0x338) = arg1;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        ((VObj_800475A0_80044498 *)arg0)->m58();
    }
}
void render__12TBoss3VoloptFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((VObjA_80044498 *)arg0)->m8(lbl_805D881C, lbl_805D8820) != 0)) {
        if (((RenderFadeState*)(arg0 + 0x490))->updateFromCamera((const f32*)(arg0 + 0x2FC)) != 0) {
            ((VObjB_80044498 *)(arg0 + 0x490))->n6();
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjLight__sub_80134194(arg0);
        toggle_particle_effect__10TObjPlayerFv();
        TObjPlayer__sub_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        TObjPlayer__sub_803D9B78();
        TObjLight__sub_80134098();
        end_effect_render__13TParticleCtrlFv();
        ((VObjB_80044498 *)(arg0 + 0x490))->n7();
    }
}

#pragma push
#pragma fp_contract on
void TBoss3Volopt__sub_800477A0(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x47C));
    M2C_FIELD(TBoss3Volopt__data_805D4D00, s8 *, 6) = (s8) get_random_float__8TObjFishFv(temp_f1 * M2C_FIELD(arg0, f32 *, 0x484));
    M2C_FIELD(TBoss3Volopt__data_805D4D00, s8 *, 5) = (s8) get_random_float__8TObjFishFv(temp_f1 * M2C_FIELD(arg0, f32 *, 0x488));
    M2C_FIELD(TBoss3Volopt__data_805D4D00, s8 *, 4) = (s8) get_random_float__8TObjFishFv(temp_f1 * M2C_FIELD(arg0, f32 *, 0x48C));
    M2C_FIELD(arg0, s32 *, 0x47C) = (s32) (M2C_FIELD(arg0, s32 *, 0x47C) + M2C_FIELD(arg0, s32 *, 0x480));
    if (check_demo_mode__10TObjPlayerFv() != 1) {
        if (((VObj_18_b8f5cb *)(arg0))->m31() != 0) {
            ((VObj_18_b8f5cb *)(arg0))->m61();
        } else if (((VObj_18_b8f5cb *)(arg0))->m30() != 0) {
            if (TBoss3Volopt__sub_8003F398() != 0) {
                TBoss3Volopt__sub_80044498((void *)((void *) (arg0)));
                M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
                M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
            } else {
                ((VObj_18_b8f5cb *)(arg0))->m60();
            }
        }
        if (obj_testFlags30((void*)(arg0), (M2C_UNK)(0x4000)) != 0) {
            if (TObjPlayer__sub_800194AC((void *) (arg0), (int) (4), (int) (-1)) <= 0) {
                TObjPlayer__sub_800192DC((void *) (arg0 + 0x284));
                obj_clearFlags30((void *) (arg0), (int) (0x4000));
            }
        } else {
            if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
                temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
                if (temp_r0 != -1) {
                    M2C_FIELD(arg0, s32 *, 0x470) = temp_r0;
                    M2C_FIELD(arg0, s32 *, 0x37C) = -1;
                    TBoss3Volopt__sub_80047714((void *) (arg0));
                }
                M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s16 *, 0x326);
                M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
                M2C_FIELD(arg0, s32 *, 0x37C) = 0;
            }
            TBoss3Volopt__sub_80047714((void *) (arg0));
            update_prev_position__10TObjPlayerFPv((void *) (arg0));
            copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
            TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
            minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
            TObjPlayer__sub_800D7BB0((void *) (arg0 + 0x490));
            ((VObj_18_b8f5cb *)(arg0))->m53();
        }
    }
}
#pragma pop

void *TBoss3Volopt__sub_80047DD4(void *arg0) {
    void *o = __nw__7TObjectFUl((M2C_UNK)(0x510));
    if (o != NULL) {
        o = fn_800480B0(o, tl_04, arg0);
    }
    return o;
}
void *destroy__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484610;
        TObjEneGibbles__sub_80156720(arg0);
        if (M2C_FIELD(arg0, void **, 0x474) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x474)); }
        if (M2C_FIELD(arg0, void **, 0x478) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x478)); }
        TBoss3Volopt__sub_800450D0((void *)(arg0));
        TBoss3Volopt__sub_800445A4((void *)(arg0));
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x490, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
