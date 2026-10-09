#include "types.h"

extern "C" {

void flush_and_reset__6TMovieFv(void);
int TMovie__sub_80143CC8(void);
int flush_cache__6TMovieFv(void);
int VIWaitForRetrace(void*);

void flush_and_reset__6TMovieFv(void) { flush_cache__6TMovieFv(); TMovie__sub_80143CC8(); }

}
