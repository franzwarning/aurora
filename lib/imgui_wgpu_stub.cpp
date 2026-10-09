// Emscripten stub for imgui's WebGPU renderer backend.
//
// imgui_impl_wgpu.cpp's emscripten path targets the legacy emscripten
// webgpu.h API (WGPUImageCopyTexture, WGPUProgrammableStageDescriptor, ...)
// which no longer exists in emdawnwebgpu's headers, so the backend cannot be
// compiled for the browser. Aurora's debug UI is non-essential there; these
// no-op stubs satisfy lib/imgui.cpp. ImGui itself (context, input routing,
// draw data) still works — the draw data is simply never rasterized.

#include "backends/imgui_impl_wgpu.h"

bool ImGui_ImplWGPU_Init(ImGui_ImplWGPU_InitInfo*) { return true; }
void ImGui_ImplWGPU_Shutdown() {}
void ImGui_ImplWGPU_NewFrame() {}
void ImGui_ImplWGPU_RenderDrawData(ImDrawData*, WGPURenderPassEncoder) {}
bool ImGui_ImplWGPU_CreateDeviceObjects() { return true; }
void ImGui_ImplWGPU_InvalidateDeviceObjects() {}
