#include "types.h"

extern "C" {

void TAdMultiChgGameModeGC__sub_8023F564(void);
void TAdMultiChgGameModeGC__sub_8023F58C(void);
void TAdMultiChgGameModeGC__sub_8023F5B4(void);
void TAdMultiChgGameModeGC__sub_8023F5DC(void);
void TAdMultiChgGameModeGC__sub_8023F604(void);
void TAdMultiChgGameModeGC__sub_8023F62C(void);
int TAdMultiChgGameModeGC__sub_8023E9D4(void);
int TAdMultiChgGameModeGC__sub_8023EBE4(void);
int request_scene_change__21TAdMultiChgGameModeGCFv(void);
int set_game_mode_changed__21TAdMultiChgGameModeGCFv(void);
int TAdMultiChgGameModeGC__sub_8023ED04(void);
int TObjLight__sub_8023F22C(void);
int init_state__22TAdEnterSerialAccessGCFv(void);
int render_tick__Fv(void);

void TAdMultiChgGameModeGC__sub_8023F564(void) { TObjLight__sub_8023F22C(); TAdMultiChgGameModeGC__sub_8023E9D4(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F58C(void) { TObjLight__sub_8023F22C(); init_state__22TAdEnterSerialAccessGCFv(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F5B4(void) { TObjLight__sub_8023F22C(); TAdMultiChgGameModeGC__sub_8023EBE4(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F5DC(void) { TObjLight__sub_8023F22C(); request_scene_change__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F604(void) { TObjLight__sub_8023F22C(); set_game_mode_changed__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F62C(void) { TObjLight__sub_8023F22C(); TAdMultiChgGameModeGC__sub_8023ED04(); render_tick__Fv(); }

}
