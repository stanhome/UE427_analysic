class FPathTracingRG: public FGlobalShader {
	//DECLARE_GLOBAL_SHADER(FPathTracingRG)
public: 
	using ShaderMetaType = FGlobalShaderType;
	using ShaderMapType = FGlobalShaderMap;

	static ShaderMetaType StaticType;
	static FShader * ConstructSerializedInstance() {
		return new FPathTracingRG();
	}

	static FShader * ConstructCompiledInstance(const typename FShader::CompiledShaderInitializerType & Initializer) {
		return new FPathTracingRG(static_cast <
			const typename ShaderMetaType::CompiledShaderInitializerType & > (Initializer));
	}

	static void ModifyCompilationEnvironmentImpl(const FShaderPermutationParameters & Parameters, FShaderCompilerEnvironment & OutEnvironment) {
		const typename FPathTracingRG::FPermutationDomain PermutationVector(Parameters.PermutationId);
		PermutationVector.ModifyCompilationEnvironment(OutEnvironment);
		FPathTracingRG::ModifyCompilationEnvironment(
			static_cast<const typename FPathTracingRG::FPermutationParameters &> (Parameters),
			OutEnvironment
			);
	}

	static bool ShouldCompilePermutationImpl(const FShaderPermutationParameters & Parameters) {
		return FPathTracingRG::ShouldCompilePermutation(static_cast<const typename FPathTracingRG::FPermutationParameters &> (Parameters));
	};

private: 
	using InternalBaseType = typename TGetBaseTypeHelper < FPathTracingRG > ::Type;
	template < typename InternalType > static void InternalInitializeBases(FTypeLayoutDesc & TypeDesc) {
		TInitializeBaseHelper < InternalType, InternalBaseType > ::Initialize(TypeDesc);
	};

private: 
	static void InternalDestroy(void * Object, const FTypeLayoutDesc &, const FPointerTableBase * PtrTable);
public:
	static FTypeLayoutDesc & StaticGetTypeLayout();
public:
	const FTypeLayoutDesc & GetTypeLayout() const;
	static const int CounterBase = 484;

public:
	using DerivedType = FPathTracingRG;
	static const ETypeLayoutInterface::Type InterfaceType = ETypeLayoutInterface::NonVirtual;
	template<int Counter> struct InternalLinkType {
		;
		static __forceinline void Initialize(FTypeLayoutDesc & TypeDesc) {}
	};
	//DECLARE_GLOBAL_SHADER(FPathTracingRG) end

	// SHADER_USE_ROOT_PARAMETER_STRUCT(FPathTracingRG, FGlobalShader)
public: 
	static inline const FShaderParametersMetadata * GetRootParametersMetadata() {
		return FParameters::FTypeInfo::GetStructMetadata();
	}
	FPathTracingRG(const ShaderMetaType::CompiledShaderInitializerType & Initializer): FGlobalShader(Initializer) {
		this -> Bindings.BindForRootShaderParameters(this, Initializer.PermutationId, Initializer.ParameterMap);
	}
	FPathTracingRG() {}
	// SHADER_USE_ROOT_PARAMETER_STRUCT(FPathTracingRG, FGlobalShader) end

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters & Parameters) {
		return ShouldCompileRayTracingShadersForProject(Parameters.Platform) &&
			FDataDrivenShaderPlatformInfo::GetSupportsPathTracing(Parameters.Platform);
	}

	static void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters & Parameters, FShaderCompilerEnvironment & OutEnvironment) {
		//OutEnvironment.CompilerFlags.Add(CFLAG_WarningsAsErrors);
		OutEnvironment.SetDefine(L "USE_RECT_LIGHT_TEXTURES", 1);
	}

	//BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
	__declspec(align(16)) class FParameters {
		public: FParameters() {}
		struct FTypeInfo {
			static constexpr int32 NumRows = 1;
			static constexpr int32 NumColumns = 1;
			static constexpr int32 NumElements = 0;
			static constexpr int32 Alignment = 16;
			static constexpr bool bIsStoredInConstantBuffer = true;
			using TAlignedType = FParameters;
			static inline
			const FShaderParametersMetadata * GetStructMetadata() {
				static FShaderParametersMetadata StaticStructMetadata(FShaderParametersMetadata::EUseCase::ShaderParameterStruct, L "FParameters", L "FParameters", nullptr, nullptr, sizeof(FParameters), FParameters::zzGetMembers());
				return &StaticStructMetadata;
			}
		};
		static FUniformBufferRHIRef CreateUniformBuffer(const FParameters & InContents, EUniformBufferUsage InUsage) {
			return nullptr;
		}
		private: typedef FParameters zzTThisStruct;
		struct zzFirstMemberId {
			enum {
				HasDeclaredResource = 0
			};
		};
		typedef void * zzFuncPtr;
		typedef zzFuncPtr( * zzMemberFunc)(zzFirstMemberId, TArray < FShaderParametersMetadata::FMember > * );
		static zzFuncPtr zzAppendMemberGetPrev(zzFirstMemberId, TArray < FShaderParametersMetadata::FMember > * ) {
			return nullptr;
		}

		//SHADER_PARAMETER_RDG_TEXTURE_UAV(RWTexture2D<float4>, RadianceTexture)
		typedef zzFirstMemberId zzMemberIdRadianceTexture;
		public: TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::TAlignedType RadianceTexture = nullptr;
		static_assert(UBMT_RDG_TEXTURE_UAV != UBMT_INVALID, "Invalid type "
			"FRDGTextureUAV*"
			" of member "
			"RadianceTexture"
			".");
		private: struct zzNextMemberIdRadianceTexture {
			enum {
				HasDeclaredResource = zzMemberIdRadianceTexture::HasDeclaredResource || !TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdRadianceTexture, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "RWTexture2D<float4>"), TCHAR > ::Value, "No shader type for "
				"RadianceTexture"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, RadianceTexture) & (TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"RadianceTexture"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "RadianceTexture", L "RWTexture2D<float4>", __builtin_offsetof(zzTThisStruct, RadianceTexture), EUniformBufferBaseType(UBMT_RDG_TEXTURE_UAV), EShaderPrecisionModifier::Float, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::NumRows, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::NumColumns, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::NumElements, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdRadianceTexture, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		//SHADER_PARAMETER_RDG_TEXTURE_UAV(RWTexture2D<float4>, RadianceTexture) end

		//SHADER_PARAMETER_RDG_TEXTURE_UAV(RWTexture2D<float4>, AlbedoTexture)
		typedef zzNextMemberIdRadianceTexture zzMemberIdAlbedoTexture;
		public: TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::TAlignedType AlbedoTexture = nullptr;
		static_assert(UBMT_RDG_TEXTURE_UAV != UBMT_INVALID, "Invalid type "
			"FRDGTextureUAV*"
			" of member "
			"AlbedoTexture"
			".");
		private: struct zzNextMemberIdAlbedoTexture {
			enum {
				HasDeclaredResource = zzMemberIdAlbedoTexture::HasDeclaredResource || !TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdAlbedoTexture, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "RWTexture2D<float4>"), TCHAR > ::Value, "No shader type for "
				"AlbedoTexture"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, AlbedoTexture) & (TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"AlbedoTexture"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "AlbedoTexture", L "RWTexture2D<float4>", __builtin_offsetof(zzTThisStruct, AlbedoTexture), EUniformBufferBaseType(UBMT_RDG_TEXTURE_UAV), EShaderPrecisionModifier::Float, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::NumRows, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::NumColumns, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::NumElements, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdAlbedoTexture, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdAlbedoTexture
		zzMemberIdNormalTexture;
		public: TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::TAlignedType NormalTexture = nullptr;
		static_assert(UBMT_RDG_TEXTURE_UAV != UBMT_INVALID, "Invalid type "
			"FRDGTextureUAV*"
			" of member "
			"NormalTexture"
			".");
		private: struct zzNextMemberIdNormalTexture {
			enum {
				HasDeclaredResource = zzMemberIdNormalTexture::HasDeclaredResource || !TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdNormalTexture, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "RWTexture2D<float4>"), TCHAR > ::Value, "No shader type for "
				"NormalTexture"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, NormalTexture) & (TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"NormalTexture"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "NormalTexture", L "RWTexture2D<float4>", __builtin_offsetof(zzTThisStruct, NormalTexture), EUniformBufferBaseType(UBMT_RDG_TEXTURE_UAV), EShaderPrecisionModifier::Float, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::NumRows, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::NumColumns, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::NumElements, TShaderResourceParameterTypeInfo < FRDGTextureUAV * > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdNormalTexture, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdNormalTexture
		zzMemberIdTLAS;
		public: TShaderResourceParameterTypeInfo < FRHIShaderResourceView * > ::TAlignedType TLAS = nullptr;
		static_assert(UBMT_SRV != UBMT_INVALID, "Invalid type "
			"FRHIShaderResourceView*"
			" of member "
			"TLAS"
			".");
		private: struct zzNextMemberIdTLAS {
			enum {
				HasDeclaredResource = zzMemberIdTLAS::HasDeclaredResource || !TShaderResourceParameterTypeInfo < FRHIShaderResourceView * > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdTLAS, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderResourceParameterTypeInfo < FRHIShaderResourceView * > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "RaytracingAccelerationStructure"), TCHAR > ::Value, "No shader type for "
				"TLAS"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, TLAS) & (TShaderResourceParameterTypeInfo < FRHIShaderResourceView * > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"TLAS"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "TLAS", L "RaytracingAccelerationStructure", __builtin_offsetof(zzTThisStruct, TLAS), EUniformBufferBaseType(UBMT_SRV), EShaderPrecisionModifier::Float, TShaderResourceParameterTypeInfo < FRHIShaderResourceView * > ::NumRows, TShaderResourceParameterTypeInfo < FRHIShaderResourceView * > ::NumColumns, TShaderResourceParameterTypeInfo < FRHIShaderResourceView * > ::NumElements, TShaderResourceParameterTypeInfo < FRHIShaderResourceView * > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdTLAS, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdTLAS

		zzMemberIdViewUniformBuffer;
		public: TShaderParameterTypeInfo < TUniformBufferRef < FViewUniformShaderParameters >> ::TAlignedType ViewUniformBuffer;
		static_assert(UBMT_REFERENCED_STRUCT != UBMT_INVALID, "Invalid type "
			"TUniformBufferRef<FViewUniformShaderParameters>"
			" of member "
			"ViewUniformBuffer"
			".");
		private: struct zzNextMemberIdViewUniformBuffer {
			enum {
				HasDeclaredResource = zzMemberIdViewUniformBuffer::HasDeclaredResource || !TShaderParameterTypeInfo < TUniformBufferRef < FViewUniformShaderParameters >> ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdViewUniformBuffer, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderParameterTypeInfo < TUniformBufferRef < FViewUniformShaderParameters >> ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "FViewUniformShaderParameters"), TCHAR > ::Value, "No shader type for "
				"ViewUniformBuffer"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, ViewUniformBuffer) & (TShaderParameterTypeInfo < TUniformBufferRef < FViewUniformShaderParameters >> ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"ViewUniformBuffer"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "ViewUniformBuffer", L "FViewUniformShaderParameters", __builtin_offsetof(zzTThisStruct, ViewUniformBuffer), EUniformBufferBaseType(UBMT_REFERENCED_STRUCT), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < TUniformBufferRef < FViewUniformShaderParameters >> ::NumRows, TShaderParameterTypeInfo < TUniformBufferRef < FViewUniformShaderParameters >> ::NumColumns, TShaderParameterTypeInfo < TUniformBufferRef < FViewUniformShaderParameters >> ::NumElements, TShaderParameterTypeInfo < TUniformBufferRef < FViewUniformShaderParameters >> ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdViewUniformBuffer, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdViewUniformBuffer
		zzMemberIdPathTracingData;
		public: FPathTracingData::FTypeInfo::TAlignedType PathTracingData;
		static_assert(UBMT_INCLUDED_STRUCT != UBMT_INVALID, "Invalid type "
			"FPathTracingData"
			" of member "
			"PathTracingData"
			".");
		private: struct zzNextMemberIdPathTracingData {
			enum {
				HasDeclaredResource = zzMemberIdPathTracingData::HasDeclaredResource || !FPathTracingData::FTypeInfo::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdPathTracingData, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(FPathTracingData::FTypeInfo::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "FPathTracingData"), TCHAR > ::Value, "No shader type for "
				"PathTracingData"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, PathTracingData) & (FPathTracingData::FTypeInfo::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"PathTracingData"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "PathTracingData", L "FPathTracingData", __builtin_offsetof(zzTThisStruct, PathTracingData), EUniformBufferBaseType(UBMT_INCLUDED_STRUCT), EShaderPrecisionModifier::Float, FPathTracingData::FTypeInfo::NumRows, FPathTracingData::FTypeInfo::NumColumns, FPathTracingData::FTypeInfo::NumElements, FPathTracingData::FTypeInfo::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdPathTracingData, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdPathTracingData

		// scene lights
		zzMemberIdSceneLights;
		public: TShaderResourceParameterTypeInfo < FRDGBufferSRV * > ::TAlignedType SceneLights = nullptr;
		static_assert(UBMT_RDG_BUFFER_SRV != UBMT_INVALID, "Invalid type "
			"FRDGBufferSRV*"
			" of member "
			"SceneLights"
			".");
		private: struct zzNextMemberIdSceneLights {
			enum {
				HasDeclaredResource = zzMemberIdSceneLights::HasDeclaredResource || !TShaderResourceParameterTypeInfo < FRDGBufferSRV * > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdSceneLights, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderResourceParameterTypeInfo < FRDGBufferSRV * > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "StructuredBuffer<FPathTracingLight>"), TCHAR > ::Value, "No shader type for "
				"SceneLights"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, SceneLights) & (TShaderResourceParameterTypeInfo < FRDGBufferSRV * > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"SceneLights"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "SceneLights", L "StructuredBuffer<FPathTracingLight>", __builtin_offsetof(zzTThisStruct, SceneLights), EUniformBufferBaseType(UBMT_RDG_BUFFER_SRV), EShaderPrecisionModifier::Float, TShaderResourceParameterTypeInfo < FRDGBufferSRV * > ::NumRows, TShaderResourceParameterTypeInfo < FRDGBufferSRV * > ::NumColumns, TShaderResourceParameterTypeInfo < FRDGBufferSRV * > ::NumElements, TShaderResourceParameterTypeInfo < FRDGBufferSRV * > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdSceneLights, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdSceneLights
		zzMemberIdSceneLightCount;
		public: TShaderParameterTypeInfo < uint32 > ::TAlignedType SceneLightCount;
		static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
			"uint32"
			" of member "
			"SceneLightCount"
			".");
		private: struct zzNextMemberIdSceneLightCount {
			enum {
				HasDeclaredResource = zzMemberIdSceneLightCount::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdSceneLightCount, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
				"SceneLightCount"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, SceneLightCount) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"SceneLightCount"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "SceneLightCount", L "", __builtin_offsetof(zzTThisStruct, SceneLightCount), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdSceneLightCount, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdSceneLightCount
		zzMemberIdSceneVisibleLightCount;
		public: TShaderParameterTypeInfo < uint32 > ::TAlignedType SceneVisibleLightCount;
		static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
			"uint32"
			" of member "
			"SceneVisibleLightCount"
			".");
		private: struct zzNextMemberIdSceneVisibleLightCount {
			enum {
				HasDeclaredResource = zzMemberIdSceneVisibleLightCount::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdSceneVisibleLightCount, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
				"SceneVisibleLightCount"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, SceneVisibleLightCount) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"SceneVisibleLightCount"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "SceneVisibleLightCount", L "", __builtin_offsetof(zzTThisStruct, SceneVisibleLightCount), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdSceneVisibleLightCount, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdSceneVisibleLightCount
		zzMemberIdLightGridParameters;
		public: FPathTracingLightGrid::FTypeInfo::TAlignedType LightGridParameters;
		static_assert(UBMT_INCLUDED_STRUCT != UBMT_INVALID, "Invalid type "
			"FPathTracingLightGrid"
			" of member "
			"LightGridParameters"
			".");
		private: struct zzNextMemberIdLightGridParameters {
			enum {
				HasDeclaredResource = zzMemberIdLightGridParameters::HasDeclaredResource || !FPathTracingLightGrid::FTypeInfo::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdLightGridParameters, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(FPathTracingLightGrid::FTypeInfo::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "FPathTracingLightGrid"), TCHAR > ::Value, "No shader type for "
				"LightGridParameters"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, LightGridParameters) & (FPathTracingLightGrid::FTypeInfo::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"LightGridParameters"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "LightGridParameters", L "FPathTracingLightGrid", __builtin_offsetof(zzTThisStruct, LightGridParameters), EUniformBufferBaseType(UBMT_INCLUDED_STRUCT), EShaderPrecisionModifier::Float, FPathTracingLightGrid::FTypeInfo::NumRows, FPathTracingLightGrid::FTypeInfo::NumColumns, FPathTracingLightGrid::FTypeInfo::NumElements, FPathTracingLightGrid::FTypeInfo::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdLightGridParameters, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdLightGridParameters

		// Skylight
		zzMemberIdSkylightParameters;
		public: FPathTracingSkylight::FTypeInfo::TAlignedType SkylightParameters;
		static_assert(UBMT_INCLUDED_STRUCT != UBMT_INVALID, "Invalid type "
			"FPathTracingSkylight"
			" of member "
			"SkylightParameters"
			".");
		private: struct zzNextMemberIdSkylightParameters {
			enum {
				HasDeclaredResource = zzMemberIdSkylightParameters::HasDeclaredResource || !FPathTracingSkylight::FTypeInfo::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdSkylightParameters, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(FPathTracingSkylight::FTypeInfo::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "FPathTracingSkylight"), TCHAR > ::Value, "No shader type for "
				"SkylightParameters"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, SkylightParameters) & (FPathTracingSkylight::FTypeInfo::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"SkylightParameters"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "SkylightParameters", L "FPathTracingSkylight", __builtin_offsetof(zzTThisStruct, SkylightParameters), EUniformBufferBaseType(UBMT_INCLUDED_STRUCT), EShaderPrecisionModifier::Float, FPathTracingSkylight::FTypeInfo::NumRows, FPathTracingSkylight::FTypeInfo::NumColumns, FPathTracingSkylight::FTypeInfo::NumElements, FPathTracingSkylight::FTypeInfo::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdSkylightParameters, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdSkylightParameters

		// IES Profiles
		zzMemberIdIESTexture;
		public: TShaderResourceParameterTypeInfo < FRDGTexture * > ::TAlignedType IESTexture = nullptr;
		static_assert(UBMT_RDG_TEXTURE != UBMT_INVALID, "Invalid type "
			"FRDGTexture*"
			" of member "
			"IESTexture"
			".");
		private: struct zzNextMemberIdIESTexture {
			enum {
				HasDeclaredResource = zzMemberIdIESTexture::HasDeclaredResource || !TShaderResourceParameterTypeInfo < FRDGTexture * > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdIESTexture, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderResourceParameterTypeInfo < FRDGTexture * > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "Texture2DArray"), TCHAR > ::Value, "No shader type for "
				"IESTexture"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, IESTexture) & (TShaderResourceParameterTypeInfo < FRDGTexture * > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"IESTexture"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "IESTexture", L "Texture2DArray", __builtin_offsetof(zzTThisStruct, IESTexture), EUniformBufferBaseType(UBMT_RDG_TEXTURE), EShaderPrecisionModifier::Float, TShaderResourceParameterTypeInfo < FRDGTexture * > ::NumRows, TShaderResourceParameterTypeInfo < FRDGTexture * > ::NumColumns, TShaderResourceParameterTypeInfo < FRDGTexture * > ::NumElements, TShaderResourceParameterTypeInfo < FRDGTexture * > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdIESTexture, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdIESTexture
		zzMemberIdIESTextureSampler;
		public: TShaderResourceParameterTypeInfo < FRHISamplerState * > ::TAlignedType IESTextureSampler = nullptr;
		static_assert(UBMT_SAMPLER != UBMT_INVALID, "Invalid type "
			"FRHISamplerState*"
			" of member "
			"IESTextureSampler"
			".");
		private: struct zzNextMemberIdIESTextureSampler {
			enum {
				HasDeclaredResource = zzMemberIdIESTextureSampler::HasDeclaredResource || !TShaderResourceParameterTypeInfo < FRHISamplerState * > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdIESTextureSampler, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderResourceParameterTypeInfo < FRHISamplerState * > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "SamplerState"), TCHAR > ::Value, "No shader type for "
				"IESTextureSampler"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, IESTextureSampler) & (TShaderResourceParameterTypeInfo < FRHISamplerState * > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"IESTextureSampler"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "IESTextureSampler", L "SamplerState", __builtin_offsetof(zzTThisStruct, IESTextureSampler), EUniformBufferBaseType(UBMT_SAMPLER), EShaderPrecisionModifier::Float, TShaderResourceParameterTypeInfo < FRHISamplerState * > ::NumRows, TShaderResourceParameterTypeInfo < FRHISamplerState * > ::NumColumns, TShaderResourceParameterTypeInfo < FRHISamplerState * > ::NumElements, TShaderResourceParameterTypeInfo < FRHISamplerState * > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdIESTextureSampler, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdIESTextureSampler // Shared sampler for all IES profiles
		// Rect lights
		zzMemberIdRectLightTexture;
		public: TShaderResourceParameterTypeInfo < FRHITexture * [8] > ::TAlignedType RectLightTexture;
		static_assert(UBMT_TEXTURE != UBMT_INVALID, "Invalid type "
			"FRHITexture*"
			" of member "
			"RectLightTexture"
			".");
		private: struct zzNextMemberIdRectLightTexture {
			enum {
				HasDeclaredResource = zzMemberIdRectLightTexture::HasDeclaredResource || !TShaderResourceParameterTypeInfo < FRHITexture * [8] > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdRectLightTexture, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderResourceParameterTypeInfo < FRHITexture * [8] > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "Texture2D"), TCHAR > ::Value, "No shader type for "
				"RectLightTexture"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, RectLightTexture) & (TShaderResourceParameterTypeInfo < FRHITexture * [8] > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"RectLightTexture"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "RectLightTexture", L "Texture2D", __builtin_offsetof(zzTThisStruct, RectLightTexture), EUniformBufferBaseType(UBMT_TEXTURE), EShaderPrecisionModifier::Float, TShaderResourceParameterTypeInfo < FRHITexture * [8] > ::NumRows, TShaderResourceParameterTypeInfo < FRHITexture * [8] > ::NumColumns, TShaderResourceParameterTypeInfo < FRHITexture * [8] > ::NumElements, TShaderResourceParameterTypeInfo < FRHITexture * [8] > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdRectLightTexture, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdRectLightTexture
		zzMemberIdRectLightSampler;
		public: TShaderResourceParameterTypeInfo < FRHISamplerState * > ::TAlignedType RectLightSampler = nullptr;
		static_assert(UBMT_SAMPLER != UBMT_INVALID, "Invalid type "
			"FRHISamplerState*"
			" of member "
			"RectLightSampler"
			".");
		private: struct zzNextMemberIdRectLightSampler {
			enum {
				HasDeclaredResource = zzMemberIdRectLightSampler::HasDeclaredResource || !TShaderResourceParameterTypeInfo < FRHISamplerState * > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdRectLightSampler, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderResourceParameterTypeInfo < FRHISamplerState * > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "SamplerState"), TCHAR > ::Value, "No shader type for "
				"RectLightSampler"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, RectLightSampler) & (TShaderResourceParameterTypeInfo < FRHISamplerState * > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"RectLightSampler"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "RectLightSampler", L "SamplerState", __builtin_offsetof(zzTThisStruct, RectLightSampler), EUniformBufferBaseType(UBMT_SAMPLER), EShaderPrecisionModifier::Float, TShaderResourceParameterTypeInfo < FRHISamplerState * > ::NumRows, TShaderResourceParameterTypeInfo < FRHISamplerState * > ::NumColumns, TShaderResourceParameterTypeInfo < FRHISamplerState * > ::NumElements, TShaderResourceParameterTypeInfo < FRHISamplerState * > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdRectLightSampler, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdRectLightSampler // Shared sampler for all rectlights
		// Subsurface data
		zzMemberIdSSProfilesTexture;
		public: TShaderResourceParameterTypeInfo < FRHITexture * > ::TAlignedType SSProfilesTexture = nullptr;
		static_assert(UBMT_TEXTURE != UBMT_INVALID, "Invalid type "
			"FRHITexture*"
			" of member "
			"SSProfilesTexture"
			".");
		private: struct zzNextMemberIdSSProfilesTexture {
			enum {
				HasDeclaredResource = zzMemberIdSSProfilesTexture::HasDeclaredResource || !TShaderResourceParameterTypeInfo < FRHITexture * > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdSSProfilesTexture, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderResourceParameterTypeInfo < FRHITexture * > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L "Texture2D"), TCHAR > ::Value, "No shader type for "
				"SSProfilesTexture"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, SSProfilesTexture) & (TShaderResourceParameterTypeInfo < FRHITexture * > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"SSProfilesTexture"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "SSProfilesTexture", L "Texture2D", __builtin_offsetof(zzTThisStruct, SSProfilesTexture), EUniformBufferBaseType(UBMT_TEXTURE), EShaderPrecisionModifier::Float, TShaderResourceParameterTypeInfo < FRHITexture * > ::NumRows, TShaderResourceParameterTypeInfo < FRHITexture * > ::NumColumns, TShaderResourceParameterTypeInfo < FRHITexture * > ::NumElements, TShaderResourceParameterTypeInfo < FRHITexture * > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdSSProfilesTexture, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdSSProfilesTexture

		// Used by multi-GPU rendering
		// SHADER_PARAMETER(FIntVector, TileOffset) begin
		zzMemberIdTileOffset;
		public: TShaderParameterTypeInfo < FIntVector > ::TAlignedType TileOffset;
		static_assert(TShaderParameterTypeInfo < FIntVector > ::BaseType != UBMT_INVALID, "Invalid type "
			"FIntVector"
			" of member "
			"TileOffset"
			".");
		private: struct zzNextMemberIdTileOffset {
			enum {
				HasDeclaredResource = zzMemberIdTileOffset::HasDeclaredResource || !TShaderParameterTypeInfo < FIntVector > ::bIsStoredInConstantBuffer
			};
		};
		static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdTileOffset, TArray < FShaderParametersMetadata::FMember > * Members) {
			static_assert(TShaderParameterTypeInfo < FIntVector > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
				"TileOffset"
				".");
			static_assert((__builtin_offsetof(zzTThisStruct, TileOffset) & (TShaderParameterTypeInfo < FIntVector > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
				"TileOffset"
				".");
			Members -> Add(FShaderParametersMetadata::FMember(L "TileOffset", L "", __builtin_offsetof(zzTThisStruct, TileOffset), EUniformBufferBaseType(TShaderParameterTypeInfo < FIntVector > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < FIntVector > ::NumRows, TShaderParameterTypeInfo < FIntVector > ::NumColumns, TShaderParameterTypeInfo < FIntVector > ::NumElements, TShaderParameterTypeInfo < FIntVector > ::GetStructMetadata()));
			zzFuncPtr( * PrevFunc)(zzMemberIdTileOffset, TArray < FShaderParametersMetadata::FMember > * );
			PrevFunc = zzAppendMemberGetPrev;
			return (zzFuncPtr) PrevFunc;
		}
		typedef zzNextMemberIdTileOffset
		//SHADER_PARAMETER(FIntVector, TileOffset) end

		// END_SHADER_PARAMETER_STRUCT()
		zzLastMemberId;
		public: static TArray < FShaderParametersMetadata::FMember > zzGetMembers() {
			TArray < FShaderParametersMetadata::FMember > Members;
			zzFuncPtr( * LastFunc)(zzLastMemberId, TArray < FShaderParametersMetadata::FMember > * );
			LastFunc = zzAppendMemberGetPrev;
			zzFuncPtr Ptr = (zzFuncPtr) LastFunc;
			do {
				Ptr = reinterpret_cast < zzMemberFunc > (Ptr)(zzFirstMemberId(), & Members);
			} while (Ptr);
			Algo::Reverse(Members);
			return Members;
		}
	};
	// // END_SHADER_PARAMETER_STRUCT() end
};

// IMPLEMENT_GLOBAL_SHADER(FPathTracingRG, "/Engine/Private/PathTracing/PathTracing.usf", "PathTracingMainRG", SF_RayGen);
void FPathTracingRG::InternalDestroy(void * Object,
	const FTypeLayoutDesc & ,
		const FPointerTableBase * PtrTable) {
	Freeze::CleanupObject(static_cast < FPathTracingRG * > (Object), PtrTable);
	Freeze::CallDestructor(static_cast < FPathTracingRG * > (Object));
}
FTypeLayoutDesc & FPathTracingRG::StaticGetTypeLayout() {
	static_assert(TValidateInterfaceHelper < FPathTracingRG, InterfaceType > ::Value, "Invalid interface for "
		"FPathTracingRG");
	alignas(FTypeLayoutDesc) static uint8 TypeBuffer[sizeof(FTypeLayoutDesc)] = {
		0
	};
	FTypeLayoutDesc & TypeDesc = * (FTypeLayoutDesc * ) TypeBuffer;
	if (!TypeDesc.IsInitialized) {
		TypeDesc.IsInitialized = true;
		TypeDesc.Name = L "FPathTracingRG";
		TypeDesc.WriteFrozenMemoryImageFunc = TGetFreezeImageHelper < FPathTracingRG > ::Do();
		TypeDesc.UnfrozenCopyFunc = & Freeze::DefaultUnfrozenCopy;
		TypeDesc.AppendHashFunc = & Freeze::DefaultAppendHash;
		TypeDesc.GetTargetAlignmentFunc = & Freeze::DefaultGetTargetAlignment;
		TypeDesc.ToStringFunc = & Freeze::DefaultToString;
		TypeDesc.DestroyFunc = & InternalDestroy;
		TypeDesc.Size = sizeof(FPathTracingRG);
		TypeDesc.Alignment = alignof(FPathTracingRG);
		TypeDesc.Interface = InterfaceType;
		TypeDesc.SizeFromFields = ~0 u;
		TypeDesc.GetDefaultObjectFunc = & TGetDefaultObjectHelper < FPathTracingRG, InterfaceType > ::Do;
		InternalLinkType < 1 > ::Initialize(TypeDesc);
		InternalInitializeBases < FPathTracingRG > (TypeDesc);
		FTypeLayoutDesc::Initialize(TypeDesc);
	}
	return TypeDesc;
};
const FTypeLayoutDesc & FPathTracingRG::GetTypeLayout() const {
	return StaticGetTypeLayout();
};
// FGlobalShaderType
FPathTracingRG::ShaderMetaType FPathTracingRG::StaticType(FPathTracingRG::StaticGetTypeLayout(), L "FPathTracingRG", L "/Engine/Private/PathTracing/PathTracing.usf", L "PathTracingMainRG", SF_RayGen, FPathTracingRG::FPermutationDomain::PermutationCount, FPathTracingRG::ConstructSerializedInstance, FPathTracingRG::ConstructCompiledInstance, FPathTracingRG::ModifyCompilationEnvironmentImpl, FPathTracingRG::ShouldCompilePermutationImpl, FPathTracingRG::ValidateCompiledResult, sizeof(FPathTracingRG), FPathTracingRG::GetRootParametersMetadata());;