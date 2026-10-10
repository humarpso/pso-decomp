#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80328D50___vt__12TAdDialingGC {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_80328D50___vt__12TAdDialingGC __vt__12TAdDialingGC;
extern s32 TAdDialingGC__instance;
u8 *__dt__12TAdDialingGCFv(u8 *arg0, s16 arg1);
}

extern "C" {

void run_task__12TAdDialingGCFv(void *arg0);
void render__12TAdDialingGCFv(void* p);

int update__12TAdDialingGCFPv(void*);
int TAdDialingGC__sub_80328B20(void*);
int draw_if_flag_set__12TAdDialingGCFPv(void*);
int render_if_flag_set__12TAdDialingGCFPv(void*);

void render__12TAdDialingGCFv(void* p) { TAdDialingGC__sub_80328B20(p); render_if_flag_set__12TAdDialingGCFPv(p); draw_if_flag_set__12TAdDialingGCFPv(p); update__12TAdDialingGCFPv(p); }

M2C_UNK update_dial_state__12TAdDialingGCFPv();
M2C_UNK update_state__12TAdDialingGCFPv();
M2C_UNK update_dial_state__12TAdDialingGCFPvi();
M2C_UNK update_selection__12TAdDialingGCFPv(void *);

void run_task__12TAdDialingGCFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        update_dial_state__12TAdDialingGCFPvi();
        break;
    case 1:
        update_state__12TAdDialingGCFPv();
        break;
    case 2:
        update_dial_state__12TAdDialingGCFPv();
        break;
    }
    update_selection__12TAdDialingGCFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
}
typedef char RecoveredGlobal_80328D50___vt__12TAdDialingGC_size[sizeof(RecoveredGlobal_80328D50___vt__12TAdDialingGC) == 0x18 ? 1 : -1];
u8 *__dt__12TAdDialingGCFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TAdDialingGC.value;
        TAdDialingGC__instance = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}
