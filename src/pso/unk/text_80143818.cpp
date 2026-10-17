#include "types.h"
#include "pso/unk/text_80143818.h"
#include "pso/object/TObjMotion.h"

extern "C" {
s32 construct_collider_proxy__13TUnk_804AF8A0Fv();
extern s32 __vt__10TObjMotion[];
extern s32 TObjMotion__class_name;
u8 *TObjMotion__ct(u8 *arg0) {
    construct_collider_proxy__13TUnk_804AF8A0Fv();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TObjMotion;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjMotion__class_name;
    ((TObjMotion *)(arg0))->reset_motion_fields();
    *(s32 *)((s8 *)arg0 + 0xD8) = 0;
    ((TObjMotion *)arg0)->unknownF8 = 0;
    *(s32 *)((s8 *)arg0 + 0xDC) = 0;
    *(s32 *)((s8 *)arg0 + 0xE0) = 0;
    ((TObjMotion *)arg0)->unknownAC = 0;
    return arg0;
}

}
