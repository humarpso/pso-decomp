#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800BA138 { char pad[0x18]; };
struct VObj_800BA138 : Base_800BA138 {
    virtual void g0();
#define VM(n) virtual void m##n();
    VM(0) VM(1) VM(2) VM(3) VM(4) VM(5) VM(6) VM(7) VM(8) VM(9)
    VM(10) VM(11) VM(12) VM(13) VM(14) VM(15) VM(16) VM(17) VM(18) VM(19)
    VM(20) VM(21) VM(22) VM(23) VM(24) VM(25) VM(26) VM(27) VM(28) VM(29)
    VM(30) VM(31) VM(32) VM(33) VM(34) VM(35) VM(36) VM(37) VM(38) VM(39)
    VM(40) VM(41) VM(42) VM(43) VM(44) VM(45) VM(46) VM(47) VM(48) VM(49)
    VM(50) VM(51) VM(52) VM(53) VM(54) VM(55) VM(56) VM(57) VM(58) VM(59)
    VM(60) VM(61) VM(62) VM(63) VM(64) VM(65) VM(66) VM(67) VM(68) VM(69)
    VM(70) VM(71) VM(72) VM(73) VM(74) VM(75) VM(76) VM(77) VM(78) VM(79)
    VM(80) VM(81) VM(82) VM(83) VM(84) VM(85) VM(86) VM(87)
#undef VM
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
};

#include <stddef.h>
struct VBase_18_0c879f { char pad[0x18]; };

struct VObj_18_0c879f : VBase_18_0c879f {
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
    virtual M2C_UNK m21(s32, s32 *, M2C_UNK, M2C_UNK, M2C_UNK);
};

struct Stack_800BA318 {
    s32 sp8;
    s32 spC;
};

struct RecoveredGlobal_800BA318_lbl_8043B68C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct E_800BA1C8 { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct O_800BA1C8 { u8 pad[0xa4]; E_800BA1C8 *entries; s32 count; };

struct E_800BA190 { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct O_800BA190 { u8 pad[0xa4]; E_800BA190 *entries; s32 count; };

struct Part_800BA200 { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

struct Obj_800BA200 { u8 pad[0x30]; u32 flags; u8 pad2[0xa4 - 0x34]; Part_800BA200 *parts; s32 count; };

struct Part_800BA244 { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

struct Obj_800BA244 { u8 pad[0x30]; u32 flags; u8 pad2[0xa4 - 0x34]; Part_800BA244 *parts; s32 count; };

extern "C" {
extern RecoveredGlobal_800BA318_lbl_8043B68C lbl_8043B68C;
void TObjEneDD__sub_800BA318(s32 arg0, u8 *arg1);
extern RecoveredGlobal_800BA318_lbl_8043B68C lbl_8043B684;
void TObjEneDD__sub_800BA378(s32 arg0, u8 *arg1);
extern RecoveredGlobal_800BA318_lbl_8043B68C lbl_8043B67C;
void TObjEneDD__sub_800BA3D8(s32 arg0, u8 *arg1);
extern RecoveredGlobal_800BA318_lbl_8043B68C lbl_8043B674;
void TObjEneDD__sub_800BA438(s32 arg0, u8 *arg1);
void TObjEneDD__vt90(O_800BA1C8 *self);
void TObjEneDD__vt91(O_800BA190 *self);
void TObjEneDD__vt89(Obj_800BA200 *self);
void TObjEneDD__vt88(Obj_800BA244 *self);
}

extern "C" {

struct EneDDBase2_800BA138 { char pad[0x18]; };
struct EneDDObj2_800BA138 : EneDDBase2_800BA138 {
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
    virtual void m15(void *, void *);
    virtual void m16(void *, void *);
};
struct EneDDBase_800BA138 { char pad[0x18]; };
struct EneDDObj_800BA138 : EneDDBase_800BA138 {
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
    virtual void m12(void *, void *, void *);
    virtual void m13(void *, void *, void *);
};

void TObjEneDD__sub_800BA498(void* p, void* a1);
void TObjEneDD__sub_800BA5A4(void* p, void* a1);
int TObjEneDD__sub_800BA6B8(void* p);
int TObjEneDD__sub_800BA6C4(void* p);
void TObjEneDD__vt92(void *arg0);
int check_state_flag_1__9TObjEneDDFPv(void* p);
int check_state_flag_2__9TObjEneDDFPv(void* p);
int check_state_flag_4__9TObjEneDDFPv(void* p);
void emit_effect__9TObjEneDDFPvii(void* p, int a1, int a2);
void emit_enemy_effect__9TObjEneDDFiiPvi(s32 arg0, s32 arg1, u8 *arg2, s32 arg3);
u8 is_alive__9TObjEneDDFPv(void *arg0);
int set_state_8__9TObjEneDDFPv(void* p);
void setup__9TObjEneDDFPvii(void* p, int a1, int a2);
void setup_instance__9TObjEneDDFiiPvi(s32 arg0, s32 arg1, u8 *arg2, s32 arg3);
void transform_relative_position__9TObjEneDDFPvPv(void* p, void* a1);
int TObjEneDD__sub_800BA754(void* a0 = 0, void* a1 = 0, void* a2 = 0);
int add_flags_2e4__10TObjPlayerFPvUi(void*, int);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
M2C_UNK fn_800BC3E8(void *, s32);
M2C_UNK get_position__12TBoss1DragonFPv(void *, s32);

void TObjEneDD__vt92(void *arg0) {
    struct VObj_800BA138 *o = (struct VObj_800BA138 *)arg0;
    o->m88();
    o->m91();
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04040000);
}

void TObjEneDD__vt91(O_800BA190 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->entries[i].flags &= ~1;
    }
}

void TObjEneDD__vt90(O_800BA1C8 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->entries[i].flags |= 1;
    }
}

void TObjEneDD__vt89(Obj_800BA200 *self) {
    s32 i;
    self->flags &= ~0x04000000;
    for (i = 0; i < self->count; i++) {
        self->parts[i].flags &= ~0x02000000;
    }
}

void TObjEneDD__vt88(Obj_800BA244 *self) {
    s32 i;
    self->flags |= 0x04000000;
    for (i = 0; i < self->count; i++) {
        self->parts[i].flags |= 0x02000000;
    }
}

int set_state_8__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 8); }
int check_state_flag_4__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 4); }
int check_state_flag_2__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 2); }
int check_state_flag_1__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 1); }

typedef char RecoveredGlobal_800BA318_lbl_8043B68C_size[sizeof(RecoveredGlobal_800BA318_lbl_8043B68C) == 0xC ? 1 : -1];
void TObjEneDD__sub_800BA318(s32 arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_800BA318, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800BA318, spC) == 0x4) ? 1 : -1];
    Stack_800BA318 stack;
    stack.sp8 = M2C_FIELD(&lbl_8043B68C.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043B68C.value, s32 *, 4);
    ((VObj_18_0c879f *)(arg1))->m21(arg0, &stack.sp8, 0, -1, -1);
}

void TObjEneDD__sub_800BA378(s32 arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_800BA318, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800BA318, spC) == 0x4) ? 1 : -1];
    Stack_800BA318 stack;
    stack.sp8 = M2C_FIELD(&lbl_8043B684.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043B684.value, s32 *, 4);
    ((VObj_18_0c879f *)(arg1))->m21(arg0, &stack.sp8, 0, -1, -1);
}

void TObjEneDD__sub_800BA3D8(s32 arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_800BA318, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800BA318, spC) == 0x4) ? 1 : -1];
    Stack_800BA318 stack;
    stack.sp8 = M2C_FIELD(&lbl_8043B67C.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043B67C.value, s32 *, 4);
    ((VObj_18_0c879f *)(arg1))->m21(arg0, &stack.sp8, 0, -1, -1);
}

void TObjEneDD__sub_800BA438(s32 arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_800BA318, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800BA318, spC) == 0x4) ? 1 : -1];
    Stack_800BA318 stack;
    stack.sp8 = M2C_FIELD(&lbl_8043B674.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043B674.value, s32 *, 4);
    ((VObj_18_0c879f *)(arg1))->m21(arg0, &stack.sp8, 0, -1, -1);
}

void TObjEneDD__sub_800BA498(void* p, void* a1) { emit_enemy_effect__9TObjEneDDFiiPvi((s32)(p), (s32)((char*)p + 0x38), (u8 *)(a1), (s32)((void*)0)); }

void emit_effect__9TObjEneDDFPvii(void* p, int a1, int a2) { emit_enemy_effect__9TObjEneDDFiiPvi((s32)(p), (s32)(a1), (u8 *)(a2), (s32)(0)); }

extern u8 *lbl_805D5138;
extern const f32 lbl_805D9EA0;

void emit_enemy_effect__9TObjEneDDFiiPvi(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    fn_800BC3E8(lbl_805D5138, arg0);
    get_position__12TBoss1DragonFPv(lbl_805D5138, arg1);
    M2C_FIELD(M2C_FIELD(lbl_805D5138, void **, 0xA4), f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(M2C_FIELD(lbl_805D5138, void **, 0xA4), s32 *, 0x18) = 0x9D03;
    if (M2C_FIELD(arg2, f32 *, 8) > lbl_805D9EA0) {
        ((EneDDObj2_800BA138*)lbl_805D5138)->m16((void*)(arg2 + 0xC), (void*)arg3);
        return;
    }
    ((EneDDObj2_800BA138*)lbl_805D5138)->m15((void*)(arg2 + 0xC), (void*)arg3);
}

void TObjEneDD__sub_800BA5A4(void* p, void* a1) { setup_instance__9TObjEneDDFiiPvi((s32)(p), (s32)((char*)p + 0x38), (u8 *)(a1), (s32)((void*)0)); }

void setup__9TObjEneDDFPvii(void* p, int a1, int a2) { setup_instance__9TObjEneDDFiiPvi((s32)(p), (s32)(a1), (u8 *)(a2), (s32)(0)); }

extern u8 *lbl_805D5138;
extern const f32 lbl_805D9EA0;

void setup_instance__9TObjEneDDFiiPvi(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    fn_800BC3E8(lbl_805D5138, arg0);
    get_position__12TBoss1DragonFPv(lbl_805D5138, arg1);
    M2C_FIELD(M2C_FIELD(lbl_805D5138, void **, 0xA4), f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(M2C_FIELD(lbl_805D5138, void **, 0xA4), s32 *, 0x18) = 0x9D03;
    if (M2C_FIELD(arg2, f32 *, 8) > lbl_805D9EA0) {
        ((EneDDObj_800BA138*)lbl_805D5138)->m13((void*)(arg2 + 0xC), (void*)arg2, (void*)arg3);
        return;
    }
    ((EneDDObj_800BA138*)lbl_805D5138)->m12((void*)(arg2 + 0xC), (void*)arg2, (void*)arg3);
}

int TObjEneDD__sub_800BA6B8(void* p) { return (*(u32*)((char*)p + 0x890) >> 4) & 0x1; }
int TObjEneDD__sub_800BA6C4(void* p) { return (*(u32*)((char*)p + 0x890) >> 6) & 0x1; }
u8 is_alive__9TObjEneDDFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((arg0 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x02040800)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}
void transform_relative_position__9TObjEneDDFPvPv(void* p, void* a1) { TObjEneDD__sub_800BA754(a1, (char*)p + 0x2fc, p); }

}
