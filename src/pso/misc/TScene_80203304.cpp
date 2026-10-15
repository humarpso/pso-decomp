#include "types.h"

struct Tbl_8020335C { s32 v[8]; };

extern "C" {
s32 *resolve_indirect_object_record(s32 arg0, u8 *arg1);
s32 *resolve_indirect_node_record(s32 arg0, u8 *arg1);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern struct Tbl_8020335C group_selection_area_id_table;
s32 is_global_state_in_table__19TContainerAncient01Fv(void);
}

extern "C" {

    extern int TScene__render_callback;

s32 *resolve_indirect_object_record(s32 arg0, u8 *arg1) {
    if (*(s32 *)((s8 *)arg1 + 0x1C) & 0x200) {
        return (long *) (**(s32 **)((s8 *)arg1 + 0));
    }
    return *(s32 **)((s8 *)arg1 + 0);
}

s32 *resolve_indirect_node_record(s32 arg0, u8 *arg1) {
    if (*(s32 *)((s8 *)arg1 + 0xC) & 0x200) {
        return (long *) (**(s32 **)((s8 *)arg1 + 0));
    }
    return *(s32 **)((s8 *)arg1 + 0);
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
