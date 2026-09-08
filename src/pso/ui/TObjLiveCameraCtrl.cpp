#include "pso/TObjLiveCameraCtrl.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void queue_destruction__7TObjectFv(void *);
void update_toggle_state__12TBoss8DragonFPv(void *);
void TBoss8Dragon__sub_8030BB24(void *);
void TBoss8Dragon__sub_8030B8A8(void *);
void copy_position_vectors__11TCameraCtrlFPvPvPv(void *, void *, void *);
}

extern "C" {

s32 TObjLiveMonitor__sub_8030C050(void* p);
void fn_8030C058(void);
s32 get_table_entry__18TObjLiveCameraCtrlFi(s32 arg0);
void reset_globals_805D6A84(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);

extern M2C_UNK TObjLiveCameraCtrl__data_805D6A88;

}

void TObjLiveCameraCtrl::run_task() {
    update_toggle_state__12TBoss8DragonFPv(this);
    TBoss8Dragon__sub_8030BB24(this);
    TBoss8Dragon__sub_8030B8A8(this);
    if (camera_object != NULL) {
        copy_position_vectors__11TCameraCtrlFPvPvPv(camera_object, vector_34, vector_40);
    }
}

TObjLiveCameraCtrl::~TObjLiveCameraCtrl() {
    ((TObject **)&TObjLiveCameraCtrl__data_805D6A88)[slot_index] = NULL;
    if (camera_object != NULL) queue_destruction__7TObjectFv(camera_object);
}

extern "C" {
s32 get_table_entry__18TObjLiveCameraCtrlFi(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 > 1) {
        return 0;
    }
    return *(s32 *)((s8 *)&TObjLiveCameraCtrl__data_805D6A88 + (arg0 * 4));
}

s32 TObjLiveMonitor__sub_8030C050(void* p) { return *(s32*)((char*)p + 0x20); }
void fn_8030C058(void) {  }

extern s32 lbl_805D6A84;
extern M2C_UNK TObjLiveCameraCtrl__data_805D6A88;

void reset_globals_805D6A84(void) {
    lbl_805D6A84 = 0;
    memset(&TObjLiveCameraCtrl__data_805D6A88, 0, 4);
}

}
