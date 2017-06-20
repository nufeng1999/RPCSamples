

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __RpcInterface_h_h__
#define __RpcInterface_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __RpcServiceSample_INTERFACE_DEFINED__
#define __RpcServiceSample_INTERFACE_DEFINED__

/* interface RpcServiceSample */
/* [version][uuid] */ 

/* [fault_status][comm_status] */ error_status_t Ping( 
    /* [in] */ handle_t Binding);

/* [fault_status][comm_status] */ error_status_t CheckSecurity( 
    /* [in] */ handle_t Binding);

#define	BUFFER_SIZE	( 100 )

/* [fault_status][comm_status] */ error_status_t BufferIn1( 
    /* [in] */ handle_t Binding,
    /* [in][size_is][length_is] */ byte Buffer[  ],
    /* [in] */ unsigned long BufferLength,
    /* [in] */ unsigned long BufferSize);

/* [fault_status][comm_status] */ error_status_t BufferIn2( 
    /* [in] */ handle_t Binding,
    /* [in][length_is] */ byte Buffer[ 16384 ],
    /* [in] */ unsigned long BufferLength);

/* [fault_status][comm_status] */ error_status_t BufferIn3( 
    /* [in] */ handle_t Binding,
    /* [in][size_is] */ byte Buffer[  ],
    /* [in] */ unsigned long BufferLength);

/* [fault_status][comm_status] */ error_status_t BufferOut1( 
    /* [in] */ handle_t Binding,
    /* [length_is][out] */ byte Buffer[ 16384 ],
    /* [out] */ unsigned long *pBufferLength);

/* [fault_status][comm_status] */ error_status_t BufferOut2( 
    /* [in] */ handle_t Binding,
    /* [out][length_is][size_is] */ byte Buffer[  ],
    /* [in] */ unsigned long BufferSize,
    /* [out] */ unsigned long *pBufferLength);

typedef /* [public][public] */ struct __MIDL_RpcServiceSample_0001
    {
    unsigned long BufferLength;
    /* [size_is][unique] */ byte *Buffer;
    } 	BUFFER;

/* [fault_status][comm_status] */ error_status_t BufferOut3( 
    /* [in] */ handle_t Binding,
    /* [out] */ BUFFER *pBuffer);

/* [fault_status][comm_status] */ error_status_t BufferOut4( 
    /* [in] */ handle_t Binding,
    /* [size_is][out] */ byte Buffer[  ],
    /* [out][in] */ unsigned long *pBufferLength);

typedef /* [public][public][public] */ 
enum __MIDL_RpcServiceSample_0002
    {
        A	= 1,
        B	= ( A + 1 ) ,
        C	= ( B + 1 ) ,
        D	= ( C + 1 ) 
    } 	BAD_ENUM;

typedef /* [public][public][public][v1_enum] */ 
enum __MIDL_RpcServiceSample_0003
    {
        E	= 5,
        F	= ( E + 1 ) ,
        G	= ( F + 1 ) ,
        H	= ( G + 1 ) 
    } 	GOOD_ENUM;

struct BAD1
    {
    long l;
    short s;
    } ;
struct BAD2
    {
    BAD_ENUM e;
    long l;
    } ;
struct GOOD
    {
    GOOD_ENUM e;
    long l;
    long l2;
    } ;
/* [fault_status][comm_status] */ error_status_t StructsIn1( 
    /* [in] */ handle_t Binding,
    /* [in] */ struct BAD1 array[ 50 ]);

/* [fault_status][comm_status] */ error_status_t StructsIn2( 
    /* [in] */ handle_t Binding,
    /* [in] */ struct BAD2 array[ 50 ]);

/* [fault_status][comm_status] */ error_status_t StructsIn3( 
    /* [in] */ handle_t Binding,
    /* [in] */ struct GOOD array[ 50 ]);

#define	LIST_SIZE	( 50 )

typedef struct LIST
    {
    /* [unique] */ struct LIST *pNext;
    unsigned long data;
    } 	LIST;

typedef /* [unique] */ LIST *PLIST;

/* [fault_status][comm_status] */ error_status_t ListIn( 
    /* [in] */ handle_t Binding,
    /* [in] */ PLIST pList);

/* [fault_status][comm_status] */ error_status_t ListOut1( 
    /* [in] */ handle_t Binding,
    /* [out] */ LIST *pListHead);

/* [enable_allocate][fault_status][comm_status] */ error_status_t ListOut2( 
    /* [in] */ handle_t Binding,
    /* [out] */ LIST *pListHead);

#define	UNION_ARRAY_LEN	( 50 )

typedef struct BAD_UNION
    {
    unsigned long Tag;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ unsigned long ulData;
        /* [case()] */ MIDL_uhyper uhData;
        /* [default] */  /* Empty union arm */ 
        } 	u;
    } 	BAD_UNION;

typedef struct ONE
    {
    unsigned long DataLength;
    /* [size_is] */ unsigned long *Data;
    } 	ARM_ONE;

typedef struct TWO
    {
    unsigned long DataLength;
    /* [size_is] */ MIDL_uhyper *Data;
    } 	ARM_TWO;

typedef /* [public][public] */ struct __MIDL_RpcServiceSample_0005
    {
    unsigned long Tag;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()][unique] */ ARM_ONE *pOne;
        /* [case()][unique] */ ARM_TWO *pTwo;
        } 	u;
    } 	GOOD_UNION;

/* [fault_status][comm_status] */ error_status_t UnionCall1( 
    /* [in] */ handle_t Binding,
    /* [in] */ unsigned long Length,
    /* [size_is][in] */ BAD_UNION ArrayOfUnions[  ]);

/* [fault_status][comm_status] */ error_status_t UnionCall2( 
    /* [in] */ handle_t Binding,
    /* [in] */ GOOD_UNION *pUnionContainingArrays);



extern RPC_IF_HANDLE RpcServiceSample_v1_0_c_ifspec;
extern RPC_IF_HANDLE RpcServiceSample_v1_0_s_ifspec;
#endif /* __RpcServiceSample_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


