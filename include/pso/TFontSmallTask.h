#ifndef PSO_TFONTSMALLTASK_H
#define PSO_TFONTSMALLTASK_H
#include "pso/TObject.h"
#include "types.h"

class TFontSmallTask : public TObject {
public:
    virtual ~TFontSmallTask();
    virtual void render();
    virtual void run_task();
    f32 position[3];
    f32 offset_x, offset_y;
    f32 text_width;
    char text[16];
    u32 rgb;
    s32 age, lifetime, delay;
    s16 active;
    u16 view;
public:
    s32 get_task_id();
};

#endif
