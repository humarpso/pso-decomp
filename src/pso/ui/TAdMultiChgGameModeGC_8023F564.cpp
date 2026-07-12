#include "types.h"

extern "C" {

void TAdMultiChgGameModeGC__sub_8023F564(void);
void TAdMultiChgGameModeGC__sub_8023F58C(void);
void TAdMultiChgGameModeGC__sub_8023F5B4(void);
void render_scene__21TAdMultiChgGameModeGCFv(void);
void render_game_mode_change__21TAdMultiChgGameModeGCFv(void);
void TAdMultiChgGameModeGC__sub_8023F62C(void);
int set_mode_17__21TAdMultiChgGameModeGCFv(void);
int set_state_0x9__21TAdMultiChgGameModeGCFv(void);
int request_scene_change__21TAdMultiChgGameModeGCFv(void);
int set_game_mode_changed__21TAdMultiChgGameModeGCFv(void);
int init_change_mode__21TAdMultiChgGameModeGCFv(void);
int TObjLight__sub_8023F22C(void);
int init_state__22TAdEnterSerialAccessGCFv(void);
int render_tick__Fv(void);

void TAdMultiChgGameModeGC__sub_8023F564(void) { TObjLight__sub_8023F22C(); set_mode_17__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F58C(void) { TObjLight__sub_8023F22C(); init_state__22TAdEnterSerialAccessGCFv(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F5B4(void) { TObjLight__sub_8023F22C(); set_state_0x9__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void render_scene__21TAdMultiChgGameModeGCFv(void) { TObjLight__sub_8023F22C(); request_scene_change__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void render_game_mode_change__21TAdMultiChgGameModeGCFv(void) { TObjLight__sub_8023F22C(); set_game_mode_changed__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F62C(void) { TObjLight__sub_8023F22C(); init_change_mode__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }

}
