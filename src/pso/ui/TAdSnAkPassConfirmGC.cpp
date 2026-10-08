#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8032BE50_8032BE48 { char pad[0x18]; };
struct VObj_8032BE50_8032BE48 : Base_8032BE50_8032BE48 {
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
struct Base_8032BF64_8032BE48 { char pad[0x18]; };
struct VObj_8032BF64_8032BE48 : Base_8032BF64_8032BE48 {
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

struct Obj_8032C004 { s32 f0; u8 pad[0x14]; void *vt; u8 pad2[0x48 - 0x1C]; s32 f48; };

extern "C" {
s32 get_state_flag__9TMainTaskFv();
void TAdYesNoBaseGC__vt7(void *self);
void *__nw__7TObjectFUl(u32);
s32 create_serial_info_window__17TWindowOptionCtrlFPvi(void *, int);
void __ct__10TAdTitleGCFv(void *, void *, int);
void init_parts__14TAdYesNoBaseGCFPvPvPv(void *, void *, void *);
void TAdYesNoBaseGC__ct(void *);
extern u8 lbl_804772C0[];
extern u8 lbl_804772C8[];
extern u8 lbl_804772D0[];
extern M2C_UNK __vt__20TAdSnAkPassConfirmGC[];
extern s32 lbl_805D41F0;
Obj_8032C004 *TAdSnAkPassConfirmGC__ct(Obj_8032C004 *arg0);
}

extern "C" {

int TAdSnAkPassConfirmGC__vt4(void* p);
int TAdSnAkPassConfirmGC__vt5(void* p);
void TAdSnAkPassConfirmGC__vt6(void* p);
void TAdSnAkPassConfirmGC__vt7(void* p);
void TAdSnAkPassConfirmGC__vt8(void);
void *__dt__20TAdSnAkPassConfirmGCFv(void *arg0, s16 arg1);
s32 get_confirm_state__20TAdSnAkPassConfirmGCFPv(void* p);
void render__20TAdSnAkPassConfirmGCFv(void *arg0);
void run_task__20TAdSnAkPassConfirmGCFv(void *arg0);
int get_localized_text_entry(void*, void*);
void TAdYesNoBaseGC__vt0(void *, int);
int TWindow__close(void*);
void __dl__7TObjectFPv(void *);
void queue_destruction__7TObjectFv(void *);
int request_transition__21TAdMultiChgGameModeGCFv(void*);
int set_state_0x1a__21TAdMultiChgGameModeGCFv(void*);

s32 get_confirm_state__20TAdSnAkPassConfirmGCFPv(void* p) { return *(s32*)((char*)p + 0x1c); }

void render__20TAdSnAkPassConfirmGCFv(void *arg0) {
    struct VObj_8032BE50_8032BE48 *o = (struct VObj_8032BE50_8032BE48 *)arg0;
    o->m10();
}

void TAdSnAkPassConfirmGC__vt8(void) { get_localized_text_entry((void*)39, (void*)0); }
void TAdSnAkPassConfirmGC__vt7(void* p) { if (*(unsigned int*)((char*)p + 0x48) != 0) { TWindow__close(*(void**)((char*)p + 0x48)); *(int*)((char*)p + 0x48) = 0; } }
void TAdSnAkPassConfirmGC__vt6(void* p) { if (*(unsigned int*)((char*)p + 0x48) != 0) { TWindow__close(*(void**)((char*)p + 0x48)); *(int*)((char*)p + 0x48) = 0; } }
int TAdSnAkPassConfirmGC__vt5(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }
int TAdSnAkPassConfirmGC__vt4(void* p) { return set_state_0x1a__21TAdMultiChgGameModeGCFv(p); }

void run_task__20TAdSnAkPassConfirmGCFv(void *arg0) {
    struct VObj_8032BF64_8032BE48 *o = (struct VObj_8032BF64_8032BE48 *)arg0;
    o->m9();
}

extern M2C_UNK __vt__20TAdSnAkPassConfirmGC[];

void *__dt__20TAdSnAkPassConfirmGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TAdSnAkPassConfirmGC;
        if (M2C_FIELD(arg0, void **, 0x48) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x48)); M2C_FIELD(arg0, M2C_UNK *, 0x48) = 0; }
        TAdYesNoBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Obj_8032C004 *TAdSnAkPassConfirmGC__ct(Obj_8032C004 *arg0) {
    void *p;
    TAdYesNoBaseGC__ct(arg0);
    arg0->vt = ((u8 *)&__vt__20TAdSnAkPassConfirmGC);
    arg0->f0 = lbl_805D41F0;
    p = __nw__7TObjectFUl(0x138);
    if (p != 0) {
        __ct__10TAdTitleGCFv(p, arg0, 0x11);
    }
    arg0->f48 = create_serial_info_window__17TWindowOptionCtrlFPvi(lbl_804772C0, 0);
    init_parts__14TAdYesNoBaseGCFPvPvPv(arg0, lbl_804772C8, lbl_804772D0);
    return arg0;
}

void TAdYesNoBaseGC__vt7(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) { return;
    }
}

}
