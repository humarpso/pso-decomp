#ifndef PSO_TOBJCMASSIGNMENU_H
#define PSO_TOBJCMASSIGNMENU_H
#include "pso/TObject.h"
#include "types.h"

class TObjCMAssignMenu : public TObject {
public:
    virtual ~TObjCMAssignMenu();
    virtual void render();
    virtual void run_task();
public:
    void draw_char_info_sprites();
    void draw_frame();
    void draw_assign_icons();
    void render_assign_slots();
    void calc_grid_layout();
};

#endif
