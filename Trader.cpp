//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Unit6.cpp", Form6);
USEFORM("Unit5.cpp", Form5);
USEFORM("Unit4.cpp", Form4);
USEFORM("Unit9.cpp", Form9);
USEFORM("Unit8.cpp", Form8);
USEFORM("Unit7.cpp", Form7);
USEFORM("Unit3.cpp", Form3);
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit12.cpp", Form12);
USEFORM("Unit11.cpp", Form11);
USEFORM("Unit10.cpp", Form10);
USEFORM("Unit13.cpp", Form13);
USEFORM("Unit14.cpp", Form14);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		// Пытаемся открыть мьютекс.
		HANDLE hMutex = OpenMutex( MUTEX_ALL_ACCESS, 0, L"Trader");
		if(!hMutex) 								// Мьютекса не существует. То есть,  это первый экземпляр, создаем мьютекс.
		hMutex = CreateMutex(0, 0, L"Trader");
		else 										// Мьютекс существует , то есть , запущен // второй экземпляр, возвращаемся из функции.
			{
			MessageBox(0,L"Trader is already run !", L"Trader MUTEX is working", MB_OK + MB_ICONWARNING);
			return 0;
			}


		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Light");
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm8), &Form8);
		Application->Run();


		 ReleaseMutex(hMutex);                                // Приложение закрывается , // освобождаем мьютекс.
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
