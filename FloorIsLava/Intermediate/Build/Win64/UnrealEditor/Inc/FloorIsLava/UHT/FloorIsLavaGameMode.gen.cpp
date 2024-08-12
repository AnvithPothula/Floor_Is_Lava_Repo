// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FloorIsLava/FloorIsLavaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorIsLavaGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FLOORISLAVA_API UClass* Z_Construct_UClass_AFloorIsLavaGameMode();
FLOORISLAVA_API UClass* Z_Construct_UClass_AFloorIsLavaGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FloorIsLava();
// End Cross Module References

// Begin Class AFloorIsLavaGameMode
void AFloorIsLavaGameMode::StaticRegisterNativesAFloorIsLavaGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorIsLavaGameMode);
UClass* Z_Construct_UClass_AFloorIsLavaGameMode_NoRegister()
{
	return AFloorIsLavaGameMode::StaticClass();
}
struct Z_Construct_UClass_AFloorIsLavaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FloorIsLavaGameMode.h" },
		{ "ModuleRelativePath", "FloorIsLavaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorIsLavaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFloorIsLavaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FloorIsLava,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorIsLavaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorIsLavaGameMode_Statics::ClassParams = {
	&AFloorIsLavaGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorIsLavaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorIsLavaGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFloorIsLavaGameMode()
{
	if (!Z_Registration_Info_UClass_AFloorIsLavaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorIsLavaGameMode.OuterSingleton, Z_Construct_UClass_AFloorIsLavaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFloorIsLavaGameMode.OuterSingleton;
}
template<> FLOORISLAVA_API UClass* StaticClass<AFloorIsLavaGameMode>()
{
	return AFloorIsLavaGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorIsLavaGameMode);
AFloorIsLavaGameMode::~AFloorIsLavaGameMode() {}
// End Class AFloorIsLavaGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_FloorIsLava_Source_FloorIsLava_FloorIsLavaGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFloorIsLavaGameMode, AFloorIsLavaGameMode::StaticClass, TEXT("AFloorIsLavaGameMode"), &Z_Registration_Info_UClass_AFloorIsLavaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorIsLavaGameMode), 2396361375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_FloorIsLava_Source_FloorIsLava_FloorIsLavaGameMode_h_3162015898(TEXT("/Script/FloorIsLava"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_FloorIsLava_Source_FloorIsLava_FloorIsLavaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_FloorIsLava_Source_FloorIsLava_FloorIsLavaGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
