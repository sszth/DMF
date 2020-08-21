/*++

    Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    DmfModules.Template.h

Abstract:

    Definitions specific for the "Template" DMF Library.

Environment:

    Kernel-mode Driver Framework
    User-mode Driver Framework

--*/

#pragma once

// Include DMF Framework and Public Modules.
//
#include "..\Modules.Library\DmfModules.Library.h"
#include "DmfModules.Template.Public.h"

// NOTE: The definitions in this file must be surrounded by this annotation to ensure
//       that both C and C++ Clients can easily compile and link with Modules in this Library.
//
#if defined(__cplusplus)
extern "C"
{
#endif // defined(__cplusplus)

// Other library specific includes.
//

// Interfaces in this Library.
//
#include "Dmf_Interface_SampleInterface.h"
#include "Dmf_Interface_SampleInterfaceUpper.h"
#include "Dmf_Interface_SampleInterfaceLower.h"

// All the Modules in this Library.
//
#include "Dmf_Template.h"
#include "Dmf_ToasterBus.h"
#include "Dmf_OsrFx2.h"

#include "Dmf_LegacyProtocol.h"
#include "Dmf_LegacyTransportA.h"
#include "Dmf_LegacyTransportB.h"

#include "Dmf_SampleInterfaceProtocol1.h"
#include "Dmf_SampleInterfaceTransport1.h"
#include "Dmf_SampleInterfaceTransport2.h"

#include "Dmf_SampleInterfaceUpperProtocol.h"
#include "Dmf_SampleInterfaceLowerProtocol.h"
#include "Dmf_SampleInterfaceUpperTransport1.h"
#include "Dmf_SampleInterfaceUpperTransport2.h"
#include "Dmf_SampleInterfaceLowerTransport1.h"
#include "Dmf_SampleInterfaceLowerTransport2.h"

#include "Dmf_NonPnp.h"
#include "Dmf_VirtualHidMiniSample.h"
#include "Dmf_VirtualEyeGaze.h"
#include "Dmf_EyeGazeGhost.h"

// NOTE: The definitions in this file must be surrounded by this annotation to ensure
//       that both C and C++ Clients can easily compile and link with Modules in this Library.
//
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)

// eof: DmfModules.Template.h
//
