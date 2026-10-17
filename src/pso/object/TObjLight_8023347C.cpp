#include "types.h"
#include "pso/misc/TLobby_80226070.h"
#include "pso/object/TObjLight_8023347C.h"
#include "pso/object/TUnk_804CC948.h"
#include "pso/system/vector.h"

extern "C" {

s32 play_sound_effect(int, void *, int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 ice_technique_charge_vtable[];

void *__dt__13TUnk_804CC948Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = ice_technique_charge_vtable;
        stop_sound_request((s32)(*(void **)((s8 *)arg0 + 0x30)));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *init__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, (void *) (arg2));
    *(s32 **)((s8 *)arg0 + 0x18) = ice_technique_charge_vtable;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg1;
    VecCopy((Vec *)(arg0 + 0x20), (const Vec *)(*(s32 *)((s8 *)arg0 + 0x1C) + 0x2FC));
    ((TUnk_804CC948 *)arg0)->m_2c = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = play_sound_effect(0x4002B21D, (void *) (arg0 + 0x20), 0, 0);
    return arg0;
}

}
