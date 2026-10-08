#include "types.h"

extern "C" {
void *create_callback__22TAdEnterSerialAccessGCFPvPvPv(void *arg0, void *arg1, void *arg2);
extern char lbl_8047B8C4[];
extern char lbl_8047B8CC[];
void draw_message_window__11TAdEp3ExistFii(void);
void TAdEp3Exist__vt4(void);
}

extern "C" {

int TObjBoss2Tunnel__sub_8036EF44(void);
void TObjBoss2Tunnel__sub_8036EF4C(void);
void enable_and_trigger__15TObjBoss2TunnelFv(void);
int set_display_copy_filter(void*);

    extern int display_copy_filter_enabled;
int TObjBoss2Tunnel__sub_8036EF44(void) {  return display_copy_filter_enabled; }

    extern int display_copy_filter_enabled;
void TObjBoss2Tunnel__sub_8036EF4C(void) { display_copy_filter_enabled = 1; }

    extern int display_copy_filter_enabled;
void enable_and_trigger__15TObjBoss2TunnelFv(void) { display_copy_filter_enabled = 1; set_display_copy_filter((void*)1); }
void TAdEp3Exist__vt4(void) {
    create_callback__22TAdEnterSerialAccessGCFPvPvPv(lbl_8047B8C4, lbl_8047B8CC, (void *)draw_message_window__11TAdEp3ExistFii);
}

}
