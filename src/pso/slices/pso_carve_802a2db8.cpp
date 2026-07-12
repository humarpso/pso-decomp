#include "types.h"

extern "C" {

int create_ch_cr_tag_occ_header(void*);
void create_all_ch_cr_tag_headers(void);

void create_all_ch_cr_tag_headers(void) { { int i; for (i = 0; i < 15; i++) { create_ch_cr_tag_occ_header((void*)i); } } }

}
