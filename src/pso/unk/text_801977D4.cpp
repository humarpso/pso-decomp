#include "types.h"
struct Vec_80197904 { f32 x, y, z; };

struct Drop_80197904 {
    s32 active;
    struct Vec_80197904 position;
    struct Vec_80197904 velocity;
    f32 floor_y;
};

struct Rain_80197904 {
    u8 pad00[0x1C];
    struct Drop_80197904 drops[16];
    u32 count;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TBoss4Zako__sub_803D8910(void *, void *);
void fn_80197904(struct Rain_80197904 *self);
}

extern "C" {

void fn_80197904(struct Rain_80197904 *self) {
    s32 active = 0;
    struct Drop_80197904 *drop = self->drops;
    u32 i;
    for (i = 0; i < self->count; drop++, i++) {
        if (drop->active != 0) {
            TBoss4Zako__sub_803D8910(&drop->position, &drop->velocity);
            if (drop->position.y < drop->floor_y) {
                drop->active = 0;
            } else {
                active++;
            }
        }
    }
    if (active == 0) {
        queue_destruction__7TObjectFv(self);
    }
}

}
