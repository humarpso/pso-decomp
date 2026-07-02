#include "types.h"

extern "C" {

int qst_op_clr_qt_cancel(void);
int qst_op_clr_qt_success(void);
int qst_op_clr_qt_failure(void);
int fn_801F3728(void*);
int fn_801F3738(void*);
int fn_801F3748(void*);

int qst_op_clr_qt_cancel(void) { return fn_801F3728((void*)(-1)); }
int qst_op_clr_qt_success(void) { return fn_801F3738((void*)(-1)); }
int qst_op_clr_qt_failure(void) { return fn_801F3748((void*)(-1)); }
int qst_op_set_qt_cancel(void) { return 0; }
int qst_op_set_qt_success(void) { return 0; }
int qst_op_set_qt_failure(void) { return 0; }

}
