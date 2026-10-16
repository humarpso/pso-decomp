#ifndef PSO_NPC_TOBJNPCCLOAKROOMBASE_H
#define PSO_NPC_TOBJNPCCLOAKROOMBASE_H

#include "types.h"
#include "pso/npc/TUnk_804A8640.h"

struct TObjNpcCloakroomBase : public TUnk_804A8640 {
    virtual ~TObjNpcCloakroomBase();
    static void *create(void *arg0);
    static void destroy_static_instance();
    static void load_shared_resource();};

typedef char TObjNpcCloakroomBase_size[sizeof(TObjNpcCloakroomBase) == 0x3B8 ? 1 : -1];
#endif
