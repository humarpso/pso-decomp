#ifndef PSO_UNK_TOBJCITYAIRCAR_CAR_H
#define PSO_UNK_TOBJCITYAIRCAR_CAR_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TObjCityAirCar_Car : public TUnk_804B9870 {
public:
    virtual ~TObjCityAirCar_Car();
    s32 update_path_motion();
    u8 unk_90[0x1C];
};
typedef char TObjCityAirCar_Car_size[sizeof(TObjCityAirCar_Car) == 0xAC ? 1 : -1];

#endif
