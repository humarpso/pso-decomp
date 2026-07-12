#include "types.h"

extern "C" {

void TBoss2DeRolLe__sub_80036288(void);
void TBoss2DeRolLe__sub_8003628C(void);
void TBoss2DeRolLe__sub_80036290(void);
void TBoss2DeRolLe__sub_80036294(void);
void TBoss2DeRolLe__sub_80036298(void);
void TBoss2DeRolLe__sub_8003629C(void);
void TBoss2DeRolLe__sub_800362A0(void);
void swap_endian__13TBoss2DeRolLeFPv(void* p);
void swap_6x13_fields__13TBoss2DeRolLeFPv(void* p);
void send_6x13__13TBoss2DeRolLeFPv(void* p);
void TBoss2DeRolLe__sub_80036358(void* p);
void update_and_send__13TBoss2DeRolLeFPv(void* p);
void TBoss2DeRolLe__sub_800363A0(void* p);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TBoss2DeRolLe__sub_80036288(void) {  }
void TBoss2DeRolLe__sub_8003628C(void) {  }
void TBoss2DeRolLe__sub_80036290(void) {  }
void TBoss2DeRolLe__sub_80036294(void) {  }
void TBoss2DeRolLe__sub_80036298(void) {  }
void TBoss2DeRolLe__sub_8003629C(void) {  }
void TBoss2DeRolLe__sub_800362A0(void) {  }
void swap_endian__13TBoss2DeRolLeFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void swap_6x13_fields__13TBoss2DeRolLeFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void send_6x13__13TBoss2DeRolLeFPv(void* p) { swap_6x13_fields__13TBoss2DeRolLeFPv(p); TLobby__send_and_handle_60(p); }
void TBoss2DeRolLe__sub_80036358(void* p) { *(u8*)((char*)p + 0x0) = 19; *(u8*)((char*)p + 0x1) = 2; }
void update_and_send__13TBoss2DeRolLeFPv(void* p) { swap_endian__13TBoss2DeRolLeFPv(p); TLobby__send_and_handle_60(p); }
void TBoss2DeRolLe__sub_800363A0(void* p) { *(u8*)((char*)p + 0x0) = 20; *(u8*)((char*)p + 0x1) = 3; }

}
