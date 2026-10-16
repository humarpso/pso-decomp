#ifndef PSO_ITEM_TITEMEFFARMOR_H
#define PSO_ITEM_TITEMEFFARMOR_H

#include "types.h"
#include "pso/TObject.h"

struct TItemEffArmor : public TObject {
    virtual ~TItemEffArmor();
    u32 m_1c;
    u8 _pad20[0xC];
    void* m_2c;
    u8 _pad30[0x8];
    void* m_38;
    u8 _pad3C[0x2C];
    u32 m_68;
    u32 m_6c;
    u32 m_70;
    u32 m_74;
    u32 m_78;
    virtual void render();
    virtual void run_task();};

typedef char TItemEffArmor_size[sizeof(TItemEffArmor) == 0x7C ? 1 : -1];
#endif
