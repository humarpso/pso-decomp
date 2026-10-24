#ifndef PSO_ITEM_TUNK_80480938_H
#define PSO_ITEM_TUNK_80480938_H
#include "pso/TObject.h"

class TUnk_80480938 : public TObject {
public:
    TUnk_80480938(TObject *parent);
    virtual ~TUnk_80480938();
    virtual void render();
    virtual void run_task();
    void publish_light();
    void set_camera();
};

#endif
