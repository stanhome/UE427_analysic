__declspec(align(16)) class FPathTracingData {
    public: FPathTracingData() {}
    struct FTypeInfo {
        static constexpr int32 NumRows = 1;
        static constexpr int32 NumColumns = 1;
        static constexpr int32 NumElements = 0;
        static constexpr int32 Alignment = 16;
        static constexpr bool bIsStoredInConstantBuffer = true;
        using TAlignedType = FPathTracingData;
        static inline
        const FShaderParametersMetadata * GetStructMetadata() {
            static FShaderParametersMetadata StaticStructMetadata(FShaderParametersMetadata::EUseCase::ShaderParameterStruct, L "FPathTracingData", L "FPathTracingData", nullptr, nullptr, sizeof(FPathTracingData), FPathTracingData::zzGetMembers());
            return &StaticStructMetadata;
        }
    };
    static FUniformBufferRHIRef CreateUniformBuffer(const FPathTracingData & InContents, EUniformBufferUsage InUsage) {
        return nullptr;
    }
    private: typedef FPathTracingData zzTThisStruct;
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
    typedef zzFirstMemberId
    zzMemberIdIteration;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType Iteration;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "Iteration"
        ".");
    private: struct zzNextMemberIdIteration {
        enum {
            HasDeclaredResource = zzMemberIdIteration::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdIteration, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "Iteration"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, Iteration) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "Iteration"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "Iteration", L "", __builtin_offsetof(zzTThisStruct, Iteration), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdIteration, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdIteration
    zzMemberIdTemporalSeed;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType TemporalSeed;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "TemporalSeed"
        ".");
    private: struct zzNextMemberIdTemporalSeed {
        enum {
            HasDeclaredResource = zzMemberIdTemporalSeed::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdTemporalSeed, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "TemporalSeed"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, TemporalSeed) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "TemporalSeed"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "TemporalSeed", L "", __builtin_offsetof(zzTThisStruct, TemporalSeed), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdTemporalSeed, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdTemporalSeed
    zzMemberIdMaxSamples;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType MaxSamples;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "MaxSamples"
        ".");
    private: struct zzNextMemberIdMaxSamples {
        enum {
            HasDeclaredResource = zzMemberIdMaxSamples::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdMaxSamples, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "MaxSamples"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, MaxSamples) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "MaxSamples"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "MaxSamples", L "", __builtin_offsetof(zzTThisStruct, MaxSamples), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdMaxSamples, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdMaxSamples
    zzMemberIdMaxBounces;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType MaxBounces;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "MaxBounces"
        ".");
    private: struct zzNextMemberIdMaxBounces {
        enum {
            HasDeclaredResource = zzMemberIdMaxBounces::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdMaxBounces, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "MaxBounces"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, MaxBounces) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "MaxBounces"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "MaxBounces", L "", __builtin_offsetof(zzTThisStruct, MaxBounces), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdMaxBounces, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdMaxBounces
    zzMemberIdMaxSSSBounces;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType MaxSSSBounces;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "MaxSSSBounces"
        ".");
    private: struct zzNextMemberIdMaxSSSBounces {
        enum {
            HasDeclaredResource = zzMemberIdMaxSSSBounces::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdMaxSSSBounces, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "MaxSSSBounces"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, MaxSSSBounces) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "MaxSSSBounces"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "MaxSSSBounces", L "", __builtin_offsetof(zzTThisStruct, MaxSSSBounces), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdMaxSSSBounces, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdMaxSSSBounces
    zzMemberIdMISMode;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType MISMode;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "MISMode"
        ".");
    private: struct zzNextMemberIdMISMode {
        enum {
            HasDeclaredResource = zzMemberIdMISMode::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdMISMode, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "MISMode"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, MISMode) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "MISMode"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "MISMode", L "", __builtin_offsetof(zzTThisStruct, MISMode), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdMISMode, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdMISMode
    zzMemberIdApproximateCaustics;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType ApproximateCaustics;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "ApproximateCaustics"
        ".");
    private: struct zzNextMemberIdApproximateCaustics {
        enum {
            HasDeclaredResource = zzMemberIdApproximateCaustics::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdApproximateCaustics, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "ApproximateCaustics"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, ApproximateCaustics) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "ApproximateCaustics"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "ApproximateCaustics", L "", __builtin_offsetof(zzTThisStruct, ApproximateCaustics), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdApproximateCaustics, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdApproximateCaustics
    zzMemberIdEnableCameraBackfaceCulling;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType EnableCameraBackfaceCulling;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "EnableCameraBackfaceCulling"
        ".");
    private: struct zzNextMemberIdEnableCameraBackfaceCulling {
        enum {
            HasDeclaredResource = zzMemberIdEnableCameraBackfaceCulling::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdEnableCameraBackfaceCulling, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "EnableCameraBackfaceCulling"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, EnableCameraBackfaceCulling) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "EnableCameraBackfaceCulling"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "EnableCameraBackfaceCulling", L "", __builtin_offsetof(zzTThisStruct, EnableCameraBackfaceCulling), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdEnableCameraBackfaceCulling, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdEnableCameraBackfaceCulling
    zzMemberIdEnableDirectLighting;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType EnableDirectLighting;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "EnableDirectLighting"
        ".");
    private: struct zzNextMemberIdEnableDirectLighting {
        enum {
            HasDeclaredResource = zzMemberIdEnableDirectLighting::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdEnableDirectLighting, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "EnableDirectLighting"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, EnableDirectLighting) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "EnableDirectLighting"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "EnableDirectLighting", L "", __builtin_offsetof(zzTThisStruct, EnableDirectLighting), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdEnableDirectLighting, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdEnableDirectLighting
    zzMemberIdEnableEmissive;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType EnableEmissive;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "EnableEmissive"
        ".");
    private: struct zzNextMemberIdEnableEmissive {
        enum {
            HasDeclaredResource = zzMemberIdEnableEmissive::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdEnableEmissive, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "EnableEmissive"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, EnableEmissive) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "EnableEmissive"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "EnableEmissive", L "", __builtin_offsetof(zzTThisStruct, EnableEmissive), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdEnableEmissive, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdEnableEmissive
    zzMemberIdSamplerType;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType SamplerType;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "SamplerType"
        ".");
    private: struct zzNextMemberIdSamplerType {
        enum {
            HasDeclaredResource = zzMemberIdSamplerType::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdSamplerType, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "SamplerType"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, SamplerType) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "SamplerType"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "SamplerType", L "", __builtin_offsetof(zzTThisStruct, SamplerType), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdSamplerType, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdSamplerType
    zzMemberIdVisualizeLightGrid;
    public: TShaderParameterTypeInfo < uint32 > ::TAlignedType VisualizeLightGrid;
    static_assert(TShaderParameterTypeInfo < uint32 > ::BaseType != UBMT_INVALID, "Invalid type "
        "uint32"
        " of member "
        "VisualizeLightGrid"
        ".");
    private: struct zzNextMemberIdVisualizeLightGrid {
        enum {
            HasDeclaredResource = zzMemberIdVisualizeLightGrid::HasDeclaredResource || !TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdVisualizeLightGrid, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < uint32 > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "VisualizeLightGrid"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, VisualizeLightGrid) & (TShaderParameterTypeInfo < uint32 > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "VisualizeLightGrid"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "VisualizeLightGrid", L "", __builtin_offsetof(zzTThisStruct, VisualizeLightGrid), EUniformBufferBaseType(TShaderParameterTypeInfo < uint32 > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < uint32 > ::NumRows, TShaderParameterTypeInfo < uint32 > ::NumColumns, TShaderParameterTypeInfo < uint32 > ::NumElements, TShaderParameterTypeInfo < uint32 > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdVisualizeLightGrid, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdVisualizeLightGrid
    zzMemberIdMaxPathIntensity;
    public: TShaderParameterTypeInfo < float > ::TAlignedType MaxPathIntensity;
    static_assert(TShaderParameterTypeInfo < float > ::BaseType != UBMT_INVALID, "Invalid type "
        "float"
        " of member "
        "MaxPathIntensity"
        ".");
    private: struct zzNextMemberIdMaxPathIntensity {
        enum {
            HasDeclaredResource = zzMemberIdMaxPathIntensity::HasDeclaredResource || !TShaderParameterTypeInfo < float > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdMaxPathIntensity, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < float > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "MaxPathIntensity"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, MaxPathIntensity) & (TShaderParameterTypeInfo < float > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "MaxPathIntensity"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "MaxPathIntensity", L "", __builtin_offsetof(zzTThisStruct, MaxPathIntensity), EUniformBufferBaseType(TShaderParameterTypeInfo < float > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < float > ::NumRows, TShaderParameterTypeInfo < float > ::NumColumns, TShaderParameterTypeInfo < float > ::NumElements, TShaderParameterTypeInfo < float > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdMaxPathIntensity, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdMaxPathIntensity
    zzMemberIdMaxNormalBias;
    public: TShaderParameterTypeInfo < float > ::TAlignedType MaxNormalBias;
    static_assert(TShaderParameterTypeInfo < float > ::BaseType != UBMT_INVALID, "Invalid type "
        "float"
        " of member "
        "MaxNormalBias"
        ".");
    private: struct zzNextMemberIdMaxNormalBias {
        enum {
            HasDeclaredResource = zzMemberIdMaxNormalBias::HasDeclaredResource || !TShaderParameterTypeInfo < float > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdMaxNormalBias, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < float > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "MaxNormalBias"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, MaxNormalBias) & (TShaderParameterTypeInfo < float > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "MaxNormalBias"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "MaxNormalBias", L "", __builtin_offsetof(zzTThisStruct, MaxNormalBias), EUniformBufferBaseType(TShaderParameterTypeInfo < float > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < float > ::NumRows, TShaderParameterTypeInfo < float > ::NumColumns, TShaderParameterTypeInfo < float > ::NumElements, TShaderParameterTypeInfo < float > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdMaxNormalBias, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdMaxNormalBias
    zzMemberIdFilterWidth;
    public: TShaderParameterTypeInfo < float > ::TAlignedType FilterWidth;
    static_assert(TShaderParameterTypeInfo < float > ::BaseType != UBMT_INVALID, "Invalid type "
        "float"
        " of member "
        "FilterWidth"
        ".");
    private: struct zzNextMemberIdFilterWidth {
        enum {
            HasDeclaredResource = zzMemberIdFilterWidth::HasDeclaredResource || !TShaderParameterTypeInfo < float > ::bIsStoredInConstantBuffer
        };
    };
    static zzFuncPtr zzAppendMemberGetPrev(zzNextMemberIdFilterWidth, TArray < FShaderParametersMetadata::FMember > * Members) {
        static_assert(TShaderParameterTypeInfo < float > ::bIsStoredInConstantBuffer || TIsArrayOrRefOfType < decltype(L ""), TCHAR > ::Value, "No shader type for "
            "FilterWidth"
            ".");
        static_assert((__builtin_offsetof(zzTThisStruct, FilterWidth) & (TShaderParameterTypeInfo < float > ::Alignment - 1)) == 0, "Misaligned uniform buffer struct member "
            "FilterWidth"
            ".");
        Members -> Add(FShaderParametersMetadata::FMember(L "FilterWidth", L "", __builtin_offsetof(zzTThisStruct, FilterWidth), EUniformBufferBaseType(TShaderParameterTypeInfo < float > ::BaseType), EShaderPrecisionModifier::Float, TShaderParameterTypeInfo < float > ::NumRows, TShaderParameterTypeInfo < float > ::NumColumns, TShaderParameterTypeInfo < float > ::NumElements, TShaderParameterTypeInfo < float > ::GetStructMetadata()));
        zzFuncPtr( * PrevFunc)(zzMemberIdFilterWidth, TArray < FShaderParametersMetadata::FMember > * );
        PrevFunc = zzAppendMemberGetPrev;
        return (zzFuncPtr) PrevFunc;
    }
    typedef zzNextMemberIdFilterWidth
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