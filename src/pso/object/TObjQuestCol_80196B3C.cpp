#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjQuestCol__ct(void *arg0);
s32 update_trigger_state__12TObjQuestColFPvf(void *arg0, f32 farg0);
void TObjQuestColBase__ct(void *);
s32 is_within_range__16TObjQuestColBaseFif(f32);

extern M2C_UNK __vt__12TObjQuestCol[];
extern void *TObjQuestCol__class_name;

void *TObjQuestCol__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjQuestCol;
    M2C_FIELD(arg0, void **, 0x0) = TObjQuestCol__class_name;
    return arg0;
}

s32 update_trigger_state__12TObjQuestColFPvf(void *arg0, f32 farg0) {
    if (is_within_range__16TObjQuestColBaseFif(farg0 * farg0) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0;
            return 1;
        }
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0xB4) = 1;
    return 3;
}

}
