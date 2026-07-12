#include "types.h"

extern "C" {

void TAdMultiChgGameModeGC__sub_8023F4E4(void);
void TAdMultiChgGameModeGC__sub_8023F50C(void);
int TAdMultiChgGameModeGC__sub_8023E8A4(void);
int set_change_mode_flags__21TAdMultiChgGameModeGCFv(void);
int TObjLight__sub_8023F22C(void);
int render_tick__Fv(void);

void TAdMultiChgGameModeGC__sub_8023F4E4(void) { TObjLight__sub_8023F22C(); TAdMultiChgGameModeGC__sub_8023E8A4(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F50C(void) { TObjLight__sub_8023F22C(); set_change_mode_flags__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }

}
