#include "types.h"

extern "C" {

int qst_op_cine_disable(void);
int qst_op_cine_enable(void);
int reset_state__9TCineCtrlFi(void*);
int TCineCtrl__sub_80077F08(void*);

int qst_op_cine_disable(void) { return reset_state__9TCineCtrlFi((void*)(0)); }
int qst_op_cine_enable(void) { return TCineCtrl__sub_80077F08((void*)(0)); }

}
