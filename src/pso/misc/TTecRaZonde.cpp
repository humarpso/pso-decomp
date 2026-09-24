#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Tec_802393D0 { u8 pad[0x20]; f32 pos[3]; u8 pad2c[0xA6 - 0x2C]; s16 band; };

extern "C" {
s32 TBoss3Volopt__sub_8022675C(s32 id, void *pos, s32 a, s32 b);
void update_technique_slot__10TTecRaFoieFi(s32 handle, s32 pitch, s32 c);
void fn_802393D0(Tec_802393D0 *self);
}

extern "C" {

void create__11TTecRaZondeFPvPvPv(void *arg0, void *arg1, void *arg2);
void render__11TTecRaZondeFv(void);
void *TTecRaZonde__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);
int fn_80236EE8(void*);
int init_cast__9TTecRestaFPv(void* p);

void create__11TTecRaZondeFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x150);
    if (o != NULL) {
        TTecRaZonde__ct(o, arg0, arg1, arg2);
    }
}

void render__11TTecRaZondeFv(void) {  }
void fn_802393D0(Tec_802393D0 *self) {
    s32 h;
    switch (self->band) {
    case 0:
    case 1:
        h = TBoss3Volopt__sub_8022675C(0x4002AB0E, self->pos, 0, 0);
        if (h >= 0) {
            update_technique_slot__10TTecRaFoieFi(h, 0x100, 0);
        }
        break;
    case 2:
    case 3:
        TBoss3Volopt__sub_8022675C(0x4002AB0E, self->pos, 0, 0);
        break;
    case 4:
    case 5:
        h = TBoss3Volopt__sub_8022675C(0x4002AB0E, self->pos, 0, 0);
        if (h >= 0) {
            update_technique_slot__10TTecRaFoieFi(h, -0x100, 0);
        }
        break;
    }
}

}
