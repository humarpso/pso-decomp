#ifndef PSO_OBJECT_TOBJFOGCOLLISION_MANAGER_H
#define PSO_OBJECT_TOBJFOGCOLLISION_MANAGER_H
#include "types.h"
#include "pso/TObject.h"

class TObjFogCollision_Manager : public TObject {
public:
    virtual ~TObjFogCollision_Manager();
    u8 unk_1C[0x14];
};
typedef char TObjFogCollision_Manager_size[sizeof(TObjFogCollision_Manager) == 0x30 ? 1 : -1];

#endif
