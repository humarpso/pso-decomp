#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct Base_80116BBC_80116634 { char pad[0x18]; };
struct VObj_80116BBC_80116634 : Base_80116BBC_80116634 {
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
};

extern "C" {

void *item_object_variant_deleting_dtor_80116BEC(void *arg0, s16 arg1);
void *item_object_variant_deleting_dtor_80116CFC(void *arg0, s16 arg1);
void *TItemProShield__sub_80116AD0(void *arg0, s16 arg1);
void *TItemProShield__sub_80116B28(void *arg0);
void TItemProShield__sub_80116BBC(void *arg0);
void *TItemProShield__sub_80116C44(void *arg0);
int TItemProShield__sub_80116CD8(void* p);
void *TItemProShield__sub_80116D54(void *arg0);
void TItemObject__ct(void *);
int TItemObject__sub_801160E0(void*);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_8049F998[];

void *TItemProShield__sub_80116AD0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F998;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049F998[];

void *TItemProShield__sub_80116B28(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F998;
    return arg0;
}

void TItemProShield__sub_80116BBC(void *arg0) {
    struct VObj_80116BBC_80116634 *o = (struct VObj_80116BBC_80116634 *)M2C_FIELD(arg0, void **, 0xF0);
    o->m48();
}

extern M2C_UNK lbl_8049FA50[];

void *item_object_variant_deleting_dtor_80116BEC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FA50;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049FA50[];

void *TItemProShield__sub_80116C44(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FA50;
    return arg0;
}

int TItemProShield__sub_80116CD8(void* p) { return TItemObject__sub_801160E0(*(void**)((char*)p + 0xf0)); }

extern M2C_UNK lbl_8049FB08[];

void *item_object_variant_deleting_dtor_80116CFC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FB08;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049FB08[];

void *TItemProShield__sub_80116D54(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FB08;
    return arg0;
}

}
