#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031E650 { char pad[0xC]; };
struct VObj_8031E650 : Base_8031E650 {
    virtual void m0(int);
};

extern "C" {

void release_static_instance__12TObjEneReconFv(void);
M2C_UNK TObjEneRecon__sub_8031BC38();

extern struct VObj_8031E650 *boss3_volopt_instance;

void release_static_instance__12TObjEneReconFv(void) {
    TObjEneRecon__sub_8031BC38();
    if (boss3_volopt_instance != 0) {
        if (boss3_volopt_instance != 0) {
            boss3_volopt_instance->m0(1);
        }
        boss3_volopt_instance = 0;
    }
}

}
