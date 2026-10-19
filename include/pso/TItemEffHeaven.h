#ifndef PSO_TITEMEFFHEAVEN_H
#define PSO_TITEMEFFHEAVEN_H

#include "pso/TObject.h"
#include "types.h"

class TItemEffHeaven : public TObject {
public:
 u8 unk_1C[0x4];
 void * m_20; // 0x20
 u8 unk_24[0x4];
 s32 m_28; // 0x28
 void* m_arr[3];

public:
    TItemEffHeaven(TObject *parent, s32 a, s16 b, s32 c);
    virtual ~TItemEffHeaven();
    virtual void run_task();
};

#endif
