#include "types.h"

struct Base_8031E650 { char pad[0xC]; };
struct VObj_8031E650 : Base_8031E650 {
    virtual void m0(int);
};

extern "C" {

void release_static_instance__12TObjEneReconFv(void);
s32 TObjEneRecon__sub_8031BC38();

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
