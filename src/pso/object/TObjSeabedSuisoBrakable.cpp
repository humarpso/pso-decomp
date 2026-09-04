#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int get_table0_entry__23TObjSeabedSuisoBrakableFi(int a0);
int get_table1_entry__23TObjSeabedSuisoBrakableFi(int a0);

    extern int lbl_80540AD4[];
int get_table0_entry__23TObjSeabedSuisoBrakableFi(int a0) {  return lbl_80540AD4[a0]; }

    extern int lbl_80540AE0[];
int get_table1_entry__23TObjSeabedSuisoBrakableFi(int a0) {  return lbl_80540AE0[a0]; }

}
#else
#if PSO_CLASS_PACKAGE == 0x801315D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void walk_linked_switches__23TObjSeabedSuisoBrakableFPv(void *arg0);

extern s32 lbl_805D552C;
extern s32 lbl_805D5530;
extern void *lbl_805D5534;

void walk_linked_switches__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    if ((s32) lbl_805D552C == (s32) lbl_805D5530) {
        lbl_805D5534 = arg0;
    }
    lbl_805D552C += 1;
    if ((void *) lbl_805D5534 == NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            walk_linked_switches__23TObjSeabedSuisoBrakableFPv(M2C_FIELD(arg0, void **, 0x2C));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            walk_linked_switches__23TObjSeabedSuisoBrakableFPv(M2C_FIELD(arg0, void **, 0x30));
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131648
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32 arg0, s32 arg1);
M2C_UNK walk_linked_switches__23TObjSeabedSuisoBrakableFPv();

extern s32 lbl_805D552C;
extern s32 lbl_805D5530;
extern s32 lbl_805D5534;

s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        return 0;
    }
    lbl_805D5530 = arg1;
    lbl_805D552C = 0;
    lbl_805D5534 = 0;
    walk_linked_switches__23TObjSeabedSuisoBrakableFPv();
    return lbl_805D5534;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013168C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void collect_recursive__23TObjSeabedSuisoBrakableFPv(void *arg0);

extern s32 lbl_805D5520;
extern s32 lbl_805D5524;
extern void *lbl_805D5528;

void collect_recursive__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    if ((s32) lbl_805D5520 == (s32) lbl_805D5524) {
        lbl_805D5528 = arg0;
    }
    lbl_805D5520 += 1;
    if ((void *) lbl_805D5528 == NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            collect_recursive__23TObjSeabedSuisoBrakableFPv(M2C_FIELD(arg0, void **, 0x2C));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            collect_recursive__23TObjSeabedSuisoBrakableFPv(M2C_FIELD(arg0, void **, 0x30));
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A62E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802A63F8 { char pad[0x18]; };
struct VObj_802A63F8 : Base_802A63F8 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12();
};

extern "C" {

void TObjSeabedSuisoBrakable__vt12(void *arg0);
void render__23TObjSeabedSuisoBrakableFv(void *arg0);
M2C_UNK TOComputerMachine01__sub_8023DDC8(u32, M2C_UNK, M2C_UNK, u16, M2C_UNK);
s32 get_break_data__23TObjSeabedSuisoBrakableFi(M2C_UNK);
void *count_linked_switches__23TObjSeabedSuisoBrakableFUii(s32, M2C_UNK);
M2C_UNK TORockCave__sub_80175134(void *);

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
                    TOComputerMachine01__sub_8023DDC8(M2C_FIELD(temp_r31, u32 *, 4), 0, 1, (u16) temp_r3, 1);
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
                    TOComputerMachine01__sub_8023DDC8(M2C_FIELD(temp_r31_2, u32 *, 4), 0, 1, (u16) temp_r3_2, 1);
                }
            }
            lbl_805D667C = lbl_805D53A4;
        }
    }
}

void render__23TObjSeabedSuisoBrakableFv(void *arg0) {
    struct VObj_802A63F8 *o = (struct VObj_802A63F8 *)arg0;
    o->m12();
    TORockCave__sub_80175134(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A65B4
#include "types.h"

extern "C" {

void TObjSeabedSuisoBrakable__vt15(void);

void TObjSeabedSuisoBrakable__vt15(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A6600
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__23TObjSeabedSuisoBrakableFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__18TORockCaveBrakableFv(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__23TObjSeabedSuisoBrakable[];

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A6768
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_break__23TObjSeabedSuisoBrakableFUi(u32 arg0);
u32 get_table0_entry__23TObjSeabedSuisoBrakableFi(M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();

void notify_break__23TObjSeabedSuisoBrakableFUi(u32 arg0) {
    u32 t0, t1, t2;
    t0 = get_table0_entry__23TObjSeabedSuisoBrakableFi(0);
    if (t0 == arg0 || (t1 = get_table0_entry__23TObjSeabedSuisoBrakableFi(1), t1 == arg0) || (t2 = get_table0_entry__23TObjSeabedSuisoBrakableFi(2), t2 == arg0)) {
        begin_effect_render__13TParticleCtrlFv();
        return;
    }
    end_effect_render__13TParticleCtrlFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A67CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__23TObjSeabedSuisoBrakableFPv(void *arg0);
void *TObjSeabedSuisoBrakable__sub_802A6DA8(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjSeabedSuisoBrakable__sub_802A6DA8(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A6818
#include "types.h"

extern "C" {

void update_anim_if_active__23TObjSeabedSuisoBrakableFPv(void* p);
int update_anim_phase__17TOBarrierEnergy01FPv(void*);

void update_anim_if_active__23TObjSeabedSuisoBrakableFPv(void* p) { if (*(unsigned int*)((char*)p + 0xbc) != 0) { update_anim_phase__17TOBarrierEnergy01FPv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A6844
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_switch_lock__23TObjSeabedSuisoBrakableFPv(void *arg0);
M2C_UNK TOComputerMachine01__sub_8023DDC8(s32, M2C_UNK, M2C_UNK, u16, M2C_UNK);
u8 TODoorAncient08__sub_80229220(u16);
s32 get_break_data__23TObjSeabedSuisoBrakableFi(M2C_UNK);
s32 *get_table1_entry__23TObjSeabedSuisoBrakableFi(M2C_UNK);

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
            TOComputerMachine01__sub_8023DDC8(M2C_FIELD(temp_r3_5, s32 *, 4), 0, 1, (u16) temp_r31, 1);
        }
        temp_r31_2 = get_break_data__23TObjSeabedSuisoBrakableFi(3);
        temp_r3_6 = get_table1_entry__23TObjSeabedSuisoBrakableFi(0);
        if ((temp_r3_6 != NULL) && (temp_r31_2 != -1)) {
            TOComputerMachine01__sub_8023DDC8(M2C_FIELD(temp_r3_6, s32 *, 4), 0, 3, (u16) temp_r31_2, 1);
        }
        lbl_805D6678 = lbl_805D53A4;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A69BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_break__23TObjSeabedSuisoBrakableFPv(void *arg0);
M2C_UNK TOComputerMachine01__sub_8023DDC8(u32, M2C_UNK, M2C_UNK, u16, M2C_UNK);
s32 get_break_data__23TObjSeabedSuisoBrakableFi(M2C_UNK);
void *count_linked_switches__23TObjSeabedSuisoBrakableFUii(s32, M2C_UNK);
M2C_UNK set_npc_enemy_param(M2C_UNK *);

extern M2C_UNK notify_break__23TObjSeabedSuisoBrakableFUi[];
extern s32 lbl_805D53A4;
extern s32 lbl_805D6678;

void notify_break__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    s32 temp_r3;
    void *temp_r31;

    temp_r31 = count_linked_switches__23TObjSeabedSuisoBrakableFUii(M2C_FIELD(arg0, s32 *, 0xD4), 4);
    if ((s32) lbl_805D6678 != (s32) lbl_805D53A4) {
        if ((temp_r31 != NULL) && ((u32) M2C_FIELD(temp_r31, u32 *, 4) != 0U)) {
            temp_r3 = get_break_data__23TObjSeabedSuisoBrakableFi(0);
            if (temp_r3 != -1) {
                TOComputerMachine01__sub_8023DDC8(M2C_FIELD(temp_r31, u32 *, 4), 1, 0, (u16) temp_r3, 1);
            }
        }
        lbl_805D6678 = lbl_805D53A4;
    }
    set_npc_enemy_param(notify_break__23TObjSeabedSuisoBrakableFUi);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A6A54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__23TObjSeabedSuisoBrakableFPv(void *arg0);
M2C_UNK update_switch_lock__23TObjSeabedSuisoBrakableFPv();
M2C_UNK notify_break__23TObjSeabedSuisoBrakableFPv();

void update_state__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 2:
        notify_break__23TObjSeabedSuisoBrakableFPv();
        return;
    case 3:
        update_switch_lock__23TObjSeabedSuisoBrakableFPv();
    case 0:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A6B4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__23TObjSeabedSuisoBrakableFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804DD7F4[];

void *__dt__23TObjSeabedSuisoBrakableFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DD7F4;
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD8)); M2C_FIELD(arg0, M2C_UNK *, 0xD8) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A6EFC
#include "types.h"

extern "C" {

int get_instance__23TObjSeabedSuisoBrakableFv(void);

    extern int lbl_805D6674;
int get_instance__23TObjSeabedSuisoBrakableFv(void) {  return lbl_805D6674; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A6F40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static_resources__23TObjSeabedSuisoBrakableFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 TObjSeabedSuisoBrakable__data_805D6670;
extern u32 lbl_805D6674;

void free_static_resources__23TObjSeabedSuisoBrakableFv(void) {
    if ((u32) lbl_805D6674 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6674);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6674);
        lbl_805D6674 = 0U;
    }
    if ((u32) TObjSeabedSuisoBrakable__data_805D6670 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjSeabedSuisoBrakable__data_805D6670, 1);
        TObjSeabedSuisoBrakable__data_805D6670 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A71F8
#include "types.h"

extern "C" {

int get_break_data__23TObjSeabedSuisoBrakableFi(int a0);

    extern int lbl_80540AC0[];
int get_break_data__23TObjSeabedSuisoBrakableFi(int a0) {  return lbl_80540AC0[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7234
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802A7318(void* p);
void TObjSeabedSuisoBrakable__vt17(void);

void TObjSeabedSuisoBrakable__vt17(void) {  }

}
#endif
#endif
