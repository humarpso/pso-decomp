#ifndef PSO_MENU_TADMULTIOKGC_H
#define PSO_MENU_TADMULTIOKGC_H

#include "types.h"

extern "C" {
void free_multi_confirm_textures(void);
void load_multi_confirm_textures(void);
int multi_confirm_cancel_requested(void *p);
}

#endif
