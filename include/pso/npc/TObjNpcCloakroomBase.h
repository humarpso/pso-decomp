#ifndef PSO_NPC_TOBJNPCCLOAKROOMBASE_H
#define PSO_NPC_TOBJNPCCLOAKROOMBASE_H

#include "types.h"

struct TObjNpcCloakroomBase
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    static void *create(void *arg0);
    static void destroy_static_instance();
    static void load_shared_resource();
};

#endif
