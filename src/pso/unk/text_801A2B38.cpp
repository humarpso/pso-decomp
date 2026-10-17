#include "types.h"

extern "C" {

void *TOContainerAncientEnemyRare__create(void *arg0);
void *TOContainerAncientItemRare__create(void *arg0);
void *TObjBgmCol__create(void *arg0);
void *TObjCityMainWarpChallenge__create(void *arg0);
void *TObjContainerAbeEnemy__create(void *arg0);
void *TObjItemLight__create(void *arg0);
void *TObjRaderCol__create(void *arg0);
void *TObjRaderHideCol__create(void *arg0);
void *TOContainerAncientEnemyRare__ct(void *, void *);
void *TOContainerAncientItemRare__ct(void *, void *);
void *TObjBgmCol__ct(void *arg0, s32 arg1, s32 arg2);
void *TObjCityMainWarpChallenge__ct(void *, void *, void *);
void *TObjContainerAbeEnemy__ct(void *, void *, void *);
u8 *TObjItemLight__ct(u8 *arg0, s32 arg1, s32 arg2);
u8 *TObjRaderCol__ct(u8 *arg0, s32 arg1, s32 arg2);
void *TObjRaderHideCol__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void *TOContainerAncientItemRare__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TOContainerAncientItemRare__ct(o, arg0);
    }
    return o;
}

void *TOContainerAncientEnemyRare__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TOContainerAncientEnemyRare__ct(o, arg0);
    }
    return o;
}

extern void *tl_05;

void *TObjRaderCol__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = TObjRaderCol__ct((u8 *)o, (s32)tl_05, (s32)arg0);
    }
    return o;
}

void *TObjRaderHideCol__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TObjRaderHideCol__ct(o, tl_05, arg0);
    }
    return o;
}

void *TObjContainerAbeEnemy__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerAbeEnemy__ct(o, tl_05, arg0);
    }
    return o;
}

void *TObjBgmCol__create(void *set) {
    void *o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = TObjBgmCol__ct(o, (s32)tl_05, (s32)set);
    }
    return o;
}

void *TObjItemLight__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TObjItemLight__ct((u8 *)o, (s32)tl_05, (s32)arg0);
    }
    return o;
}

void *TObjCityMainWarpChallenge__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x180);
    if (o != NULL) {
        o = TObjCityMainWarpChallenge__ct(o, tl_05, arg0);
    }
    return o;
}

}
