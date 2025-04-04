// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FantasyCombat/Public/Characters/FantasyCombatCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFantasyCombatCharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
FANTASYCOMBAT_API UClass* Z_Construct_UClass_AFantasyCombatCharacterBase();
FANTASYCOMBAT_API UClass* Z_Construct_UClass_AFantasyCombatCharacterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FantasyCombat();
// End Cross Module References

// Begin Class AFantasyCombatCharacterBase
void AFantasyCombatCharacterBase::StaticRegisterNativesAFantasyCombatCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFantasyCombatCharacterBase);
UClass* Z_Construct_UClass_AFantasyCombatCharacterBase_NoRegister()
{
	return AFantasyCombatCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AFantasyCombatCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/FantasyCombatCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Characters/FantasyCombatCharacterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFantasyCombatCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFantasyCombatCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FantasyCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFantasyCombatCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFantasyCombatCharacterBase_Statics::ClassParams = {
	&AFantasyCombatCharacterBase::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFantasyCombatCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFantasyCombatCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFantasyCombatCharacterBase()
{
	if (!Z_Registration_Info_UClass_AFantasyCombatCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFantasyCombatCharacterBase.OuterSingleton, Z_Construct_UClass_AFantasyCombatCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFantasyCombatCharacterBase.OuterSingleton;
}
template<> FANTASYCOMBAT_API UClass* StaticClass<AFantasyCombatCharacterBase>()
{
	return AFantasyCombatCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFantasyCombatCharacterBase);
AFantasyCombatCharacterBase::~AFantasyCombatCharacterBase() {}
// End Class AFantasyCombatCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_Characters_FantasyCombatCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFantasyCombatCharacterBase, AFantasyCombatCharacterBase::StaticClass, TEXT("AFantasyCombatCharacterBase"), &Z_Registration_Info_UClass_AFantasyCombatCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFantasyCombatCharacterBase), 3940554192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_Characters_FantasyCombatCharacterBase_h_1615932953(TEXT("/Script/FantasyCombat"),
	Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_Characters_FantasyCombatCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_Characters_FantasyCombatCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
