#ifndef PSO_UI_TUNK_804E3008_H
#define PSO_UI_TUNK_804E3008_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804E3008 : public TObjMotion {
public:
    virtual ~TUnk_804E3008();
    void sub_802E0F58(s32);
    u8 unk_FC[0x78];
};
typedef char TUnk_804E3008_size[sizeof(TUnk_804E3008) == 0x174 ? 1 : -1];

#endif
