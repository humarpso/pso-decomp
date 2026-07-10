#include "types.h"

extern "C" {

int qst_op_cine_disable(void);
int qst_op_cine_enable(void);
int reset_state__9TCineCtrlFi(void*);
int reset__9TCineCtrlFi(void*);

int qst_op_cine_disable(void) { return reset_state__9TCineCtrlFi((void*)(0)); }
int qst_op_cine_enable(void) { return reset__9TCineCtrlFi((void*)(0)); }

}
