// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FantasyCombat/FantasyCombatGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFantasyCombatGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FANTASYCOMBAT_API UClass* Z_Construct_UClass_AFantasyCombatGameMode();
FANTASYCOMBAT_API UClass* Z_Construct_UClass_AFantasyCombatGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FantasyCombat();
// End Cross Module References

// Begin Class AFantasyCombatGameMode
void AFantasyCombatGameMode::StaticRegisterNativesAFantasyCombatGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFantasyCombatGameMode);
UClass* Z_Construct_UClass_AFantasyCombatGameMode_NoRegister()
{
	return AFantasyCombatGameMode::StaticClass();
}
struct Z_Construct_UClass_AFantasyCombatGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FantasyCombatGameMode.h" },
		{ "ModuleRelativePath", "FantasyCombatGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFantasyCombatGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFantasyCombatGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FantasyCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFantasyCombatGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFantasyCombatGameMode_Statics::ClassParams = {
	&AFantasyCombatGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFantasyCombatGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFantasyCombatGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFantasyCombatGameMode()
{
	if (!Z_Registration_Info_UClass_AFantasyCombatGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFantasyCombatGameMode.OuterSingleton, Z_Construct_UClass_AFantasyCombatGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFantasyCombatGameMode.OuterSingleton;
}
template<> FANTASYCOMBAT_API UClass* StaticClass<AFantasyCombatGameMode>()
{
	return AFantasyCombatGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFantasyCombatGameMode);
AFantasyCombatGameMode::~AFantasyCombatGameMode() {}
// End Class AFantasyCombatGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_FantasyCombatGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFantasyCombatGameMode, AFantasyCombatGameMode::StaticClass, TEXT("AFantasyCombatGameMode"), &Z_Registration_Info_UClass_AFantasyCombatGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFantasyCombatGameMode), 672687072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_FantasyCombatGameMode_h_3265486118(TEXT("/Script/FantasyCombat"),
	Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_FantasyCombatGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_FantasyCombatGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
