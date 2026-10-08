#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021E068_8021E010 { char pad[0x18]; };
struct VObj_8021E068_8021E010 : Base_8021E068_8021E010 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
};

struct RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

#include <stddef.h>
struct Stack_8021DC30 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
};

struct RecoveredGlobal_8021DC30_lbl_8044C140 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8021DC30_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct E_8021E1FC { u8 pad0[8]; void (*fn)(void); u8 pad1[8]; };

struct Tbl_8021E1FC { E_8021E1FC e[8]; };

struct Ent_8021DDB8 {
    void (*f0)(void);
    void (*f4)(void);
    void (*f8)(void);
    void (*fc)(s32);
    s32 (*f10)(u16);
};

typedef s32 M2C_UNK;
extern "C" {
s32 TShopGenerator__sub_80222DAC(s32);
extern RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0 TShopGenerator__slot_active_table;
u8 is_slot_active__14TShopGeneratorFi(s32 arg0);
f32 xyz_distance_squared(void *, void *);
f32 vec3_dot(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
f32 normalize_vector(void *);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_8021DC30_lbl_8044C140 lbl_8044C140;
extern RecoveredGlobal_8021DC30_lbl_8058D490 lbl_8058D490;
extern const f32 lbl_805DC6E8;
bool is_player_in_service_range__14TShopGeneratorFPvPvf(u8 *arg0, u8 *arg1, f32 farg0);
s32 TShopGenerator__sub_80222DAC(s32);
extern RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0 TShopGenerator__slot_active_table;
void clear_slot_active__14TShopGeneratorFi(s32 arg0);
s32 TShopGenerator__sub_80222DAC(s32);
extern RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0 TShopGenerator__slot_active_table;
void THunterGuildSeqOffline__sub_8021E180(s32 arg0);
extern Tbl_8021E1FC TShopGenerator__data_804C9FA8;
extern RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0 TShopGenerator__slot_active_table;
void TMedicalCenterMes__sub_80216238(void);
void TShopGenerator__sub_8021E1FC(void);
s32 obj_getField1c(s32);
s32 TShopGenerator__sub_80222DAC(s32);
extern Tbl_8021E1FC TShopGenerator__data_804C9FA8;
s32 is_no_service_active__14TShopGeneratorFPvi(void *self, s32 player);
s32 obj_getField1c(s32);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv(void);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 get_map_id__13TRaderMapCoreFPv(s32);
s32 is_flag_400_set__10TObjPlayerFPv(s32);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 get_player_by_client_id(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 get_slot_flag__17TMedicalCenterMesFi(s32);
bool is_player_in_service_range__14TShopGeneratorFPvPvf(u8 *arg0, u8 *arg1, f32 farg0);
s32 is_no_service_active__14TShopGeneratorFPvi(void *self, s32 player);
u8 is_slot_active__14TShopGeneratorFi(s32 arg0);
s32 TShopGenerator__sub_80222DAC(s32);
s32 is_not_split_screen__13TRaderMapCoreFv(void);
extern Tbl_8021E1FC TShopGenerator__data_804C9FA8;
extern u8 lbl_8050E208[];
extern s32 lbl_805D53A0;
extern s32 lbl_805D55C0;
extern const f32 lbl_805DC6EC;
void run_task__14TShopGeneratorFv(u8 *self);
void TMedicalCenterMes__sub_80216260(void);
extern Tbl_8021E1FC TShopGenerator__data_804C9FA8;
extern RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0 TShopGenerator__slot_active_table;
void TShopGenerator__sub_8021E270(void);
}

extern "C" {

void *TShopGenerator__create(void *arg0);
void *TShopGenerator__ct(void *arg0, s32 arg1);
void *__dt__14TShopGeneratorFv(void *arg0, s16 arg1);
M2C_UNK TPhotonMagicSquare__sub_801A2640(void *, s32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__14TShopGenerator[];

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
typedef char RecoveredGlobal_8021DC30_lbl_8044C140_size[sizeof(RecoveredGlobal_8021DC30_lbl_8044C140) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8021DC30_lbl_8058D490_size[sizeof(RecoveredGlobal_8021DC30_lbl_8058D490) == 0x30 ? 1 : -1];
bool is_player_in_service_range__14TShopGeneratorFPvPvf(u8 *arg0, u8 *arg1, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8021DC30, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8021DC30, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8021DC30, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8021DC30, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8021DC30, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8021DC30, sp1C) == 0x14) ? 1 : -1];
    Stack_8021DC30 stack;
    if (xyz_distance_squared((void *) (arg1 + 0x38), (void *) (arg0 + 0x38)) > (farg0 * farg0)) {
        return 0;
    }
    stack.sp8 = M2C_FIELD(&lbl_8044C140.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8044C140.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8044C140.value, s32 *, 8);
    push_matrix_from((void *) (&lbl_8058D490.value));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg1, s32 *, 0x60)));
    rotate_vector_by_matrix((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    pop_matrix();
    stack.sp14 = M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg1, f32 *, 0x38);
    stack.sp18 = M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg1, f32 *, 0x3C);
    stack.sp1C = M2C_FIELD(arg0, f32 *, 0x40) - M2C_FIELD(arg1, f32 *, 0x40);
    normalize_vector((void *) (&stack.sp14));
    return (vec3_dot((void *) (&stack.sp8), (void *) (&stack.sp14)) > lbl_805DC6E8) == 0;
}
#pragma pop

s32 is_no_service_active__14TShopGeneratorFPvi(void *self, s32 player) {
    s32 i;
    s32 (*fn)(u16);
    for (i = 0; i < 7; i++) {
        fn = M2C_FIELD(&TShopGenerator__data_804C9FA8.e[i], s32 (**)(u16), 0x10);
        if (fn(TShopGenerator__sub_80222DAC(obj_getField1c(player))) == 1) {
            return 0;
        }
    }
    return 1;
}

void run_task__14TShopGeneratorFv(u8 *self) {
    Ent_8021DDB8 *e;
    s32 i;
    s32 p;
    s32 (*fn)(u16);
    e = (Ent_8021DDB8 *)&TShopGenerator__data_804C9FA8.e[M2C_FIELD(self, s32 *, 0x84)];
    if (M2C_FIELD(self, s32 *, 0x94) > 0) {
        M2C_FIELD(self, s32 *, 0x94)--;
        return;
    }
    if (lbl_805D55C0 != 0) {
        return;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) != 0) {
        return;
    }
    if (get_instance__15TAdPlayerLoadGCFv() != 0) {
        return;
    }
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        for (i = 0; i < 4; i++) {
            p = get_player_by_client_id(i);
            if (p == 0) continue;
            if (((s32 (*)(u8 *, u8 *, f32))is_player_in_service_range__14TShopGeneratorFPvPvf)(self, (u8 *)p, lbl_805DC6EC) == 0) continue;
            if (((s32 (*)(s32))is_slot_active__14TShopGeneratorFi)(obj_getField1c(p)) == 1) continue;
            if (get_slot_flag__17TMedicalCenterMesFi(obj_getField1c(p)) == 1) continue;
            if (is_flag_400_set__10TObjPlayerFPv(p) == 1) continue;
            if (check_flag_100__10TObjPlayerFPv(p) == 1) continue;
            fn = e->f10;
            if (fn(TShopGenerator__sub_80222DAC(obj_getField1c(p))) == 1) continue;
            if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + get_map_id__13TRaderMapCoreFPv(p) * 0x50 + 0x20, 4) == 0) continue;
            e->fc(p);
        }
    } else {
        s32 q;
        s32 (*fn2)(u16);
        q = get_player_by_client_id(lbl_805D53A0);
        if (q == 0) return;
        if (((s32 (*)(s32))is_slot_active__14TShopGeneratorFi)(obj_getField1c(q)) == 1) return;
        if (get_slot_flag__17TMedicalCenterMesFi(obj_getField1c(q)) == 1) return;
        if (is_flag_400_set__10TObjPlayerFPv(q) == 1) return;
        if (check_flag_100__10TObjPlayerFPv(q) == 1) return;
        if (is_no_service_active__14TShopGeneratorFPvi(self, q) == 0) return;
        fn2 = e->f10;
        if (fn2(TShopGenerator__sub_80222DAC(obj_getField1c(q))) == 1) return;
        if (((s32 (*)(u8 *, u8 *, f32))is_player_in_service_range__14TShopGeneratorFPvPvf)(self, (u8 *)q, lbl_805DC6EC) == 0) return;
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + get_map_id__13TRaderMapCoreFPv(q) * 0x50 + 0x20, 4) == 0) return;
        e->fc(q);
    }
}

void *__dt__14TShopGeneratorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TShopGenerator;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__14TShopGenerator[];
extern s32 lbl_805D36C0;
extern s32 tl_05;

void *TShopGenerator__ct(void *arg0, s32 arg1) {
    s32 temp_r0;

    TPhotonMagicSquare__sub_801A2640(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TShopGenerator;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D36C0;
    ((VObj_8021E068_8021E010 *)arg0)->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 5;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r0 < 0) {
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    if (temp_r0 > 6) {
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    return arg0;
}

typedef char RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0_size[sizeof(RecoveredGlobal_8021E110_TShopGenerator__data_80513ED0) == 0x10 ? 1 : -1];
u8 is_slot_active__14TShopGeneratorFi(s32 arg0) {
    return (u8) (M2C_FIELD(&TShopGenerator__slot_active_table.value, M2C_UNK *, ((TShopGenerator__sub_80222DAC(arg0) * 4) & 0x3FFFC)) == 1);
}

void clear_slot_active__14TShopGeneratorFi(s32 arg0) {
    u16 idx = TShopGenerator__sub_80222DAC(arg0);
    ((s32 *)&TShopGenerator__slot_active_table)[idx] = 0;
}

void THunterGuildSeqOffline__sub_8021E180(s32 arg0) {
    u16 idx = TShopGenerator__sub_80222DAC(arg0);
    ((s32 *)&TShopGenerator__slot_active_table)[idx] = 1;
}

void *TShopGenerator__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TShopGenerator__ct((void *)(o), (s32)(arg0));
    }
    return o;
}
void TShopGenerator__sub_8021E1FC(void) {
    E_8021E1FC *p;
    s32 n;
    s32 i;
    TMedicalCenterMes__sub_80216238();
    p = &TShopGenerator__data_804C9FA8.e[7];
    n = 7;
    do {
        void (*f)(void) = (p - 1)->fn;
        p--;
        f();
    } while (--n > 0);
    for (i = 0; i < 4; i++) {
        ((s32 *)&TShopGenerator__slot_active_table)[i] = 0;
    }
}
void TShopGenerator__sub_8021E270(void) {
    E_8021E1FC *p;
    s32 n;
    s32 i;
    n = 7;
    p = &TShopGenerator__data_804C9FA8.e[0];
    do {
        M2C_FIELD(p, void (**)(void), 4)();
        p++;
    } while (--n > 0);
    TMedicalCenterMes__sub_80216260();
    for (i = 0; i < 4; i++) {
        ((s32 *)&TShopGenerator__slot_active_table)[i] = 0;
    }
}

}
