#include "types.h"

extern "C" {

void set_flag_0x200__15TObjBoss2TunnelFv(void);
int clear_flags_0x3000__15TObjBoss2TunnelFv(void);

    extern int lbl_805D6968;
void set_flag_0x200__15TObjBoss2TunnelFv(void) { lbl_805D6968 = (lbl_805D6968 | 0x200); clear_flags_0x3000__15TObjBoss2TunnelFv(); }

}
