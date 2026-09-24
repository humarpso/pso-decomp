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
extern const f32 lbl_805D91C0;
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
M2C_UNK fn_80076760(void *);
M2C_UNK fn_800767D8(void *);
s16 get_field_2b8__14TItemProShieldFPv(void* p);
s32 should_update__11TCameraCtrlFv();

void update_when_camera_active__13TObjWarnChimeFPv(void *arg0) {
    if (should_update__11TCameraCtrlFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        return;
    }
    fn_800767D8(arg0);
    fn_80076760(arg0);
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
        self->f28[i] = lbl_805D91C0;
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
