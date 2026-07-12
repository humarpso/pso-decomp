#include "types.h"

extern "C" {

s32 fn_80355098(s32 arg0, s16 arg1);
int __dl__FPv();
int TObjPlayer__sub_8001BF10(void*);
int TObjPlayer__sub_8001BF40(void*);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*, void*);
int fn_8035510C(void* a0 = 0, void* a1 = 0);
int TAdPlyPltAnimCtrlGC__sub_80355168(void* a0 = 0);
void fn_80354F8C(void* p);
void fn_80355064(void* p);
void* fn_803550D4(void* p);
void init__19TAdPlyPltAnimCtrlGCFPvPv(void* p, void* a1);
s32 fn_80354F7C(void* p);
void fn_80354F84(void* p, s32 v);
int fn_80354FB0(void* p);
int fn_80354FD4(void* p);
int fn_80354FF8(void* p);
int fn_8035501C(void* p);
int fn_80355040(void* p);
int TObjPlayer__sub_8001BED8(void*, int);
int TAdRicoRing__sub_8001BEE8(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);

s32 fn_80354F7C(void* p) { return *(s32*)((char*)p + 0x4); }
void fn_80354F84(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void fn_80354F8C(void* p) { fn_8035510C(p, (void*)3); }
int fn_80354FB0(void* p) { return TAdRicoRing__sub_8001BEE8(p, 2); }
int fn_80354FD4(void* p) { return TObjPlayer__sub_8001BED8(p, 3); }
int fn_80354FF8(void* p) { return TObjPlayer__sub_8001BEF8(p, 1); }
int fn_8035501C(void* p) { return TAdRicoRing__sub_8001BEE8(p, 3); }
int fn_80355040(void* p) { return TObjPlayer__sub_8001BED8(p, 1); }
void fn_80355064(void* p) { TObjPlayer__sub_8001BF40(p); *(int*)((char*)p + 0x4) = 0; }
s32 fn_80355098(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* fn_803550D4(void* p) { TObjPlayer__sub_8001BF10(p); fn_80355064(p); return p; }
int fn_8035510C(void*, void*) { return 0; }
int render__19TAdPlyPltAnimCtrlGCFv(void) { return 0; }
int TAdPlyPltAnimCtrlGC__sub_80355148(void) { return 0; }
int TAdPlyPltAnimCtrlGC__sub_80355168(void*) { return 0; }

}
