#include "pso/AllocatorCallbacks.h"
#include "pso/system/memory.h"

extern "C" {
extern AllocatorCallbacks *global_allocator;
#pragma push
#pragma scheduling off
}
void xfree(void *arg0) {
    global_allocator->release(arg0, global_allocator);
}
extern "C" {
#pragma pop

}
