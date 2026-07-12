#include "types.h"

extern "C" {

void init__9TWindowDDFPv(void* p);
int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);

void init__9TWindowDDFPv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

}
