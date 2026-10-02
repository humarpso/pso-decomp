#include "types.h"

extern "C" {

void reset_key_machine_state__10TObjPlayerFv(void);
int get_global_state__14TOKeyMachine01Fv(void);
int is_item_area_enabled(void);

void reset_key_machine_state__10TObjPlayerFv(void) { get_global_state__14TOKeyMachine01Fv(); is_item_area_enabled(); }

}
