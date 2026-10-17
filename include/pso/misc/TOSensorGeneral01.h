#ifndef PSO_MISC_TOSENSORGENERAL01_H
#define PSO_MISC_TOSENSORGENERAL01_H

#include "types.h"
#include "pso/misc/TOSensor.h"

struct TOSensorGeneral01 : public TOSensor {
    virtual ~TOSensorGeneral01();
    virtual void vfunc_16();
    virtual void vfunc_17();
    void render();
    void *create();
    static void free_rocks();
    static void load_assets();
    u8 unk_D8[0x10];
    s32 m_e8;
    u8 unk_EC[0x4];
    s32 m_f0;
};

typedef char TOSensorGeneral01_size[sizeof(TOSensorGeneral01) == 0xF4 ? 1 : -1];
#endif
