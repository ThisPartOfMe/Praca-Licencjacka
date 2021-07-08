#include "Dylemat.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Licencjat::Dylemat form;
	Application::Run(%form);
}