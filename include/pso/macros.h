#ifndef PSO_MACROS_H
#define PSO_MACROS_H

/* PSO engine macros.
 * Derived from pso-gc-reference decomp (mrb0nk500).
 * Adapted for GPOE8P (PSO EP I&II Plus, MWCC 2.6).
 */

#define EXTERN_OBJECT_NAME(name) extern const char *name##_name;
#define OBJECT_NAME(name) const char *name##_name = #name;

#define OBJECT_NAMES \
    o(TObject) \
    o(TMainTask)

#define TL_OBJECTS \
    o(tl_su, TL_SU) \
    TL_OBJECTS_AT_TL_00

#define TL_OBJECTS_AT_TL_00 \
    TL_00_OBJECTS \
    TL_02_OBJECTS \
    o(tl_particle, TL_PARTICLE) \
    TL_PARTICLE_MODEL_OBJECTS

#define TL_00_OBJECTS \
    o(tl_00, TL_00) \
    o(tl_camera, TL_CAMERA) \
    o(tl_01, TL_01)

#define TL_02_OBJECTS \
    o(tl_02, TL_02) \
    o(tl_item_equip, TL_ITEM_EQUIP) \
    o(tl_03, TL_03) \
    o(tl_loc_start, TL_LOC_START) \
    o(tl_04, TL_04) \
    o(tl_05, TL_05) \
    o(tl_06, TL_06) \
    o(tl_07, TL_07) \
    o(tl_loc_end, TL_LOC_END) \
    o(tl_window, TL_WINDOW)

#define TL_PARTICLE_MODEL_OBJECTS \
    o(tl_particlemodel, TL_PARTICLEMODEL) \
    o(tl_radermap, TL_RADERMAP) \
    o(tl_clipout, TL_CLIPOUT) \
    o(tl_fade, TL_FADE) \
    o(tl_fadeafter, TL_FADEAFTER)

#define FOREACH_NODE(type, first, varname) \
    for (type *varname = (type *)(first); varname != NULL; varname = (type *)(varname->m_next))

#define FOREACH_NODE_NODECL(type, first, varname) \
    for (varname = (type *)(first); varname != NULL; varname = (type *)(varname->m_next))

#define FOREACH_NODE_MULTI_ITER(type, first, varname, ...) \
    for (type *varname = (type *)(first); varname != NULL; varname = (type *)(varname->m_next), __VA_ARGS__)

#define FOREACH_NODE_NODECL_MULTI_ITER(type, first, varname, ...) \
    for (varname = (type *)(first); varname != NULL; varname = (type *)(varname->m_next), __VA_ARGS__)

#define as(type, var) reinterpret_cast<type>(var)

#endif
