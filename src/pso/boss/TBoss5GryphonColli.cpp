#include "pso/TBoss5GryphonColli.h"

extern "C" void queue_destruction__7TObjectFv(void*);

TBoss5GryphonColli::~TBoss5GryphonColli() {
    for (s32 index = 0; index < 1; ++index) {
        if (objects[index] != NULL) {
            queue_destruction__7TObjectFv(objects[index]);
            objects[index] = NULL;
        }
    }
}
