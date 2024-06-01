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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tb_judul;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tb_penyanyi;

	private: System::Windows::Forms::Button^ btn_ok;

	private: System::Windows::Forms::Button^ btn_cancel;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_judul = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_penyanyi = (gcnew System::Windows::Forms::TextBox());
			this->btn_ok = (gcnew System::Windows::Forms::Button());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Judul Lagu";
			this->label1->Click += gcnew System::EventHandler(this, &Update_Lagu::label1_Click);
			// 
			// tb_judul
			// 
			this->tb_judul->Location = System::Drawing::Point(162, 53);
			this->tb_judul->Name = L"tb_judul";
			this->tb_judul->Size = System::Drawing::Size(215, 22);
			this->tb_judul->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nama Penyanyi";
			this->label2->Click += gcnew System::EventHandler(this, &Update_Lagu::label2_Click);
			// 
			// tb_penyanyi
			// 
			this->tb_penyanyi->Location = System::Drawing::Point(162, 94);
			this->tb_penyanyi->Name = L"tb_penyanyi";
			this->tb_penyanyi->Size = System::Drawing::Size(215, 22);
			this->tb_penyanyi->TabIndex = 3;
			this->tb_penyanyi->TextChanged += gcnew System::EventHandler(this, &Update_Lagu::textBox2_TextChanged);
			// 
			// btn_ok
			// 
			this->btn_ok->Location = System::Drawing::Point(272, 135);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(105, 40);
			this->btn_ok->TabIndex = 4;
			this->btn_ok->Text = L"OK";
			this->btn_ok->UseVisualStyleBackColor = true;
			this->btn_ok->Click += gcnew System::EventHandler(this, &Update_Lagu::btn_ok_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->Location = System::Drawing::Point(162, 135);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(94, 40);
			this->btn_cancel->TabIndex = 5;
			this->btn_cancel->Text = L"CANCEL";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &Update_Lagu::btn_cancel_Click);
			// 
			// Update_Lagu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 198);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->btn_ok);
			this->Controls->Add(this->tb_penyanyi);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tb_judul);
			this->Controls->Add(this->label1);
			this->Name = L"Update_Lagu";
			this->Text = L"Update_Lagu";
			this->Load += gcnew System::EventHandler(this, &Update_Lagu::Update_Lagu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: String^ PB_username;
		public: bool statusUpdate = true;
		private: List<Playlist^>^ update_lagu = gcnew List<Playlist^>();


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Update_Lagu_Load(System::Object^ sender, System::EventArgs^ e) {
		
}
private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void btn_ok_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ Baca_Lagu = gcnew StreamReader("playlist-" + PB_username + ".txt");
	String^ line;
	String^ up_judul = tb_judul->Text->ToString();
	String^ up_penyanyi = tb_penyanyi->Text->ToString();

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
		Playlist^ dump = gcnew Playlist(judul, penyanyi, id);

		update_lagu->Add(dump);

	}
	Baca_Lagu->Close();
	Playlist^ Temp = gcnew Playlist(up_judul, up_penyanyi, update_lagu->Count + 1);
	update_lagu->Add(Temp);
	
	StreamWriter^ Tulis_Lagu = gcnew StreamWriter("playlist-" + PB_username + ".txt");
	for (int i = 0; i < update_lagu->Count; i++) {

		String^ ReplaceJudul = update_lagu[i]->judul->TrimEnd()->Replace(" ", "-");
		String^ ReplacePenyanyi = update_lagu[i]->penyayi->TrimEnd()->Replace(" ", "-");

		Tulis_Lagu->WriteLine(update_lagu[i]->id + " " + ReplaceJudul + " " + ReplacePenyanyi);
	}
	Tulis_Lagu->Close();
	statusUpdate = false;
	Close();


}
};
}
