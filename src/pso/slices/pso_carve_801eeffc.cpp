#include "types.h"

extern "C" {

int qst_op_clr_qt_cancel(void);
int qst_op_clr_qt_success(void);
int qst_op_clr_qt_failure(void);
int THunterGuildSeqOffline__sub_801F3728(void*);
int THunterGuildSeqOffline__sub_801F3738(void*);
int THunterGuildSeqOffline__sub_801F3748(void*);

int qst_op_clr_qt_cancel(void) { return THunterGuildSeqOffline__sub_801F3728((void*)(-1)); }
int qst_op_clr_qt_success(void) { return THunterGuildSeqOffline__sub_801F3738((void*)(-1)); }
int qst_op_clr_qt_failure(void) { return THunterGuildSeqOffline__sub_801F3748((void*)(-1)); }
int qst_op_set_qt_cancel(void) { return 0; }
int qst_op_set_qt_success(void) { return 0; }
int qst_op_set_qt_failure(void) { return 0; }

}
