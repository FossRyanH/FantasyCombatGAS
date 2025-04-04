// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FantasyCombat/Public/Controller/FantasyPlayerControls.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFantasyPlayerControls() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
FANTASYCOMBAT_API UClass* Z_Construct_UClass_AFantasyPlayerControls();
FANTASYCOMBAT_API UClass* Z_Construct_UClass_AFantasyPlayerControls_NoRegister();
UPackage* Z_Construct_UPackage__Script_FantasyCombat();
// End Cross Module References

// Begin Class AFantasyPlayerControls
void AFantasyPlayerControls::StaticRegisterNativesAFantasyPlayerControls()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFantasyPlayerControls);
UClass* Z_Construct_UClass_AFantasyPlayerControls_NoRegister()
{
	return AFantasyPlayerControls::StaticClass();
}
struct Z_Construct_UClass_AFantasyPlayerControls_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/FantasyPlayerControls.h" },
		{ "ModuleRelativePath", "Public/Controller/FantasyPlayerControls.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFantasyPlayerControls>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFantasyPlayerControls_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_FantasyCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFantasyPlayerControls_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFantasyPlayerControls_Statics::ClassParams = {
	&AFantasyPlayerControls::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFantasyPlayerControls_Statics::Class_MetaDataParams), Z_Construct_UClass_AFantasyPlayerControls_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFantasyPlayerControls()
{
	if (!Z_Registration_Info_UClass_AFantasyPlayerControls.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFantasyPlayerControls.OuterSingleton, Z_Construct_UClass_AFantasyPlayerControls_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFantasyPlayerControls.OuterSingleton;
}
template<> FANTASYCOMBAT_API UClass* StaticClass<AFantasyPlayerControls>()
{
	return AFantasyPlayerControls::StaticClass();
}
AFantasyPlayerControls::AFantasyPlayerControls(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFantasyPlayerControls);
AFantasyPlayerControls::~AFantasyPlayerControls() {}
// End Class AFantasyPlayerControls

// Begin Registration
struct Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_Controller_FantasyPlayerControls_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFantasyPlayerControls, AFantasyPlayerControls::StaticClass, TEXT("AFantasyPlayerControls"), &Z_Registration_Info_UClass_AFantasyPlayerControls, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFantasyPlayerControls), 586985469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_Controller_FantasyPlayerControls_h_3750815740(TEXT("/Script/FantasyCombat"),
	Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_Controller_FantasyPlayerControls_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FantasyCombat_Source_FantasyCombat_Public_Controller_FantasyPlayerControls_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
