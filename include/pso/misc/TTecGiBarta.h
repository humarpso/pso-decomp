#ifndef PSO_MISC_TTECGIBARTA_H
#define PSO_MISC_TTECGIBARTA_H

#include "types.h"

struct TTecGiBarta
{
    u8 _pad00[0x1C];
    u32 m_1c;
    u8 _pad20[0xA8];
    u16 m_c8;
    u8 _padCA[0x2E];
    u32 m_f8;
    u8 _padFC[0x78];
    u32 m_174;
    void update_technique_by_phase();
    void create_particles();
    void calc_params();
    void create(void *arg1, void *arg2, void *arg3);
    void create_ex(void *arg1, void *arg2, void *arg3);
    void run_task();
    u8 *construct_facing(void * _w1, void * _w2, void * _w3, void * _w4);
    static void render();
};
typedef char TTecGiBarta_size[sizeof(TTecGiBarta)==0x178?1:-1];

#endif
