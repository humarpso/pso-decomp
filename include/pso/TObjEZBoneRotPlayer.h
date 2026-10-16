#ifndef PSO_TOBJEZBONEROTPLAYER_H
#define PSO_TOBJEZBONEROTPLAYER_H
#include "pso/TObjEZBoneRotBase.h"
#include "types.h"

class TObjEZBoneRotPlayer : public TObjEZBoneRotBase {
public:
    virtual ~TObjEZBoneRotPlayer();
    void start_bone_rotation_sequence(s32);
    void calc_bone_offsets_recursive(void *, s32, s32);
public:
    virtual void run_task();
    static void *create(void *arg0, void *arg1, void *arg2);
    void advance_bone_rotation();
};

#endif
