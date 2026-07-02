#include "types.h"

extern "C" {

int qst_op_cam_adj(void* p);
int TCameraCtrl__sub_8006D460(void*);

int qst_op_cam_adj(void* p) { return TCameraCtrl__sub_8006D460(p); }

}
