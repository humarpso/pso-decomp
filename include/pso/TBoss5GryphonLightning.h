#ifndef PSO_TBOSS5GRYPHONLIGHTNING_H
#define PSO_TBOSS5GRYPHONLIGHTNING_H

#include "pso/TObject.h"
#include "types.h"

class TBoss5GryphonLightning : public TObject {
public:
    u8 _pad1C[0x1C];
 void* m_38;
 void* m_3c;
 void* m_40;
 void* m_44;
public:
    virtual ~TBoss5GryphonLightning();
    void spawn_gryphon_lightning();
};

#endif
