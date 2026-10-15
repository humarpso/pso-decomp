#include "types.h"
#include "pso/misc/TMovie.h"

extern "C" {

int TMovie__sub_80143CC8(void);
int flush_cache__6TMovieFv(void);
int VIWaitForRetrace(void*);

void TMovie::flush_and_reset() { flush_cache__6TMovieFv(); TMovie__sub_80143CC8(); }

}
