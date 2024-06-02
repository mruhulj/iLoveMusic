#include "Log_Reg.h"
#include "MenuPlaylist.h"
#include "Update_Lagu.h"

using namespace System;
using namespace System::Windows::Forms;

//void main(array<String^>^ args) {
//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false);
//
//
//	spotify::Log_Reg logReg;
//	bool statusprogram = true;
//
//	while (statusprogram) {
//		logReg.ShowDialog();
//
//		if (logReg.ExitLog == true) {
//			statusprogram = false;
//		}
//		if (logReg.login)
//		{
//			spotify::MenuPlaylist menuplaylist;
//			spotify::Update_Lagu update_lagu;
//
//			menuplaylist.PB_username = logReg.PB_username;
//			menuplaylist.statusUpdate = update_lagu.statusUpdate;
//
//
//			while (menuplaylist.ExitMenu != 1) {
//				menuplaylist.ShowDialog();
//				/*if (menuplaylist.ExitMenu == 1) {
//					MessageBox::Show("logout", "weaeawea", MessageBoxButtons::OK);
//					break;
//				}*/
//				if (menuplaylist.statusUpdate) {
//					update_lagu.PB_username = menuplaylist.PB_username;
//					update_lagu.ShowDialog();
//					menuplaylist.ExitMenu = 0;
//
//				}
//				
//				//logReg.Close();
//			}
//
//		}
//	}
//}


void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	spotify::Log_Reg logReg;
	bool statusProgram = true;

	while (statusProgram) {
		logReg.ShowDialog();

		while (logReg.login) {
			spotify::MenuPlaylist menuPlaylist;
			menuPlaylist.PB_username = logReg.PB_username;
			menuPlaylist.ShowDialog();
			if (menuPlaylist.logout) {
				break;
			}
			if (menuPlaylist.statusUpdate || menuPlaylist.status_up_lagu) {
				spotify::Update_Lagu updateLagu;
				updateLagu.PB_username = menuPlaylist.PB_username;
				updateLagu.status_up_lagu = menuPlaylist.status_up_lagu;
				updateLagu.selected_lagu = menuPlaylist.selected_lagu;
				updateLagu.selected_penyanyi = menuPlaylist.selected_penyanyi;
				updateLagu.ShowDialog();
				if (updateLagu.statusUpdate || updateLagu.status_up_lagu) {
					continue;
				}
			}
		}
	}



}