#pragma once
#include "Playlist_Struct.h"
#include "conio.h"
#include "Update_Lagu.h"
#include "Log_Reg.h"
#include "playingmusic.h"

namespace spotify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Media;
	//using namespace AxWMPLib;
	using namespace WMPLib;


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
	//private: WMPLib::IWMPCore^ wmp;
	private: WMPLib::WindowsMediaPlayerClass^ wmp;

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btn_play;
	private: System::Windows::Forms::Button^ btn_stop;










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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_play = (gcnew System::Windows::Forms::Button());
			this->btn_stop = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabel_Playlist))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_tambah
			// 
			this->btn_tambah->BackColor = System::Drawing::Color::Transparent;
			this->btn_tambah->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tambah.BackgroundImage")));
			this->btn_tambah->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_tambah->FlatAppearance->BorderSize = 0;
			this->btn_tambah->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_tambah->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_tambah->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_tambah->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_tambah->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_tambah->Location = System::Drawing::Point(27, 87);
			this->btn_tambah->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_tambah->Name = L"btn_tambah";
			this->btn_tambah->Size = System::Drawing::Size(191, 49);
			this->btn_tambah->TabIndex = 0;
			this->btn_tambah->Text = L"Tambah Lagu";
			this->btn_tambah->UseVisualStyleBackColor = false;
			this->btn_tambah->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_tambah_Click);
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::Transparent;
			this->btn_update->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_update->FlatAppearance->BorderSize = 0;
			this->btn_update->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_update->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_update->Location = System::Drawing::Point(28, 153);
			this->btn_update->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(191, 46);
			this->btn_update->TabIndex = 1;
			this->btn_update->Text = L"Update Lagu";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_update_click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Transparent;
			this->btn_delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delete->FlatAppearance->BorderSize = 0;
			this->btn_delete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_delete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_delete->Location = System::Drawing::Point(15, 212);
			this->btn_delete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(216, 53);
			this->btn_delete->TabIndex = 2;
			this->btn_delete->Text = L"Delete Lagu";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_delete_Click);
			// 
			// tb_searching
			// 
			this->tb_searching->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_searching->BackColor = System::Drawing::Color::Plum;
			this->tb_searching->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_searching->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_searching->ForeColor = System::Drawing::Color::White;
			this->tb_searching->Location = System::Drawing::Point(280, 31);
			this->tb_searching->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_searching->Name = L"tb_searching";
			this->tb_searching->Size = System::Drawing::Size(515, 23);
			this->tb_searching->TabIndex = 4;
			this->tb_searching->TextChanged += gcnew System::EventHandler(this, &MenuPlaylist::tb_searching_TextChanged);
			// 
			// btn_shuffle
			// 
			this->btn_shuffle->BackColor = System::Drawing::Color::Transparent;
			this->btn_shuffle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_shuffle->FlatAppearance->BorderSize = 0;
			this->btn_shuffle->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_shuffle->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_shuffle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_shuffle->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_shuffle->ForeColor = System::Drawing::Color::White;
			this->btn_shuffle->Location = System::Drawing::Point(15, 277);
			this->btn_shuffle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_shuffle->Name = L"btn_shuffle";
			this->btn_shuffle->Size = System::Drawing::Size(216, 53);
			this->btn_shuffle->TabIndex = 6;
			this->btn_shuffle->Text = L"Shuffle Lagu";
			this->btn_shuffle->UseVisualStyleBackColor = false;
			this->btn_shuffle->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_shuffle_Click);
			// 
			// btn_download
			// 
			this->btn_download->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_download->BackColor = System::Drawing::Color::Transparent;
			this->btn_download->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_download->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_download->FlatAppearance->BorderSize = 0;
			this->btn_download->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_download->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_download->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_download->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_download->ForeColor = System::Drawing::Color::Transparent;
			this->btn_download->Location = System::Drawing::Point(15, 342);
			this->btn_download->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_download->Name = L"btn_download";
			this->btn_download->Size = System::Drawing::Size(216, 49);
			this->btn_download->TabIndex = 7;
			this->btn_download->Text = L"Download Playlist";
			this->btn_download->UseVisualStyleBackColor = false;
			this->btn_download->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_download_Click);
			// 
			// btn_logout
			// 
			this->btn_logout->BackColor = System::Drawing::Color::Transparent;
			this->btn_logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_logout->FlatAppearance->BorderSize = 0;
			this->btn_logout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_logout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_logout->Font = (gcnew System::Drawing::Font(L"Poppins ExtraLight", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->btn_logout->ForeColor = System::Drawing::Color::White;
			this->btn_logout->Location = System::Drawing::Point(27, 407);
			this->btn_logout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(109, 30);
			this->btn_logout->TabIndex = 8;
			this->btn_logout->Text = L"Logout";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_logout_Click);
			// 
			// Tabel_Playlist
			// 
			this->Tabel_Playlist->AllowUserToAddRows = false;
			this->Tabel_Playlist->AllowUserToDeleteRows = false;
			this->Tabel_Playlist->AllowUserToOrderColumns = true;
			this->Tabel_Playlist->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Tabel_Playlist->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Tabel_Playlist->BackgroundColor = System::Drawing::Color::Plum;
			this->Tabel_Playlist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Tabel_Playlist->ColumnHeadersHeight = 29;
			this->Tabel_Playlist->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->clm_id,
					this->clm_judul, this->clm_penyanyi
			});
			this->Tabel_Playlist->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Tabel_Playlist->Location = System::Drawing::Point(277, 74);
			this->Tabel_Playlist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Tabel_Playlist->Name = L"Tabel_Playlist";
			this->Tabel_Playlist->ReadOnly = true;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Violet;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Tabel_Playlist->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->Tabel_Playlist->RowHeadersVisible = false;
			this->Tabel_Playlist->RowHeadersWidth = 51;
			this->Tabel_Playlist->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::Control;
			this->Tabel_Playlist->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Violet;
			this->Tabel_Playlist->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::White;
			this->Tabel_Playlist->RowTemplate->Height = 24;
			this->Tabel_Playlist->Size = System::Drawing::Size(592, 303);
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
			// 
			// clm_judul
			// 
			this->clm_judul->HeaderText = L"Judul Lagu";
			this->clm_judul->MinimumWidth = 6;
			this->clm_judul->Name = L"clm_judul";
			this->clm_judul->ReadOnly = true;
			// 
			// clm_penyanyi
			// 
			this->clm_penyanyi->HeaderText = L"Nama Penyanyi";
			this->clm_penyanyi->MinimumWidth = 6;
			this->clm_penyanyi->Name = L"clm_penyanyi";
			this->clm_penyanyi->ReadOnly = true;
			// 
			// btn_search
			// 
			this->btn_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_search->BackColor = System::Drawing::Color::Transparent;
			this->btn_search->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search.BackgroundImage")));
			this->btn_search->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search->FlatAppearance->BorderSize = 0;
			this->btn_search->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_search->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_search->ForeColor = System::Drawing::Color::Transparent;
			this->btn_search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search.Image")));
			this->btn_search->Location = System::Drawing::Point(816, 14);
			this->btn_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(53, 59);
			this->btn_search->TabIndex = 10;
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_search_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(892, 14);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(31, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MenuPlaylist::pictureBox1_Click);
			// 
			// btn_play
			// 
			this->btn_play->BackColor = System::Drawing::Color::Transparent;
			this->btn_play->FlatAppearance->BorderSize = 0;
			this->btn_play->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_play->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_play->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_play->Font = (gcnew System::Drawing::Font(L"Poppins", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_play->ForeColor = System::Drawing::Color::Transparent;
			this->btn_play->Location = System::Drawing::Point(359, 384);
			this->btn_play->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_play->Name = L"btn_play";
			this->btn_play->Size = System::Drawing::Size(203, 55);
			this->btn_play->TabIndex = 12;
			this->btn_play->Text = L"Play";
			this->btn_play->UseVisualStyleBackColor = false;
			this->btn_play->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_play_Click);
			// 
			// btn_stop
			// 
			this->btn_stop->BackColor = System::Drawing::Color::Transparent;
			this->btn_stop->FlatAppearance->BorderSize = 0;
			this->btn_stop->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_stop->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_stop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_stop->Font = (gcnew System::Drawing::Font(L"Poppins", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_stop->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_stop->Location = System::Drawing::Point(629, 386);
			this->btn_stop->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_stop->Name = L"btn_stop";
			this->btn_stop->Size = System::Drawing::Size(204, 52);
			this->btn_stop->TabIndex = 13;
			this->btn_stop->Text = L"Stop";
			this->btn_stop->UseVisualStyleBackColor = false;
			this->btn_stop->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_stop_Click);
			// 
			// MenuPlaylist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(939, 450);
			this->Controls->Add(this->btn_stop);
			this->Controls->Add(this->btn_play);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->Tabel_Playlist);
			this->Controls->Add(this->btn_logout);
			this->Controls->Add(this->btn_download);
			this->Controls->Add(this->btn_shuffle);
			this->Controls->Add(this->tb_searching);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_tambah);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MenuPlaylist";
			this->Text = L"iLoveMusic";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MenuPlaylist::MenuPlaylist_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MenuPlaylist::MenuPlaylist_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabel_Playlist))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
	public: bool exitbtn = false;
	public: bool playingmusic = false;
	public: int random;
	public: bool rand_music = false;
	public: String^ openfile;
	public: String^ Shuffle_Lagu;
		  public: String^ Shuffle_Penyanyi;

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

			//Tabel_Playlist->Rows->Add(menuplaylist[i]->id, menuplaylist[i]->judul, menuplaylist[i]->penyayi);
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

		StreamWriter^ Download = gcnew StreamWriter(PB_username + "-iLoveMusic.txt");
		Download->WriteLine("                                                      iLoveMusic                                                      ");
		Download->WriteLine(" ---------------------------------------------------------------------------------------------------------------------");
		Download->WriteLine("| ID |                              Judul Lagu                         |                  Penyanyi                    |");
		Download->WriteLine(" ---------------------------------------------------------------------------------------------------------------------");

		for (int i = 0; i < menuplaylist->Count; i++) {

			Download->WriteLine(String::Format("| {0,-3}| {1, -63} | {2,-44} | ", menuplaylist[i]->id, menuplaylist[i]->judul->ToString(), menuplaylist[i]->penyayi->ToString()));
		}

		Download->WriteLine(" ---------------------------------------------------------------------------------------------------------------------");
		Download->Close();
		MessageBox::Show("Download Playlist Berhasil", "iLoveMusic", MessageBoxButtons::OK);
	}
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		//int id = Convert::ToInt32(tb_searching->Text);
		String^ judul = tb_searching->Text->ToString();
		String^ penyanyi = tb_searching->Text->ToString();

		for (int i = 0; i < menuplaylist->Count; i++) {
			if ((judul == menuplaylist[i]->judul) || (penyanyi == menuplaylist[i]->penyayi)) {
				MessageBox::Show(menuplaylist[i]->id + " " + menuplaylist[i]->judul + " " + menuplaylist[i]->penyayi, "iLoveMusic", MessageBoxButtons::OK);
			}
		}
	}
	private: System::Void btn_shuffle_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rand = gcnew Random();
		random = rand->Next(menuplaylist->Count);

		//MessageBox::Show(menuplaylist[random]->id + " " + menuplaylist[random]->judul + " " + menuplaylist[random]->penyayi, "Shuffle", MessageBoxButtons::OK);
		//SoundPlayer^ shuffle = gcnew SoundPlayer(menuplaylist[random]->judul + ".wav");
		SoundPlayer^ shuffle = gcnew SoundPlayer(menuplaylist[random]->judul + ".wav");
		Shuffle_Lagu = menuplaylist[random]->judul;
		Shuffle_Penyanyi = menuplaylist[random]->penyayi;
		playingmusic = true;
		rand_music = true;
		Close();
		shuffle->Play();

	}
	private: System::Void MenuPlaylist_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//ExitMenu = 1;
	}
	private: System::Void tb_searching_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		exitbtn = true;
		Close();
	}
private: System::Void btn_play_Click(System::Object^ sender, System::EventArgs^ e) {
	selected_lagu = Tabel_Playlist->CurrentRow->Cells[1]->Value->ToString();

	SoundPlayer^ player = gcnew SoundPlayer(selected_lagu + ".wav");
	//SoundPlayer^ player = gcnew SoundPlayer(selected_lagu + ".mp3");

	//WMPLib::WindowsMediaPlayerClass^ Wplayer = gcnew WMPLib::WindowsMediaPlayerClass();

	//Wplayer->controls->play();

	playingmusic = true;
	Close();
	player->Play();

}
private: System::Void btn_stop_Click(System::Object^ sender, System::EventArgs^ e) {
	selected_lagu = Tabel_Playlist->CurrentRow->Cells[1]->Value->ToString();

	SoundPlayer^ player = gcnew SoundPlayer(selected_lagu + ".wav");
	//SoundPlayer^ player = gcnew SoundPlayer(selected_lagu + ".mp3");

	player->Stop();

}
};
}

