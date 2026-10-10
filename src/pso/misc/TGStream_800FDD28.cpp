#include "types.h"

extern "C" {

void reset__8TGStreamFv(void);
int TGStream__sub_800FDD50(void);

    extern int gstream_read_offset;
void reset__8TGStreamFv(void) { gstream_read_offset = 0; TGStream__sub_800FDD50(); }

}
