#include "S2DEX.h"
#include "S2DEX2.h"
#include "F3D.h"
#include "F3DEX.h"
#include "F3DEX2.h"
#include "GBI.h"
#include "gSP.h"
#include "gDP.h"
#include "RSP.h"
#include "Types.h"

#define	S2DEX2_OBJ_RECTANGLE_R	0xDA
#define	S2DEX2_OBJ_MOVEMEM		0xDC
#define	S2DEX2_RDPHALF_0		0xE4
#define	S2DEX2_OBJ_RECTANGLE	0x01
#define	S2DEX2_OBJ_SPRITE		0x02
#define	S2DEX2_SELECT_DL		0x04
#define	S2DEX2_OBJ_LOADTXTR		0x05
#define	S2DEX2_OBJ_LDTX_SPRITE	0x06
#define	S2DEX2_OBJ_LDTX_RECT	0x07
#define	S2DEX2_OBJ_LDTX_RECT_R	0x08
#define	S2DEX2_BG_1CYC			0x09
#define	S2DEX2_BG_COPY			0x0A
#define	S2DEX2_OBJ_RENDERMODE	0x0B

void S2DEX2_MoveWord( u32 w0, u32 w1 )
{
	switch (_SHIFTR( w0, 16, 8 ))
	{
	case G_MW_GENSTAT:
		gSPSetStatus(_SHIFTR(w0, 0, 16), w1);
		break;
	default:
		F3DEX2_MoveWord(w0, w1);
		break;
	}
}

void S2DEX2_Init()
{
	gSPSetupFunctions();
	// Set GeometryMode flags
	GBI_InitFlags( F3DEX2 );
	resetObjMtx();

	GBI.PCStackSize = 18;

	//          GBI Command             Command Value			Command Function
	GBI_SetGBI( G_SPNOOP,				F3DEX2_SPNOOP,			F3D_SPNoOp );
	GBI_SetGBI( G_BG_1CYC,				S2DEX2_BG_1CYC,			S2DEX_BG_1Cyc );
	GBI_SetGBI( G_BG_COPY,				S2DEX2_BG_COPY,			S2DEX_BG_Copy );
	GBI_SetGBI( G_OBJ_RECTANGLE,		S2DEX2_OBJ_RECTANGLE,	S2DEX_Obj_Rectangle );
	GBI_SetGBI( G_OBJ_SPRITE,			S2DEX2_OBJ_SPRITE,		S2DEX_Obj_Sprite );
	GBI_SetGBI( G_OBJ_MOVEMEM,			S2DEX2_OBJ_MOVEMEM,		S2DEX_Obj_MoveMem );
	GBI_SetGBI( G_DL,					F3DEX2_DL,				F3D_DList );
	GBI_SetGBI( G_SELECT_DL,			S2DEX2_SELECT_DL,		S2DEX_Select_DL );
	GBI_SetGBI( G_OBJ_RENDERMODE,		S2DEX2_OBJ_RENDERMODE,	S2DEX_Obj_RenderMode );
	GBI_SetGBI( G_OBJ_RECTANGLE_R,		S2DEX2_OBJ_RECTANGLE_R,	S2DEX_Obj_Rectangle_R );
	GBI_SetGBI( G_OBJ_LOADTXTR,			S2DEX2_OBJ_LOADTXTR,	S2DEX_Obj_LoadTxtr );
	GBI_SetGBI( G_OBJ_LDTX_SPRITE,		S2DEX2_OBJ_LDTX_SPRITE,	S2DEX_Obj_LdTx_Sprite );
	GBI_SetGBI( G_OBJ_LDTX_RECT,		S2DEX2_OBJ_LDTX_RECT,	S2DEX_Obj_LdTx_Rect );
	GBI_SetGBI( G_OBJ_LDTX_RECT_R,		S2DEX2_OBJ_LDTX_RECT_R,	S2DEX_Obj_LdTx_Rect_R );
	GBI_SetGBI( G_MOVEWORD,				F3DEX2_MOVEWORD,		S2DEX2_MoveWord );
	GBI_SetGBI( G_SETOTHERMODE_H,		F3DEX2_SETOTHERMODE_H,	F3DEX2_SetOtherMode_H );
	GBI_SetGBI( G_SETOTHERMODE_L,		F3DEX2_SETOTHERMODE_L,	F3DEX2_SetOtherMode_L );
	GBI_SetGBI( G_ENDDL,				F3DEX2_ENDDL,			F3D_EndDL );
	GBI_SetGBI( G_RDPHALF_0,			S2DEX2_RDPHALF_0,		S2DEX_RDPHalf_0 );
	GBI_SetGBI( G_RDPHALF_1,			F3DEX2_RDPHALF_1,		F3D_RDPHalf_1 );
	GBI_SetGBI( G_RDPHALF_2,			F3DEX2_RDPHALF_2,		F3D_RDPHalf_2 );
	GBI_SetGBI(	G_LOAD_UCODE,			F3DEX2_LOAD_UCODE,		F3DEX_Load_uCode );
}

