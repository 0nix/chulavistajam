// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOXES_boxesGameModeBase_generated_h
#error "boxesGameModeBase.generated.h already included, missing '#pragma once' in boxesGameModeBase.h"
#endif
#define BOXES_boxesGameModeBase_generated_h

#define boxes_Source_boxes_boxesGameModeBase_h_15_RPC_WRAPPERS
#define boxes_Source_boxes_boxesGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define boxes_Source_boxes_boxesGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAboxesGameModeBase(); \
	friend struct Z_Construct_UClass_AboxesGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AboxesGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/boxes"), NO_API) \
	DECLARE_SERIALIZER(AboxesGameModeBase)


#define boxes_Source_boxes_boxesGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAboxesGameModeBase(); \
	friend struct Z_Construct_UClass_AboxesGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AboxesGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/boxes"), NO_API) \
	DECLARE_SERIALIZER(AboxesGameModeBase)


#define boxes_Source_boxes_boxesGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AboxesGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AboxesGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AboxesGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AboxesGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AboxesGameModeBase(AboxesGameModeBase&&); \
	NO_API AboxesGameModeBase(const AboxesGameModeBase&); \
public:


#define boxes_Source_boxes_boxesGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AboxesGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AboxesGameModeBase(AboxesGameModeBase&&); \
	NO_API AboxesGameModeBase(const AboxesGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AboxesGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AboxesGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AboxesGameModeBase)


#define boxes_Source_boxes_boxesGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define boxes_Source_boxes_boxesGameModeBase_h_12_PROLOG
#define boxes_Source_boxes_boxesGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	boxes_Source_boxes_boxesGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	boxes_Source_boxes_boxesGameModeBase_h_15_RPC_WRAPPERS \
	boxes_Source_boxes_boxesGameModeBase_h_15_INCLASS \
	boxes_Source_boxes_boxesGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define boxes_Source_boxes_boxesGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	boxes_Source_boxes_boxesGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	boxes_Source_boxes_boxesGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	boxes_Source_boxes_boxesGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	boxes_Source_boxes_boxesGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOXES_API UClass* StaticClass<class AboxesGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID boxes_Source_boxes_boxesGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
