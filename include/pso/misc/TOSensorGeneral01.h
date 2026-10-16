#ifndef PSO_MISC_TOSENSORGENERAL01_H
#define PSO_MISC_TOSENSORGENERAL01_H

#include "types.h"
#include "pso/misc/TOSensor.h"

struct TOSensorGeneral01 : public TOSensor {
    virtual ~TOSensorGeneral01();
    void render();
    void *create();
    static void free_rocks();
    static void load_assets();
    u8 unk_D8[0x1C];};

typedef char TOSensorGeneral01_size[sizeof(TOSensorGeneral01) == 0xF4 ? 1 : -1];
#endif
