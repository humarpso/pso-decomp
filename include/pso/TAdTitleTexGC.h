#ifndef PSO_TADTITLETEXGC_H
#define PSO_TADTITLETEXGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdTitleTexGC : public TObject {
public:
    virtual ~TAdTitleTexGC();
    void sub_802A4D74(s32, u8 *, u8 *);
    virtual void run_task();
    virtual void render();
};

#endif
