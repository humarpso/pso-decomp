#ifndef PSO_TITEMLOCKCOUNTCTRL_H
#define PSO_TITEMLOCKCOUNTCTRL_H

#include "pso/TObject.h"
#include "types.h"

class TItemLockCountCtrl : public TObject {
public:
 u8 _pad1C[0x20 - 0x1C];
 void* m_20;
public:
    virtual ~TItemLockCountCtrl();
};

#endif
