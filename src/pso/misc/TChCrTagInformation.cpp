#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__19TChCrTagInformationFv(void* p);
int TChCrTagInformation__vt4(void);

int TChCrTag__sub_802A1A00(void*);
int TChCrTagInformation__sub_802A1E8C(void*);

void run_task__19TChCrTagInformationFv(void* p) { TChCrTag__sub_802A1A00(p); TChCrTagInformation__sub_802A1E8C(p); }
int TChCrTagInformation__vt4(void) { return 0; }

}
#else
#if PSO_CLASS_PACKAGE == 0x802A1E6C
#include "types.h"

extern "C" {

int render__19TChCrTagInformationFv(void* p);

int TObjCMAssignMenu__sub_802A1C04(void*);

int render__19TChCrTagInformationFv(void* p) { return TObjCMAssignMenu__sub_802A1C04(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A1F4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TChCrTagInformationFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__8TChCrTagFv(void *, int);
void fn_803098DC(void);

extern M2C_UNK __vt__19TChCrTagInformation[];

void *__dt__19TChCrTagInformationFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TChCrTagInformation;
        fn_803098DC();
        __dt__8TChCrTagFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A1FAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TChCrTagInformation__ct(void *arg0);
void __ct__8TChCrTagFv(void *);
void fn_803098E8(void);

extern const f32 lbl_805DDE20;
extern M2C_UNK __vt__19TChCrTagInformation[];
extern const f32 lbl_805DDE24;
extern void *lbl_805D3D98;

void *TChCrTagInformation__ct(void *arg0) {
    __ct__8TChCrTagFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TChCrTagInformation;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D98;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DDE20;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DDE24;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DDE20;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DDE24;
    fn_803098E8();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A200C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__19TChCrTagInformationFPv(void *arg0);
void *TChCrTagInformation__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *create__19TChCrTagInformationFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = TChCrTagInformation__ct(o, tl_03, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A2058
#include "types.h"

extern "C" {

int create_default__19TChCrTagInformationFv(void);
int create__19TChCrTagInformationFPv(void*);

int create_default__19TChCrTagInformationFv(void) { return create__19TChCrTagInformationFPv((void*)(0)); }

}
#endif
#endif
