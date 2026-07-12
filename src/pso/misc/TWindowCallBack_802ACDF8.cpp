#include "types.h"

extern "C" {

void run_task__15TWindowCallBackFv(void* p);
int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);

void run_task__15TWindowCallBackFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

}
