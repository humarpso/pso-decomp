#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8016AE84 { char pad[0x18]; };
struct VObj_8016AE84 : Base_8016AE84 {
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
};

extern "C" {

void *create__14TOKeyAncient01FPv(void *arg0);
void TOKeyAncient01__vt14(void *arg0);
void *TOKeyAncient01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void TOKeyAncient01__vt14(void *arg0) {
    struct VObj_8016AE84 *o = (struct VObj_8016AE84 *)arg0;
    o->m18();
}

extern void *tl_05;

void *create__14TOKeyAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOKeyAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8016AD58
#include "types.h"

extern "C" {

int fn_8016AD3C(void* a0 = 0);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
void set_type__14TOKeyAncient01FPv(void* p);
void TOKeyAncient01__vt23(void);

void set_type__14TOKeyAncient01FPv(void* p) { *(s32*)((char*)p + 0x0) = 3; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016AD64
#include "types.h"

extern "C" {

int fn_8016AD3C(void* a0 = 0);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
void set_type__14TOKeyAncient01FPv(void* p);
void TOKeyAncient01__vt23(void);

void TOKeyAncient01__vt23(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016B038
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TOKeyAncient01Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__14TOKeyAncient01[];

void *__dt__14TOKeyAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyAncient01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
