#ifndef PSO_TLEVELSELECT_H
#define PSO_TLEVELSELECT_H
#include "pso/TObject.h"
#include "types.h"

class TLevelSelect : public TObject {
public:
    virtual ~TLevelSelect();
    virtual void run_task();
    virtual void render();
public:
    static void render();
    static s32 get_difficulty_flag_bit(s32 n, s32 flag);
    void add_item_rect(void *src);
};

#endif
