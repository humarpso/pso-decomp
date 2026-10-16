#ifndef PSO_ITEM_TUNK_804EDD44_H
#define PSO_ITEM_TUNK_804EDD44_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804EDD44 : public TObject {
public:
    virtual ~TUnk_804EDD44();
    void sub_8032E294();
    virtual void start_card_effect_flash();
    virtual void start_card_effect_trail();
    virtual void vfunc_8();
    void *destroy(s16);
    u8 unk_1C[0x8];
    u32 m_24;
    u8 unk_28[0x28];
    u32 m_50;
    u8 unk_54[0x1C];
};
typedef char TUnk_804EDD44_size[sizeof(TUnk_804EDD44) == 0x70 ? 1 : -1];

#endif
