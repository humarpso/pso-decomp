#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TObjEneMe3ShinowaReal__sub_800E4554(void*, void*);
u16 TObjEneMe3ShinowaReal__sub_800E45CC(void* p);
int TObjEneMe3ShinowaReal__sub_800E45D4(void*);
int TObjEneMe3ShinowaReal__vt105(void);
void TObjEneMe3ShinowaReal__vt109(void* p);
void TObjEneMe3ShinowaReal__vt60(void* p);
void TObjEneMe3ShinowaReal__vt61(void* p);
void *__dt__21TObjEneMe3ShinowaRealFv(void *arg0, s16 arg1);
void *create__21TObjEneMe3ShinowaRealFPv(void *arg0);
void spawn_mirages__21TObjEneMe3ShinowaRealFPv(void* p);
void *TObjEneMe3ShinowaReal__ct(void *, void *, void *);
int TObjEneMe3Shinowa__vt60(void*);
int TObjEneMe3Shinowa__vt61(void*);
void __dl__7TObjectFPv(void *);
void __dt__17TObjEneMe3ShinowaFv(void *, int);
void *__nw__7TObjectFUl(int);
int init_mirage__23TObjEneMe3ShinowaMirageFPv(void);

void spawn_mirages__21TObjEneMe3ShinowaRealFPv(void* p) { { int i; for (i = 0; i < 4; i++) { TObjEneMe3ShinowaReal__sub_800E4554((void*)(p), (void*)((void*)i)); init_mirage__23TObjEneMe3ShinowaMirageFPv(); } } }
void TObjEneMe3ShinowaReal__vt109(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4((void*)(p)); }

int TObjEneMe3ShinowaReal__vt105(void) { return 0; }
int TObjEneMe3ShinowaReal__sub_800E4554(void*, void*) { return 0; }

u16 TObjEneMe3ShinowaReal__sub_800E45CC(void* p) { return *(u16*)((char*)p + 0x38c); }

int TObjEneMe3ShinowaReal__sub_800E45D4(void*) { return 0; }

void TObjEneMe3ShinowaReal__vt60(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4((void*)(p)); TObjEneMe3Shinowa__vt60(p); }
void TObjEneMe3ShinowaReal__vt61(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4((void*)(p)); TObjEneMe3Shinowa__vt61(p); }

extern M2C_UNK __vt__21TObjEneMe3ShinowaReal[];

void *__dt__21TObjEneMe3ShinowaRealFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneMe3ShinowaReal;
        __dt__17TObjEneMe3ShinowaFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void *create__21TObjEneMe3ShinowaRealFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x434);
    if (o != NULL) {
        o = TObjEneMe3ShinowaReal__ct(o, tl_04, arg0);
    }
    return o;
}

}
