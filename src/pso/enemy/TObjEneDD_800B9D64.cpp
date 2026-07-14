#include "types.h"

extern "C" {

void clear_global_flag_400__9TObjEneDDFv(void);
int update_player_state__9TObjEneDDFPv(void* p);
int render_with_position_override__10TObjPlayerFPvPvi(void*);

    extern int some_id_805c6f74;
void clear_global_flag_400__9TObjEneDDFv(void) { some_id_805c6f74 = (some_id_805c6f74 & 0xfffffbff); }

int update_player_state__9TObjEneDDFPv(void* p) { return render_with_position_override__10TObjPlayerFPvPvi(p); }

}
