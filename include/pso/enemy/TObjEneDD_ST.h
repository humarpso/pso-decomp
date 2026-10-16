#ifndef PSO_ENEMY_TOBJENEDD_ST_H
#define PSO_ENEMY_TOBJENEDD_ST_H
#include "types.h"
#include "pso/enemy/TObjEneDD.h"

class TObjEneDD_ST : public TObjEneDD {
public:
    virtual ~TObjEneDD_ST();
};
typedef char TObjEneDD_ST_size[sizeof(TObjEneDD_ST) == 0x1C ? 1 : -1];

#endif
