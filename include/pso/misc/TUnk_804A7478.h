#ifndef PSO_MISC_TUNK_804A7478_H
#define PSO_MISC_TUNK_804A7478_H
#include "types.h"
#include "pso/misc/TUnk_804A7488.h"

class TUnk_804A7478 : public TUnk_804A7488 {
public:
    virtual ~TUnk_804A7478();
    s32 sub_80143930();
    void *init();
    void *destroy(s16);
    void sub_8035B610();
};

#endif
