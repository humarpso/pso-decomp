#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pc_8028B198 { u8 pad0[0x18]; void *vt; s32 count; void **a; };

extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjBoss5PillarCtrl__ct(void *, void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
void free__11TOBoss4RockFUi(void *);
void __dl__7TObjectFPv(void *);
extern u8 __vt__19TObjBoss5PillarCtrl[];
Pc_8028B198 *__dt__19TObjBoss5PillarCtrlFv(Pc_8028B198 *arg0, s16 arg1);
}

extern "C" {

int forward_pillar_2B710__19TObjBoss5PillarCtrlFPv(void* p);
void play_sound_once__19TObjBoss5PillarCtrlFPv(void *arg0);
void render__19TObjBoss5PillarCtrlFv(void);
void run_task__19TObjBoss5PillarCtrlFv(void);
int update_pillar__19TObjBoss5PillarCtrlFPv(void* p);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
int TObjBoss5Pillar__sub_8028B70C(void*);
int TObjBoss5Pillar__sub_8028B710(void*);

void render__19TObjBoss5PillarCtrlFv(void) {  }
void run_task__19TObjBoss5PillarCtrlFv(void) {  }

Pc_8028B198 *__dt__19TObjBoss5PillarCtrlFv(Pc_8028B198 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vt = __vt__19TObjBoss5PillarCtrl;
        for (i = arg0->count - 1; i >= 0; i--) {
            if (arg0->a[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->a[i]);
                arg0->a[i] = NULL;
            }
        }
        free__11TOBoss4RockFUi(arg0->a);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void * TObjBoss5PillarCtrl__sub_8028B324(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TObjBoss5PillarCtrl__ct(o, arg0);
    }
    return o;
}

int update_pillar__19TObjBoss5PillarCtrlFPv(void* p) { return TObjBoss5Pillar__sub_8028B70C(p); }
int forward_pillar_2B710__19TObjBoss5PillarCtrlFPv(void* p) { return TObjBoss5Pillar__sub_8028B710(p); }
void play_sound_once__19TObjBoss5PillarCtrlFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        TBoss3Volopt__sub_8022675C(0x4003A819, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
