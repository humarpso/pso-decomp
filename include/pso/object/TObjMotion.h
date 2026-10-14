#ifndef PSO_OBJECT_TOBJMOTION_H
#define PSO_OBJECT_TOBJMOTION_H
#include "pso/TObject.h"
#include <stddef.h>
class WorldActorBase : public TObject {
public:
    virtual ~WorldActorBase();
    u8 unknown1C[0x18];
    void* model;
    u8 unknown38[0x58];
};
class CollisionActorBase : public WorldActorBase {
public:
    virtual ~CollisionActorBase();
    u8 unknown90[0x1C];
};
class TObjMotion : public CollisionActorBase {
public:
    virtual ~TObjMotion();
    u32 unknownAC;
    u8 unknownB0[0x28];
    void* action_table;
    void* motion_list;
    void* motion_buffer;
    u8 unknownE4[0x14];
    u32 unknownF8;
};
typedef char WorldActorBaseSize[sizeof(WorldActorBase)==0x90?1:-1];
typedef char CollisionActorBaseSize[sizeof(CollisionActorBase)==0xAC?1:-1];
typedef char TObjMotionSize[sizeof(TObjMotion)==0xFC?1:-1];
typedef char WorldActorModelOffset[offsetof(WorldActorBase,model)==0x34?1:-1];
typedef char MotionActionsOffset[offsetof(TObjMotion,action_table)==0xD8?1:-1];
typedef char MotionListOffset[offsetof(TObjMotion,motion_list)==0xDC?1:-1];
typedef char MotionBufferOffset[offsetof(TObjMotion,motion_buffer)==0xE0?1:-1];
#endif
