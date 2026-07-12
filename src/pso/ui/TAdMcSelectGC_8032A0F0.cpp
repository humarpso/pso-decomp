#include "types.h"

extern "C" {

void open__13TAdMcSelectGCFv(void);
void close__13TAdMcSelectGCFv(void);
void TAdMcSelectGC__sub_8032A140(void* p);
int TAdMcSelectGC__sub_8032A14C(void);
int TAdMcSelectCursorGC__sub_8032A668(void);
int init_resource__19TAdMcSelectCursorGCFv(void);
int TAdMcSelectMcGC__sub_8032AA54(void);
int init_memorycard__15TAdMcSelectMcGCFv(void);
int TLobby__sub_802C78EC(void);
int TLobby__sub_802C7920(void);

void open__13TAdMcSelectGCFv(void) { TLobby__sub_802C78EC(); TAdMcSelectMcGC__sub_8032AA54(); TAdMcSelectCursorGC__sub_8032A668(); }
void close__13TAdMcSelectGCFv(void) { init_resource__19TAdMcSelectCursorGCFv(); init_memorycard__15TAdMcSelectMcGCFv(); TLobby__sub_802C7920(); }
void TAdMcSelectGC__sub_8032A140(void* p) { *(s32*)((char*)p + 0x1c) = 0; }

    extern int lbl_805D6C94;
int TAdMcSelectGC__sub_8032A14C(void) {  return lbl_805D6C94; }

}
