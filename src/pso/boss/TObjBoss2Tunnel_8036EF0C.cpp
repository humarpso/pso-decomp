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

    extern int lbl_805D44F8;
int TObjBoss2Tunnel__sub_8036EF44(void) {  return lbl_805D44F8; }

    extern int lbl_805D44F8;
void TObjBoss2Tunnel__sub_8036EF4C(void) { lbl_805D44F8 = 1; }

    extern int lbl_805D44F8;
void enable_and_trigger__15TObjBoss2TunnelFv(void) { lbl_805D44F8 = 1; set_display_copy_filter((void*)1); }
void TAdEp3Exist__vt4(void) {
    create_callback__22TAdEnterSerialAccessGCFPvPvPv(lbl_8047B8C4, lbl_8047B8CC, (void *)draw_message_window__11TAdEp3ExistFii);
}

}
