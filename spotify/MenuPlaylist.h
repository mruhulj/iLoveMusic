#pragma once
#include "Playlist_Struct.h"
//#include "Update_Lagu.h"
//#include "Log_Reg.h"


namespace spotify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// Summary for MenuPlaylist
	/// </summary>
	public ref class MenuPlaylist : public System::Windows::Forms::Form
	{
	public:
		MenuPlaylist(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuPlaylist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_tambah;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Button^ btn_delete;

	private: System::Windows::Forms::TextBox^ tb_searching;
	protected:

	protected:





	private: System::Windows::Forms::Button^ btn_shuffle;
	private: System::Windows::Forms::Button^ btn_download;
	private: System::Windows::Forms::Button^ btn_logout;



	private: System::Windows::Forms::DataGridView^ Tabel_Playlist;



	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clm_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clm_judul;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clm_penyanyi;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPlaylist::typeid));
			this->btn_tambah = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->tb_searching = (gcnew System::Windows::Forms::TextBox());
			this->btn_shuffle = (gcnew System::Windows::Forms::Button());
			this->btn_download = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->Tabel_Playlist = (gcnew System::Windows::Forms::DataGridView());
			this->clm_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clm_judul = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clm_penyanyi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabel_Playlist))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_tambah
			// 
			this->btn_tambah->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tambah.BackgroundImage")));
			this->btn_tambah->Font = (gcnew System::Drawing::Font(L"Gotham", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->btn_tambah->Location = System::Drawing::Point(12, 58);
			this->btn_tambah->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_tambah->Name = L"btn_tambah";
			this->btn_tambah->Size = System::Drawing::Size(133, 30);
			this->btn_tambah->TabIndex = 0;
			this->btn_tambah->Text = L"Tambah Lagu";
			this->btn_tambah->UseVisualStyleBackColor = true;
			this->btn_tambah->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_tambah_Click);
			// 
			// btn_update
			// 
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Gotham", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->btn_update->Location = System::Drawing::Point(12, 103);
			this->btn_update->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(133, 30);
			this->btn_update->TabIndex = 1;
			this->btn_update->Text = L"Update Lagu";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_update_click);
			// 
			// btn_delete
			// 
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Gotham", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->btn_delete->Location = System::Drawing::Point(12, 151);
			this->btn_delete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(133, 30);
			this->btn_delete->TabIndex = 2;
			this->btn_delete->Text = L"Delete Lagu";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_delete_Click);
			// 
			// tb_searching
			// 
			this->tb_searching->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_searching->Location = System::Drawing::Point(235, 16);
			this->tb_searching->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_searching->Name = L"tb_searching";
			this->tb_searching->Size = System::Drawing::Size(445, 22);
			this->tb_searching->TabIndex = 4;
			// 
			// btn_shuffle
			// 
			this->btn_shuffle->Font = (gcnew System::Drawing::Font(L"Gotham", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->btn_shuffle->Location = System::Drawing::Point(12, 196);
			this->btn_shuffle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_shuffle->Name = L"btn_shuffle";
			this->btn_shuffle->Size = System::Drawing::Size(133, 30);
			this->btn_shuffle->TabIndex = 6;
			this->btn_shuffle->Text = L"Shuffle Lagu";
			this->btn_shuffle->UseVisualStyleBackColor = true;
			this->btn_shuffle->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_shuffle_Click);
			// 
			// btn_download
			// 
			this->btn_download->Font = (gcnew System::Drawing::Font(L"Gotham", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->btn_download->Location = System::Drawing::Point(12, 241);
			this->btn_download->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_download->Name = L"btn_download";
			this->btn_download->Size = System::Drawing::Size(133, 30);
			this->btn_download->TabIndex = 7;
			this->btn_download->Text = L"Download Playlist";
			this->btn_download->UseVisualStyleBackColor = true;
			this->btn_download->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_download_Click);
			// 
			// btn_logout
			// 
			this->btn_logout->Font = (gcnew System::Drawing::Font(L"Gotham", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->btn_logout->Location = System::Drawing::Point(12, 357);
			this->btn_logout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(133, 30);
			this->btn_logout->TabIndex = 8;
			this->btn_logout->Text = L"Logout";
			this->btn_logout->UseVisualStyleBackColor = true;
			this->btn_logout->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_logout_Click);
			// 
			// Tabel_Playlist
			// 
			this->Tabel_Playlist->AllowUserToAddRows = false;
			this->Tabel_Playlist->AllowUserToDeleteRows = false;
			this->Tabel_Playlist->AllowUserToOrderColumns = true;
			this->Tabel_Playlist->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Tabel_Playlist->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Tabel_Playlist->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tabel_Playlist->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->clm_id,
					this->clm_judul, this->clm_penyanyi
			});
			this->Tabel_Playlist->Location = System::Drawing::Point(235, 58);
			this->Tabel_Playlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Tabel_Playlist->Name = L"Tabel_Playlist";
			this->Tabel_Playlist->ReadOnly = true;
			this->Tabel_Playlist->RowHeadersWidth = 51;
			this->Tabel_Playlist->RowTemplate->Height = 24;
			this->Tabel_Playlist->Size = System::Drawing::Size(488, 327);
			this->Tabel_Playlist->TabIndex = 9;
			this->Tabel_Playlist->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MenuPlaylist::Tabel_Playlist_CellContentClick);
			this->Tabel_Playlist->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MenuPlaylist::Tabel_Playlist_CellMouseClick);
			// 
			// clm_id
			// 
			this->clm_id->HeaderText = L"ID";
			this->clm_id->MinimumWidth = 6;
			this->clm_id->Name = L"clm_id";
			this->clm_id->ReadOnly = true;
			this->clm_id->Width = 50;
			// 
			// clm_judul
			// 
			this->clm_judul->HeaderText = L"Judul Lagu";
			this->clm_judul->MinimumWidth = 6;
			this->clm_judul->Name = L"clm_judul";
			this->clm_judul->ReadOnly = true;
			this->clm_judul->Width = 150;
			// 
			// clm_penyanyi
			// 
			this->clm_penyanyi->HeaderText = L"Nama Penyanyi";
			this->clm_penyanyi->MinimumWidth = 6;
			this->clm_penyanyi->Name = L"clm_penyanyi";
			this->clm_penyanyi->ReadOnly = true;
			this->clm_penyanyi->Width = 150;
			// 
			// btn_search
			// 
			this->btn_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_search->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search.BackgroundImage")));
			this->btn_search->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search.Image")));
			this->btn_search->Location = System::Drawing::Point(688, 10);
			this->btn_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(35, 34);
			this->btn_search->TabIndex = 10;
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_search_Click);
			// 
			// MenuPlaylist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(792, 399);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->Tabel_Playlist);
			this->Controls->Add(this->btn_logout);
			this->Controls->Add(this->btn_download);
			this->Controls->Add(this->btn_shuffle);
			this->Controls->Add(this->tb_searching);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_tambah);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MenuPlaylist";
			this->Text = L"MenuPlaylist";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MenuPlaylist::MenuPlaylist_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MenuPlaylist::MenuPlaylist_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabel_Playlist))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ PB_username;
	public: bool status_up_lagu = false;
	public: bool statusUpdate = false;
	public: bool logout = false;
	private: int selected_id;
	public: String^ selected_lagu;
		  public: String^ selected_penyanyi;
	public: int ExitMenu = 0;
	private: List<Playlist^>^ menuplaylist = gcnew List<Playlist^>();

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_tambah_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Update_Lagu^ TambahLagu = gcnew Update_Lagu();
		TambahLagu->ShowDialog();*/
		statusUpdate = true;
		Close();
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < menuplaylist->Count; i++) {
			if (menuplaylist[i]->id == selected_id)
			{
				menuplaylist->RemoveAt(i);
			}
		}
		Tabel_Playlist->Rows->Clear();
		for (int i = 0; i < menuplaylist->Count; i++) {

			Tabel_Playlist->Rows->Add(menuplaylist[i]->id, menuplaylist[i]->judul, menuplaylist[i]->penyayi);
		}

		StreamWriter^ FilePlaylist = gcnew StreamWriter("playlist-" + PB_username + ".txt");
		for (int i = 0; i < menuplaylist->Count; i++) {

			String^ ReplaceJudul = menuplaylist[i]->judul->TrimEnd()->Replace(" ", "-");
			String^ ReplacePenyanyi = menuplaylist[i]->penyayi->TrimEnd()->Replace(" ", "-");

			FilePlaylist->WriteLine(i + 1 + " " + ReplaceJudul + " " + ReplacePenyanyi);
		}
		FilePlaylist->Close();
		Tabel_Playlist->Rows->Clear();
		menuplaylist->Clear();
		StreamReader^ ReadLagu = gcnew StreamReader("playlist-" + PB_username + ".txt");
		String^ line;
		int count = 1;
		Tabel_Playlist->Rows->Clear();
		while ((line = ReadLagu->ReadLine()) != nullptr) {
			int spasi;
			int id;
			//String^ Strip;
			spasi = line->IndexOf(" ");
			id = Convert::ToInt32(line->Substring(0, spasi));

			line = line->Substring(spasi + 1);
			String^ judul;
			String^ penyanyi;
			spasi = line->IndexOf(" ");
			judul = line->Substring(0, spasi);
			penyanyi = line->Substring(spasi + 1);

			judul = judul->Replace("-", " ");
			penyanyi = penyanyi->Replace("-", " ");

			Playlist^ dump = gcnew Playlist(judul, penyanyi, count);
			//MessageBox::Show(dump->id + dump->judul + dump->penyayi, "Menu", MessageBoxButtons::OK);
			menuplaylist->Add(dump);
			count++;

			//MessageBox::Show(id + "\n" + judul + "\n" + penyanyi + "\n", "USERNAME", MessageBoxButtons::OK);
		}
		ReadLagu->Close();
		for (int i = 0; i < menuplaylist->Count; i++) {

			Tabel_Playlist->Rows->Add(menuplaylist[i]->id, menuplaylist[i]->judul, menuplaylist[i]->penyayi);
		}
	}
	private: System::Void Tabel_Playlist_CellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		selected_lagu = Tabel_Playlist->CurrentRow->Cells[1]->Value->ToString();
		selected_penyanyi = Tabel_Playlist->CurrentRow->Cells[2]->Value->ToString();
		selected_id = Convert::ToInt32(Tabel_Playlist->CurrentRow->Cells[0]->Value);

	}
	private: System::Void btn_update_click(System::Object^ sender, System::EventArgs^ e) {
		status_up_lagu = true;
		Close();

	}
	private: System::Void MenuPlaylist_Load(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ ReadLagu = gcnew StreamReader("playlist-" + PB_username + ".txt");
		String^ line;
		int count = 1;
		Tabel_Playlist->Rows->Clear();
		while ((line = ReadLagu->ReadLine()) != nullptr) {
			int spasi;
			int id;
			//String^ Strip;
			spasi = line->IndexOf(" ");
			id = Convert::ToInt32(line->Substring(0, spasi));

			line = line->Substring(spasi + 1);
			String^ judul;
			String^ penyanyi;
			spasi = line->IndexOf(" ");
			judul = line->Substring(0, spasi);
			penyanyi = line->Substring(spasi + 1);

			judul = judul->Replace("-", " ");
			penyanyi = penyanyi->Replace("-", " ");

			Playlist^ dump = gcnew Playlist(judul, penyanyi, count);
			//MessageBox::Show(dump->id + dump->judul + dump->penyayi, "Menu", MessageBoxButtons::OK);
			menuplaylist->Add(dump);
			count++;

			//MessageBox::Show(id + "\n" + judul + "\n" + penyanyi + "\n", "USERNAME", MessageBoxButtons::OK);
		}
		ReadLagu->Close();

		for (int i = 0; i < menuplaylist->Count; i++) {

			Tabel_Playlist->Rows->Add(menuplaylist[i]->id, menuplaylist[i]->judul, menuplaylist[i]->penyayi);
		}
	}
	private: System::Void btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		logout = true;
		Close();
	}
	private: System::Void Tabel_Playlist_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//public: String^ Pilih_Lagu;

	}
	private: System::Void btn_download_Click(System::Object^ sender, System::EventArgs^ e) {

		StreamWriter^ Download = gcnew StreamWriter(PB_username + "-Music.txt");
		Download->WriteLine(" ---------------------------------------------------------------------------------------------------------------------");
		Download->WriteLine("| ID |                              Judul Lagu                         |                  Penyanyi                    |");
		Download->WriteLine(" ---------------------------------------------------------------------------------------------------------------------");

		for (int i = 0; i < menuplaylist->Count; i++) {

			Download->WriteLine(String::Format("| {0,-3}| {1, -64} | {2,-16} | ", menuplaylist[i]->id, menuplaylist[i]->judul->ToString(), menuplaylist[i]->penyayi->ToString()));
		}

		Download->WriteLine(" ---------------------------------------------------------------------------------------------------------------------");
		Download->Close();
	}
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		//int id = Convert::ToInt32(tb_searching->Text);
		String^ judul = tb_searching->Text->ToString();
		String^ penyanyi = tb_searching->Text->ToString();

		for (int i = 0; i < menuplaylist->Count; i++) {
			if ((judul == menuplaylist[i]->judul) || (penyanyi == menuplaylist[i]->penyayi)) {
				MessageBox::Show(menuplaylist[i]->id + " " + menuplaylist[i]->judul + " " + menuplaylist[i]->penyayi, "Hasil Searching", MessageBoxButtons::OK);
			}
		}
	}
	private: System::Void btn_shuffle_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rand = gcnew Random();
		int random = rand->Next(menuplaylist->Count);

		MessageBox::Show(menuplaylist[random]->id + " " + menuplaylist[random]->judul + " " + menuplaylist[random]->penyayi, "Shuffle", MessageBoxButtons::OK);
	}
	private: System::Void MenuPlaylist_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//ExitMenu = 1;
	}
	};
}
