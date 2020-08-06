// Fill out your copyright notice in the Description page of Project Settings.


#include "GetProjectVersion.h"

FString UGetProjectVersion::GetProjectVersion()
{
    FString version;
    GConfig->GetString(
        TEXT("/Script/EngineSettings.GeneralProjectSettings"),
        TEXT("ProjectVersion"),
        version,
        GGameIni
        );
    return version;
}