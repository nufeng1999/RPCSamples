

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for H:\MyGitHub\RPCSamples\rpcsvc\Win32\Debug\..\..\RpcInterface\RpcInterface.idl, H:\MyGitHub\RPCSamples\rpcsvc\Win32\Debug\..\..\RpcInterface\RpcInterface.acf:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "RpcInterface_h.h"

#define TYPE_FORMAT_STRING_SIZE   437                               
#define PROC_FORMAT_STRING_SIZE   723                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _RpcInterface_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } RpcInterface_MIDL_TYPE_FORMAT_STRING;

typedef struct _RpcInterface_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } RpcInterface_MIDL_PROC_FORMAT_STRING;

typedef struct _RpcInterface_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } RpcInterface_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const RpcInterface_MIDL_TYPE_FORMAT_STRING RpcInterface__MIDL_TypeFormatString;
extern const RpcInterface_MIDL_PROC_FORMAT_STRING RpcInterface__MIDL_ProcFormatString;
extern const RpcInterface_MIDL_EXPR_FORMAT_STRING RpcInterface__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: RpcServiceSample, ver. 1.0,
   GUID={0xd69a7cc4,0x9aa9,0x4a01,{0x99,0x0d,0x80,0x0e,0x8a,0x5e,0x97,0xb4}} */



static const RPC_CLIENT_INTERFACE RpcServiceSample___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xd69a7cc4,0x9aa9,0x4a01,{0x99,0x0d,0x80,0x0e,0x8a,0x5e,0x97,0xb4}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE RpcServiceSample_v1_0_c_ifspec = (RPC_IF_HANDLE)& RpcServiceSample___RpcClientInterface;

extern const MIDL_STUB_DESC RpcServiceSample_StubDesc;

static RPC_BINDING_HANDLE RpcServiceSample__MIDL_AutoBindHandle;


/* [fault_status][comm_status] */ error_status_t Ping( 
    /* [in] */ handle_t Binding)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t CheckSecurity( 
    /* [in] */ handle_t Binding)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[34],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t BufferIn1( 
    /* [in] */ handle_t Binding,
    /* [in][size_is][length_is] */ byte Buffer[  ],
    /* [in] */ unsigned long BufferLength,
    /* [in] */ unsigned long BufferSize)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[68],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t BufferIn2( 
    /* [in] */ handle_t Binding,
    /* [in][length_is] */ byte Buffer[ 16384 ],
    /* [in] */ unsigned long BufferLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[120],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t BufferIn3( 
    /* [in] */ handle_t Binding,
    /* [in][size_is] */ byte Buffer[  ],
    /* [in] */ unsigned long BufferLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[166],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t BufferOut1( 
    /* [in] */ handle_t Binding,
    /* [length_is][out] */ byte Buffer[ 16384 ],
    /* [out] */ unsigned long *pBufferLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[212],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t BufferOut2( 
    /* [in] */ handle_t Binding,
    /* [out][length_is][size_is] */ byte Buffer[  ],
    /* [in] */ unsigned long BufferSize,
    /* [out] */ unsigned long *pBufferLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[258],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t BufferOut3( 
    /* [in] */ handle_t Binding,
    /* [out] */ BUFFER *pBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[310],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t BufferOut4( 
    /* [in] */ handle_t Binding,
    /* [size_is][out] */ byte Buffer[  ],
    /* [out][in] */ unsigned long *pBufferLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[350],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t StructsIn1( 
    /* [in] */ handle_t Binding,
    /* [in] */ struct BAD1 array[ 50 ])
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[396],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t StructsIn2( 
    /* [in] */ handle_t Binding,
    /* [in] */ struct BAD2 array[ 50 ])
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[436],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t StructsIn3( 
    /* [in] */ handle_t Binding,
    /* [in] */ struct GOOD array[ 50 ])
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[476],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t ListIn( 
    /* [in] */ handle_t Binding,
    /* [in] */ PLIST pList)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[516],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t ListOut1( 
    /* [in] */ handle_t Binding,
    /* [out] */ LIST *pListHead)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[556],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t ListOut2( 
    /* [in] */ handle_t Binding,
    /* [out] */ LIST *pListHead)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[596],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t UnionCall1( 
    /* [in] */ handle_t Binding,
    /* [in] */ unsigned long Length,
    /* [size_is][in] */ BAD_UNION ArrayOfUnions[  ])
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[636],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [fault_status][comm_status] */ error_status_t UnionCall2( 
    /* [in] */ handle_t Binding,
    /* [in] */ GOOD_UNION *pUnionContainingArrays)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RpcServiceSample_StubDesc,
                  (PFORMAT_STRING) &RpcInterface__MIDL_ProcFormatString.Format[682],
                  ( unsigned char * )&Binding);
    return ( error_status_t  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const RpcInterface_MIDL_PROC_FORMAT_STRING RpcInterface__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Ping */

			0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 28 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure CheckSecurity */

/* 34 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 36 */	NdrFcLong( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x1 ),	/* 1 */
/* 42 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 44 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 46 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 54 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 62 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 64 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 66 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure BufferIn1 */

/* 68 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 70 */	NdrFcLong( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x2 ),	/* 2 */
/* 76 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 78 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 82 */	NdrFcShort( 0x10 ),	/* 16 */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 88 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x1 ),	/* 1 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Buffer */

/* 96 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BufferLength */

/* 102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferSize */

/* 108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 118 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure BufferIn2 */

/* 120 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x3 ),	/* 3 */
/* 128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 130 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 138 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 140 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Buffer */

/* 148 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 152 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter BufferLength */

/* 154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 164 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure BufferIn3 */

/* 166 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x4 ),	/* 4 */
/* 174 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 176 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 184 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 186 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Buffer */

/* 194 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 196 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 198 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter BufferLength */

/* 200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 202 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 210 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure BufferOut1 */

/* 212 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x5 ),	/* 5 */
/* 220 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 222 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x24 ),	/* 36 */
/* 230 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 232 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Buffer */

/* 240 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter pBufferLength */

/* 246 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 256 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure BufferOut2 */

/* 258 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x6 ),	/* 6 */
/* 266 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 268 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 274 */	NdrFcShort( 0x24 ),	/* 36 */
/* 276 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 278 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Buffer */

/* 286 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 290 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter BufferSize */

/* 292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBufferLength */

/* 298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 300 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 306 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 308 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure BufferOut3 */

/* 310 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x7 ),	/* 7 */
/* 318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 320 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 330 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBuffer */

/* 338 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 340 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 342 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 346 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 348 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure BufferOut4 */

/* 350 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 358 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 360 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 364 */	NdrFcShort( 0x1c ),	/* 28 */
/* 366 */	NdrFcShort( 0x24 ),	/* 36 */
/* 368 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 370 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Buffer */

/* 378 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter pBufferLength */

/* 384 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure StructsIn1 */

/* 396 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x9 ),	/* 9 */
/* 404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 406 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 408 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 414 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 416 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter array */

/* 424 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 428 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Return value */

/* 430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 434 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure StructsIn2 */

/* 436 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0xa ),	/* 10 */
/* 444 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 446 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 454 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter array */

/* 464 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 468 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 474 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure StructsIn3 */

/* 476 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0xb ),	/* 11 */
/* 484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 486 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 490 */	NdrFcShort( 0x578 ),	/* 1400 */
/* 492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 494 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 496 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter array */

/* 504 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 508 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 514 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ListIn */

/* 516 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0xc ),	/* 12 */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 528 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 534 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 536 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pList */

/* 544 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 548 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 554 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ListOut1 */

/* 556 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0xd ),	/* 13 */
/* 564 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 566 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 568 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 574 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListHead */

/* 584 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 588 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Return value */

/* 590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 594 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ListOut2 */

/* 596 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0xe ),	/* 14 */
/* 604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 606 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 608 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 614 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 616 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListHead */

/* 624 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 628 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Return value */

/* 630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 634 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure UnionCall1 */

/* 636 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0xf ),	/* 15 */
/* 644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 646 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 648 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 654 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 656 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Length */

/* 664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ArrayOfUnions */

/* 670 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 674 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Return value */

/* 676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 678 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 680 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure UnionCall2 */

/* 682 */	0x0,		/* 0 */
			0x68,		/* Old Flags:  comm or fault/decode */
/* 684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x10 ),	/* 16 */
/* 690 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 692 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 700 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 702 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pUnionContainingArrays */

/* 710 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 714 */	NdrFcShort( 0x1a6 ),	/* Type Offset=422 */

	/* Return value */

/* 716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 718 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 720 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

			0x0
        }
    };

static const RpcInterface_MIDL_TYPE_FORMAT_STRING RpcInterface__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/*  4 */	NdrFcShort( 0x1 ),	/* 1 */
/*  6 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 12 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 14 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 18 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 20 */	
			0x1f,		/* FC_SMVARRAY */
			0x0,		/* 0 */
/* 22 */	NdrFcShort( 0x4000 ),	/* 16384 */
/* 24 */	NdrFcShort( 0x4000 ),	/* 16384 */
/* 26 */	NdrFcShort( 0x1 ),	/* 1 */
/* 28 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 30 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 32 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 34 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 36 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 38 */	NdrFcShort( 0x1 ),	/* 1 */
/* 40 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 42 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 44 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 46 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 48 */	
			0x1f,		/* FC_SMVARRAY */
			0x0,		/* 0 */
/* 50 */	NdrFcShort( 0x4000 ),	/* 16384 */
/* 52 */	NdrFcShort( 0x4000 ),	/* 16384 */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 58 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 60 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 62 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 64 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 66 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 68 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0x1 ),	/* 1 */
/* 72 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 78 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 84 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 86 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 88 */	NdrFcShort( 0xe ),	/* Offset= 14 (102) */
/* 90 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 92 */	NdrFcShort( 0x1 ),	/* 1 */
/* 94 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 100 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 102 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 106 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 108 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 112 */	NdrFcShort( 0x4 ),	/* 4 */
/* 114 */	0x12, 0x0,	/* FC_UP */
/* 116 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (90) */
/* 118 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 120 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 122 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 126 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 130 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 132 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 134 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 136 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 138 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x0 ),	/* Offset= 0 (144) */
/* 146 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 148 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 150 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 152 */	NdrFcShort( 0x32 ),	/* 50 */
/* 154 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 158 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 160 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 164 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 166 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 168 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (138) */
/* 170 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 172 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* Offset= 0 (178) */
/* 180 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 182 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 184 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 186 */	NdrFcShort( 0x32 ),	/* 50 */
/* 188 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 192 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 194 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 198 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 200 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 202 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (172) */
/* 204 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 206 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 208 */	NdrFcShort( 0xc ),	/* 12 */
/* 210 */	0xe,		/* FC_ENUM32 */
			0x8,		/* FC_LONG */
/* 212 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 214 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 216 */	NdrFcShort( 0x258 ),	/* 600 */
/* 218 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 220 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (206) */
/* 222 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 224 */	
			0x12, 0x0,	/* FC_UP */
/* 226 */	NdrFcShort( 0x2 ),	/* Offset= 2 (228) */
/* 228 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 232 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 234 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	0x12, 0x0,	/* FC_UP */
/* 242 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (228) */
/* 244 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 246 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 248 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 250 */	NdrFcShort( 0xffea ),	/* Offset= -22 (228) */
/* 252 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 254 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 256 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 258 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 260 */	NdrFcShort( 0x2 ),	/* Offset= 2 (262) */
/* 262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 264 */	NdrFcShort( 0x2 ),	/* 2 */
/* 266 */	NdrFcLong( 0x1 ),	/* 1 */
/* 270 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 272 */	NdrFcLong( 0x2 ),	/* 2 */
/* 276 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 278 */	NdrFcShort( 0x0 ),	/* Offset= 0 (278) */
/* 280 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 282 */	NdrFcShort( 0x10 ),	/* 16 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* Offset= 0 (286) */
/* 288 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 290 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 292 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (252) */
/* 294 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 296 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 304 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 306 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 310 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 312 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 314 */	NdrFcShort( 0xffde ),	/* Offset= -34 (280) */
/* 316 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 318 */	
			0x11, 0x0,	/* FC_RP */
/* 320 */	NdrFcShort( 0x66 ),	/* Offset= 102 (422) */
/* 322 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 324 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 326 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 328 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 330 */	NdrFcShort( 0x2 ),	/* Offset= 2 (332) */
/* 332 */	NdrFcShort( 0x4 ),	/* 4 */
/* 334 */	NdrFcShort( 0x2 ),	/* 2 */
/* 336 */	NdrFcLong( 0x1 ),	/* 1 */
/* 340 */	NdrFcShort( 0xa ),	/* Offset= 10 (350) */
/* 342 */	NdrFcLong( 0x2 ),	/* 2 */
/* 346 */	NdrFcShort( 0x28 ),	/* Offset= 40 (386) */
/* 348 */	NdrFcShort( 0xffff ),	/* Offset= -1 (347) */
/* 350 */	
			0x12, 0x0,	/* FC_UP */
/* 352 */	NdrFcShort( 0xe ),	/* Offset= 14 (366) */
/* 354 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 356 */	NdrFcShort( 0x4 ),	/* 4 */
/* 358 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 364 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 366 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 370 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 372 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 374 */	NdrFcShort( 0x4 ),	/* 4 */
/* 376 */	NdrFcShort( 0x4 ),	/* 4 */
/* 378 */	0x12, 0x0,	/* FC_UP */
/* 380 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (354) */
/* 382 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 384 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 386 */	
			0x12, 0x0,	/* FC_UP */
/* 388 */	NdrFcShort( 0xe ),	/* Offset= 14 (402) */
/* 390 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 394 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 400 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 402 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 406 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 408 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 410 */	NdrFcShort( 0x4 ),	/* 4 */
/* 412 */	NdrFcShort( 0x4 ),	/* 4 */
/* 414 */	0x12, 0x0,	/* FC_UP */
/* 416 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (390) */
/* 418 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 420 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 422 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* Offset= 0 (428) */
/* 430 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 432 */	0x0,		/* 0 */
			NdrFcShort( 0xff91 ),	/* Offset= -111 (322) */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short RpcServiceSample_FormatStringOffsetTable[] =
    {
    0,
    34,
    68,
    120,
    166,
    212,
    258,
    310,
    350,
    396,
    436,
    476,
    516,
    556,
    596,
    636,
    682
    };


static const COMM_FAULT_OFFSETS RpcServiceSample_CommFaultOffsets[] = 
{
	{ -1, -1 },	/* x86 Offsets for Ping */
	{ -1, -1 },	/* x86 Offsets for CheckSecurity */
	{ -1, -1 },	/* x86 Offsets for BufferIn1 */
	{ -1, -1 },	/* x86 Offsets for BufferIn2 */
	{ -1, -1 },	/* x86 Offsets for BufferIn3 */
	{ -1, -1 },	/* x86 Offsets for BufferOut1 */
	{ -1, -1 },	/* x86 Offsets for BufferOut2 */
	{ -1, -1 },	/* x86 Offsets for BufferOut3 */
	{ -1, -1 },	/* x86 Offsets for BufferOut4 */
	{ -1, -1 },	/* x86 Offsets for StructsIn1 */
	{ -1, -1 },	/* x86 Offsets for StructsIn2 */
	{ -1, -1 },	/* x86 Offsets for StructsIn3 */
	{ -1, -1 },	/* x86 Offsets for ListIn */
	{ -1, -1 },	/* x86 Offsets for ListOut1 */
	{ -1, -1 },	/* x86 Offsets for ListOut2 */
	{ -1, -1 },	/* x86 Offsets for UnionCall1 */
	{ -1, -1 } 	/* x86 Offsets for UnionCall2 */
};


static const MIDL_STUB_DESC RpcServiceSample_StubDesc = 
    {
    (void *)& RpcServiceSample___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &RpcServiceSample__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    RpcInterface__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    RpcServiceSample_CommFaultOffsets,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

