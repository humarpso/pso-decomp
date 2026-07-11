#include "types.h"

extern "C" {

void fn_802FDEB8(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
void fn_802FDE84(void* p);
int TLobby__send_and_handle_60(void*);
void fn_802FDE68(void);
void fn_802FDE6C(void);
void fn_802FDE70(void);
void fn_802FDE74(void);
void fn_802FDE78(void);
void fn_802FDE7C(void);
void fn_802FDE80(void);
void build_6xA8_gol_dragon_boss_actions(void* p);

int fn_802FDDD4(void) { return 0; }
void fn_802FDE68(void) {  }
void fn_802FDE6C(void) {  }
void fn_802FDE70(void) {  }
void fn_802FDE74(void) {  }
void fn_802FDE78(void) {  }
void fn_802FDE7C(void) {  }
void fn_802FDE80(void) {  }
void fn_802FDE84(void* p) { fn_802FDEB8(p); TLobby__send_and_handle_60(p); }
void fn_802FDEB8(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void build_6xA8_gol_dragon_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 168; *(u8*)((char*)p + 0x1) = 6; }

}
