#include "types.h"
extern "C" {
void shuffle_shop_pool(void *);
void shuffle_shop_pool_n_times(void *arg0, s32 arg1);
}

extern "C" {

void shuffle_shop_pool_n_times(void *arg0, s32 arg1) {
    while (arg1-- > 0) {
        shuffle_shop_pool(arg0);
    }
}

}
