#include "FRM_Principal.h"
#include"STATISTIQUES.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)

{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	A2POOCorb6::FRM_Principal mainFRM;
	Application::Run(% mainFRM);
	Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
	A2POOCorb6::STATISTIQUES statFRM;
    Application::Run(% statFRM);
}