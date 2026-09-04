#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TObjDFTenchuFuru__sub_80051A7C(void);
void register_callback__16TObjDFTenchuFuruFv(void);
int set_global_state__16TObjEneRe7BeruraFi(void*);

int TObjDFTenchuFuru__sub_80051A7C(void) { return set_global_state__16TObjEneRe7BeruraFi((void*)(0)); }

    extern unsigned char TObjDFTenchuFuru__sub_80051A18[];
    extern int lbl_805D4D78;
void register_callback__16TObjDFTenchuFuruFv(void) { lbl_805D4D78 = 0; set_global_state__16TObjEneRe7BeruraFi(TObjDFTenchuFuru__sub_80051A18); }

}
#else
#if PSO_CLASS_PACKAGE == 0x800519C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__16TObjDFTenchuFuruFPvPv(void *arg0, void *arg1);
void *TObjDFTenchuFuru__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create__16TObjDFTenchuFuruFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TObjDFTenchuFuru__ct(o, arg0, arg1);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80051B98
#include "types.h"

extern "C" {

void render__16TObjDFTenchuFuruFPv(void* a0);
int TObjDFTenchuFuru__sub_80051AD0(void*);
int TObjPlayer__sub_803D8CD4(void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);

    extern int lbl_805D4D78;
void render__16TObjDFTenchuFuruFPv(void* a0) { lbl_805D4D78 = 0; TObjPlayer__sub_803D9B2C(); TObjPlayer__sub_803D8CD4((void*)0); TObjDFTenchuFuru__sub_80051AD0(a0); TObjPlayer__sub_803D9B78(); }

}
#endif
#endif
