#ifndef PSO_TADMULTISELGAMEMODEGC_H
#define PSO_TADMULTISELGAMEMODEGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdMultiSelGameModeGC : public TObject {
public:
    virtual ~TAdMultiSelGameModeGC();
public:
    static void render();
    static s32 is_mode_entry_enabled(void *self, s32 mode, u32 idx);
    s32 build_mode_menu(s32 arg1);
    static void exit_keyboard_mode();
    void update_transition_state();
    void set_selection_state(s32 v);
};

#endif
