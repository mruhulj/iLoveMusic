#pragma once
#include "Playlist_Struct.h"



namespace spotify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	//using namespace NAudio::Wave;

	/// <summary>
	/// Summary for Update_Lagu
	/// </summary>
	public ref class Update_Lagu : public System::Windows::Forms::Form
	{
	public:
		Update_Lagu(void)
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
		~Update_Lagu()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::TextBox^ tb_penyanyi;

	private: System::Windows::Forms::Button^ btn_ok;

	private: System::Windows::Forms::Button^ btn_cancel;


	private: System::Windows::Forms::ComboBox^ cb_lagu;
	private: WMPLib::IWMPCore^ wmp;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Update_Lagu::typeid));
			this->tb_penyanyi = (gcnew System::Windows::Forms::TextBox());
			this->btn_ok = (gcnew System::Windows::Forms::Button());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->cb_lagu = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// tb_penyanyi
			// 
			this->tb_penyanyi->BackColor = System::Drawing::Color::Plum;
			this->tb_penyanyi->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_penyanyi->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_penyanyi->ForeColor = System::Drawing::Color::White;
			this->tb_penyanyi->Location = System::Drawing::Point(163, 152);
			this->tb_penyanyi->Margin = System::Windows::Forms::Padding(2);
			this->tb_penyanyi->Name = L"tb_penyanyi";
			this->tb_penyanyi->Size = System::Drawing::Size(286, 24);
			this->tb_penyanyi->TabIndex = 3;
			this->tb_penyanyi->Text = L"Nama Penyanyi";
			this->tb_penyanyi->Click += gcnew System::EventHandler(this, &Update_Lagu::tb_penyanyi_Click);
			this->tb_penyanyi->TextChanged += gcnew System::EventHandler(this, &Update_Lagu::textBox2_TextChanged);
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
			this->btn_ok->Location = System::Drawing::Point(340, 212);
			this->btn_ok->Margin = System::Windows::Forms::Padding(2);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(101, 32);
			this->btn_ok->TabIndex = 4;
			this->btn_ok->Text = L"OK";
			this->btn_ok->UseVisualStyleBackColor = false;
			this->btn_ok->Click += gcnew System::EventHandler(this, &Update_Lagu::btn_ok_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->BackColor = System::Drawing::Color::Transparent;
			this->btn_cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cancel->FlatAppearance->BorderSize = 0;
			this->btn_cancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_cancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->ForeColor = System::Drawing::Color::White;
			this->btn_cancel->Location = System::Drawing::Point(166, 212);
			this->btn_cancel->Margin = System::Windows::Forms::Padding(2);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(108, 32);
			this->btn_cancel->TabIndex = 5;
			this->btn_cancel->Text = L"CANCEL";
			this->btn_cancel->UseVisualStyleBackColor = false;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &Update_Lagu::btn_cancel_Click);
			// 
			// cb_lagu
			// 
			this->cb_lagu->BackColor = System::Drawing::Color::Plum;
			this->cb_lagu->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_lagu->ForeColor = System::Drawing::Color::White;
			this->cb_lagu->FormattingEnabled = true;
			this->cb_lagu->Location = System::Drawing::Point(151, 86);
			this->cb_lagu->Name = L"cb_lagu";
			this->cb_lagu->Size = System::Drawing::Size(298, 36);
			this->cb_lagu->TabIndex = 6;
			this->cb_lagu->SelectedIndexChanged += gcnew System::EventHandler(this, &Update_Lagu::cb_lagu_SelectedIndexChanged_1);
			// 
			// Update_Lagu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(605, 302);
			this->Controls->Add(this->cb_lagu);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->btn_ok);
			this->Controls->Add(this->tb_penyanyi);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Update_Lagu";
			this->Text = L"iLoveMusic";
			this->Load += gcnew System::EventHandler(this, &Update_Lagu::Update_Lagu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ PB_username;
	public: bool statusUpdate = false;
	public: bool status_up_lagu = false;
	public: String^ selected_lagu;
	public: String^ selected_penyanyi;
	private: List<Playlist^>^ update_lagu = gcnew List<Playlist^>();
	public: OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	public: String^ fileName;
	public: String^ filePath;


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (tb_judul->Text == "Judul Lagu") {
			tb_judul->Text = "";
		}*/
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   private: System::Void LoadWavFile() // ga kepake
		   {

			
			   openFileDialog->Filter = "WAV files|*.wav|All files|*.*";
			   openFileDialog->Title = "iLoveMusic";

			   if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				   fileName = System::IO::Path::GetFileName(openFileDialog->FileName);
				   filePath = openFileDialog->FileName;
				   //dataGridViewSongs->Rows->Add(fileName, filePath);
				   //this->cb_lagu->Items->Add(fileName->Replace(".wav", ""));
				   //MessageBox::Show(fileName, "test", MessageBoxButtons::OK);
			   }
			   this->Activate();
			   
		   }

	void LoadLagu() {
	// Define the directory to search for .wav files
	String^ directoryPath = "C:\\Users\\Ruhul\\Source\\repos\\spotify\\spotify"; // Update with your actual directory path
	try {
		array<String^>^ files = Directory::GetFiles(directoryPath, "*.wav");
		for each (String ^ file in files) {
		cb_lagu->Items->Add(file->Replace("C:\\Users\\Ruhul\\Source\\repos\\spotify\\spotify\\", "")->Replace(".wav", ""));
		}
		if (cb_lagu->Items->Count > 0) {
			cb_lagu->SelectedIndex = 0;
			}
		}
	catch (Exception^ e) {
		MessageBox::Show("Error loading files: " + e->Message);
		}
	}

	private: System::Void Update_Lagu_Load(System::Object^ sender, System::EventArgs^ e) {
		//LoadWavFile();
		LoadLagu();
		//if (status_up_lagu || statusUpdate == false) {
		//	if (tb_judul->Text == "Judul Lagu") {
		//		tb_judul->Text = fileName->Replace(".wav","");
		//		//MessageBox::Show(tb_judul->ToString(), "test", MessageBoxButtons::OK);
		//	}
		//	
		//	//tb_penyanyi->Text = selected_penyanyi;
		//}
		
	}
	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		//cancel = false;
		statusUpdate = true;
		Close();
	}
	private: System::Void btn_ok_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ Baca_Lagu = gcnew StreamReader("playlist-" + PB_username + ".txt");
		String^ line;
		String^ up_judul = cb_lagu->Text->ToString();
		//String^ up_judul = tb_judul->Text->ToString()->Replace(".wav", "");
		String^ up_penyanyi = tb_penyanyi->Text->ToString();
		int count = 1;
		while ((line = Baca_Lagu->ReadLine()) != nullptr) {
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

			update_lagu->Add(dump);
			count++;

		}
		Baca_Lagu->Close();

		if (statusUpdate == false && status_up_lagu == false) {
			Playlist^ Temp = gcnew Playlist(up_judul, up_penyanyi, update_lagu->Count + 1);
			update_lagu->Add(Temp);
		}
		else if (status_up_lagu == true) {
			for (int i = 0; i < update_lagu->Count; i++) {
				if (update_lagu[i]->judul == selected_lagu) {

					update_lagu[i]->judul = up_judul;
					update_lagu[i]->penyayi = up_penyanyi;
				}
			}
		}
		
		StreamWriter^ Tulis_Lagu = gcnew StreamWriter("playlist-" + PB_username + ".txt");
		for (int i = 0; i < update_lagu->Count; i++) {

			String^ ReplaceJudul = update_lagu[i]->judul->TrimEnd()->Replace(" ", "-");
			String^ ReplacePenyanyi = update_lagu[i]->penyayi->TrimEnd()->Replace(" ", "-");

			Tulis_Lagu->WriteLine(update_lagu[i]->id + " " + ReplaceJudul + " " + ReplacePenyanyi);
		}
		Tulis_Lagu->Close();

		statusUpdate = true;
		Close();


	}
private: System::Void tb_penyanyi_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tb_penyanyi->Text == "Nama Penyanyi") {
		tb_penyanyi->Text = "";
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}


private: System::Void cb_lagu_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tb_judul_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   
private: System::Void cb_lagu_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void axWindowsMediaPlayer1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
