//
// Created by zsy on 3/11/2022.
//

#include "main.h"
#include <ntddk.h>



VOID driverUnload(PDRIVER_OBJECT DriverObject) {
    UNREFERENCED_PARAMETER(DriverObject);
}

extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
    UNREFERENCED_PARAMETER(RegistryPath);
    DriverObject->DriverUnload = driverUnload;
    KdPrint(("Sample driver initialized successfully\n"));
    return STATUS_SUCCESS;
}
