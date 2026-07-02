#include "types.h"

extern "C" {

void qst_op_game_lev_reset_nop_86(void);
void qst_op_game_lev_super_nop_85(void);
int qst_op_cam_zmout(void* p);
int qst_op_cam_zmin(void* p);
int qst_op_cam_quake(void);
int TCameraCtrl__sub_8006A088(void*);
int TCameraCtrl__sub_8006D494(void*);
int TCameraCtrl__sub_8006D610(void*);

void qst_op_game_lev_reset_nop_86(void) {  }
void qst_op_game_lev_super_nop_85(void) {  }
int qst_op_cam_zmout(void* p) { return TCameraCtrl__sub_8006D494(p); }
int qst_op_cam_zmin(void* p) { return TCameraCtrl__sub_8006D610(p); }
int qst_op_cam_quake(void) { return TCameraCtrl__sub_8006A088((void*)(2)); }

}
