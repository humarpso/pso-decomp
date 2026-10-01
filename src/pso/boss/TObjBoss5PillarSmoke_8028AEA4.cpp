#include "types.h"
struct Smoke_8028AEA4 {
    u8 pad[0x18];
    void *vt;
    s32 count;
    void **a;
    void **b;
};

struct Node_8028AF6C { u8 pad[0x2C]; Node_8028AF6C *child; Node_8028AF6C *next; };

struct Smoke_8028AF6C {
    s32 f0;
    u8 pad[0x14];
    void *vt;
    s32 count;
    void **a;
    void **b;
};

extern "C" {
void __dt__7TObjectFv(void *, s32);
void queue_destruction__7TObjectFv(void *);
void free__11TOBoss4RockFUi(void *);
void __dl__7TObjectFPv(void *);
extern s32 __vt__20TObjBoss5PillarSmoke[];
Smoke_8028AEA4 *__dt__20TObjBoss5PillarSmokeFv(Smoke_8028AEA4 *arg0, s16 arg1);
void queue_destruction__7TObjectFv(void *);
void *TBoss8Dragon__sub_8008741C(void *, s32, s32);
void **alloc_buffer__11TOBoss4RockFPv(s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 lbl_80450CD0[];
extern s32 __vt__20TObjBoss5PillarSmoke[];
extern s32 lbl_805D3B30;
Smoke_8028AF6C *TObjBoss5PillarSmoke__ct(Smoke_8028AF6C *arg0, void *arg1, Node_8028AF6C *arg2);
}

extern "C" {

Smoke_8028AEA4 *__dt__20TObjBoss5PillarSmokeFv(Smoke_8028AEA4 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vt = __vt__20TObjBoss5PillarSmoke;
        for (i = arg0->count - 1; i >= 0; i--) {
            if (arg0->b[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->b[i]);
                arg0->b[i] = NULL;
            }
            if (arg0->a[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->a[i]);
                arg0->a[i] = NULL;
            }
        }
        free__11TOBoss4RockFUi(arg0->b);
        free__11TOBoss4RockFUi(arg0->a);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Smoke_8028AF6C *TObjBoss5PillarSmoke__ct(Smoke_8028AF6C *arg0, void *arg1, Node_8028AF6C *arg2) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0, arg1);
    arg0->vt = __vt__20TObjBoss5PillarSmoke;
    arg0->f0 = lbl_805D3B30;
    arg0->count = 0;
    arg0->a = NULL;
    arg0->b = NULL;
    if (arg2 == NULL) {
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    for (arg2 = arg2->child; arg2 != NULL; arg2 = arg2->next) {
        arg0->count++;
    }
    if (arg0->count <= 0) {
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    arg0->a = alloc_buffer__11TOBoss4RockFPv(arg0->count * 4);
    arg0->b = alloc_buffer__11TOBoss4RockFPv(arg0->count * 4);
    for (i = 0; i < arg0->count; i++) {
        arg0->a[i] = TBoss8Dragon__sub_8008741C(lbl_80450CD0, 0x213, 0x40);
        arg0->b[i] = TBoss8Dragon__sub_8008741C(lbl_80450CD0, 0x214, 0x40);
    }
    return arg0;
}

}
