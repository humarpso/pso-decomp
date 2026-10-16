#ifndef PSO_OBJECT_TOBJDFDEMO1_H
#define PSO_OBJECT_TOBJDFDEMO1_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TObjDFDemo1 : public TUnk_804B9870 {
public:
    virtual ~TObjDFDemo1();
    void draw_fading_model();
    void sub_8004E068();
    virtual void render();
    u8 unk_90[0xA0];
};
typedef char TObjDFDemo1_size[sizeof(TObjDFDemo1) == 0x130 ? 1 : -1];

#endif
