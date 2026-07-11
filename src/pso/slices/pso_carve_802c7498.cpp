#include "types.h"

struct S802C7498 { u8 pad[0x118]; s32 arr[1]; };

extern "C" {

void TAdChrSelSlotGC__sub_802C7498(struct S802C7498 *arg0, s32 arg1) {
    arg0->arr[arg1] = 0;
}

}
