// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealImgGui/Public/ImGuiActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGuiActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNREALIMGGUI_API UClass* Z_Construct_UClass_AImGuiActor();
UNREALIMGGUI_API UClass* Z_Construct_UClass_AImGuiActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealImgGui();
// End Cross Module References

// Begin Class AImGuiActor
void AImGuiActor::StaticRegisterNativesAImGuiActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AImGuiActor);
UClass* Z_Construct_UClass_AImGuiActor_NoRegister()
{
	return AImGuiActor::StaticClass();
}
struct Z_Construct_UClass_AImGuiActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ImGuiActor.h" },
		{ "ModuleRelativePath", "Public/ImGuiActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AImGuiActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AImGuiActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealImgGui,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AImGuiActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AImGuiActor_Statics::ClassParams = {
	&AImGuiActor::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AImGuiActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AImGuiActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AImGuiActor()
{
	if (!Z_Registration_Info_UClass_AImGuiActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AImGuiActor.OuterSingleton, Z_Construct_UClass_AImGuiActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AImGuiActor.OuterSingleton;
}
template<> UNREALIMGGUI_API UClass* StaticClass<AImGuiActor>()
{
	return AImGuiActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AImGuiActor);
AImGuiActor::~AImGuiActor() {}
// End Class AImGuiActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_edoar_Desktop_Github_ImGuiUnreal_UnrealImgGui_Source_UnrealImgGui_Public_ImGuiActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AImGuiActor, AImGuiActor::StaticClass, TEXT("AImGuiActor"), &Z_Registration_Info_UClass_AImGuiActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AImGuiActor), 3765789727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_edoar_Desktop_Github_ImGuiUnreal_UnrealImgGui_Source_UnrealImgGui_Public_ImGuiActor_h_3970907236(TEXT("/Script/UnrealImgGui"),
	Z_CompiledInDeferFile_FID_Users_edoar_Desktop_Github_ImGuiUnreal_UnrealImgGui_Source_UnrealImgGui_Public_ImGuiActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_edoar_Desktop_Github_ImGuiUnreal_UnrealImgGui_Source_UnrealImgGui_Public_ImGuiActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
