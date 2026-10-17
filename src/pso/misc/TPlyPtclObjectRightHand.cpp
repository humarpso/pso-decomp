#include "types.h"
#include "pso/misc/TPlyPtclObjectRightHand.h"

extern "C" {

void *TPlyPtclObjectRightHand__ct(void *arg0);
void *__dt__23TPlyPtclObjectRightHandFv(void *arg0, s16 arg1);
void TPlyFollowParticleCtrl__ct(void *);
void __dl__7TObjectFPv(void *);
void *__dt__22TPlyFollowParticleCtrlFv(void *arg0, s16 arg1);

extern s32 __vt__23TPlyPtclObjectRightHand[];

void *__dt__23TPlyPtclObjectRightHandFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__23TPlyPtclObjectRightHand;
        __dt__22TPlyFollowParticleCtrlFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *TPlyPtclObjectRightHand__class_name;

void *TPlyPtclObjectRightHand__ct(void *arg0) {
    TPlyFollowParticleCtrl__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__23TPlyPtclObjectRightHand;
    *(void * *)&((TPlyPtclObjectRightHand *)arg0)->m_name = TPlyPtclObjectRightHand__class_name;
    return arg0;
}

}
