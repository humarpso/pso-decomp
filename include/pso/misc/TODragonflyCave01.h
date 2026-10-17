#ifndef PSO_MISC_TODRAGONFLYCAVE01_H
#define PSO_MISC_TODRAGONFLYCAVE01_H

#include "types.h"
#include "pso/misc/TODragonfly.h"

struct TODragonflyCave01 : public TODragonfly {
    virtual ~TODragonflyCave01();
    static void release_static_instance();
    static void load_resources();
};

typedef char TODragonflyCave01_size[sizeof(TODragonflyCave01) == 0x100 ? 1 : -1];
extern "C" {
void *TODragonflyCave01__create(void *arg0);
u8 *TODragonflyCave01__ct(u8 *arg0, void *arg1);
u8 *TODragonfly__ct(u8 *arg0);
void *__dt__11TODragonflyFv(void *arg0, s16 arg1);
void *__dt__17TODragonflyCave01Fv(void *arg0, s16 arg1);
}

#endif
