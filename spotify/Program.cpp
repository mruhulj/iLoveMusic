#include "Log_Reg.h"
#include "MenuPlaylist.h"
#include "Update_Lagu.h"

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
			spotify::MenuPlaylist menuplaylist;
				spotify::Update_Lagu update_lagu;

			menuplaylist.PB_username = logReg.PB_username;
				menuplaylist.statusUpdate = update_lagu.statusUpdate;


			//MessageBox::Show(menuplaylist.PB_username, "usernameeee", MessageBoxButtons::OK);
				while (menuplaylist.ExitMenu != 1) {
					menuplaylist.ShowDialog();
					if (menuplaylist.statusUpdate && (menuplaylist.ExitMenu == 0)) {
						update_lagu.PB_username = menuplaylist.PB_username;
						update_lagu.ShowDialog();

					}
					//logReg.Close();
				}

		}
	}
}