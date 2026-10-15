#include "types.h"

extern "C" {

f32 fn_801811FC(void* p);
f32 fn_80181204(void* p);
void *__dt__18TObjCityAirCar_CarFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

f32 fn_801811FC(void* p) { return *(f32*)((char*)p + 0x94); }
f32 fn_80181204(void* p) { return *(f32*)((char*)p + 0x90); }

extern s32 __vt__18TObjCityAirCar_Car[];

void *__dt__18TObjCityAirCar_CarFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjCityAirCar_Car;
        if (*(void **)((s8 *)arg0 + 0xA8) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xA8)); }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
