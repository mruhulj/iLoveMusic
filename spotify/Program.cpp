#include "Log_Reg.h"
#include "MenuPlaylist.h"
#include "Update_Lagu.h"
#include "playingmusic.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Media;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	spotify::Log_Reg logReg;
	spotify::MenuPlaylist form;

	//Application::Run(% form);
	bool statusProgram = true;

	while (statusProgram) {
		logReg.ShowDialog();
		if (logReg.ExitLog) {
			statusProgram = false;
			break;
		}

		while (logReg.login) {
			spotify::MenuPlaylist menuPlaylist;
			spotify::playingmusic playingmusic;
			spotify::Update_Lagu updatelagu;

			menuPlaylist.PB_username = logReg.PB_username;
			menuPlaylist.ShowDialog();

			menuPlaylist.openfile = updatelagu.fileName;
			playingmusic.selected_lagu = menuPlaylist.selected_lagu;
			playingmusic.selected_penyanyi = menuPlaylist.selected_penyanyi;
			playingmusic.random = menuPlaylist.random;
			playingmusic.rand_music = menuPlaylist.rand_music;
			playingmusic.Shuffle_Lagu = menuPlaylist.Shuffle_Lagu;
			playingmusic.Shuffle_Penyanyi = menuPlaylist.Shuffle_Penyanyi;
			
			

			if (menuPlaylist.playingmusic) {
				playingmusic.ShowDialog();

			}

			if (menuPlaylist.logout) {
				break;
			}
			if (menuPlaylist.exitbtn) {
				statusProgram = false;
				break;
			}
			if (menuPlaylist.statusUpdate || menuPlaylist.status_up_lagu) {
				spotify::Update_Lagu updateLagu;
				updateLagu.PB_username = menuPlaylist.PB_username;

				//updateLagu.statusUpdate = menuPlaylist.statusUpdate;
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