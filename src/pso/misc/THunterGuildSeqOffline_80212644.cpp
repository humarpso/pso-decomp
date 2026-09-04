#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_3__22THunterGuildSeqOfflineFv(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

struct Base_80212644 { char pad[0x18]; };
struct VObj_80212644 : Base_80212644 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_80212644 *THunterGuildSeqOffline__data_805D6188;

void set_state_3__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__data_805D6188 != NULL) {
        THunterGuildSeqOffline__data_805D6188->m7(6, 1);
        M2C_FIELD(THunterGuildSeqOffline__data_805D6188, s32 *, 0x38) = 3;
        set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__data_805D6188, 5);
    }
}

}
