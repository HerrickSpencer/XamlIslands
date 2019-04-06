#pragma once

#include "resource.h"

#include "XamlBridge.h"

#define InitialHeight 800
#define InitialWidth  800
#define XamlIslandMargin 30

ATOM                MyRegisterClass(HINSTANCE hInstance);

winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource InitInstance(HINSTANCE, int);

LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);

INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
