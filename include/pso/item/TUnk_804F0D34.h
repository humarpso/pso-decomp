#ifndef PSO_ITEM_TUNK_804F0D34_H
#define PSO_ITEM_TUNK_804F0D34_H

#include "types.h"
#include "pso/TObject.h"
#include "pso/item/TItemObject.h"

class TUnk_804F0D34 : public TItemObject {
public:
    virtual ~TUnk_804F0D34();
    virtual void vfunc_44();
};

extern "C" {
void *__dt__13TUnk_804F0D34Fv(TUnk_804F0D34 *self, s16 mode);
TUnk_804F0D34 *fn_80350588(TUnk_804F0D34 *self, TObject *parent, void *item);
TUnk_804F0D34 *fn_803505C4(void *item);
}

#endif
