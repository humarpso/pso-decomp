#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_close__22THunterGuildSeqOfflineFv(void);
M2C_UNK TQuestListVM__sub_80073DC4(void *, M2C_UNK);

struct Base_802126C4 { char pad[0x18]; };
struct VObj_802126C4 : Base_802126C4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern VObj_802126C4 *THunterGuildSeqOffline__data_805D6188;

void notify_close__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__data_805D6188 != NULL) {
        THunterGuildSeqOffline__data_805D6188->m7(0x19, 1);
        TQuestListVM__sub_80073DC4(THunterGuildSeqOffline__data_805D6188, 4);
    }
}

}
