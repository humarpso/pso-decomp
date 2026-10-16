#ifndef PSO_MISC_TUNK_804D0618_H
#define PSO_MISC_TUNK_804D0618_H
#include "types.h"
#include "pso/misc/TUnk_804CDFE8.h"

class TUnk_804D0618 : public TUnk_804CDFE8 {
public:
    virtual ~TUnk_804D0618();
    virtual void vfunc_6(u32, s32);
    int get_flag();
    int get_status_flag();
    u8 unk_1C[0x4];
    s16 m_20;
    u8 unk_22[0x2A];
    void* m_4c;
    u8 unk_50[0x14];
    u32 m_64;
    u32 m_68;
    u8 unk_6C[0x4];
    u16 m_70;
    s16 m_72;
    u8 unk_74[0x2];
    s16 m_76;
    u8 unk_78[0x8];
    void * m_80;
    u8 unk_84[0x4];
};
typedef char TUnk_804D0618_size[sizeof(TUnk_804D0618) == 0x88 ? 1 : -1];

#endif
