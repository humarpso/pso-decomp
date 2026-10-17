#ifndef PSO_MISC_TOCAKESHOPCAVE01_H
#define PSO_MISC_TOCAKESHOPCAVE01_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TOCakeshopCave01 : public TUnk_804AFBF8 {
    virtual ~TOCakeshopCave01();
    void update_blink_state(void *arg1);
    virtual void run_task();
    virtual void render();
    void *create();
    static void close_dialog_window();
    static void load_resource_instance();
    u8 unk_C8[0x2C];
};

typedef char TOCakeshopCave01_size[sizeof(TOCakeshopCave01) == 0xF4 ? 1 : -1];

extern "C" {
void *TOCakeshopCave01__ct(void *arg0_, void *arg1);
void *__dt__16TOCakeshopCave01Fv(void *arg0, s16 arg1);
}

#endif
