#include "pso/TAdRayGC.h"

TAdRayGC::~TAdRayGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__8TAdRayGCFv(void *arg0);
void render__8TAdRayGCFv(void *arg0);
void run_task__8TAdRayGCFv(void *arg0);
M2C_UNK TAdRayGC__sub_8029BCB4(void *, s32, M2C_UNK, M2C_UNK);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK queue_destruction__7TObjectFv();

void render__8TAdRayGCFv(void *arg0) {
    s32 temp_r0;

    if (get_state_flag__9TMainTaskFv() != 1) {
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
        switch (temp_r0) {
        case 0:
            TAdRayGC__sub_8029BCB4(arg0, M2C_FIELD(arg0, s32 *, 0x20), -1, 0);
            break;
        case 1:
            TAdRayGC__sub_8029BCB4(arg0, M2C_FIELD(arg0, s32 *, 0x20), -1, 0);
            TAdRayGC__sub_8029BCB4(arg0, M2C_FIELD(arg0, s32 *, 0x20) - 0xD, -1, 1);
            break;
        case 2:
            TAdRayGC__sub_8029BCB4(arg0, M2C_FIELD(arg0, s32 *, 0x20) - 0xD, -1, 1);
            break;
        }
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
    }
}

void run_task__8TAdRayGCFv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) > 0xC) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
        break;
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) > 0x12) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
            return;
        }
        break;
    case 2:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) > 0x1F) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0x20;
            queue_destruction__7TObjectFv();
        }
        break;
    }
}

extern M2C_UNK __vt__8TAdRayGC[];
extern void *lbl_805D3D30;

void *__ct__8TAdRayGCFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TAdRayGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D30;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = -1;
    return arg0;
}

}
