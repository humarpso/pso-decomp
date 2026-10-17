#include "pso/AllocatorCallbacks.h"

extern "C" {
extern AllocatorCallbacks *global_allocator;
void xfree__FPv(void *arg0);
#pragma push
#pragma scheduling off
void xfree__FPv(void *arg0) {
    global_allocator->release(arg0, global_allocator);
}
#pragma pop

}
