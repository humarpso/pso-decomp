#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void swap_state_endian__12TOChatSensorFPv(void* p);
s32 TOComputerMachine01__vt8(s32 arg0, f32 farg0, f32 farg1);
void init_packet_type__12TOChatSensorFPv(void* p);
void load_chat_sensor(void);
void send_state__12TOChatSensorFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void* a0 = 0);
int load_encrypted_archive_data(void*);
f32 xz_distance_squared(s32, s32);
s32 update_object_view_visibility(s32, f32, f32);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);

    extern unsigned char lbl_804404B0[];
    extern int chat_sensor_table;
void load_chat_sensor(void) { chat_sensor_table = load_encrypted_archive_data(lbl_804404B0); }

void send_state__12TOChatSensorFPv(void* p) { swap_state_endian__12TOChatSensorFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void swap_state_endian__12TOChatSensorFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void init_packet_type__12TOChatSensorFPv(void* p) { *(u8*)((char*)p + 0x0) = 147; *(u8*)((char*)p + 0x1) = 3; }

extern s32 camera_ctrl_instance;

s32 TOComputerMachine01__vt8(s32 arg0, f32 farg0, f32 farg1) {
    if (xz_distance_squared(arg0 + 0x38, camera_ctrl_instance + 0x178) < (farg1 * farg1)) {
        M2C_FIELD(arg0, s16 *, 0x1e) = 1;
        return M2C_FIELD(arg0, s16 *, 0x1e);
    }
    return update_object_view_visibility(arg0, farg0, farg1);
}

}
