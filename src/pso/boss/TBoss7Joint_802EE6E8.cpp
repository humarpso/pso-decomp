#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7Joint__sub_802EE6E8(void);
void TBoss7Joint__sub_802EE6EC(void);
void TBoss7Joint__sub_802EE6F0(void);
void TBoss7Joint__sub_802EE6F4(void);
void TBoss7Joint__sub_802EE6F8(void);
void TBoss7Joint__sub_802EE6FC(void);
void TBoss7Joint__sub_802EE700(void);
void read_state__11TBoss7JointFPv(void* p);
void byteswap_action_packet__11TBoss7JointFPv(void* p);
void update_and_send_60__11TBoss7JointFPv(void* p);
void TBoss7Joint__sub_802EE7B8(void* p);
void broadcast_state__11TBoss7JointFPv(void* p);
void TBoss7Joint__sub_802EE800(void* p);
int is_part_active__11TBoss7JointFPv(void* p);
void TBoss7Joint__vt91(void *arg0);
int TLobby__send_and_handle_60(void*);
M2C_UNK TObjEneDD__vt90(void *);
M2C_UNK TObjEneDD__vt91(void *);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TBoss7Joint__sub_802EE6E8(void) {  }
void TBoss7Joint__sub_802EE6EC(void) {  }
void TBoss7Joint__sub_802EE6F0(void) {  }
void TBoss7Joint__sub_802EE6F4(void) {  }
void TBoss7Joint__sub_802EE6F8(void) {  }
void TBoss7Joint__sub_802EE6FC(void) {  }
void TBoss7Joint__sub_802EE700(void) {  }
void read_state__11TBoss7JointFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void byteswap_action_packet__11TBoss7JointFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void update_and_send_60__11TBoss7JointFPv(void* p) { byteswap_action_packet__11TBoss7JointFPv(p); TLobby__send_and_handle_60(p); }
void TBoss7Joint__sub_802EE7B8(void* p) { *(u8*)((char*)p + 0x0) = 169; *(u8*)((char*)p + 0x1) = 2; }
void broadcast_state__11TBoss7JointFPv(void* p) { read_state__11TBoss7JointFPv(p); TLobby__send_and_handle_60(p); }
void TBoss7Joint__sub_802EE800(void* p) { *(u8*)((char*)p + 0x0) = 170; *(u8*)((char*)p + 0x1) = 3; }

}
