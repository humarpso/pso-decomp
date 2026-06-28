#include "types.h"

extern "C" {

void TObjBoss2Dust__vt2(void* p);
void fn_8003A95C(void);
void fn_8003A984(void);
void fn_8003A9AC(void);
int TObjBoss2Tunnel__sub_8003C688(void);
int fn_8003A874(void);
int fn_8003A8D0(void);
int fn_8003AB00(void*, void*);
int fn_8003AD1C(void);
int fn_8003AD50(void);
int fn_8003AD54(void);
int fn_8003B2B0(void);
int fn_8003C648(void);
int fn_8003C64C(void);

void fn_8003A95C(void) { fn_8003AD50(); fn_8003C648(); fn_8003A874(); }
void fn_8003A984(void) { fn_8003C64C(); fn_8003B2B0(); fn_8003AD1C(); }
void fn_8003A9AC(void) { fn_8003A8D0(); TObjBoss2Tunnel__sub_8003C688(); fn_8003AD54(); }
void TObjBoss2Dust__vt2(void* p) { fn_8003AB00((char*)p + 0x24, *(void**)((char*)p + 0x20)); }

}
