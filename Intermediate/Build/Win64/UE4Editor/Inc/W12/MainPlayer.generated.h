// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef W12_MainPlayer_generated_h
#error "MainPlayer.generated.h already included, missing '#pragma once' in MainPlayer.h"
#endif
#define W12_MainPlayer_generated_h

#define W12_Source_W12_Public_MainPlayer_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerStuct_Statics; \
	W12_API static class UScriptStruct* StaticStruct();


template<> W12_API UScriptStruct* StaticStruct<struct FPlayerStuct>();

#define W12_Source_W12_Public_MainPlayer_h_40_SPARSE_DATA
#define W12_Source_W12_Public_MainPlayer_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSavingStringTextToFile);


#define W12_Source_W12_Public_MainPlayer_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSavingStringTextToFile);


#define W12_Source_W12_Public_MainPlayer_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/W12"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer)


#define W12_Source_W12_Public_MainPlayer_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/W12"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer)


#define W12_Source_W12_Public_MainPlayer_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayer(AMainPlayer&&); \
	NO_API AMainPlayer(const AMainPlayer&); \
public:


#define W12_Source_W12_Public_MainPlayer_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayer(AMainPlayer&&); \
	NO_API AMainPlayer(const AMainPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayer)


#define W12_Source_W12_Public_MainPlayer_h_40_PRIVATE_PROPERTY_OFFSET
#define W12_Source_W12_Public_MainPlayer_h_37_PROLOG
#define W12_Source_W12_Public_MainPlayer_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	W12_Source_W12_Public_MainPlayer_h_40_PRIVATE_PROPERTY_OFFSET \
	W12_Source_W12_Public_MainPlayer_h_40_SPARSE_DATA \
	W12_Source_W12_Public_MainPlayer_h_40_RPC_WRAPPERS \
	W12_Source_W12_Public_MainPlayer_h_40_INCLASS \
	W12_Source_W12_Public_MainPlayer_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define W12_Source_W12_Public_MainPlayer_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	W12_Source_W12_Public_MainPlayer_h_40_PRIVATE_PROPERTY_OFFSET \
	W12_Source_W12_Public_MainPlayer_h_40_SPARSE_DATA \
	W12_Source_W12_Public_MainPlayer_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	W12_Source_W12_Public_MainPlayer_h_40_INCLASS_NO_PURE_DECLS \
	W12_Source_W12_Public_MainPlayer_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> W12_API UClass* StaticClass<class AMainPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID W12_Source_W12_Public_MainPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
