#include "Log_Reg.h"
#include "MenuPlaylist.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	
	spotify::Log_Reg logReg;

	while (true) {
		logReg.ShowDialog();
		if (logReg.login)
		{
			MessageBox::Show(logReg.PB_username, "usernameeee", MessageBoxButtons::OK);
			spotify::MenuPlaylist menuplaylist;

			menuplaylist.PB_username = logReg.PB_username;
			MessageBox::Show(menuplaylist.PB_username, "usernameeee", MessageBoxButtons::OK);
			menuplaylist.ShowDialog();
			//logReg.Close();

		}
	}
}