#include "types.h"
#include "pso/misc/TLobby_80226070.h"
#include "pso/object/TObjLight_8022F34C.h"
#include "pso/object/TUnk_804CC74C.h"
#include "pso/system/vector.h"
#include "pso/misc/TTecDeband.h"
#include "pso/object/TObjLight.h"

struct Obj_8022F42C { u8 pad[0xA6]; s16 state; };

extern "C" {
s32 update_technique_slot__10TTecRaFoieFl(s32, s32, s32);
s32 play_sound_effect(int, void *, int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 lbl_804CC74C[];

void *TObjLight::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804CC74C;
        stop_sound_request(this->actorFlags);
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

u8 *init_from_source__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *)arg0, (void *)arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CC74C;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg1;
    VecCopy((Vec *)(arg0 + 0x20), (const Vec *)(*(s32 *)((s8 *)arg0 + 0x1C) + 0x2FC));
    ((TUnk_804CC74C *)arg0)->m_2c = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = play_sound_effect(0x4002BB1F, arg0 + 0x20, 0, 0);
    return arg0;
}
void TTecDeband::play_state_sound() {
    Obj_8022F42C *arg0 = (Obj_8022F42C *)this;
    s32 r;
    switch (arg0->state) {
    case 0:
    case 1:
        r = play_sound_effect(0x4002AA16, (u8 *)arg0 + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFl(r, 0x100, 0);
        }
        break;
    case 2:
    case 3:
        play_sound_effect(0x4002AA16, (u8 *)arg0 + 0x20, 0, 0);
        break;
    case 4:
    case 5:
        r = play_sound_effect(0x4002AA16, (u8 *)arg0 + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFl(r, -0x100, 0);
        }
        break;
    }
}

}
