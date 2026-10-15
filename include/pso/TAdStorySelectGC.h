#ifndef PSO_TADSTORYSELECTGC_H
#define PSO_TADSTORYSELECTGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdStorySelectGC : public TObject {
public:
    virtual ~TAdStorySelectGC();
    virtual void run_task();
    virtual void render();
public:
    static void set_state(s32 arg0);
    static int get_story_select();
    static void register_area_warp_object(void* a0);
    static void render();
};

#endif
