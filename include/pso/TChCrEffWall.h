#ifndef PSO_TCHCREFFWALL_H
#define PSO_TCHCREFFWALL_H
#include "pso/TObject.h"
#include "types.h"

class TChCrEffWall : public TObject {
public:
    TChCrEffWall(TObject *_w1);
    virtual ~TChCrEffWall();
    virtual void render();
public:
    static void render();
    static void draw_default_sprite();
};

#endif
