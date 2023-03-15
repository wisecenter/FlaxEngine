// Copyright (c) 2012-2023 Wojciech Figat. All rights reserved.

#pragma once

#if PLATFORM_IOS

#include "../Apple/ApplePlatform.h"

/// <summary>
/// The iOS platform implementation and application management utilities.
/// </summary>
class FLAXENGINE_API iOSPlatform : public ApplePlatform
{
public:

    // [ApplePlatform]
    static bool Init();
    static void LogInfo();
    static void Tick();
    static int32 GetDpi();
	static Guid GetUniqueDeviceId();
    static String GetComputerName();
    static Float2 GetDesktopSize();
	static String GetMainDirectory();
    static Window* CreateWindow(const CreateWindowSettings& settings);
};

#endif
