#include "types.h"
#include "pso/misc/TOChatSensor.h"

extern "C" {

s32 TOComputerMachine01__vt8(s32 arg0, f32 farg0, f32 farg1);
void load_chat_sensor(void);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void* a0 = 0);
int load_encrypted_archive_data(void*);
f32 xz_distance_squared(s32, s32);
s32 update_object_view_visibility(s32, f32, f32);
int read_be16_field2__10TObjPlayerFv(void* a0 = 0);

    extern unsigned char lbl_804404B0[];
    extern int chat_sensor_table;
void load_chat_sensor(void) { chat_sensor_table = load_encrypted_archive_data(lbl_804404B0); }

void TOChatSensor::send_state() { swap_state_endian(); TLobby__send_and_handle_60(this); }

void TOChatSensor::swap_state_endian() { read_be16_field2__10TObjPlayerFv(this); bswap_16__FPUs((char*)this + 0x4); bswap_16__FPUs((char*)this + 0x6); }

void TOChatSensor::init_packet_type() { *(u8*)((char*)this + 0x0) = 147; *(u8*)((char*)this + 0x1) = 3; }

extern s32 camera_ctrl_instance;

s32 TOComputerMachine01__vt8(s32 arg0, f32 farg0, f32 farg1) {
    if (xz_distance_squared(arg0 + 0x38, camera_ctrl_instance + 0x178) < (farg1 * farg1)) {
        *(s16 *)((s8 *)arg0 + 0x1e) = 1;
        return *(s16 *)((s8 *)arg0 + 0x1e);
    }
    return update_object_view_visibility(arg0, farg0, farg1);
}

}
