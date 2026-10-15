#ifndef PSO_TITEMEFFEQUIP_H
#define PSO_TITEMEFFEQUIP_H

#include "pso/TObject.h"
#include "types.h"

class TItemEffEquip : public TObject {
public:
 void* m_1c;
 void* m_20;
public:
    virtual ~TItemEffEquip();
    virtual void run_task();
public:
    static void create(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
    void release_effect();
};

#endif
