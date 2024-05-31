#pragma once
#include "Playlist_Struct.h"
#include "Log_Reg.h"

namespace spotify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

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
	private: System::Windows::Forms::Button^ btn_sort;
	protected:

	protected:



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btn_shuffle;
	private: System::Windows::Forms::Button^ btn_download;


	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DataGridView^ Tabel_Playlist;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPlaylist::typeid));
			this->btn_tambah = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_sort = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_shuffle = (gcnew System::Windows::Forms::Button());
			this->btn_download = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->Tabel_Playlist = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabel_Playlist))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_tambah
			// 
			this->btn_tambah->Location = System::Drawing::Point(12, 12);
			this->btn_tambah->Name = L"btn_tambah";
			this->btn_tambah->Size = System::Drawing::Size(133, 30);
			this->btn_tambah->TabIndex = 0;
			this->btn_tambah->Text = L"Tambah Lagu";
			this->btn_tambah->UseVisualStyleBackColor = true;
			this->btn_tambah->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_tambah_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(12, 58);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(133, 30);
			this->btn_update->TabIndex = 1;
			this->btn_update->Text = L"Update Lagu";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_update_click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(12, 105);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(133, 30);
			this->btn_delete->TabIndex = 2;
			this->btn_delete->Text = L"Delete Lagu";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MenuPlaylist::btn_delete_Click);
			// 
			// btn_sort
			// 
			this->btn_sort->Location = System::Drawing::Point(12, 153);
			this->btn_sort->Name = L"btn_sort";
			this->btn_sort->Size = System::Drawing::Size(133, 30);
			this->btn_sort->TabIndex = 3;
			this->btn_sort->Text = L"Urutkan Lagu";
			this->btn_sort->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(234, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(315, 22);
			this->textBox1->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(199, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(29, 28);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// btn_shuffle
			// 
			this->btn_shuffle->Location = System::Drawing::Point(12, 207);
			this->btn_shuffle->Name = L"btn_shuffle";
			this->btn_shuffle->Size = System::Drawing::Size(133, 30);
			this->btn_shuffle->TabIndex = 6;
			this->btn_shuffle->Text = L"Shuffle Lagu";
			this->btn_shuffle->UseVisualStyleBackColor = true;
			// 
			// btn_download
			// 
			this->btn_download->Location = System::Drawing::Point(12, 257);
			this->btn_download->Name = L"btn_download";
			this->btn_download->Size = System::Drawing::Size(133, 30);
			this->btn_download->TabIndex = 7;
			this->btn_download->Text = L"Download Playlist";
			this->btn_download->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 357);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(133, 30);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Logout";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// Tabel_Playlist
			// 
			this->Tabel_Playlist->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Tabel_Playlist->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tabel_Playlist->Location = System::Drawing::Point(234, 58);
			this->Tabel_Playlist->Name = L"Tabel_Playlist";
			this->Tabel_Playlist->RowHeadersWidth = 51;
			this->Tabel_Playlist->RowTemplate->Height = 24;
			this->Tabel_Playlist->Size = System::Drawing::Size(315, 247);
			this->Tabel_Playlist->TabIndex = 9;
			this->Tabel_Playlist->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MenuPlaylist::Tabel_Playlist_CellMouseClick);
			// 
			// MenuPlaylist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 399);
			this->Controls->Add(this->Tabel_Playlist);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->btn_download);
			this->Controls->Add(this->btn_shuffle);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btn_sort);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_tambah);
			this->Name = L"MenuPlaylist";
			this->Text = L"MenuPlaylist";
			this->Load += gcnew System::EventHandler(this, &MenuPlaylist::MenuPlaylist_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabel_Playlist))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: String^ PB_username;

		private: String^ selected_lagu;
		private: List<Playlist^>^ playlist;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_tambah_Click(System::Object^ sender, System::EventArgs^ e) {
	Playlist^ dump = gcnew Playlist("ruhul", "siap", 1);
	playlist->Add(dump);
	Log_Reg logreg;

	List<String^>^ WriteLagu = gcnew List<String^>();
	//StreamReader^ baca = gcnew StreamReader("playlist-" + logreg. + tb_user);

}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	int pilih = Convert::ToInt32(selected_lagu);
	for (int i = 0; i < playlist->Count; i++)
	{
		if (playlist[i]->id == pilih) {
			playlist->RemoveAt(i);
		}
	}
}
private: System::Void Tabel_Playlist_CellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
	selected_lagu = Tabel_Playlist->CurrentRow->Cells[0]->Value->ToString();

}
private: System::Void btn_update_click(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show(PB_username, "USERNAME", MessageBoxButtons::OK);

}
private: System::Void MenuPlaylist_Load(System::Object^ sender, System::EventArgs^ e) {
	

}
};
}
