#include "types.h"

extern "C" {

void TLobby__sub_800FC3CC(void);
void set_ending_callback__6TLobbyFv(void);

void TLobby__sub_800FC3CC(void) {  }

    extern unsigned char status_alphabet_metrics_table[];
    extern int small_font_metrics_table_ptr;
void set_ending_callback__6TLobbyFv(void) { small_font_metrics_table_ptr = (int)status_alphabet_metrics_table; }

}
