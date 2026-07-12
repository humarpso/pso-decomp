#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss8Dragon__sub_8002D324(void* p);
void TBoss8Dragon__sub_8002D358(void* p);
void TBoss8Dragon__sub_8002D364(void *arg0);
void *TBoss8Dragon__sub_8002D3C4(void *arg0, s16 arg1);
void *TBoss8Dragon__sub_8002CD8C(void *, void *, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

void TBoss8Dragon__sub_8002D324(void* p) { TBoss8Dragon__sub_8002D358((void*)(p)); *(int*)((char*)p + 0x3c) = 1; }
void TBoss8Dragon__sub_8002D358(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

extern const f32 lbl_805D81A0;

void TBoss8Dragon__sub_8002D364(void *arg0) {
    void *o;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805D81A0;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805D81A0;
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        TBoss8Dragon__sub_8002CD8C(o, M2C_FIELD(arg0, void **, 0x10), 30);
    }
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
}

extern M2C_UNK lbl_80482060[];

void *TBoss8Dragon__sub_8002D3C4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482060;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
