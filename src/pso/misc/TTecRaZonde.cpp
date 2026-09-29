#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Tec_802393D0 { u8 pad[0x20]; f32 pos[3]; u8 pad2c[0xA6 - 0x2C]; s16 band; };

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RBurst_80238F84 { s32 entry; s32 flags; f32 scale; };

struct RProfile_80238F84 { RBurst_80238F84 *entries; u32 count; };

struct Obj_80238F84 {
    u8 pad0[0x1C];
    void *source;
    u8 pad20[0x7A - 0x20];
    s16 band;
    u8 pad7C[0xB4 - 0x7C];
    u16 sourceId;
    u8 padB6[0xE8 - 0xB6];
    void *proxy;
};

extern "C" {
s32 TBoss3Volopt__sub_8022675C(s32 id, void *pos, s32 a, s32 b);
void update_technique_slot__10TTecRaFoieFi(s32 handle, s32 pitch, s32 c);
void fn_802393D0(Tec_802393D0 *self);
void queue_destruction__7TObjectFv(void *);
void TLobby__sub_800869A4(void *, s32, s32, s32, void *);
void TObjEneDellBiter__sub_80087350(void *, s32, void *);
void *TPhotonMylla__sub_80154CB4(u16);
void TObjPlayer__sub_8022BD74(void *);
extern RProfile_80238F84 TTecRaZonde__data_8044DB44[];
void run_task__11TTecRaZondeFv(Obj_80238F84 *self);
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

void run_task__11TTecRaZondeFv(Obj_80238F84 *self) {
    s32 i;
    if (self->proxy == NULL) {
        queue_destruction__7TObjectFv(self);
        return;
    }
    self->source = TPhotonMylla__sub_80154CB4(self->sourceId);
    if (self->source == NULL) {
        queue_destruction__7TObjectFv(self);
        return;
    }
    for (i = 0; i < TTecRaZonde__data_8044DB44[self->band].count; i++) {
        if (self->sourceId < 12) {
            if (i == 1) {
                TLobby__sub_800869A4((u8 *)self->source + 0x2FC, TTecRaZonde__data_8044DB44[self->band].entries[i].entry, 0, 60, self->source);
            } else {
                TObjEneDellBiter__sub_80087350((u8 *)self->source + 0x2FC, TTecRaZonde__data_8044DB44[self->band].entries[i].entry, self->source);
            }
        }
    }
    TObjPlayer__sub_8022BD74(self);
    queue_destruction__7TObjectFv(self);
}

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
