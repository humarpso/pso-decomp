#include "types.h"

extern "C" {

void render__13TObjBoss2DustFv(void* p);
void fn_8003A95C(void);
void fn_8003A984(void);
void fn_8003A9AC(void);
int clear_target_flags__15TObjBoss2TunnelFv(void);
int fn_8003A874(void);
int fn_8003A8D0(void);
int fn_8003AB00(void*, void*);
int fn_8003AD1C(void);
int fn_8003AD50(void);
int fn_8003AD54(void);
int fn_8003B2B0(void);
int TObjBoss2Tunnel__sub_8003C648(void);
int TObjBoss2Tunnel__sub_8003C64C(void);

void fn_8003A95C(void) { fn_8003AD50(); TObjBoss2Tunnel__sub_8003C648(); fn_8003A874(); }
void fn_8003A984(void) { TObjBoss2Tunnel__sub_8003C64C(); fn_8003B2B0(); fn_8003AD1C(); }
void fn_8003A9AC(void) { fn_8003A8D0(); clear_target_flags__15TObjBoss2TunnelFv(); fn_8003AD54(); }
void render__13TObjBoss2DustFv(void* p) { fn_8003AB00((char*)p + 0x24, *(void**)((char*)p + 0x20)); }

}
