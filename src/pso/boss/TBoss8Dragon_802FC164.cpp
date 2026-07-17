#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_hit_result__12TBoss8DragonFPvii(void *arg0, s32 arg1, s32 arg2);
void reset_action__12TBoss8DragonFPv(void* a0);
void activate_attack__12TBoss8DragonFPv(void* a0);
void set_active_flag__12TBoss8DragonFPv(void* a0);
void set_action_state__12TBoss8DragonFPv(void* p);
void set_state__12TBoss8DragonFPv(void* p);
void reset_timer__12TBoss8DragonFPv(void* p);
s32 TBoss4Type2__sub_80141FA8(s32, s32);

void check_hit_result__12TBoss8DragonFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (TBoss4Type2__sub_80141FA8(arg1, arg2) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x654) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x654) = -1;
}

    extern const float lbl_805DED70;
void reset_action__12TBoss8DragonFPv(void* a0) { *(int*)((char*)a0 + 0x3c0) = (*(int*)((char*)a0 + 0x3c0) & 0xfffffffe); *(float*)((char*)a0 + 0x3c) = lbl_805DED70; }

    extern const float lbl_805DEE70;
void activate_attack__12TBoss8DragonFPv(void* a0) { *(int*)((char*)a0 + 0x3c0) = (*(int*)((char*)a0 + 0x3c0) | 0x1); *(float*)((char*)a0 + 0x3c) = lbl_805DEE70; }

    extern const float TBoss8Dragon__data_805DED50;
void set_active_flag__12TBoss8DragonFPv(void* a0) { *(int*)((char*)a0 + 0x3c0) = (*(int*)((char*)a0 + 0x3c0) | 0x1); *(float*)((char*)a0 + 0x3c) = TBoss8Dragon__data_805DED50; }

void set_action_state__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 2; }
void set_state__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 1; }
void reset_timer__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 0; }

}
