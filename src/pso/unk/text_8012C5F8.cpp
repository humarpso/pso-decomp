#include "types.h"
struct Obj_8012C714 { u8 pad[0x184]; void *f184; void *f188; u8 pad2[0x1f8 - 0x18c]; u8 f1f8[4]; };

extern "C" {
s32 get_player_list__10TObjPlayerFv(void);
s32 TObjPlayer__sub_8001BEF8(void *p, s32 n);
void TObjBoss2Tunnel__sub_803DB470(void *p);
void TObjPlayer__sub_8012C714(Obj_8012C714 *self);
}

extern "C" {

void TObjPlayer__sub_8012C714(Obj_8012C714 *self) {
    void *p;
    switch (get_player_list__10TObjPlayerFv()) {
    case 1:
        if (TObjPlayer__sub_8001BEF8(self->f1f8, 2) == 0) {
            if (TObjPlayer__sub_8001BEF8(self->f1f8, 1)) {
                p = self->f188;
            } else {
                p = self->f184;
            }
            if (p) {
                TObjBoss2Tunnel__sub_803DB470(p);
            }
        }
        break;
    }
}

}
