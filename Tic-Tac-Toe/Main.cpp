#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include <Windows.h>
#include "resource.h"
#include <string>
#include <vector>

int player = 1;

std::string getText(HWND hButton)
{
	char buffer[2];
	GetWindowTextA(hButton, buffer, sizeof(buffer));
	std::string text = buffer;
	return text;
}

void checkWin(std::vector<HWND> &hButtons, HWND &hWnd)
{
	if (getText(hButtons[0]) == getText(hButtons[1]) && getText(hButtons[1]) == getText(hButtons[2]))
	{
		if (getText(hButtons[0]) != "")
		{
			if (player == 0)
				MessageBox(hWnd, L"X Wins", L"Winner", MB_OK);
			else
				MessageBox(hWnd, L"O Wins", L"Winner", MB_OK);
		}
	}
	if (getText(hButtons[3]) == getText(hButtons[4]) && getText(hButtons[4]) == getText(hButtons[5]))
	{
		if (getText(hButtons[3]) != "")
		{
			if (player == 0)
				MessageBox(hWnd, L"X Wins", L"Winner", MB_OK);
			else
				MessageBox(hWnd, L"O Wins", L"Winner", MB_OK);
		}
	}
	if (getText(hButtons[6]) == getText(hButtons[7]) && getText(hButtons[7]) == getText(hButtons[8]))
	{
		if (getText(hButtons[6]) != "")
		{
			if (player == 0)
				MessageBox(hWnd, L"X Wins", L"Winner", MB_OK);
			else
				MessageBox(hWnd, L"O Wins", L"Winner", MB_OK);
		}
	}
	if (getText(hButtons[0]) == getText(hButtons[3]) && getText(hButtons[3]) == getText(hButtons[6]))
	{
		if (getText(hButtons[0]) != "")
		{
			if (player == 0)
				MessageBox(hWnd, L"X Wins", L"Winner", MB_OK);
			else
				MessageBox(hWnd, L"O Wins", L"Winner", MB_OK);
		}
	}
	if (getText(hButtons[1]) == getText(hButtons[4]) && getText(hButtons[4]) == getText(hButtons[7]))
	{
		if (getText(hButtons[1]) != "")
		{
			if (player == 0)
				MessageBox(hWnd, L"X Wins", L"Winner", MB_OK);
			else
				MessageBox(hWnd, L"O Wins", L"Winner", MB_OK);
		}
	}
	if (getText(hButtons[2]) == getText(hButtons[5]) && getText(hButtons[5]) == getText(hButtons[8]))
	{
		if (getText(hButtons[2]) != "")
		{
			if (player == 0)
				MessageBox(hWnd, L"X Wins", L"Winner", MB_OK);
			else
				MessageBox(hWnd, L"O Wins", L"Winner", MB_OK);
		}
	}
	if (getText(hButtons[0]) == getText(hButtons[4]) && getText(hButtons[4]) == getText(hButtons[8]))
	{
		if (getText(hButtons[0]) != "")
		{
			if (player == 0)
				MessageBox(hWnd, L"X Wins", L"Winner", MB_OK);
			else
				MessageBox(hWnd, L"O Wins", L"Winner", MB_OK);
		}
	}
	if (getText(hButtons[2]) == getText(hButtons[4]) && getText(hButtons[4]) == getText(hButtons[6]))
	{
		if (getText(hButtons[2]) != "")
		{
			if (player == 0)
				MessageBox(hWnd, L"X Wins", L"Winner", MB_OK);
			else
				MessageBox(hWnd, L"O Wins", L"Winner", MB_OK);
		}
	}
}

int CALLBACK wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR szCmdLine, int nCmdShow)
{
	MSG msg;
	HWND hwnd;
	WNDCLASSEX wc{ sizeof(WNDCLASSEX) };
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wc.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(MAIN_ICON));
	wc.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(MAIN_ICON));
	wc.hbrBackground = reinterpret_cast<HBRUSH>(GetStockObject(WHITE_BRUSH));
	wc.hInstance = hInstance;
	wc.lpfnWndProc = [](HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)->LRESULT
	{
		static HWND hButton1;
		static HWND hButton2;
		static HWND hButton3;
		static HWND hButton4;
		static HWND hButton5;
		static HWND hButton6;
		static HWND hButton7;
		static HWND hButton8;
		static HWND hButton9;
		std::vector<HWND> hButtons =
		{
			hButton1,
			hButton2,
			hButton3,
			hButton4,
			hButton5,
			hButton6,
			hButton7,
			hButton8,
			hButton9
		};
		switch (uMsg)
		{
			// Creating all buttons
			case WM_CREATE:
			{
				hButton1 = CreateWindow(
					L"BUTTON",
					L"",
					WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
					5, 5, 150, 150, hWnd, reinterpret_cast<HMENU>(1), nullptr, nullptr
				);

				hButton2 = CreateWindow(
					L"BUTTON",
					L"",
					WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
					160, 5, 150, 150, hWnd, reinterpret_cast<HMENU>(2), nullptr, nullptr
				);

				hButton3 = CreateWindow(
					L"BUTTON",
					L"",
					WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
					315, 5, 150, 150, hWnd, reinterpret_cast<HMENU>(3), nullptr, nullptr
				);

				hButton4 = CreateWindow(
					L"BUTTON",
					L"",
					WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
					5, 160, 150, 150, hWnd, reinterpret_cast<HMENU>(4), nullptr, nullptr
				);

				hButton5 = CreateWindow(
					L"BUTTON",
					L"",
					WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
					160, 160, 150, 150, hWnd, reinterpret_cast<HMENU>(5), nullptr, nullptr
				);

				hButton6 = CreateWindow(
					L"BUTTON",
					L"",
					WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
					315, 160, 150, 150, hWnd, reinterpret_cast<HMENU>(6), nullptr, nullptr
				);

				hButton7 = CreateWindow(
					L"BUTTON",
					L"",
					WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
					5, 315, 150, 150, hWnd, reinterpret_cast<HMENU>(7), nullptr, nullptr
				);

				hButton8 = CreateWindow(
					L"BUTTON",
					L"",
					WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
					160, 315, 150, 150, hWnd, reinterpret_cast<HMENU>(8), nullptr, nullptr
				);

				hButton9 = CreateWindow(
					L"BUTTON",
					L"",
					WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
					315, 315, 150, 150, hWnd, reinterpret_cast<HMENU>(9), nullptr, nullptr
				);

				HWND hButtonNewGame = CreateWindow(
					L"BUTTON",
					L"New Game",
					WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
					160, 470, 150, 50, hWnd, reinterpret_cast<HMENU>(10), nullptr, nullptr
				);

				HFONT hFontGameButtons = CreateFont(40, 0, 0, 0, FW_REGULAR, false, false, false, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, L"Arial");
				HFONT hFontNewGameButton = CreateFont(20, 0, 0, 0, FW_REGULAR, false, false, false, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, L"Arial");
				SendMessage(hButton1, WM_SETFONT, reinterpret_cast<WPARAM>(hFontGameButtons), true);
				SendMessage(hButton2, WM_SETFONT, reinterpret_cast<WPARAM>(hFontGameButtons), true);
				SendMessage(hButton3, WM_SETFONT, reinterpret_cast<WPARAM>(hFontGameButtons), true);
				SendMessage(hButton4, WM_SETFONT, reinterpret_cast<WPARAM>(hFontGameButtons), true);
				SendMessage(hButton5, WM_SETFONT, reinterpret_cast<WPARAM>(hFontGameButtons), true);
				SendMessage(hButton6, WM_SETFONT, reinterpret_cast<WPARAM>(hFontGameButtons), true);
				SendMessage(hButton7, WM_SETFONT, reinterpret_cast<WPARAM>(hFontGameButtons), true);
				SendMessage(hButton8, WM_SETFONT, reinterpret_cast<WPARAM>(hFontGameButtons), true);
				SendMessage(hButton9, WM_SETFONT, reinterpret_cast<WPARAM>(hFontGameButtons), true);
				SendMessage(hButtonNewGame, WM_SETFONT, reinterpret_cast<WPARAM>(hFontNewGameButton), true);
			}
			return 0;

			case WM_COMMAND:
			{
				switch (LOWORD(wParam))
				{
					char buffer[2];
					case 1:
					{
						if (getText(hButton1) == "")
						{
							if (player == 1)
							{
								SetWindowTextA(hButton1, "X");
								player = 0;
							}
							else
							{
								SetWindowTextA(hButton1, "O");
								player = 1;
							}
						}
						checkWin(hButtons, hWnd);
					}
					break;

					case 2:
					{
						if (getText(hButton2) == "")
						{
							if (player == 1)
							{
								SetWindowTextA(hButton2, "X");
								player = 0;
							}
							else
							{
								SetWindowTextA(hButton2, "O");
								player = 1;
							}
						}
						checkWin(hButtons, hWnd);
					}
					break;

					case 3:
					{
						if (getText(hButton3) == "")
						{
							if (player == 1)
							{
								SetWindowTextA(hButton3, "X");
								player = 0;
							}
							else
							{
								SetWindowTextA(hButton3, "O");
								player = 1;
							}
						}
						checkWin(hButtons, hWnd);
					}
					break;

					case 4:
					{
						if (getText(hButton4) == "")
						{
							if (player == 1)
							{
								SetWindowTextA(hButton4, "X");
								player = 0;
							}
							else
							{
								SetWindowTextA(hButton4, "O");
								player = 1;
							}
						}
						checkWin(hButtons, hWnd);
					}
					break;

					case 5:
					{
						if (getText(hButton5) == "")
						{
							if (player == 1)
							{
								SetWindowTextA(hButton5, "X");
								player = 0;
							}
							else
							{
								SetWindowTextA(hButton5, "O");
								player = 1;
							}
						}
						checkWin(hButtons, hWnd);
					}
					break;

					case 6:
					{
						if (getText(hButton6) == "")
						{
							if (player == 1)
							{
								SetWindowTextA(hButton6, "X");
								player = 0;
							}
							else
							{
								SetWindowTextA(hButton6, "O");
								player = 1;
							}
						}
						checkWin(hButtons, hWnd);
					}
					break;

					case 7:
					{
						if (getText(hButton7) == "")
						{
							if (player == 1)
							{
								SetWindowTextA(hButton7, "X");
								player = 0;
							}
							else
							{
								SetWindowTextA(hButton7, "O");
								player = 1;
							}
						}
						checkWin(hButtons, hWnd);
					}
					break;

					case 8:
					{
						if (getText(hButton8) == "")
						{
							if (player == 1)
							{
								SetWindowTextA(hButton8, "X");
								player = 0;
							}
							else
							{
								SetWindowTextA(hButton8, "O");
								player = 1;
							}
						}
						checkWin(hButtons, hWnd);
					}
					break;

					case 9:
					{
						if (getText(hButton9) == "")
						{
							if (player == 1)
							{
								SetWindowTextA(hButton9, "X");
								player = 0;
							}
							else
							{
								SetWindowTextA(hButton9, "O");
								player = 1;
							}
						}
						checkWin(hButtons, hWnd);
					}
					break;

					case 10:
					{
						SetWindowTextA(hButton1, "");
						SetWindowTextA(hButton2, "");
						SetWindowTextA(hButton3, "");
						SetWindowTextA(hButton4, "");
						SetWindowTextA(hButton5, "");
						SetWindowTextA(hButton6, "");
						SetWindowTextA(hButton7, "");
						SetWindowTextA(hButton8, "");
						SetWindowTextA(hButton9, "");
						player = 1;
					}
					break;
				}
			}
			return 0;

			// Destroy Window, when close
			case WM_DESTROY:
			{
				PostQuitMessage(EXIT_SUCCESS);
			}
			return 0;
		}
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
	};
	wc.lpszClassName = L"Tic-Tac-Toe Class";
	wc.lpszMenuName = nullptr;
	wc.style = CS_VREDRAW | CS_HREDRAW;

	if (!RegisterClassEx(&wc))
	{
		return EXIT_FAILURE;
	}

	if (hwnd = CreateWindow(wc.lpszClassName, L"Tic-Tac-Toe", WS_SYSMENU, (GetSystemMetrics(SM_CXSCREEN) - 486) / 2, (GetSystemMetrics(SM_CYSCREEN) - 565) / 2, 486, 565, nullptr, nullptr, wc.hInstance, nullptr);
		hwnd == INVALID_HANDLE_VALUE)
	{
		return EXIT_FAILURE;
	}

	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);

	while (GetMessage(&msg, nullptr, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return static_cast<int>(msg.wParam);
}