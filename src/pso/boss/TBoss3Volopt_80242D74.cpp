#include "types.h"

extern "C" {

void update_if_active__12TBoss3VoloptFv(void);
u32 TBoss3Volopt__sub_80242F94();
int TAdSinglePlyChrSelectGC__sub_80242CFC();

void update_if_active__12TBoss3VoloptFv(void) {
    if (TBoss3Volopt__sub_80242F94() != 0U) {
        TAdSinglePlyChrSelectGC__sub_80242CFC();
    }
}

}
