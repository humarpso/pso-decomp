#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TODoorJungleMainFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__16TODoorJungleMain[];

void *__dt__16TODoorJungleMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TODoorJungleMain;
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC)); M2C_FIELD(arg0, M2C_UNK *, 0xDC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
