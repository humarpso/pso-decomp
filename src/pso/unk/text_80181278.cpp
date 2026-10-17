#include "types.h"
#include "pso/unk/TObjCityAirCar_Car.h"

struct RecoveredGlobal_80181278_lbl_804B5908 {
    s32 value;
    u8 remaining[0x30];
};

extern "C" {
u8 * construct_world_actor_base(void *);
extern RecoveredGlobal_80181278_lbl_804B5908 __vt__18TObjCityAirCar_Car;
extern s32 TObjCityAirCar_Car__name;
extern const f32 lbl_805DBBC8;
u8 *construct_city_air_car(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
typedef char RecoveredGlobal_80181278_lbl_804B5908_size[sizeof(RecoveredGlobal_80181278_lbl_804B5908) == 0x34 ? 1 : -1];
u8 *construct_city_air_car(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    construct_world_actor_base(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__18TObjCityAirCar_Car.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjCityAirCar_Car__name;
    *(f32 *)((s8 *)arg0 + 0x90) = (f32) lbl_805DBBC8;
    *(s32 *)((s8 *)arg0 + 0x98) = arg2;
    *(s32 *)((s8 *)arg0 + 0x9C) = arg3;
    *(f32 *)((s8 *)arg0 + 0x94) = farg0;
    *(s32 *)((s8 *)arg0 + 0xA0) = 0;
    *(s32 *)((s8 *)arg0 + 0xA4) = 0;
    *(s32 *)((s8 *)arg0 + 0xA8) = 0;
    ((TObjCityAirCar_Car *)arg0)->update_path_motion();
    *(s32 *)((s8 *)arg0 + 0x64) = 0;
    return arg0;
}

}
