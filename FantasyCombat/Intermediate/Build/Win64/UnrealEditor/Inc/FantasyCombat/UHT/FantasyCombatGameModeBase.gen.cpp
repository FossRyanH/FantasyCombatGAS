// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FantasyCombat/Public/GameModes/FantasyCombatGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFantasyCombatGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FANTASYCOMBAT_API UClass* Z_Construct_UClass_AFantasyCombatGameModeBase();
FANTASYCOMBAT_API UClass* Z_Construct_UClass_AFantasyCombatGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FantasyCombat();
// End Cross Module References

// Begin Class AFantasyCombatGameModeBase
void AFantasyCombatGameModeBase::StaticRegisterNativesAFantasyCombatGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFantasyCombatGameModeBase);
UClass* Z_Construct_UClass_AFantasyCombatGameModeBase_NoRegister()
{
	return AFantasyCombatGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AFantasyCombatGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/FantasyCombatGameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameModes/FantasyCombatGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFantasyCombatGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFantasyCombatGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FantasyCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFantasyCombatGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFantasyCombatGameModeBase_Statics::ClassParams = {
	&AFantasyCombatGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFantasyCombatGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFantasyCombatGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFantasyCombatGameModeBase()
{
	if (!Z_Registration_Info_UClass_AFantasyCombatGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFantasyCombatGameModeBase.OuterSingleton, Z_Construct_UClass_AFantasyCombatGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFantasyCombatGameModeBase.OuterSingleton;
}
template<> FANTASYCOMBAT_API UClass* StaticClass<AFantasyCombatGameModeBase>()
{
	return AFantasyCombatGameModeBase::StaticClass();
}
AFantasyCombatGameModeBase::AFantasyCombatGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFantasyCombatGameModeBase);
AFantasyCombatGameModeBase::~AFantasyCombatGameModeBase() {}
// End Class AFantasyCombatGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_GameModes_FantasyCombatGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFantasyCombatGameModeBase, AFantasyCombatGameModeBase::StaticClass, TEXT("AFantasyCombatGameModeBase"), &Z_Registration_Info_UClass_AFantasyCombatGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFantasyCombatGameModeBase), 3774188595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_GameModes_FantasyCombatGameModeBase_h_1439777172(TEXT("/Script/FantasyCombat"),
	Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_GameModes_FantasyCombatGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_GameModes_FantasyCombatGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
