#ifndef PSO_ENEMY_TOBJENEMY_H
#define PSO_ENEMY_TOBJENEMY_H
#include "types.h"
#include "pso/player/TUnk_804806E8.h"
struct TObjEnemy : public TUnk_804806E8 {
    virtual ~TObjEnemy();
    virtual void vfunc_79();
    virtual void vfunc_80(void *);
    virtual void vfunc_81(void *);
    virtual void clear_lobby_object_state();
    virtual void vfunc_83();
    virtual int vfunc_12();
    TObjEnemy* initialize(void* parent);
    s32 countChildren();
    TObjEnemy* groupRoot();
    u32 subtype;
    u16 targetId;
    u16 resetTimer;
    u16 timer;
    s16 referenceHp;
    TObjEnemy* group;
    TObjEnemy* previous;
    TObjEnemy* next;
    TObjEnemy* children;
    void* movementParameters;
    f32 parameters[5];
    u32 variant;
    u32 state36C;
    void* control;
    static s32 apply_by_index(s16 arg0);
    int apply_player_54a00();
    s32 mask_sub_flags(s32 arg1);};
typedef char EnemyBaseSize[(sizeof(TObjEnemy)==0x374)?1:-1];
#endif
