#ifndef xrCPU_PipeH
#define xrCPU_PipeH
#pragma once

// Forward references
struct	ENGINE_API	vertRender;
struct	ENGINE_API	vertBoned1W;
struct	ENGINE_API	vertBoned2W;
struct	ENGINE_API	vertBoned3W;
struct	ENGINE_API	vertBoned4W;
class	ENGINE_API	CBoneInstance;
struct	ENGINE_API	CKey;
struct	ENGINE_API	CKeyQR;
struct	ENGINE_API	CKeyQT;

#ifdef _EDITOR
#define MATRIX		Fmatrix
#else
template<class T>	struct _matrix;
#define MATRIX		_matrix<float>
#endif

// Skinning processor specific functions
// NOTE: Destination memory is uncacheble write-combining (AGP), so avoid non-linear writes
// D: AGP,			32b aligned
// S: SysMem		non-aligned
// Bones: SysMem	64b aligned
typedef void	__stdcall	xrSkin1W		(vertRender* D, vertBoned1W* S, u32 vCount, CBoneInstance* Bones);
typedef void	__stdcall	xrSkin2W		(vertRender* D, vertBoned2W* S, u32 vCount, CBoneInstance* Bones);
typedef void	__stdcall	xrSkin3W		(vertRender* D, vertBoned3W* S, u32 vCount, CBoneInstance* Bones);
typedef void	__stdcall	xrSkin4W		(vertRender* D, vertBoned4W* S, u32 vCount, CBoneInstance* Bones);

//typedef void	__stdcall	xrPLC_calc3		(int& c0, int& c1, int& c2, CRenderDevice& Device, Fvector* P, Fvector& N, light* L, float energy, Fvector& O);

#pragma pack(push,8)
struct xrDispatchTable
{
	xrSkin1W*			skin1W;
	xrSkin2W*			skin2W;
	xrSkin3W*			skin3W;
	xrSkin4W*			skin4W;
//	xrPLC_calc3*		PLC_calc3;
};
#pragma pack(pop)

// Binder
// NOTE: Engine calls function named "_xrBindPSGP"
typedef void	__cdecl	xrBinder	(xrDispatchTable* T, _processor_info* dwFeatures);

#undef MATRIX
#endif
