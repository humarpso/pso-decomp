#ifndef PSO_UI_TADYESNOBASEGC_H
#define PSO_UI_TADYESNOBASEGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdYesNoBaseGC : public TObject {
    virtual ~TAdYesNoBaseGC();
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u8 _pad30[0x10];
    u32 m_40;
    u32 m_44;
    s32 create_menu_window();
    void init_parts(void *arg1, void *arg2);};

typedef char TAdYesNoBaseGC_size[sizeof(TAdYesNoBaseGC) == 0x48 ? 1 : -1];
#endif
