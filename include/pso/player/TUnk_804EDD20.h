#ifndef PSO_PLAYER_TUNK_804EDD20_H
#define PSO_PLAYER_TUNK_804EDD20_H
#include "types.h"
#include "pso/item/TUnk_804EDD44.h"

class TUnk_804EDD20 : public TUnk_804EDD44 {
public:
    virtual ~TUnk_804EDD20();
    void init_offset_vectors();
    virtual void render();
    void *init_effect_object();
    void *init_offsets_object();
    virtual void vfunc_8();
    virtual void start_card_effect_trail();
    virtual void start_card_effect_flash();
    u8 unk_70[0x10];
    f32 m_80;
    u8 unk_84[0xC];
};
typedef char TUnk_804EDD20_size[sizeof(TUnk_804EDD20) == 0x90 ? 1 : -1];

#endif
