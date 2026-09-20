#ifndef PSO_ENEMY_TOBJENEMY_H
#define PSO_ENEMY_TOBJENEMY_H
#include "types.h"
struct TObjEnemy {
    TObjEnemy* initialize(void* parent);
    void* typeName;
    u8 unknown04[0x14];
    void* dispatch;
    u8 unknown1C[0x14];
    u32 actorFlags;
    u8 unknown34[0x7C];
    u32 animationFlags;
    u8 unknownB4[0x278];
    s16 hp;
    u8 unknown32E[6];
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
};
typedef char EnemyBaseSize[(sizeof(TObjEnemy)==0x374)?1:-1];
#endif
