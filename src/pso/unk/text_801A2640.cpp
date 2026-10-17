#include "types.h"
#include "pso/system/vector.h"

struct Vec_801A2640 { f32 x, y, z; };

struct Obj_801A2640 {
    u8 pad[0x18];
    void *vtable;
    u16 f1c;
    s16 f1e;
    s32 f20;
    s32 f24;
    s16 f28;
    s16 f2a;
    s16 f2c;
    u8 pad2e[2];
    s32 f30;
    s32 f34;
    Vec_801A2640 v38;
    Vec_801A2640 v44;
    Vec_801A2640 v50;
    s32 f5c;
    s32 f60;
    s32 f64;
    Vec_801A2640 v68;
    Vec_801A2640 v74;
    s32 f80;
};

extern "C" {
void __ct__7TObjectFP7TObject(void *self, void *parent);
extern u8 lbl_804B9870[];
extern const f32 lbl_805DC098;
extern const f32 lbl_805DC0A0;
Obj_801A2640 *construct_world_actor_base(Obj_801A2640 *self, void *parent);
void *TODoorFourLightRuins__create(void *arg0);
void *TODoorFourLightSeabedU__create(void *arg0);
void *TODoorFourLightSeabed__create(void *arg0);
void *TODoorFourLightSpace__create(void *arg0);
void *TODoorLaboNormal__create(void *arg0);
void *TODoorLabo__create(void *arg0);
void *TObjAreaWarpEnding__create(void *arg0);
void *TObjAreaWarpForest__create(void *arg0);
void *TObjAreaWarpQuest__create(void *arg0);
void *TObjInfoCol__create(void *arg0);
void *TObjMapForceWarp__create(void *arg0);
void *TObjMapWarpForest__create(void *arg0);
void *TObjWarpLobby__create(void *arg0);
void *TODoorFourLightRuins__ct(void *, void *, void *);
void *TODoorFourLightSeabedU__ct(void *, void *, void *);
void *TODoorFourLightSeabed__ct(void *, void *, void *);
void *TODoorFourLightSpace__ct(void *, void *, void *);
void *TODoorLaboNormal__ct(void *, void *, void *);
void *TODoorLabo__ct(void *, void *, void *);
void *TObjAreaWarpEnding__ct(void *, void *, void *);
void *TObjAreaWarpForest__ct(void *, void *, void *);
void *TObjAreaWarpQuest__ct(void *, void *, void *);
u8 *TObjInfoCol__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjMapForceWarp__ct(void *, void *, void *);
void *TObjMapWarpForest__ct(void *, void *, void *);
void *TObjWarpLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

Obj_801A2640 *construct_world_actor_base(Obj_801A2640 *self, void *parent) {
    __ct__7TObjectFP7TObject(self, parent);
    self->vtable = lbl_804B9870;
    self->f30 = 0;
    self->f1c = 0xFFFF;
    self->f28 = -1;
    self->f2a = 0;
    self->f2c = -1;
    self->f20 = 1;
    self->f24 = 0;
    self->f34 = 0;
    self->f80 = 0;
    self->v38.x = lbl_805DC098;
    self->v38.y = lbl_805DC098;
    self->v38.z = lbl_805DC098;
    VecCopy((Vec *)&self->v44, (const Vec *)&self->v38);
    VecCopy((Vec *)&self->v50, (const Vec *)&self->v38);
    self->f5c = 0;
    self->f60 = 0;
    self->f64 = 0;
    self->v68.x = lbl_805DC0A0;
    self->v68.y = lbl_805DC0A0;
    self->v68.z = lbl_805DC0A0;
    self->v74.x = lbl_805DC098;
    self->v74.y = lbl_805DC098;
    self->v74.z = lbl_805DC098;
    self->f1e = 0;
    return self;
}

void *TODoorFourLightSeabed__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TODoorFourLightSeabed__ct(o, tl_05, arg0);
    }
    return o;
}

void *TODoorFourLightSeabedU__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TODoorFourLightSeabedU__ct(o, tl_05, arg0);
    }
    return o;
}

void *TODoorLabo__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TODoorLabo__ct(o, tl_05, arg0);
    }
    return o;
}

void *TODoorLaboNormal__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TODoorLaboNormal__ct(o, tl_05, arg0);
    }
    return o;
}

void *TODoorFourLightRuins__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TODoorFourLightRuins__ct(o, tl_05, arg0);
    }
    return o;
}

void *TODoorFourLightSpace__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TODoorFourLightSpace__ct(o, tl_05, arg0);
    }
    return o;
}

void *TObjInfoCol__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TObjInfoCol__ct((u8 *)o, (s32)tl_05, (s32)arg0);
    }
    return o;
}

void *TObjWarpLobby__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TObjWarpLobby__ct(o, tl_05, arg0);
    }
    return o;
}

void *TObjAreaWarpEnding__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjAreaWarpEnding__ct(o, tl_05, arg0);
    }
    return o;
}

void *TObjAreaWarpQuest__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TObjAreaWarpQuest__ct(o, tl_05, arg0);
    }
    return o;
}

void *TObjAreaWarpForest__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjAreaWarpForest__ct(o, tl_05, arg0);
    }
    return o;
}

void *TObjMapWarpForest__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        o = TObjMapWarpForest__ct(o, tl_05, arg0);
    }
    return o;
}

void *TObjMapForceWarp__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TObjMapForceWarp__ct(o, tl_05, arg0);
    }
    return o;
}

}
