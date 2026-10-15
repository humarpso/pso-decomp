#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

void TObjEneRecon__sub_80302DBC(void);

    extern unsigned char scene_sora_recon_active_flag;
void TObjEneRecon::set_active() { scene_sora_recon_active_flag = 1; }

void TObjEneRecon__sub_80302DBC(void) {  }

}
