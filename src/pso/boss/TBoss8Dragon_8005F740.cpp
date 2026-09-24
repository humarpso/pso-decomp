#include "types.h"
struct O_8005F740 { u8 pad[0x4a8]; u8 buf[0x14]; u8 *cur; u32 flags; };

struct P_8005F740 { u8 pad[0x30]; };

extern "C" {
void init_color__12TBoss8DragonFPv(void *);
void trigger_effect__12TBoss8DragonFPvi(void *, void *);
void TBoss8Dragon__sub_8005F684(void *, void *);
void copy_spawn_params__12TBoss8DragonFPvPv(void *, void *);
void TBoss8Dragon__sub_8005F740(O_8005F740 *self);
}

extern "C" {

void TBoss8Dragon__sub_8005F740(O_8005F740 *self) {
    P_8005F740 p;
    if ((self->flags & 2) && self->cur >= self->buf) {
        init_color__12TBoss8DragonFPv(&p);
        trigger_effect__12TBoss8DragonFPvi(self, &p);
        TBoss8Dragon__sub_8005F684(self, &p);
        self->flags &= ~2;
        copy_spawn_params__12TBoss8DragonFPvPv(self, &p);
    }
}

}
