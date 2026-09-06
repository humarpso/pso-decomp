#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_90ef41 { char pad[0x18]; };

struct VObj_18_90ef41 : VBase_18_90ef41 {
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
    virtual M2C_UNK m90();
    virtual void m91();
    virtual M2C_UNK m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual M2C_UNK m96();
};

extern "C" {
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
M2C_UNK TObjPlayer__sub_80017E6C(void *);
s32 obj_testFlags30(void *, int);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK TBoss1Dragon__sub_80143504();
extern const f32 lbl_805DA034;
extern const f32 lbl_805DA038;
extern const f32 lbl_805DA03C;
extern const f32 lbl_805DA040;
void TObjPlayer__sub_800C4FD4(u8 *arg0);
s32 obj_testFlags30(void *, int);
void TObjPlayer__sub_800C4E08(u8 *arg0);
}

extern "C" {

int TObjPlayer__sub_800C4FB4(void* p);
void *destroy_and_free__10TObjPlayerFPvs(void *arg0, s16 arg1);
void *dt_with_child_destroy__10TObjPlayerFPvs(void *arg0, s16 arg1);
void *init_target_ref__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
void update_equip_effect_if_active__10TObjPlayerFPv(u8 *arg0);
s32 TBoss8Dragon__sub_8008741C(s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
s32 is_alive__9TObjEneDDFPv(s32);
int queue_destruction__7TObjectFv(void*);

void update_equip_effect_if_active__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x100) != 0) {
        TObjEneDD__sub_800B9D94(arg0 + 0x38, arg0 + 0xD8, 0, 0);
    }
}

extern M2C_UNK lbl_804933D8[];

void *destroy_and_free__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804933D8;
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { queue_destruction__7TObjectFv((void*)(M2C_FIELD(arg0, void **, 0xFC))); M2C_FIELD(arg0, M2C_UNK *, 0xFC) = 0; }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80493438[];

void *dt_with_child_destroy__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80493438;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv((void*)(M2C_FIELD(arg0, void **, 0x24))); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80493438[];
extern s32 lbl_805D2A58;

void *init_target_ref__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80493438;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2A58;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x20)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = TBoss8Dragon__sub_8008741C(M2C_FIELD(arg0, s32 *, 0x20) + 0x38, 0xDE, 0x40);
    }
    return arg0;
}

void TObjPlayer__sub_800C4E08(u8 *arg0) {
    if (obj_testFlags30((void *)(arg0), (int)(0x100000)) != 0) {
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg0, f32 *, 0x39C);
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(arg0, f32 *, 0x3A4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg0, f32 *, 0x398);
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(arg0, f32 *, 0x3A0);
}

int TObjPlayer__sub_800C4FB4(void* p) { return queue_destruction__7TObjectFv((void*)(p)); }
void TObjPlayer__sub_800C4FD4(u8 *arg0) {
    TBoss1Dragon__sub_80143504();
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DA034)) != 0) {
        ((VObj_18_90ef41 *)(arg0))->m96();
    }
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DA038)) != 0) {
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) (0xF3));
        ((VObj_18_90ef41 *)(arg0))->m92();
    }
    if (M2C_FIELD(arg0, f32 *, 0xC0) < (lbl_805DA03C * (lbl_805DA040 * M2C_FIELD(arg0, f32 *, 0xC8)))) {
        TObjPlayer__sub_80017E6C((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * lbl_805DA03C);
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * lbl_805DA03C);
    } else if (obj_testFlags30((void *) (arg0), (int) (0x800000)) == 0) {
        TObjPlayer__sub_80011734((void *) (arg0), (int) (0), (f32) (lbl_805DA034));
    }
    M2C_FIELD(arg0, f32 *, 0x380) = (f32) (M2C_FIELD(arg0, f32 *, 0x380) - M2C_FIELD(arg0, f32 *, 0x384));
    if (M2C_FIELD(arg0, f32 *, 0x380) <= M2C_FIELD(arg0, f32 *, 0x388)) {
        ((VObj_18_90ef41 *)(arg0))->m90();
    }
}

}
