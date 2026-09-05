#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
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
    virtual M2C_UNK m77();
};
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_item__17TObjContainerItemFPvi(void *, void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);
void TObjContainerJungEx__vt4(u8 *arg0, s16 *arg1, s32 arg2);
}

extern "C" {

void TObjContainerJungEx__vt78(void *arg0);
void TObjContainerJungEx__vt79(u8 *arg0);
void *__dt__19TObjContainerJungExFv(void *arg0, s16 arg1);
void *create__19TObjContainerJungExFPv(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
void *TObjContainerJungEx__ct(void *, void *, void *);
M2C_UNK TObjContainerJungEx__sub_8018D900(M2C_UNK);
M2C_UNK TObjContainerJungEx__sub_8018D93C(M2C_UNK);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK destroy_container_object__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi();

extern void *tl_05;

void *create__19TObjContainerJungExFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerJungEx__ct(o, tl_05, arg0);
    }
    return o;
}

extern const f32 lbl_805DBD9C;

void TObjContainerJungEx__vt4(u8 *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((VObj_18 *)(arg0))->m77();
            spawn_item__17TObjContainerItemFPvi((void *) (arg0), (void *) (arg0));
            set_flag8__6TLobbyFPv((void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
    }
}

void TObjContainerJungEx__vt79(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        TObjContainerJungEx__sub_8018D900(0);
        set_global_param__8TObjFishFi();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TOMonitorMachine01__sub_803D8B5C(0, lbl_805DBD9C, lbl_805DBD9C, lbl_805DBD9C);
        TObjContainerJungEx__sub_8018D93C(0);
        TObjBoss2Tunnel__sub_803DB470();
        begin_effect_render__13TParticleCtrlFv();
        TObjContainerJungEx__sub_8018D93C(3);
        TObjBoss2Tunnel__sub_803DB470();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    case 1:
        return;
    }
}

void TObjContainerJungEx__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x364) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
    case 1:
        return;
    }
}

extern M2C_UNK __vt__19TObjContainerJungEx[];

void *__dt__19TObjContainerJungExFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjContainerJungEx;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
