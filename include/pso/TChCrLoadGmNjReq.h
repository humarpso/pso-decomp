#ifndef PSO_TCHCRLOADGMNJREQ_H
#define PSO_TCHCRLOADGMNJREQ_H

#include "pso/TObject.h"
#include "types.h"

class TChCrLoadGmNjReq : public TObject {
public:
 u8 unk_1C[0x4];
 void * m_20; // 0x20
 u8 unk_24[0x4];
 void * m_28; // 0x28
 u8 unk_2C[0x34];
 void * m_60; // 0x60
 u8 unk_64[0x4];
 void* m_68;

public:
    virtual ~TChCrLoadGmNjReq();
    void sub_8028C8A8();
    virtual void run_task();
};

#endif
