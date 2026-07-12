#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TAdDialingGCFv(void *arg0);
void render__12TAdDialingGCFv(void* p);

int update__12TAdDialingGCFPv(void*);
int TAdDialingGC__sub_80328B20(void*);
int TAdDialingGC__sub_80328C10(void*);
int TAdDialingGC__sub_80328C4C(void*);

void render__12TAdDialingGCFv(void* p) { TAdDialingGC__sub_80328B20(p); TAdDialingGC__sub_80328C4C(p); TAdDialingGC__sub_80328C10(p); update__12TAdDialingGCFPv(p); }

M2C_UNK TAdDialingGC__sub_80328210();
M2C_UNK TAdDialingGC__sub_803282B8();
M2C_UNK update_dial_state__12TAdDialingGCFPvi();
M2C_UNK TAdDialingGC__sub_80328558(void *);

void run_task__12TAdDialingGCFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        update_dial_state__12TAdDialingGCFPvi();
        break;
    case 1:
        TAdDialingGC__sub_803282B8();
        break;
    case 2:
        TAdDialingGC__sub_80328210();
        break;
    }
    TAdDialingGC__sub_80328558(arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
}

}
