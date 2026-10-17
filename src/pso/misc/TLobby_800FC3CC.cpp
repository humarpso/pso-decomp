#include "types.h"
#include "pso/misc/TLobby_800FC3CC.h"
#include "pso/misc/TLobby.h"

void TLobby__sub_800FC3CC(void) {  }

    extern unsigned char status_alphabet_metrics_table[];
    extern int small_font_metrics_table_ptr;
void TLobby::set_ending_callback() { small_font_metrics_table_ptr = (int)status_alphabet_metrics_table; }
