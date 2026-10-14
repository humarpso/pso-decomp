#define TOBJECT_OUT_OF_LINE_HELPERS
#include "pso/TObject.h"

extern "C" {
void retire_equipment_effect(TObject* effect) {
    if (effect != 0) {
        effect->queue_destruction();
    }
}
}
