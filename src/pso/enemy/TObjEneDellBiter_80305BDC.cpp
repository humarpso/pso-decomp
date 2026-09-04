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

extern "C" {
M2C_UNK TBoss8Dragon__sub_800BB780(void *);
int TObjEneDD__sub_800BBA18(void*, void*);
M2C_UNK TObjEneDellBiter__sub_803055C8();
void TObjEneDellBiter__vt60(u8 *arg0);
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
