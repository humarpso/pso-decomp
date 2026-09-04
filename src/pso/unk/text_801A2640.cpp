#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

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
void *TObjInfoCol__ct(void *, void *, void *);
void *TObjMapForceWarp__ct(void *, void *, void *);
void *TObjMapWarpForest__ct(void *, void *, void *);
void *TObjWarpLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TODoorFourLightSeabed__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TODoorFourLightSeabed__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TODoorFourLightSeabedU__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TODoorFourLightSeabedU__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TODoorLabo__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TODoorLabo__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TODoorLaboNormal__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TODoorLaboNormal__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TODoorFourLightRuins__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TODoorFourLightRuins__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TODoorFourLightSpace__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TODoorFourLightSpace__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TObjInfoCol__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TObjInfoCol__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TObjWarpLobby__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TObjWarpLobby__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TObjAreaWarpEnding__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjAreaWarpEnding__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TObjAreaWarpQuest__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TObjAreaWarpQuest__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TObjAreaWarpForest__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjAreaWarpForest__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TObjMapWarpForest__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        o = TObjMapWarpForest__ct(o, tl_05, arg0);
    }
    return o;
}

extern void *tl_05;

void *TObjMapForceWarp__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TObjMapForceWarp__ct(o, tl_05, arg0);
    }
    return o;
}

}
