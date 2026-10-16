#ifndef PSO_OBJECT_TUNK_804E0910_H
#define PSO_OBJECT_TUNK_804E0910_H
#include "types.h"
#include "pso/object/TObjPathObj.h"

class TUnk_804E0910 : public TObjPathObj {
public:
    virtual ~TUnk_804E0910();
    virtual void vfunc_14();
    u8 unk_98[0x34];
};
typedef char TUnk_804E0910_size[sizeof(TUnk_804E0910) == 0xCC ? 1 : -1];

#endif
