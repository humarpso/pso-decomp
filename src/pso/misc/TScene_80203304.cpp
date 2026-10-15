#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Tbl_8020335C { s32 v[8]; };

extern "C" {
M2C_UNK *resolve_indirect_object_record(M2C_UNK arg0, u8 *arg1);
M2C_UNK *resolve_indirect_node_record(M2C_UNK arg0, u8 *arg1);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern struct Tbl_8020335C group_selection_area_id_table;
s32 is_global_state_in_table__19TContainerAncient01Fv(void);
}

extern "C" {

    extern int TScene__render_callback;

M2C_UNK *resolve_indirect_object_record(M2C_UNK arg0, u8 *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0x1C) & 0x200) {
        return (long *) (*M2C_FIELD(arg1, M2C_UNK **, 0));
    }
    return M2C_FIELD(arg1, M2C_UNK **, 0);
}

M2C_UNK *resolve_indirect_node_record(M2C_UNK arg0, u8 *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0xC) & 0x200) {
        return (long *) (*M2C_FIELD(arg1, M2C_UNK **, 0));
    }
    return M2C_FIELD(arg1, M2C_UNK **, 0);
}

void set_instance__6TSceneFi(int a0) { TScene__render_callback = a0; }

    extern int TScene__active_scene_callback;
void set_active_scene__6TSceneFi(int a0) { TScene__active_scene_callback = a0; }

    extern int TScene__map_section_render_callback;
void set_id__6TSceneFi(int a0) { TScene__map_section_render_callback = a0; }
s32 is_global_state_in_table__19TContainerAncient01Fv(void) {
    struct Tbl_8020335C t = group_selection_area_id_table;
    s32 state = get_global_state__14TOKeyMachine01Fv();
    s32 i;
    for (i = 0; t.v[i] != -1;) {
        if (state == t.v[i++]) {
            return 1;
        }
    }
    return 0;
}

}
