#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneRe4Bit__vt42(void);
void TObjEneRe4Bit__vt43(void);
void TObjEneRe4Bit__vt44(void);
void TObjEneRe4Bit__vt45(void);
void TObjEneRe4Bit__vt46(void);
void TObjEneRe4Bit__vt47(void);
void TObjEneRe4Bit__vt48(void);
void TObjEneRe4Bit__vt49(void);
void TObjEneRe4Bit__vt50(void);

void TObjEneRe4Bit__vt42(void) {  }
void TObjEneRe4Bit__vt43(void) {  }
void TObjEneRe4Bit__vt44(void) {  }
void TObjEneRe4Bit__vt45(void) {  }
void TObjEneRe4Bit__vt46(void) {  }
void TObjEneRe4Bit__vt47(void) {  }
void TObjEneRe4Bit__vt48(void) {  }
void TObjEneRe4Bit__vt49(void) {  }
void TObjEneRe4Bit__vt50(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x800ECA38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 __dt__15TObjEneSlimeOneFis(s32 arg0, s16 arg1);
int __dl__FPv();
void fn_800ECA28(void *arg0, s32 arg1);
void TObjEneRe4Bit__vt104(void);
void TObjEneRe4Bit__vt103(void);

void TObjEneRe4Bit__vt104(void) {  }
void TObjEneRe4Bit__vt103(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ECFE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_event__13TObjEneRe4BitFPvi(void *arg0, s32 arg1);

M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneRe4Bit__sub_800ED4BC();
M2C_UNK update_position_flag__13TObjEneRe4BitFPv(void *);

void handle_event__13TObjEneRe4BitFPvi(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFEFFF);
        break;
    case 3:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
        if (temp_r4 & 1) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFE);
            TObjEneDD__sub_800BBA18(arg0, 2);
            break;
        }
        if (temp_r4 & 2) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFD);
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        break;
    case 5:
        break;
    case 0:
        TObjEneRe4Bit__sub_800ED4BC();
        update_position_flag__13TObjEneRe4BitFPv(arg0);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ED204
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void reset_transform__13TObjEneRe4BitFPv(void *arg0);
void TObjEneDD__sub_800BA934(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void update_position_flag__13TObjEneRe4BitFPv(void *);

extern const f32 TObjEneRe4Bit__data_805DA770;

void reset_transform__13TObjEneRe4BitFPv(void *arg0) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 764), M2C_FIELD(arg0, void **, 0x3C0));
    M2C_FIELD(arg0, f32 *, 0x3F8) = TObjEneRe4Bit__data_805DA770;
    M2C_FIELD(arg0, f32 *, 0x3FC) = TObjEneRe4Bit__data_805DA770;
    M2C_FIELD(arg0, f32 *, 0x400) = TObjEneRe4Bit__data_805DA770;
    update_position_flag__13TObjEneRe4BitFPv(arg0);
    TObjEneDD__sub_800BA934(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ED578
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BaseV_800ed578 { char pad[0x18]; };
struct VObjV_800ed578 : BaseV_800ed578 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8();
    virtual M2C_UNK m9();
    virtual M2C_UNK m10();
    virtual M2C_UNK m11();
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
    virtual M2C_UNK m15();
    virtual M2C_UNK m16();
    virtual M2C_UNK m17();
    virtual M2C_UNK m18();
    virtual M2C_UNK m19();
    virtual M2C_UNK m20();
    virtual M2C_UNK m21();
    virtual M2C_UNK m22();
    virtual M2C_UNK m23();
    virtual M2C_UNK m24();
    virtual M2C_UNK m25();
    virtual M2C_UNK m26();
    virtual M2C_UNK m27();
    virtual M2C_UNK m28();
    virtual M2C_UNK m29();
    virtual M2C_UNK m30();
    virtual M2C_UNK m31();
    virtual M2C_UNK m32();
    virtual M2C_UNK m33();
    virtual M2C_UNK m34();
    virtual M2C_UNK m35();
    virtual M2C_UNK m36();
    virtual M2C_UNK m37();
    virtual M2C_UNK m38();
    virtual M2C_UNK m39();
    virtual M2C_UNK m40();
    virtual M2C_UNK m41();
    virtual M2C_UNK m42();
    virtual M2C_UNK m43();
    virtual M2C_UNK m44();
    virtual M2C_UNK m45();
    virtual M2C_UNK m46();
    virtual M2C_UNK m47();
    virtual M2C_UNK m48();
    virtual M2C_UNK m49();
    virtual M2C_UNK m50();
    virtual M2C_UNK m51();
    virtual M2C_UNK m52();
    virtual M2C_UNK m53();
    virtual M2C_UNK m54();
    virtual M2C_UNK m55();
    virtual M2C_UNK m56();
    virtual M2C_UNK m57();
    virtual M2C_UNK m58();
    virtual M2C_UNK m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
    virtual M2C_UNK m62();
    virtual M2C_UNK m63();
    virtual M2C_UNK m64();
    virtual M2C_UNK m65();
    virtual M2C_UNK m66();
    virtual M2C_UNK m67();
    virtual M2C_UNK m68();
    virtual M2C_UNK m69();
    virtual M2C_UNK m70();
    virtual M2C_UNK m71();
    virtual M2C_UNK m72();
    virtual M2C_UNK m73();
    virtual M2C_UNK m74();
    virtual M2C_UNK m75();
    virtual M2C_UNK m76();
    virtual M2C_UNK m77();
    virtual M2C_UNK m78();
    virtual M2C_UNK m79();
    virtual M2C_UNK m80();
    virtual M2C_UNK m81();
    virtual M2C_UNK m82();
    virtual M2C_UNK m83();
    virtual M2C_UNK m84();
    virtual M2C_UNK m85();
    virtual M2C_UNK m86();
    virtual M2C_UNK m87();
    virtual M2C_UNK m88();
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
    virtual M2C_UNK m91();
    virtual M2C_UNK m92();
    virtual M2C_UNK m93();
    virtual M2C_UNK m94();
    virtual M2C_UNK m95();
    virtual M2C_UNK m96();
    virtual M2C_UNK m97();
    virtual M2C_UNK m98();
    virtual M2C_UNK m99(M2C_UNK *);
};

extern "C" {

void update_position_flag__13TObjEneRe4BitFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

void update_position_flag__13TObjEneRe4BitFPv(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x2FC);
    if (((VObjV_800ed578 *)arg0)->m99(&sp8) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFF7FF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x800);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ED5E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Bit__vt86(void *arg0);
int VecCopy__FP3VecPC3Vec(void*, void*);
void TObjEneRe4Bit__vt59(void);
void TObjEneRe4Bit__vt26(void);

void TObjEneRe4Bit__vt86(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}
void copy_pos__13TObjEneRe4BitFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TObjEneRe4Bit__vt59(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ED6CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Bit__vt86(void *arg0);
int VecCopy__FP3VecPC3Vec(void*, void*);
void TObjEneRe4Bit__vt59(void);
void TObjEneRe4Bit__vt26(void);

void TObjEneRe4Bit__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ED790
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TObjEneRe4BitFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_800A05B8(void *, int);
void __dt__9TObjEneDDFv(void *, int);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__13TObjEneRe4Bit[];

void *__dt__13TObjEneRe4BitFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneRe4Bit;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800A05B8((s8 *)arg0 + 0x3DC, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ED950
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjEneRe4Bit__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6);
M2C_UNK TObjEneRe4Bit__sub_800ED7FC(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK init_common_from__9TObjEneDDFPvPv(void *, void *);
M2C_UNK init_object__9TObjEneDDFPv();
M2C_UNK init_vtable_and_field18__10TObjPlayerFPv(void *);
s16 obj_getField1c(void *);

extern M2C_UNK __vt__13TObjEneRe4Bit[];
extern s32 lbl_805D2AE8;

u8 *TObjEneRe4Bit__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6) {
    init_object__9TObjEneDDFPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneRe4Bit;
    init_vtable_and_field18__10TObjPlayerFPv((void *) (arg0 + 0x3DC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2AE8;
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x3C4) = obj_getField1c((void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x1C) = arg5;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg6;
    M2C_FIELD(arg0, s32 *, 0x3C0) = arg3;
    M2C_FIELD(arg0, s32 *, 0x3C8) = arg4;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg3));
    TObjEneRe4Bit__sub_800ED7FC((void *) (arg0));
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800ED9EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_enabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
void create_disabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
M2C_UNK create__13TObjEneRe4BitFPvPvPvPvPv(M2C_UNK, M2C_UNK, s32, s32, s32);

void create_enabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    create__13TObjEneRe4BitFPvPvPvPvPv(arg0, arg1, 1, arg2, arg3);
}

void create_disabled__13TObjEneRe4BitFiiii(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    create__13TObjEneRe4BitFPvPvPvPvPv(arg0, arg1, 0, arg2, arg3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EDA44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__13TObjEneRe4BitFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *TObjEneRe4Bit__ct(void *, void *, void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__13TObjEneRe4BitFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x410);
    if (o != NULL) {
        o = TObjEneRe4Bit__ct(o, tl_04, arg0, arg1, arg2, arg3, arg4);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EDAB0
#include "types.h"

extern "C" {

void TObjEneRe4Bit__sub_800EDAB0(void);

void TObjEneRe4Bit__sub_800EDAB0(void) {  }

}
#endif
#endif
