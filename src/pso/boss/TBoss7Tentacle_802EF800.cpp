#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7Tentacle__sub_802EF954(void* p);
s32 advance_toward_limit__14TBoss7TentacleFPvf(void *arg0, f32 farg0);
int disallow_rendering__7TObjectFv(void*);
int queue_destruction__7TObjectFv(void*);

extern M2C_UNK TBoss7Tentacle__data_804740C8;
extern const f32 TBoss7Tentacle__data_805DEC00;
extern const f32 TBoss7Tentacle__data_805DEC04;

s32 advance_toward_limit__14TBoss7TentacleFPvf(void *arg0, f32 farg0) {
    f32 temp_f4;

    temp_f4 = M2C_FIELD(arg0, f32 *, 0x74);
    if (temp_f4 < ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), u32 *, 4) - TBoss7Tentacle__data_805DEC00)) {
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) (temp_f4 + farg0);
        return 0;
    }
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) TBoss7Tentacle__data_805DEC04;
    return 1;
}

extern const f32 TBoss7Tentacle__data_805DEC00;

void TBoss7Tentacle__sub_802EF954(void* p) { if (advance_toward_limit__14TBoss7TentacleFPvf((void *)(p), TBoss7Tentacle__data_805DEC00) != 0) { queue_destruction__7TObjectFv(p); disallow_rendering__7TObjectFv(p); } }

}
