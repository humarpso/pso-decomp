#ifndef PSO_MISC_TENDINGPICSTAGE_H
#define PSO_MISC_TENDINGPICSTAGE_H
#include "pso/TObject.h"

class TEndingPicStage : public TObject {
public:
    TEndingPicStage(TObject *parent);
    virtual ~TEndingPicStage();
    virtual void render();
    virtual void run_task();
    void publish_light();
    void set_camera();
    static void pose_player(s32 state, s8 picture);
    static void set_picture(s32 picture);
};

#endif
