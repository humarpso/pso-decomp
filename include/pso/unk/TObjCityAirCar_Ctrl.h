#ifndef PSO_UNK_TOBJCITYAIRCAR_CTRL_H
#define PSO_UNK_TOBJCITYAIRCAR_CTRL_H
#include "types.h"
#include "pso/TObject.h"

class TObjCityAirCar_Ctrl : public TObject {
public:
    virtual ~TObjCityAirCar_Ctrl();
    u8 unk_1C[0x5C];
};
typedef char TObjCityAirCar_Ctrl_size[sizeof(TObjCityAirCar_Ctrl) == 0x78 ? 1 : -1];

#endif
