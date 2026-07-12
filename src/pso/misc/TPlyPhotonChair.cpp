#include "types.h"

extern "C" {

u16 TPlyPhotonChair__sub_8035B530(void* p);
void TPlyPhotonChair__sub_8035B538(void* p, s16 v);
void TPlyPhotonChair__sub_8035B540(void* p, void* a1);
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v);
void TPlyPhotonChair__sub_8035B574(void* p);
int TPlyPhotonChair__sub_8035B520(void* p);

int TRaderMapCore__sub_8002F588(void*, void*);

int TPlyPhotonChair__sub_8035B520(void* p) { return *(u32*)((char*)p + 0x94) == 0; }
u16 TPlyPhotonChair__sub_8035B530(void* p) { return *(u16*)((char*)p + 0x90); }
void TPlyPhotonChair__sub_8035B538(void* p, s16 v) { *(s16*)((char*)p + 0x90) = v; }
void TPlyPhotonChair__sub_8035B540(void* p, void* a1) { TRaderMapCore__sub_8002F588(a1, p); }
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v) { *(f32*)((char*)p + 0x14) = v; }
void TPlyPhotonChair__sub_8035B574(void* p) { *(s32*)((char*)p + 0x18) = 2; }

}
