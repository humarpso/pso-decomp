#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802133C4 { char pad[0x18]; };
struct VObj_802133C4 : Base_802133C4 {
    virtual void m0(); virtual void m1();
};

extern "C" {

void THunterGuildSeqOffline__sub_802133C4(void);
int THunterGuildSeqOffline__sub_80213410(void* p);
int THunterGuildSeqOffline__sub_80213430(void*);
void *TQuestThread__sub_801F5BD4(s32);

extern s32 THunterGuildSeqOffline__data_80513DC8[];

void THunterGuildSeqOffline__sub_802133C4(void) {
    s32 v = THunterGuildSeqOffline__data_80513DC8[3];
    if (v != -1) {
        void *obj = TQuestThread__sub_801F5BD4(v);
        if (obj != NULL) {
            ((VObj_802133C4 *)obj)->m1();
        }
    }
}

int THunterGuildSeqOffline__sub_80213410(void* p) { return THunterGuildSeqOffline__sub_80213430(p); }

}
