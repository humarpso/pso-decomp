#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80306994_80305BDC { char pad[0x18]; };
struct VObj_80306994_80305BDC : Base_80306994_80305BDC {
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
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
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
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

extern "C" {
M2C_UNK TBoss8Dragon__sub_800BB780(void *);
int TObjEneDD__sub_800BBA18(void*, void*);
M2C_UNK TObjEneDellBiter__sub_803055C8();
void TObjEneDellBiter__vt60(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK TObjPlayer__sub_8023DEE0(void *, int, int, int);
M2C_UNK set_active__12TObjEneReconFv();
M2C_UNK TObjEneDellBiter__sub_80305FDC(void *);
extern s32 lbl_805D53A4;
extern s32 lbl_805D6A40;
extern s32 lbl_805D6A44;
void run_task__16TObjEneDellBiterFv(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805DF028;
void TObjEneDellBiter__sub_80306110(u8 *arg0);
}

extern "C" {

void *item_object_variant_deleting_dtor_803069D0(void *arg0, s16 arg1);
void *TItemObject__sub_80306A28(void *arg0);
void *TObjEneDellBiter__create(void *arg0);
void *TObjEneDellBiter__ct(void *arg0, void *arg1, void *arg2);
void TObjEneDellBiter__vt26(void);
void TObjEneDellBiter__vt59(void);
void TObjEneDellBiter__vt61(void* p);
void TObjEneDellBiter__vt86(void);
void destroy_static_instance__16TObjEneDellBiterFv(void);
void fn_80306994(void *arg0);
void update_attack_effect__16TObjEneDellBiterFi(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);
void TItemObject__ct(void *);
void TLobby__sub_8001FE7C(void*, int);
int TObjEneDD__sub_800BBA18(void*, void*);
s32 TObjEneDellBiter__sub_803059BC(s32, s32);
void TObjEneDellBiter__sub_80305F58(void *);
void TObjEneDellBiter__sub_80306468(void *);
M2C_UNK TObjEneGibbles__sub_800D8988(s32);
void __construct_array(void *, void *, void *, int, int);
void __dt__11TItemObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 copy_target_state__14TObjEnePanarmsFPvPv(s32, M2C_UNK);
void free_obj_heap__10TObjPlayerFPv(void *);
void *get_item_field_2__9TItemDataFPv(s32);
void init_object__9TObjEneDDFPv(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

void update_attack_effect__16TObjEneDellBiterFi(s32 arg0) {
    if (TObjEneDellBiter__sub_803059BC(arg0, arg0 + 0x38) != 0) {
        TObjEneGibbles__sub_800D8988(arg0 + 0x38);
        return;
    }
    TBoss3Volopt__sub_8022675C((s32)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x40039E11), arg0 + 0x38, 0, 0);
}

void TObjEneDellBiter__vt86(void) {  }

void TObjEneDellBiter__sub_80306110(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805DF028);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

void TObjEneDellBiter__vt59(void) {  }

void TObjEneDellBiter__vt60(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
        TObjEneDellBiter__sub_803055C8();
        if (M2C_FIELD(arg0, s32 *, 0x3C0) & 0x14) {
            TBoss8Dragon__sub_800BB780((void *) (arg0));
            return;
        }
        TObjEneDD__sub_800BBA18((void*)((void *) (arg0)), (void*)((int) (0xA)));
    }
}

void TObjEneDellBiter__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 11) { TObjEneDD__sub_800BBA18(p, (void*)11); } }
void TObjEneDellBiter__vt26(void) {  }

extern M2C_UNK __vt__16TObjEneDellBiter[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern void *lbl_805D4078;

void run_task__16TObjEneDellBiterFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
        if ((s32) lbl_805D6A44 != (s32) lbl_805D53A4) {
            lbl_805D6A44 = lbl_805D53A4;
            TObjPlayer__sub_8023DEE0((void *) (lbl_805D6A40), (int) (0xC), (int) (0), (int) (0));
        }
    }
    TObjEneDellBiter__sub_80305FDC((void *) (arg0));
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x4000) {
        set_active__12TObjEneReconFv();
    }
    TObjEneDellBiter__sub_80306110((u8 *)((void *) (arg0)));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

void *TObjEneDellBiter__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneDellBiter;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 980));
    __construct_array((void *)((char *)arg0 + 1008), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4078;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneDellBiter__sub_80305F58(arg0);
    TObjEneDellBiter__sub_80306468(arg0);
    return arg0;
}

extern u32 TObjEneDellBiter__data_805D6A30;

void destroy_static_instance__16TObjEneDellBiterFv(void) {
    if ((u32) TObjEneDellBiter__data_805D6A30 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDellBiter__data_805D6A30, 1);
        TObjEneDellBiter__data_805D6A30 = 0U;
    }
}

extern void *tl_04;

void *TObjEneDellBiter__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4E4);
    if (o != NULL) {
        o = TObjEneDellBiter__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

void fn_80306994(void *arg0) {
    struct VObj_80306994_80305BDC *o = (struct VObj_80306994_80305BDC *)get_item_field_2__9TItemDataFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    if (o != NULL) {
        o->m38();
    }
}

extern M2C_UNK lbl_804E6FA8[];

void *item_object_variant_deleting_dtor_803069D0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E6FA8;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E6FA8[];

void *TItemObject__sub_80306A28(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E6FA8;
    return arg0;
}

}
