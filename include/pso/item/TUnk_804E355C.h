#ifndef PSO_ITEM_TUNK_804E355C_H
#define PSO_ITEM_TUNK_804E355C_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804E355C : public TObject {
public:
    virtual ~TUnk_804E355C();
    virtual void vfunc_6(s32 *);
    u8 unk_1C[0xA8];
};
typedef char TUnk_804E355C_size[sizeof(TUnk_804E355C) == 0xC4 ? 1 : -1];

#endif
