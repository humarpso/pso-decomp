

#define Unit01 lbl_805D4528

#include <dolphin.h>
#include <dolphin/mtx.h>
#include <macros.h>

#define qr0 0


extern f32 sinf(f32);
extern f32 cosf(f32);
extern f32 tanf(f32);


static float Unit01[2] = { 0.0f, 1.0f };


void C_MTXIdentity(GC_Mtx mtx)
{
	mtx[0][0] = 1.0f;
	mtx[0][1] = 0.0f;
	mtx[0][2] = 0.0f;
	mtx[1][0] = 0.0f;
	mtx[1][1] = 1.0f;
	mtx[1][2] = 0.0f;
	mtx[2][0] = 0.0f;
	mtx[2][1] = 0.0f;
	mtx[2][2] = 1.0f;
}

void PSMTXIdentity(register GC_Mtx m)
{
	register f32 c_zero = 0.0f;
	register f32 c_one  = 1.0f;
	register f32 c_01;
	register f32 c_10;


	asm {
}

}

asm void PSMTXCopy(const register GC_Mtx src, register GC_Mtx dst) {
#include "orig_asm/mtx/mtx/PSMTXCopy.inc"
}

asm void PSMTXConcat(const register GC_Mtx mA, const register GC_Mtx mB, register GC_Mtx mAB) {
#include "orig_asm/mtx/mtx/PSMTXConcat.inc"
}

asm u32 PSMTXInverse(const register GC_Mtx src, register GC_Mtx inv) {
#include "orig_asm/mtx/mtx/PSMTXInverse.inc"
}

void PSMTXRotRad(GC_Mtx m, char axis, f32 rad)
{
	f32 s = sinf(rad);
	f32 c = cosf(rad);

	PSMTXRotTrig(m, axis, s, c);
}

void PSMTXRotTrig(register GC_Mtx m, register char axis, register f32 sinA,
                  register f32 cosA)
{
	register f32 fc0;
	register f32 fc1;
	register f32 nsinA;
	register f32 fw0, fw1, fw2, fw3;

	fc0 = 0.0f;
	fc1 = 1.0f;


  asm {
}

}

static inline void __PSMTXRotAxisRadInternal(register GC_Mtx m,
                                             const register Vec* axis,
                                             register f32 sT, register f32 cT)
{
}

void PSMTXRotAxisRad(register GC_Mtx m, const Vec* axis, register f32 rad)
{
	register f32 tmp0, tmp1, tmp2, tmp3, tmp4;
	register f32 tmp5, tmp6, tmp7, tmp8, tmp9;

	register f32 sT;
	register f32 cT;
	register f32 oneMinusCosT;
	register f32 zero;
	Vec axisNormalized;
	register Vec* axisNormalizedPtr;

	zero              = 0.0f;
	axisNormalizedPtr = &axisNormalized;
	sT                = sinf(rad);
	cT                = cosf(rad);
	oneMinusCosT      = 1.0f - cT;

	PSVECNormalize(axis, axisNormalizedPtr);




  asm {
}

}

void PSMTXTrans(register GC_Mtx m, register f32 xT, register f32 yT,
                register f32 zT)
{
	register f32 c0 = 0.0F;
	register f32 c1 = 1.0F;

	asm {
}

}

asm void PSMTXTransApply(const register GC_Mtx src, register GC_Mtx dst, register f32 xT,
                         register f32 yT, register f32 zT) {
#include "orig_asm/mtx/mtx/PSMTXTransApply.inc"
}

void PSMTXScale(register GC_Mtx m, register f32 xS, register f32 yS,
                register f32 zS)
{
	register f32 c0 = 0.0F;

	asm {
}

}

asm void PSMTXScaleApply(const register GC_Mtx src, register GC_Mtx dst, register f32 xS,
                         register f32 yS, register f32 zS) {
#include "orig_asm/mtx/mtx/PSMTXScaleApply.inc"
}

void PSMTXQuat(register GC_Mtx m, const register PSQuaternion* q)
{
	register f32 c_zero, c_one, c_two, scale;
	register f32 tmp0, tmp1, tmp2, tmp3, tmp4;
	register f32 tmp5, tmp6, tmp7, tmp8, tmp9;

	c_one = 1.0F;

	asm {
}

}

void C_MTXLookAt(GC_Mtx m, const Vec* camPos, const Vec* camUp, const Vec* target) {
    Vec vLook;
    Vec vRight;
    Vec vUp;

    ASSERTMSGLINE(2105, m, "MTXLookAt():  NULL MtxPtr 'm' ");
    ASSERTMSGLINE(2106, camPos, "MTXLookAt():  NULL VecPtr 'camPos' ");
    ASSERTMSGLINE(2107, camUp, "MTXLookAt():  NULL VecPtr 'camUp' ");
    ASSERTMSGLINE(2108, target, "MTXLookAt():  NULL Point3dPtr 'target' ");

    vLook.x = camPos->x - target->x;
    vLook.y = camPos->y - target->y;
    vLook.z = camPos->z - target->z;
    VECNormalize(&vLook, &vLook);
    VECCrossProduct(camUp, &vLook, &vRight);
    VECNormalize(&vRight, &vRight);
    VECCrossProduct(&vLook, &vRight, &vUp);
    m[0][0] = vRight.x;
    m[0][1] = vRight.y;
    m[0][2] = vRight.z;
    m[0][3] = -((camPos->z * vRight.z) + ((camPos->x * vRight.x) + (camPos->y * vRight.y)));
    m[1][0] = vUp.x;
    m[1][1] = vUp.y;
    m[1][2] = vUp.z;
    m[1][3] = -((camPos->z * vUp.z) + ((camPos->x * vUp.x) + (camPos->y * vUp.y)));
    m[2][0] = vLook.x;
    m[2][1] = vLook.y;
    m[2][2] = vLook.z;
    m[2][3] = -((camPos->z * vLook.z) + ((camPos->x * vLook.x) + (camPos->y * vLook.y)));
}

void C_MTXLightFrustum(GC_Mtx m, f32 t, f32 b, f32 l, f32 r, f32 n, f32 scaleS,
                       f32 scaleT, f32 transS, f32 transT)
{
	f32 _tmp;

	_tmp    = 1 / (r - l);
	m[0][0] = (scaleS * (2 * n * _tmp));
	m[0][1] = 0;
	m[0][2] = (scaleS * (_tmp * (r + l))) - transS;
	m[0][3] = 0;
	_tmp    = 1 / (t - b);
	m[1][0] = 0;
	m[1][1] = (scaleT * (2 * n * _tmp));
	m[1][2] = (scaleT * (_tmp * (t + b))) - transT;
	m[1][3] = 0;
	m[2][0] = 0;
	m[2][1] = 0;
	m[2][2] = -1;
	m[2][3] = 0;
}

void C_MTXLightPerspective(GC_Mtx m, f32 fovY, f32 aspect, f32 scaleS, f32 scaleT,
                           f32 transS, f32 transT)
{
	f32 angle;
	f32 cot;

	angle   = (0.5f * fovY);
	angle   = angle * 0.017453293f;
	cot     = 1 / tanf(angle);
	m[0][0] = (scaleS * (cot / aspect));
	m[0][1] = 0;
	m[0][2] = -transS;
	m[0][3] = 0;
	m[1][0] = 0;
	m[1][1] = (cot * scaleT);
	m[1][2] = -transT;
	m[1][3] = 0;
	m[2][0] = 0;
	m[2][1] = 0;
	m[2][2] = -1;
	m[2][3] = 0;
}

void C_MTXLightOrtho(GC_Mtx m, f32 t, f32 b, f32 l, f32 r, f32 scaleS, f32 scaleT,
                     f32 transS, f32 transT)
{
	f32 _tmp;

	_tmp    = 1 / (r - l);
	m[0][0] = (2 * _tmp * scaleS);
	m[0][1] = 0;
	m[0][2] = 0;
	m[0][3] = (transS + (scaleS * (_tmp * -(r + l))));
	_tmp    = 1 / (t - b);
	m[1][0] = 0;
	m[1][1] = (2 * _tmp * scaleT);
	m[1][2] = 0;
	m[1][3] = (transT + (scaleT * (_tmp * -(t + b))));
	m[2][0] = 0;
	m[2][1] = 0;
	m[2][2] = 0;
	m[2][3] = 1;
}
