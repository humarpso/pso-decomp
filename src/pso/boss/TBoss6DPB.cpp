#include "pso/TBoss6DPB.h"

TBoss6DPB::~TBoss6DPB() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void queue_destruction__7TObjectFv(void *);
int query_teammate_state__9TObjEneDDFPv(void *);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
void fn_8035D8B0(void *);
void fn_8035D924(void *);
extern const f32 lbl_805E01C8;
void run_task__9TBoss6DPBFv(u8 *arg0);
}

extern "C" {

void render__9TBoss6DPBFv(void);

void render__9TBoss6DPBFv(void) {  }
void run_task__9TBoss6DPBFv(u8 *arg0) {
    if (query_teammate_state__9TObjEneDDFPv(arg0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 1);
        if ((f32) M2C_FIELD(arg0, s32 *, 0x30) > lbl_805E01C8) {
            fn_8035D924(arg0);
            TBoss3Volopt__sub_8022675C(0x40069411, (u32) (arg0 + 0x20), 0, 0);
            fn_8035D8B0(arg0);
            queue_destruction__7TObjectFv(arg0);
        }
    }
}

}
