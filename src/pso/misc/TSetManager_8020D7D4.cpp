#include "pso/TSetManager.h"

extern "C" {
void TSetManager__sub_8020D7D4(void);
extern "C" void apply_floor_set_rows__11TSetManagerFPv();
extern "C" void update_decoration_spawning__11TSetManagerFPv();
void *lbl_804C9448[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&apply_floor_set_rows__11TSetManagerFPv,
};
void *lbl_804C9454[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&update_decoration_spawning__11TSetManagerFPv,
};
void *lbl_804C9460[6] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
}
typedef void (TSetManager::*Pmf_8020D7D8)();

void TSetManager::run_task() {
    static s8 init;
    if (!init) {
        ((Pmf_8020D7D8 *)lbl_804C9460)[0] = *(Pmf_8020D7D8 *)lbl_804C9448;
        ((Pmf_8020D7D8 *)lbl_804C9460)[1] = *(Pmf_8020D7D8 *)lbl_804C9454;
        init = 1;
    }
    (this->*((Pmf_8020D7D8 *)lbl_804C9460)[*(s32 *)((u8 *)this + 0x1C)])();
    ((void (*)(void *))TSetManager__sub_8020D7D4)(this);
}

TSetManager::~TSetManager() {}

#include "types.h"

extern "C" {

void TSetManager__sub_8020D7D4(void);

void TSetManager__sub_8020D7D4(void) {  }

}
