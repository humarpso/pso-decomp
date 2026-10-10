#ifndef PSO_MISC_TSCENE_H
#define PSO_MISC_TSCENE_H

#include "pso/TObject.h"
#include "types.h"

class TScene : public TObject
{
public:
    u32 m_1c;
    u8 _pad20[0x10];
    u32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;

    void initialize_fmt2_materials();

    void dispatch_material_animation();
    void tick_material_fmt1();
    void tick_material_fmt2();
};

#include <stddef.h>
typedef char TScene_size[sizeof(TScene) == 0x40 ? 1 : -1];
typedef char TScene_field_1c_offset[offsetof(TScene, m_1c) == 0x1C ? 1 : -1];
typedef char TScene_field_30_offset[offsetof(TScene, m_30) == 0x30 ? 1 : -1];
typedef char TScene_field_34_offset[offsetof(TScene, m_34) == 0x34 ? 1 : -1];
typedef char TScene_field_38_offset[offsetof(TScene, m_38) == 0x38 ? 1 : -1];
typedef char TScene_field_3c_offset[offsetof(TScene, m_3c) == 0x3C ? 1 : -1];

extern "C" void load_scene_collision_file(s32 scene_file_index);

#endif
