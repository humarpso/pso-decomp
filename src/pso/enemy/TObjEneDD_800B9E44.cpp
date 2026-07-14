#include "types.h"

extern "C" {

int TObjPlayer__sub_800F7478(void*);
void reset_hp__9TObjEneDDFPv(void* p);
int update_primary_light__9TObjEneDDFPv(void* p);
int update_secondary_light__9TObjEneDDFPv(void* p);
int get_camera_ctrl__9TObjEneDDFPv(void* p);
int update_camera_sequence__9TObjEneDDFPv(void* p);
int initialize_enemy_state__9TObjEneDDFPv(void* p);
int TCameraCtrl__sub_80069148(void*);
int TCameraCtrl__sub_800691C8(void*);
int TObjEneLappy__sub_800F5DE0(void*);
int TObjLight__sub_80134098(void*);
int TObjLight__sub_80134194(void*);

int update_primary_light__9TObjEneDDFPv(void* p) { return TObjLight__sub_80134098(p); }
int update_secondary_light__9TObjEneDDFPv(void* p) { return TObjLight__sub_80134194(p); }

}
