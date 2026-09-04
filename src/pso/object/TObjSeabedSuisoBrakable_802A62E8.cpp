#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802A63F8_802A62E8 { char pad[0x18]; };
struct VObj_802A63F8_802A62E8 : Base_802A63F8_802A62E8 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12();
};

extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjSeabedSuisoBrakable__ct(void *, void *);
}

extern "C" {

void TObjSeabedSuisoBrakable__vt12(void *arg0);
void TObjSeabedSuisoBrakable__vt15(void);
void *__dt__23TObjSeabedSuisoBrakableFv(void *arg0, s16 arg1);
void *create__23TObjSeabedSuisoBrakableFPv(void *arg0);
void notify_break__23TObjSeabedSuisoBrakableFUi(u32 arg0);
void render__23TObjSeabedSuisoBrakableFv(void *arg0);
void update_anim_if_active__23TObjSeabedSuisoBrakableFPv(void* p);
void update_switch_lock__23TObjSeabedSuisoBrakableFPv(void *arg0);
M2C_UNK TOComputerMachine01__sub_8023DDC8(s32, M2C_UNK, M2C_UNK, u16, M2C_UNK);
u8 TODoorAncient08__sub_80229220(u16);
M2C_UNK TORockCave__sub_80175134(void *);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void *TObjSeabedSuisoBrakable__sub_802A6DA8(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__18TORockCaveBrakableFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void *count_linked_switches__23TObjSeabedSuisoBrakableFUii(s32, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 get_break_data__23TObjSeabedSuisoBrakableFi(M2C_UNK);
u32 get_table0_entry__23TObjSeabedSuisoBrakableFi(M2C_UNK);
s32 *get_table1_entry__23TObjSeabedSuisoBrakableFi(M2C_UNK);
int update_anim_phase__17TOBarrierEnergy01FPv(void*);

extern s32 lbl_805D53A4;
extern s32 lbl_805D667C;

void TObjSeabedSuisoBrakable__vt12(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    void *temp_r31;
    void *temp_r31_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 2) {
        temp_r31 = count_linked_switches__23TObjSeabedSuisoBrakableFUii(M2C_FIELD(arg0, s32 *, 0x34), 2);
        if ((s32) lbl_805D667C != (s32) lbl_805D53A4) {
            if ((temp_r31 != NULL) && ((u32) M2C_FIELD(temp_r31, u32 *, 4) != 0U)) {
                temp_r3 = get_break_data__23TObjSeabedSuisoBrakableFi(1);
                if (temp_r3 != -1) {
                    TOComputerMachine01__sub_8023DDC8((s32)(M2C_FIELD(temp_r31, u32 *, 4)), (M2C_UNK)(0), (M2C_UNK)(1), (u16)((u16) temp_r3), (M2C_UNK)(1));
                }
            }
            lbl_805D667C = lbl_805D53A4;
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 0) {
        temp_r31_2 = count_linked_switches__23TObjSeabedSuisoBrakableFUii(M2C_FIELD(arg0, s32 *, 0x34), 8);
        if ((s32) lbl_805D667C != (s32) lbl_805D53A4) {
            if ((temp_r31_2 != NULL) && ((u32) M2C_FIELD(temp_r31_2, u32 *, 4) != 0U)) {
                temp_r3_2 = get_break_data__23TObjSeabedSuisoBrakableFi(2);
                if (temp_r3_2 != -1) {
                    TOComputerMachine01__sub_8023DDC8((s32)(M2C_FIELD(temp_r31_2, u32 *, 4)), (M2C_UNK)(0), (M2C_UNK)(1), (u16)((u16) temp_r3_2), (M2C_UNK)(1));
                }
            }
            lbl_805D667C = lbl_805D53A4;
        }
    }
}

void render__23TObjSeabedSuisoBrakableFv(void *arg0) {
    struct VObj_802A63F8_802A62E8 *o = (struct VObj_802A63F8_802A62E8 *)arg0;
    o->m12();
    TORockCave__sub_80175134(arg0);
}

void TObjSeabedSuisoBrakable__vt15(void) {  }

extern M2C_UNK __vt__23TObjSeabedSuisoBrakable[];

void * TObjSeabedSuisoBrakable__sub_802A65B8(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjSeabedSuisoBrakable__ct(o, arg0);
    }
    return o;
}

void *__dt__23TObjSeabedSuisoBrakableFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TObjSeabedSuisoBrakable;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TORockCaveBrakableFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void notify_break__23TObjSeabedSuisoBrakableFUi(u32 arg0) {
    u32 t0, t1, t2;
    t0 = get_table0_entry__23TObjSeabedSuisoBrakableFi(0);
    if (t0 == arg0 || (t1 = get_table0_entry__23TObjSeabedSuisoBrakableFi(1), t1 == arg0) || (t2 = get_table0_entry__23TObjSeabedSuisoBrakableFi(2), t2 == arg0)) {
        begin_effect_render__13TParticleCtrlFv();
        return;
    }
    end_effect_render__13TParticleCtrlFv();
}

extern void *tl_05;

void *create__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjSeabedSuisoBrakable__sub_802A6DA8(o, tl_05, arg0);
    }
    return o;
}

void update_anim_if_active__23TObjSeabedSuisoBrakableFPv(void* p) { if (*(unsigned int*)((char*)p + 0xbc) != 0) { update_anim_phase__17TOBarrierEnergy01FPv(p); } }

extern s32 lbl_805D53A4;
extern s32 lbl_805D6678;

void update_switch_lock__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    s32 *temp_r3;
    s32 *temp_r3_2;
    s32 *temp_r3_3;
    s32 *temp_r3_4;
    s32 *temp_r3_5;
    s32 *temp_r3_6;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r31;
    s32 var_r30;

    var_r31 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) > 0) {
        var_r30 = 0;
        while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0xCC)) {
            if (TODoorAncient08__sub_80229220((u16) (M2C_FIELD(arg0, s32 *, 0xD0) + var_r30)) == 0) {
                var_r31 = 0;
            }
            var_r30 += 1;
        }
    }
    if (var_r31 != 0) {
        temp_r3 = get_table1_entry__23TObjSeabedSuisoBrakableFi(1);
        if (temp_r3 != NULL) {
            *temp_r3 &= 0xFFFFFFF7;
        }
        temp_r3_2 = get_table1_entry__23TObjSeabedSuisoBrakableFi(2);
        if (temp_r3_2 != NULL) {
            *temp_r3_2 &= 0xFFFFFFF7;
        }
    } else {
        temp_r3_3 = get_table1_entry__23TObjSeabedSuisoBrakableFi(1);
        if (temp_r3_3 != NULL) {
            *temp_r3_3 |= 8;
        }
        temp_r3_4 = get_table1_entry__23TObjSeabedSuisoBrakableFi(2);
        if (temp_r3_4 != NULL) {
            *temp_r3_4 |= 8;
        }
    }
    if ((s32) lbl_805D6678 != (s32) lbl_805D53A4) {
        temp_r31 = get_break_data__23TObjSeabedSuisoBrakableFi(4);
        temp_r3_5 = get_table1_entry__23TObjSeabedSuisoBrakableFi(2);
        if ((temp_r3_5 != NULL) && (temp_r31 != -1)) {
            TOComputerMachine01__sub_8023DDC8((s32)(M2C_FIELD(temp_r3_5, s32 *, 4)), (M2C_UNK)(0), (M2C_UNK)(1), (u16)((u16) temp_r31), (M2C_UNK)(1));
        }
        temp_r31_2 = get_break_data__23TObjSeabedSuisoBrakableFi(3);
        temp_r3_6 = get_table1_entry__23TObjSeabedSuisoBrakableFi(0);
        if ((temp_r3_6 != NULL) && (temp_r31_2 != -1)) {
            TOComputerMachine01__sub_8023DDC8((s32)(M2C_FIELD(temp_r3_6, s32 *, 4)), (M2C_UNK)(0), (M2C_UNK)(3), (u16)((u16) temp_r31_2), (M2C_UNK)(1));
        }
        lbl_805D6678 = lbl_805D53A4;
    }
}

}
