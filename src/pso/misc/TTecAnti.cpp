#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TTecAnti__sub_8022AD74(void* p);
void TTecAnti__sub_8022AD94(void);
int TTecAnti__sub_8022B35C(void);
int TTecAnti__sub_8022B3E8(void);
void *__dt__8TTecAntiFPvs(void *arg0, s16 arg1);
void *__dt__8TTecAntiFv(void *arg0, s16 arg1);
void create__8TTecAntiFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
int queue_destruction__8TTecAntiFPv(void* p);
void render__8TTecAntiFv(void);
void *TTecAnti__ct(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
int fn_80236EE8(void*);
int queue_destruction__7TObjectFv(void*);

int TTecAnti__sub_8022AD74(void* p) { return fn_80236EE8(p); }
void TTecAnti__sub_8022AD94(void) {  }
int queue_destruction__8TTecAntiFPv(void* p) { return queue_destruction__7TObjectFv(p); }

extern M2C_UNK lbl_804CC0E8[];

void *__dt__8TTecAntiFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC0E8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void create__8TTecAntiFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecAnti__ct(o, arg0, arg1, arg2, arg3);
    }
}

extern M2C_UNK __vt__8TTecAnti[];

void *__dt__8TTecAntiFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TTecAnti;
        __dt__19TTecPlayerInfluenceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TTecAnti__sub_8022B35C(void) { return 0; }
int TTecAnti__sub_8022B3E8(void) { return 0; }

void render__8TTecAntiFv(void) {  }

}
