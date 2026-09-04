#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe7Berura__sub_80095328(void);
void TObjEneRe7Berura__vt86(void *arg0);

void TObjEneRe7Berura__sub_80095328(void) {  }
void TObjEneRe7Berura__vt86(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80092C90
#include "types.h"

extern "C" {

void TObjEneRe7Berura__vt103(void* p);

int TObjEneRe7Berura__sub_80095328(void*);
int get_target_info__9TObjEneDDFPv(void*);

void TObjEneRe7Berura__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneRe7Berura__sub_80095328(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80093180
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_state__16TObjEneRe7BeruraFv(void);

extern s32 lbl_805D4F68;
extern s32 lbl_805D4F6C;
extern s32 some_id_805c6f74;

void advance_state__16TObjEneRe7BeruraFv(void) {
    switch ((s32) lbl_805D4F68) {
    case 25:
        lbl_805D4F6C = some_id_805c6f74;
        some_id_805c6f74 &= 0xFFFF7FFF;
        break;
    case 26:
        some_id_805c6f74 = lbl_805D4F6C;
        break;
    }
    lbl_805D4F68 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800931C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BeruraBase_800931C8 { char pad[0x14]; };
struct BeruraV_800931C8 : BeruraBase_800931C8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

extern "C" {

void demo_frame_callback__16TObjEneRe7BeruraFv(void);
M2C_UNK get_camera_ctrl__9TObjEneDDFPv(s32, s32);

extern s32 lbl_805D4F68;
extern s32 lbl_805D4F6C;
extern s32 lbl_805D4F70;
extern s32 lbl_805D4F74;
extern s32 lbl_805D4F78;
extern void *lbl_805D4F7C;
extern s32 some_id_805c6f74;

void demo_frame_callback__16TObjEneRe7BeruraFv(void) {
    switch ((s32) lbl_805D4F68) {
    case 0x2:
        lbl_805D4F6C = some_id_805c6f74;
        some_id_805c6f74 &= 0xFFFF7FFF;
        break;
    case 0x3:
        some_id_805c6f74 = lbl_805D4F6C;
        break;
    case 0x4C:
    case 0x50:
        get_camera_ctrl__9TObjEneDDFPv(lbl_805D4F70, lbl_805D4F70);
        lbl_805D4F70 += 0xC;
        break;
    case 0x21:
        if ((s32) lbl_805D4F74 != 0) {
            ((BeruraV_800931C8 *)lbl_805D4F7C)->m6();
        }
        break;
    case 0x38:
        if ((s32) lbl_805D4F78 != 0) {
            ((BeruraV_800931C8 *)lbl_805D4F7C)->m6();
        }
        break;
    case 0x32:
        if ((s32) lbl_805D4F74 != 0) {
            ((BeruraV_800931C8 *)lbl_805D4F7C)->m7();
        }
        break;
    case 0x49:
        if ((s32) lbl_805D4F78 != 0) {
            ((BeruraV_800931C8 *)lbl_805D4F7C)->m7();
        }
        break;
    }
    lbl_805D4F68 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80094994
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_En { char pad[0x18]; };
struct V_En : Base_En {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    PADV
    virtual void m86();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m93();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m100();
};
struct Base_Sub { char pad[0x14]; };
struct V_Sub : Base_Sub {
    PADV4
    PADV
    virtual s32 m5();
};

extern "C" {

void state_attack__16TObjEneRe7BeruraFPvi(u8 *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK init_fields4B8__16TObjEneRe7BeruraFPv(void *);
M2C_UNK TObjPlayer__sub_800A0554(void *);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);

void state_attack__16TObjEneRe7BeruraFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r5;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((V_En *) arg0)->m93();
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x3C0);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        set_field_378__9TObjEneDDFPvi(arg0, 3, temp_r5);
        TObjPlayer__sub_800A0554(arg0 + 0x3D8);
        TBoss3Volopt__sub_800D8C48(arg0 + 0x38);
        init_fields4B8__16TObjEneRe7BeruraFPv(arg0);
        return;
    case 3:
        if (((V_Sub *) (arg0 + 0x3D8))->m5() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        return;
    case 0:
        ((V_En *) arg0)->m100();
        ((V_En *) arg0)->m86();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFD);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80094BA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80094BA4 { char pad[0x18]; };
struct VObj_80094BA4 : Base_80094BA4 {
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
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual s32  m97();
};

extern "C" {

s32 check_death_trigger__16TObjEneRe7BeruraFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

s32 check_death_trigger__16TObjEneRe7BeruraFPv(void *arg0) {
    struct VObj_80094BA4 *o = (struct VObj_80094BA4 *)arg0;
    if (o->m97() != 0) {
        TObjEneDD__sub_800BBA18(arg0, 9);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80094DB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneRe7Berura__sub_80094DB4(void *arg0);

s32 TObjEneRe7Berura__sub_80094DB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3D4) * 0x96;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80094DC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_over_limit__16TObjEneRe7BeruraFPv(void *arg0);

u8 is_over_limit__16TObjEneRe7BeruraFPv(void *arg0) {
    int var_r4;
    s32 temp_r5;
    s32 temp_r0;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x4BC);
    var_r4 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B8);
    if ((temp_r5 >= temp_r0) || (temp_r5 <= (s32) -temp_r0)) {
        var_r4 = 1;
    }
    return (u8) var_r4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80094DEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 step_toward_target__16TObjEneRe7BeruraFPvii(void *arg0, s32 arg1, s32 arg2);
s32 TBoss4Type2__sub_80141FA8(s32);

s32 step_toward_target__16TObjEneRe7BeruraFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    temp_r3 = TBoss4Type2__sub_80141FA8(M2C_FIELD(arg0, s32 *, 0x60));
    if (temp_r3 > arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + arg2);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4BC);
        if (temp_r0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) (temp_r0 + arg2);
        }
    } else if (temp_r3 < (s32) -arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - arg2);
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x4BC);
        if (temp_r0_2 > 0) {
            M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) (temp_r0_2 - arg2);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = arg1;
        var_r31 = 1;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80094EA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_fields4B8__16TObjEneRe7BeruraFPv(void *arg0);
s32 get_field_3D4_shifted__16TObjEneRe7BeruraFPv();

void init_fields4B8__16TObjEneRe7BeruraFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4B8) = get_field_3D4_shifted__16TObjEneRe7BeruraFPv();
    M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80094EE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_3D4_shifted__16TObjEneRe7BeruraFPv(void *arg0);

s32 get_field_3D4_shifted__16TObjEneRe7BeruraFPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3D4) << 0xF;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80094EEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_part__16TObjEneRe7BeruraFi(s32 arg0);
M2C_UNK set_data_and_draw_node_tree__16TObjEneRe7BeruraFii(void *, s32);
M2C_UNK set_global_param__8TObjFishFi(s32, void *);

extern M2C_UNK TObjEneRe7Berura__data_805007DC[];
extern void *TObjEneRe7Berura__data_805D4F64;

void init_part__16TObjEneRe7BeruraFi(s32 arg0) {
    s32 *temp_r3;

    set_global_param__8TObjFishFi(M2C_FIELD(M2C_FIELD(TObjEneRe7Berura__data_805D4F64, void **, 0x42C), s32 *, 0xC), TObjEneRe7Berura__data_805D4F64);
    temp_r3 = (s32 *)((s8 *)TObjEneRe7Berura__data_805007DC + (arg0 * 0x64));
    set_data_and_draw_node_tree__16TObjEneRe7BeruraFii((s32 *)((s8 *)temp_r3 + 0x20), *temp_r3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80094F40
#include "types.h"

extern "C" {

void set_data_and_draw_node_tree__16TObjEneRe7BeruraFii(int a0, int a1);
int draw_node_tree__16TObjEneRe7BeruraFPv(void);

    extern int TObjEneRe7Berura__data_805D4F98;
void set_data_and_draw_node_tree__16TObjEneRe7BeruraFii(int a0, int a1) { TObjEneRe7Berura__data_805D4F98 = a1; draw_node_tree__16TObjEneRe7BeruraFPv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80094F64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_node_tree__16TObjEneRe7BeruraFPv(void *arg0);
M2C_UNK TObjPlayer__sub_803D9730(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4684(s32);

extern s32 TObjEneRe7Berura__data_805D4F98;

void draw_node_tree__16TObjEneRe7BeruraFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;
    void *var_r30;

    var_r30 = arg0;
    do {
        TObjPlayer__sub_803D9B2C();
        temp_r4 = TObjEneRe7Berura__data_805D4F98;
        TObjEneRe7Berura__data_805D4F98 = temp_r4 + 0x30;
        TObjPlayer__sub_803D9730(0, temp_r4);
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        if (!(temp_r31 & 8)) {
            TObjPlayer__sub_803E4684(M2C_FIELD(var_r30, s32 *, 4));
        }
        TObjPlayer__sub_803D9B78();
        if (!(temp_r31 & 0x10)) {
            draw_node_tree__16TObjEneRe7BeruraFPv(M2C_FIELD(var_r30, void **, 0x2C));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0x30);
    } while (var_r30 != NULL);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80094FD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_attack_params__16TObjEneRe7BeruraFiPv(s32 arg0, u8 *arg1);
M2C_UNK TObjEneRe7Berura__sub_8009503C(void *, int);
M2C_UNK TObjPlayer__sub_803D97F0(void *, int, int, int);
M2C_UNK TObjPlayer__sub_803D9B78();

extern M2C_UNK lbl_8058D490[];
extern s32 lbl_805D4F90;
extern s32 lbl_805D4F94;
extern s32 TObjEneRe7Berura__data_805D4F98;
extern s32 lbl_805D4F9C;

void apply_attack_params__16TObjEneRe7BeruraFiPv(s32 arg0, u8 *arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg1, s32 *, 0);
    TObjEneRe7Berura__data_805D4F98 = temp_r6;
    temp_r5 = M2C_FIELD(arg1, s32 *, 4);
    lbl_805D4F90 = temp_r5;
    temp_r4 = M2C_FIELD(arg1, s32 *, 8);
    lbl_805D4F94 = temp_r4;
    lbl_805D4F9C = (long) (arg1 + 0x58);
    TObjPlayer__sub_803D97F0((void *) (lbl_8058D490), (int) (temp_r4), (int) (temp_r5), (int) (temp_r6));
    TObjEneRe7Berura__sub_8009503C((void *) (arg0), (int) (0));
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80095344
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_collision_center__16TObjEneRe7BeruraFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *, f32);

extern const f32 TObjEneRe7Berura__data_805D9764;

void update_collision_center__16TObjEneRe7BeruraFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (TObjEneRe7Berura__data_805D9764 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneRe7Berura__data_805D9764));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80095390
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneRe7Berura__vt61(void* p);
void TObjEneRe7Berura__vt59(void);
void TObjEneRe7Berura__vt26(void);

void TObjEneRe7Berura__vt59(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800953F8
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneRe7Berura__vt61(void* p);
void TObjEneRe7Berura__vt59(void);
void TObjEneRe7Berura__vt26(void);

void TObjEneRe7Berura__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 11) { TObjEneDD__sub_800BBA18(p, (void*)11); } }
void TObjEneRe7Berura__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80095890
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneRe7Berura__ct(void *arg0, void *arg1, void *arg2);
void TObjEneRe7Berura__sub_80095328(void *);
void TObjEneRe7Berura__sub_800955E0(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

extern M2C_UNK __vt__16TObjEneRe7Berura[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D2988;

void *TObjEneRe7Berura__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneRe7Berura;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 984));
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 1020));
    __construct_array((void *)((char *)arg0 + 1096), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2988;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneRe7Berura__sub_80095328(arg0);
    TObjEneRe7Berura__sub_800955E0(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80095924
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_children__16TObjEneRe7BeruraFv(void);
void __dt__11TBoss4Type3FPvs(void*, int);
void free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
void destroy_buffer_pair(void*, int);

extern u32 TObjEneRe7Berura__data_805D4F64;
extern u32 lbl_805D4F80;
extern u32 lbl_805D4F8C;
extern u32 lbl_805D4FA0;

void destroy_children__16TObjEneRe7BeruraFv(void) {
    if ((u32) lbl_805D4FA0 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D4FA0, 1);
        lbl_805D4FA0 = 0U;
    }
    if ((u32) lbl_805D4F8C != 0U) {
        destroy_buffer_pair((void*)lbl_805D4F8C, 1);
        lbl_805D4F8C = 0U;
    }
    if ((u32) lbl_805D4F80 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F80);
        lbl_805D4F80 = 0U;
    }
    if ((u32) TObjEneRe7Berura__data_805D4F64 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneRe7Berura__data_805D4F64, 1);
        TObjEneRe7Berura__data_805D4F64 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800959AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TObjEneRe7BeruraFPv(void *arg0);
void *TObjEneRe7Berura__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__16TObjEneRe7BeruraFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4E4);
    if (o != NULL) {
        o = TObjEneRe7Berura__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800967C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *spawn_punch__16TObjEneRe7BeruraFPv(void *arg0);
void *TObjEneRe7BeruraPunch__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void *spawn_punch__16TObjEneRe7BeruraFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x11C);
    if (o != NULL) {
        o = TObjEneRe7BeruraPunch__ct(o, arg0, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143098
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__16TObjEneRe7BeruraFPv(u8 *arg0);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(s32);
M2C_UNK TPlyPhotonChair__sub_80142770(s32);
M2C_UNK TPlyPhotonChair__sub_80142774();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803E4A94(s32, void *, f32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();

extern s32 lbl_805D7810;

void draw__16TObjEneRe7BeruraFPv(u8 *arg0) {
    set_global_flag__10TObjPlayerFv();
    TPlyPhotonChair__sub_80142774();
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        TObjPlayer__sub_803E4A94(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
    } else {
        set_global_state__16TObjEneRe7BeruraFi(lbl_805D7810);
        TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        set_global_state__16TObjEneRe7BeruraFi(0);
    }
    reset_transform_state__10TObjPlayerFv();
    TPlyPhotonChair__sub_80142770(M2C_FIELD(arg0, s32 *, 0));
    clear_global_state__10TObjPlayerFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803E4CE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_global_state__16TObjEneRe7BeruraFi(s32 arg0);

extern s32 lbl_805D7810;

void set_global_state__16TObjEneRe7BeruraFi(s32 arg0) {
    lbl_805D7810 = arg0;
}

}
#endif
#endif
