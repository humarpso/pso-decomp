#ifndef PSO_CAMERA_TUNK_804DAB08_H
#define PSO_CAMERA_TUNK_804DAB08_H
#include "types.h"
#include "pso/misc/TUnk_80488A28.h"

class TUnk_804DAB08 : public TUnk_80488A28 {
public:
    virtual ~TUnk_804DAB08();
    void calc_spherical_camera_position();
    u8 unk_6C[0x4];
    s32 m_70;
    u8 unk_74[0x4];
    int m_78;
    u8 unk_7C[0xC];
    float m_88;
    u8 unk_8C[0x4];
};
typedef char TUnk_804DAB08_size[sizeof(TUnk_804DAB08) == 0x90 ? 1 : -1];

#endif
