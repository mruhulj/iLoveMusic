#pragma once
#include "MenuPlaylist.h"
#include "Playlist_Struct.h"

namespace spotify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for playingmusic
	/// </summary>
	public ref class playingmusic : public System::Windows::Forms::Form
	{
	public:
		playingmusic(void)
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
		~playingmusic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbl_judul;
	private: System::Windows::Forms::Label^ lbl_penyanyi;
	private: System::Windows::Forms::Button^ btn_ok;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(playingmusic::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_judul = (gcnew System::Windows::Forms::Label());
			this->lbl_penyanyi = (gcnew System::Windows::Forms::Label());
			this->btn_ok = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Plum;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(161, 46);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Now Playing";
			// 
			// lbl_judul
			// 
			this->lbl_judul->AutoSize = true;
			this->lbl_judul->BackColor = System::Drawing::Color::Plum;
			this->lbl_judul->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lbl_judul->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_judul->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_judul->ForeColor = System::Drawing::Color::Transparent;
			this->lbl_judul->Location = System::Drawing::Point(95, 167);
			this->lbl_judul->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_judul->Name = L"lbl_judul";
			this->lbl_judul->Size = System::Drawing::Size(49, 25);
			this->lbl_judul->TabIndex = 1;
			this->lbl_judul->Text = L"Judul";
			this->lbl_judul->Click += gcnew System::EventHandler(this, &playingmusic::lbl_judul_Click);
			// 
			// lbl_penyanyi
			// 
			this->lbl_penyanyi->AutoSize = true;
			this->lbl_penyanyi->BackColor = System::Drawing::Color::Plum;
			this->lbl_penyanyi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_penyanyi->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_penyanyi->ForeColor = System::Drawing::Color::White;
			this->lbl_penyanyi->Location = System::Drawing::Point(94, 148);
			this->lbl_penyanyi->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_penyanyi->Name = L"lbl_penyanyi";
			this->lbl_penyanyi->Size = System::Drawing::Size(58, 19);
			this->lbl_penyanyi->TabIndex = 2;
			this->lbl_penyanyi->Text = L"Penyanyi";
			this->lbl_penyanyi->Click += gcnew System::EventHandler(this, &playingmusic::lbl_penyanyi_Click);
			// 
			// btn_ok
			// 
			this->btn_ok->BackColor = System::Drawing::Color::Transparent;
			this->btn_ok->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ok->FlatAppearance->BorderSize = 0;
			this->btn_ok->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_ok->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_ok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ok->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ok->ForeColor = System::Drawing::Color::White;
			this->btn_ok->Location = System::Drawing::Point(293, 202);
			this->btn_ok->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(86, 24);
			this->btn_ok->TabIndex = 5;
			this->btn_ok->Text = L"OK";
			this->btn_ok->UseVisualStyleBackColor = false;
			this->btn_ok->Click += gcnew System::EventHandler(this, &playingmusic::btn_ok_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, -14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(345, 263);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// playingmusic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(389, 237);
			this->Controls->Add(this->lbl_judul);
			this->Controls->Add(this->lbl_penyanyi);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_ok);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"playingmusic";
			this->Text = L"iLoveMusic";
			this->Load += gcnew System::EventHandler(this, &playingmusic::playingmusic_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: String^ selected_lagu;
		public: String^ selected_penyanyi;
		public: int random;
		public: bool rand_music = false;
		private: List<Playlist^>^ playing_music = gcnew List<Playlist^>();


	private: System::Void lbl_judul_Click(System::Object^ sender, System::EventArgs^ e) {
		

	}
private: System::Void lbl_penyanyi_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void btn_ok_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void playingmusic_Load(System::Object^ sender, System::EventArgs^ e) {
	if (lbl_judul->Text == "Judul" || lbl_judul->Text == "") {
		lbl_judul->Text = selected_lagu;
	}
	else if (rand_music) {
		lbl_judul->Text = playing_music[random]->judul;
	}
	if (lbl_penyanyi->Text == "Penyanyi" || lbl_penyanyi->Text == "") {
		lbl_penyanyi->Text = selected_penyanyi;
	}
	else if (rand_music) {
		lbl_penyanyi->Text = playing_music[random]->penyayi;
	}


}
};
}
