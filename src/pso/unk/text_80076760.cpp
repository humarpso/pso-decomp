#include "types.h"
struct Obj_80076760 { u8 pad[0x20]; s32 count; s32 interval; };

struct Obj_800767D8 {
    u8 pad[0x20];
    s32 count;
    s32 interval;
    f32 ratio[4];
};

extern "C" {
void play_sound_effect(s32, s32, s32, s32);
void fn_80076760(Obj_80076760 *self);
s16 obj_getS16_32C(void *);
s16 get_field_2b8__14TItemProShieldFPv(void *);
u32 find_revival_item__10TObjPlayerFv(void *);
void *get_player_by_client_id(s32);

void update_player_hp_ratios(Obj_800767D8 *self);
}

extern "C" {

void fn_80076760(Obj_80076760 *self) {
    if (self->count < 0 || self->interval <= 0) {
        return;
    }
    if (self->count % self->interval == 0) {
        play_sound_effect(0x23230, 0, 0, 0);
    }
    self->count--;
}
void update_player_hp_ratios(Obj_800767D8 *self) {
    s32 changed;
    s32 i;
    void *p;
    f32 min;
    f32 max;
    f32 cur;
    min = (1.0f);
    changed = 0;
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p == NULL || find_revival_item__10TObjPlayerFv(p) != 0) {
            self->ratio[i] = (1.0f);
            continue;
        }
        cur = obj_getS16_32C(p);
        max = get_field_2b8__14TItemProShieldFPv(p);
        if (0.0f == cur) {
            self->ratio[i] = (1.0f);
            continue;
        }
        if (max <= 0.0f) {
            self->ratio[i] = (1.0f);
            continue;
        }
        max = cur / max;
        if (self->ratio[i] > max) {
            changed = 1;
            if (min > max) {
                min = max;
            }
        }
        self->ratio[i] = max;
    }
    if (changed == 0 || min >= (1.0f)) {
        return;
    }
    self->count = 0x5A;
    self->interval = (s32)(12.0f * min) + 3;
}

}

#include "pso/TObjWarnChime.h"

#include "types.h"
struct Obj_80076A9C {
    const char *name;
    u8 pad4[0x14];
    void *vt;
    s32 f1c;
    s32 f20;
    s32 f24;
    f32 f28[4];
};

extern "C" {
void *__ct__7TObjectFP7TObject(void *, void *);
extern char __vt__13TObjWarnChime[];
extern const char *lbl_805D28A0;
void *TObjWarnChime__ct(Obj_80076A9C *self, void *parent);
}

extern "C" {
void reset_state__13TObjWarnChimeFPv(void*);
void update_when_camera_active__13TObjWarnChimeFPv(void*);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state__13TObjWarnChimeFPv(void *arg0);
void update_when_camera_active__13TObjWarnChimeFPv(void *arg0);

s16 get_field_2b8__14TItemProShieldFPv(void* p);
s32 should_update__11TCameraCtrlFv();

void update_when_camera_active__13TObjWarnChimeFPv(void *arg0) {
    if (should_update__11TCameraCtrlFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        return;
    }
    ((M2C_UNK (*)(void *))update_player_hp_ratios)(arg0);
    ((M2C_UNK (*)(void *))fn_80076760)(arg0);
}

void reset_state__13TObjWarnChimeFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    if (should_update__11TCameraCtrlFv() != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}

void TObjWarnChime::run_task() {
    switch (m_state) {
    case 0:
        reset_state__13TObjWarnChimeFPv(this);
        return;
    case 1:
        update_when_camera_active__13TObjWarnChimeFPv(this);
        return;
    }
}

TObjWarnChime::~TObjWarnChime() {}

extern "C" {
void *__nw__7TObjectFUl(int);
void * fn_80076B14(void *arg0);
}

extern "C" {

void *TObjWarnChime__ct(Obj_80076A9C *self, void *parent) {
    s32 i;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__13TObjWarnChime;
    self->name = lbl_805D28A0;
    self->f20 = -1;
    self->f24 = 0;
    for (i = 0; i < 4; i++) {
        self->f28[i] = (1.0f);
    }
    self->f1c = 0;
    return self;
}

void * fn_80076B14(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TObjWarnChime__ct((Obj_80076A9C *)(o), (void *)(arg0));
    }
    return o;
}

}
