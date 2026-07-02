#include "types.h"

extern "C" {

int qst_op_cine_disable(void);
int qst_op_cine_enable(void);
int TCineCtrl__sub_80077E1C(void*);
int TCineCtrl__sub_80077F08(void*);

int qst_op_cine_disable(void) { return TCineCtrl__sub_80077E1C((void*)(0)); }
int qst_op_cine_enable(void) { return TCineCtrl__sub_80077F08((void*)(0)); }

}
