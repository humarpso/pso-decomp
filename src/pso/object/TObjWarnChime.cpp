#include "pso/TObjWarnChime.h"

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

int fn_80076B14(void);
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

int fn_80076B14(void) { return 0; }

}
