#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemReverseTech.h"

extern "C" void TLobby__sub_8022743C(void);
extern "C" void TKeyBoardControl__sub_8000F9B0(void);

void TItemReverseTech::run_task() {}

TItemReverseTech::~TItemReverseTech() {
    TLobby__sub_8022743C();
    TKeyBoardControl__sub_8000F9B0();
}
#else
#if PSO_CLASS_PACKAGE == 0x8011A154
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemReverseTech__ct(void *arg0);
void *TItemReverseTechPart1__ct(void *, void *, void *);
void *__ct__10TAdEndTextFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void TObjBgmColCtrl__sub_802274B8(void *);

extern M2C_UNK __vt__16TItemReverseTech[];
extern void *lbl_805D2C48;
extern void *TItemReverseTech__data_805D54D0;
extern M2C_UNK lbl_8043E708[];

void *TItemReverseTech__ct(void *arg0) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TItemReverseTech;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2C48;
    o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TItemReverseTechPart1__ct(o, arg0, TItemReverseTech__data_805D54D0);
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    o2 = __nw__7TObjectFUl(0x197C);
    if (o2 != NULL) {
        __ct__10TAdEndTextFv(o2, arg0);
    }
    TObjBgmColCtrl__sub_802274B8(lbl_8043E708);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011A1E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__16TItemReverseTechFv(void);
void free__16TItemReverseTechFv(void);
M2C_UNK TItemReverseTech__ct(void *, s32);
int __dl__FPv(void*);
void * __nw__7TObjectFUl(M2C_UNK);
int free_texture_if_valid(void*);
int free__11TOBoss4RockFUi(void*);

extern s32 tl_01;

void create__16TItemReverseTechFv(void) {
    void *obj = __nw__7TObjectFUl(0x28);
    if (obj != 0) {
        TItemReverseTech__ct(obj, tl_01);
    }
}

    extern int TItemReverseTech__data_805D54D0;
    extern int lbl_805D54D4;
    extern int lbl_805D54D8;
void free__16TItemReverseTechFv(void) { free_texture_if_valid((void*)(TItemReverseTech__data_805D54D0)); free__11TOBoss4RockFUi((void*)(lbl_805D54D8)); lbl_805D54D8 = 0; free__11TOBoss4RockFUi((void*)(lbl_805D54D4)); lbl_805D54D4 = 0; __dl__FPv((void*)(TItemReverseTech__data_805D54D0)); TItemReverseTech__data_805D54D0 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011A54C
#include "types.h"

extern "C" {

void TItemReverseTech__sub_8011A54C(void* a0);
int TItemReverseTech__sub_8011A55C(void);
int TItemReverseTech__sub_8011A580(void);
void TItemReverseTech__sub_8011A5A4(void);
int set_global_flags__6TLobbyFi(void*);

    extern const float lbl_805DAC4C;
void TItemReverseTech__sub_8011A54C(void* a0) { *(float*)((char*)a0 + 0x20) = lbl_805DAC4C; *(float*)((char*)a0 + 0x24) = lbl_805DAC4C; }

int TItemReverseTech__sub_8011A55C(void) { return set_global_flags__6TLobbyFi((void*)(2)); }
int TItemReverseTech__sub_8011A580(void) { return set_global_flags__6TLobbyFi((void*)(1)); }
void TItemReverseTech__sub_8011A5A4(void) {  }

}
#endif
#endif
