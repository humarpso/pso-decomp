#ifndef PSO_OBJECT_TCMCHARACTER_H
#define PSO_OBJECT_TCMCHARACTER_H
#include "pso/object/TObjMotion.h"
class TCMCharacter : public TObjMotion {
public:
    virtual ~TCMCharacter();
    virtual void run_task();
    void apply_character_appearance();
    void update_chara_preview();
    s32 shape_rel;
    s32 shape_rel_size;
    s32 shape_rel_ready;
    u32 unknown108;
};
typedef char TCMCharacterSize[sizeof(TCMCharacter)==0x10C?1:-1];
typedef char CreationShapeRelOffset[offsetof(TCMCharacter,shape_rel)==0xFC?1:-1];
typedef char CreationShapeRelSizeOffset[offsetof(TCMCharacter,shape_rel_size)==0x100?1:-1];
typedef char CreationShapeReadyOffset[offsetof(TCMCharacter,shape_rel_ready)==0x104?1:-1];
#endif
