#ifndef PSO_MISC_TWINDOW_H
#define PSO_MISC_TWINDOW_H

#include "types.h"

struct TWindow
{
    void close_sub_windows();
};

extern "C" {
void handle_confirm_dialog(void *arg0);
}

#endif
