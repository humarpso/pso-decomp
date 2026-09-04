#include "types.h"

extern "C" {

int TWindowDD__sub_80348D0C(void);
s32 TWindowDD__sub_80348D88(void* p);
int TWindowDD__sub_80348D90(void);
int TWindowDD__sub_80348DAC(void);
int TWindowDD__sub_80348DD8(void);
int TWindowDD__sub_80348DFC(void);
void reset_index__9TWindowDDFPv(void* p);
void set_field14__9TWindowDDFPvi(void* p, s32 v);
int TLobby__send_and_handle_60(void*);
int handle_word_select__9TWindowDDFPv(void*);
void init_header__9TWindowDDFPv(void* p);

int TWindowDD__sub_80348D0C(void) { return 0; }

void reset_index__9TWindowDDFPv(void* p) { *(s32*)((char*)p + 0x14) = 0; }
void set_field14__9TWindowDDFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }
s32 TWindowDD__sub_80348D88(void* p) { return *(s32*)((char*)p + 0x14); }

int TWindowDD__sub_80348D90(void) { return 0; }
int TWindowDD__sub_80348DAC(void) { return 0; }
int TWindowDD__sub_80348DD8(void) { return 0; }
int TWindowDD__sub_80348DFC(void) { return 0; }

}
