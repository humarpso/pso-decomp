#ifndef PSO_MISC_TOSENSORANCIENT01_H
#define PSO_MISC_TOSENSORANCIENT01_H

#include "types.h"
#include "pso/misc/TOSensor.h"

struct TOSensorAncient01 : public TOSensor {
    virtual ~TOSensorAncient01();
    void update_pulse_value();
    virtual void vfunc_16();
    virtual void vfunc_17();
    virtual void vfunc_25();
    u32 m_d8;
    void render();
    static void *create(void *arg0);
    static void destroy();
    static void load_resources();
    u8 unk_DC[0x1C];};

typedef char TOSensorAncient01_size[sizeof(TOSensorAncient01) == 0xF8 ? 1 : -1];
#endif
