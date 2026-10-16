#ifndef PSO_MISC_TUNK_804CF930_H
#define PSO_MISC_TUNK_804CF930_H
#include "types.h"

class TUnk_804CF930 {
public:
    u8 unk_0[0x2];
    s16 m_2;
    virtual ~TUnk_804CF930();
    void*init_from(void*, int);
    void draw_status_gauge_bar(void *, void *, f32, f32);
    void sub_80256BDC(s16);
    void *destroy(s16);
};

#endif
