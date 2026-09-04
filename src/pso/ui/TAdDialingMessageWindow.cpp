#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8036A248_8036A174 { char pad[0x18]; };
struct VObj_8036A248_8036A174 : Base_8036A248_8036A174 { virtual void m0(int); };

extern "C" {

void *TAdDialingMessageWindow__ct(void *arg0, void *arg1, void *arg2);
void *__dt__23TAdDialingMessageWindowFv(void *arg0, s16 arg1);
void run_child_tasks__23TAdDialingMessageWindowFPv(void* p);
void set_flag_and_notify__23TAdDialingMessageWindowFPv(void* a0);
int TAdMcSelectGC__sub_80019DA8(void*, int, float);
void __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
void *init__23TAdDialingMessageWindowFPvPvPvPv(void *, void *, void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
int run_tasks__7TObjectFv(void*);

    extern const float lbl_805E0360;
void set_flag_and_notify__23TAdDialingMessageWindowFPv(void* a0) { *(int*)((char*)a0 + 0x1c) = (*(int*)((char*)a0 + 0x1c) | 0x1); TAdMcSelectGC__sub_80019DA8((void*)(*(int*)((char*)a0 + 0x28)), 17, lbl_805E0360); }

void run_child_tasks__23TAdDialingMessageWindowFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) run_tasks__7TObjectFv(m); }

extern M2C_UNK __vt__23TAdDialingMessageWindow[];

void *__dt__23TAdDialingMessageWindowFv(void *arg0, s16 arg1) {
    void *temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TAdDialingMessageWindow;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x24));
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0x28);
        if ((temp_r3 != NULL) && (temp_r3 != NULL)) {
            ((VObj_8036A248_8036A174 *)temp_r3)->m0(1);
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_fadeafter;
extern M2C_UNK __vt__23TAdDialingMessageWindow[];
extern void *lbl_805D44C8;
extern void *tl_camera;

void *TAdDialingMessageWindow__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0, tl_fadeafter);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TAdDialingMessageWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D44C8;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg1;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = init__23TAdDialingMessageWindowFPvPvPvPv(o, tl_camera, arg0, arg2);
    }
    M2C_FIELD(arg0, void **, 0x24) = o;
    o2 = __nw__7TObjectFUl(0x1C);
    if (o2 != NULL) {
        o2 = ((void * (*)(void *, int))__ct__7TObjectFP7TObject)(o2, 0);
    }
    M2C_FIELD(arg0, void **, 0x28) = o2;
    return arg0;
}

}
