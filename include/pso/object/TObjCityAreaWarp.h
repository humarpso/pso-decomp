#ifndef PSO_OBJECT_TOBJCITYAREAWARP_H
#define PSO_OBJECT_TOBJCITYAREAWARP_H

#include "types.h"
#include "pso/object/TObjAreaWarp.h"

struct TObjCityAreaWarp : public TObjAreaWarp {
    virtual ~TObjCityAreaWarp();
    virtual void debug_print_area_num();
    virtual void confirm_area_transfer(s32);
    void render();
    void do_warp();
    void run_task();
    static void *create(void *arg0);
    u8 unk_AC[0x1C];
};

typedef char TObjCityAreaWarp_size[sizeof(TObjCityAreaWarp) == 0xC8 ? 1 : -1];
#endif
