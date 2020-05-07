// ALL SKIP STATEMENTS THAT AFFECT THIS SHADER!!!
// defined $LIGHTING_PREVIEW && defined $FASTPATH && $LIGHTING_PREVIEW && $FASTPATH

#ifndef SDK_VERTEXLIT_AND_UNLIT_GENERIC_BUMP_VS30_H
#define SDK_VERTEXLIT_AND_UNLIT_GENERIC_BUMP_VS30_H

#include "shaderapi/ishaderapi.h"
#include "shaderapi/ishadershadow.h"
#include "materialsystem/imaterialvar.h"

class sdk_vertexlit_and_unlit_generic_bump_vs30_Static_Index
{
	int m_nHALFLAMBERT : 3;
	int m_nUSE_WITH_2B : 3;
	int m_nDECAL : 3;
#ifdef _DEBUG
	bool m_bHALFLAMBERT : 1;
	bool m_bUSE_WITH_2B : 1;
	bool m_bDECAL : 1;
#endif	// _DEBUG
public:
	void SetHALFLAMBERT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nHALFLAMBERT = i;
#ifdef _DEBUG
		m_bHALFLAMBERT = true;
#endif	// _DEBUG
	}

	void SetUSE_WITH_2B( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nUSE_WITH_2B = i;
#ifdef _DEBUG
		m_bUSE_WITH_2B = true;
#endif	// _DEBUG
	}

	void SetDECAL( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nDECAL = i;
#ifdef _DEBUG
		m_bDECAL = true;
#endif	// _DEBUG
	}

	sdk_vertexlit_and_unlit_generic_bump_vs30_Static_Index( IShaderShadow* pShaderShadow, IMaterialVar** params )
	{
		m_nHALFLAMBERT = 0;
		m_nUSE_WITH_2B = 0;
		m_nDECAL = 0;
#ifdef _DEBUG
		m_bHALFLAMBERT = false;
		m_bUSE_WITH_2B = false;
		m_bDECAL = false;
#endif	// _DEBUG
	}

	int GetIndex()
	{
		Assert( m_bHALFLAMBERT && m_bUSE_WITH_2B && m_bDECAL );
		return ( 16 * m_nHALFLAMBERT ) + ( 32 * m_nUSE_WITH_2B ) + ( 64 * m_nDECAL ) + 0;
	}
};

#define shaderStaticTest_sdk_vertexlit_and_unlit_generic_bump_vs30 vsh_forgot_to_set_static_HALFLAMBERT + vsh_forgot_to_set_static_USE_WITH_2B + vsh_forgot_to_set_static_DECAL


class sdk_vertexlit_and_unlit_generic_bump_vs30_Dynamic_Index
{
	int m_nCOMPRESSED_VERTS : 3;
	int m_nDOWATERFOG : 3;
	int m_nSKINNING : 3;
	int m_nMORPHING : 3;
#ifdef _DEBUG
	bool m_bCOMPRESSED_VERTS : 1;
	bool m_bDOWATERFOG : 1;
	bool m_bSKINNING : 1;
	bool m_bMORPHING : 1;
#endif	// _DEBUG
public:
	void SetCOMPRESSED_VERTS( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nCOMPRESSED_VERTS = i;
#ifdef _DEBUG
		m_bCOMPRESSED_VERTS = true;
#endif	// _DEBUG
	}

	void SetDOWATERFOG( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nDOWATERFOG = i;
#ifdef _DEBUG
		m_bDOWATERFOG = true;
#endif	// _DEBUG
	}

	void SetSKINNING( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSKINNING = i;
#ifdef _DEBUG
		m_bSKINNING = true;
#endif	// _DEBUG
	}

	void SetMORPHING( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nMORPHING = i;
#ifdef _DEBUG
		m_bMORPHING = true;
#endif	// _DEBUG
	}

	sdk_vertexlit_and_unlit_generic_bump_vs30_Dynamic_Index( IShaderDynamicAPI* pShaderAPI )
	{
		m_nCOMPRESSED_VERTS = 0;
		m_nDOWATERFOG = 0;
		m_nSKINNING = 0;
		m_nMORPHING = 0;
#ifdef _DEBUG
		m_bCOMPRESSED_VERTS = false;
		m_bDOWATERFOG = false;
		m_bSKINNING = false;
		m_bMORPHING = false;
#endif	// _DEBUG
	}

	int GetIndex()
	{
		Assert( m_bCOMPRESSED_VERTS && m_bDOWATERFOG && m_bSKINNING && m_bMORPHING );
		return ( 1 * m_nCOMPRESSED_VERTS ) + ( 2 * m_nDOWATERFOG ) + ( 4 * m_nSKINNING ) + ( 8 * m_nMORPHING ) + 0;
	}
};

#define shaderDynamicTest_sdk_vertexlit_and_unlit_generic_bump_vs30 vsh_forgot_to_set_dynamic_COMPRESSED_VERTS + vsh_forgot_to_set_dynamic_DOWATERFOG + vsh_forgot_to_set_dynamic_SKINNING + vsh_forgot_to_set_dynamic_MORPHING


#endif	// SDK_VERTEXLIT_AND_UNLIT_GENERIC_BUMP_VS30_H