#include "types.h"

extern "C" {

void set_state_3__22THunterGuildSeqOfflineFv(void);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);

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
extern struct VObj_80212644 *THunterGuildSeqOffline__active_instance;

void set_state_3__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__active_instance != NULL) {
        THunterGuildSeqOffline__active_instance->m7(6, 1);
        *(s32 *)((s8 *)THunterGuildSeqOffline__active_instance + 0x38) = 3;
        set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__active_instance, 5);
    }
}

}
