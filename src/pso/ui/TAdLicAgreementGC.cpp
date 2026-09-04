#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_80329BB8 { char pad[0x18]; };
struct VObj_80329BB8 : Base_80329BB8 {
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
};
struct Base_80329C84_80329BB8 { char pad[0x18]; };
struct VObj_80329C84_80329BB8 : Base_80329C84_80329BB8 {
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
};

extern "C" {

void *TAdLicAgreementGC__ct(void *arg0);
void TAdLicAgreementGC__vt4(void* p);
int TAdLicAgreementGC__vt5(void* p);
int TAdLicAgreementGC__vt6(void* p);
int TAdLicAgreementGC__vt7(void* p);
void *__dt__17TAdLicAgreementGCFv(void *arg0, s16 arg1);
void render__17TAdLicAgreementGCFv(void *arg0);
void run_task__17TAdLicAgreementGCFv(void *arg0);
void TAdAgreementBaseGC__ct(void *);
void *TAdScrollWinGC__ct(void *, void *, int, int);
void __dl__7TObjectFPv(void *);
void __dt__18TAdAgreementBaseGCFv(void *, int);
void *__nw__7TObjectFUl(int);
int close_window__14TAdScrollWinGCFPv(void*);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int set_game_mode__21TAdMultiChgGameModeGCFv(void*);
int set_mode_1c__21TAdMultiChgGameModeGCFv(void*);

void render__17TAdLicAgreementGCFv(void *arg0) {
    struct VObj_80329BB8 *o = (struct VObj_80329BB8 *)arg0;
    o->m10();
}

int TAdLicAgreementGC__vt7(void* p) { return set_game_mode__21TAdMultiChgGameModeGCFv(p); }
int TAdLicAgreementGC__vt6(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
int TAdLicAgreementGC__vt5(void* p) { return set_mode_1c__21TAdMultiChgGameModeGCFv(p); }
void TAdLicAgreementGC__vt4(void* p) { if (*(unsigned int*)((char*)p + 0x38) != 0) { close_window__14TAdScrollWinGCFPv(*(void**)((char*)p + 0x38)); *(int*)((char*)p + 0x38) = 0; } }

void run_task__17TAdLicAgreementGCFv(void *arg0) {
    struct VObj_80329C84_80329BB8 *o = (struct VObj_80329C84_80329BB8 *)arg0;
    o->m9();
}

extern M2C_UNK __vt__17TAdLicAgreementGC[];

void *__dt__17TAdLicAgreementGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdLicAgreementGC;
        __dt__18TAdAgreementBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__17TAdLicAgreementGC[];
extern void *lbl_805D41C0;

void *TAdLicAgreementGC__ct(void *arg0) {
    void *o;
    TAdAgreementBaseGC__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdLicAgreementGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D41C0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    o = __nw__7TObjectFUl(0x54);
    if (o != NULL) {
        o = TAdScrollWinGC__ct(o, arg0, 0, 0);
    }
    M2C_FIELD(arg0, void **, 0x38) = o;
    return arg0;
}

}
