#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK minimap_render_dot(void *, int, int, int);
void TObjEneDD__vt97(u8 *arg0);
}

extern "C" {

int TObjEneDD__sub_800B9E84(void);
void clear_global_flag_400__9TObjEneDDFv(void);
int get_camera_ctrl__9TObjEneDDFPv(void* p);
int initialize_enemy_state__9TObjEneDDFPv(void* p);
void reset_hp__9TObjEneDDFPv(void* p);
int update_camera_sequence__9TObjEneDDFPv(void* p);
int update_player_state__9TObjEneDDFPv(void* p);
int update_primary_light__9TObjEneDDFPv(void* p);
int update_secondary_light__9TObjEneDDFPv(void* p);
int TCameraCtrl__sub_80069148(void*);
int TCameraCtrl__sub_800691C8(void*);
int TLobby__sub_800C6C10(void*);
int TObjLight__sub_80134098(void*);
int TObjLight__sub_80134194(void*);
int TObjPlayer__sub_800F7478(void*);
s32 get_main_phase();
int is_any_teammate_in_state__10TObjPlayerFv(void*);
int query_teammate_state__9TObjEneDDFPv(void* p);
int render_with_position_override__10TObjPlayerFPvPvi(void*);
int set_param__12TObjEneLappyFPvi(void*);
int update_lobby_state__9TObjEneDDFPv(void* p);

    extern int some_id_805c6f74;

void TObjEneDD__vt97(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x40800)) {
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    }
}

void clear_global_flag_400__9TObjEneDDFv(void) { some_id_805c6f74 = (some_id_805c6f74 & 0xfffffbff); }

int update_player_state__9TObjEneDDFPv(void* p) { return render_with_position_override__10TObjPlayerFPvPvi(p); }

int update_primary_light__9TObjEneDDFPv(void* p) { return TObjLight__sub_80134098(p); }
int update_secondary_light__9TObjEneDDFPv(void* p) { return TObjLight__sub_80134194(p); }

int TObjEneDD__sub_800B9E84(void) { return 0; }

void reset_hp__9TObjEneDDFPv(void* p) { TObjPlayer__sub_800F7478(p); *(short*)((char*)p + 0x33e) = *(short*)((char*)p + 0x32c); }
int get_camera_ctrl__9TObjEneDDFPv(void* p) { return TCameraCtrl__sub_80069148(p); }
int update_camera_sequence__9TObjEneDDFPv(void* p) { return TCameraCtrl__sub_800691C8(p); }
int initialize_enemy_state__9TObjEneDDFPv(void* p) { return set_param__12TObjEneLappyFPvi(p); }

}
