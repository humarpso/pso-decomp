#include "types.h"
#include "pso/enemy/TObjEneMe1CanadinLeader.h"

extern "C" {

f64 ceil();

f32 TObjEneMe1CanadinLeader::get_status_value_f32() {
    return (f32) ceil();
}

}
