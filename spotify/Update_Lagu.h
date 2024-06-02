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
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Update_Lagu::typeid));
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
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(28, 46);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Judul Lagu";
			this->label1->Click += gcnew System::EventHandler(this, &Update_Lagu::label1_Click);
			// 
			// tb_judul
			// 
			this->tb_judul->Location = System::Drawing::Point(122, 43);
			this->tb_judul->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tb_judul->Name = L"tb_judul";
			this->tb_judul->Size = System::Drawing::Size(162, 20);
			this->tb_judul->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(28, 76);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Penyanyi";
			this->label2->Click += gcnew System::EventHandler(this, &Update_Lagu::label2_Click);
			// 
			// tb_penyanyi
			// 
			this->tb_penyanyi->Location = System::Drawing::Point(122, 76);
			this->tb_penyanyi->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tb_penyanyi->Name = L"tb_penyanyi";
			this->tb_penyanyi->Size = System::Drawing::Size(162, 20);
			this->tb_penyanyi->TabIndex = 3;
			this->tb_penyanyi->TextChanged += gcnew System::EventHandler(this, &Update_Lagu::textBox2_TextChanged);
			// 
			// btn_ok
			// 
			this->btn_ok->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ok->Location = System::Drawing::Point(204, 110);
			this->btn_ok->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(79, 32);
			this->btn_ok->TabIndex = 4;
			this->btn_ok->Text = L"OK";
			this->btn_ok->UseVisualStyleBackColor = true;
			this->btn_ok->Click += gcnew System::EventHandler(this, &Update_Lagu::btn_ok_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(122, 110);
			this->btn_cancel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(78, 32);
			this->btn_cancel->TabIndex = 5;
			this->btn_cancel->Text = L"CANCEL";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &Update_Lagu::btn_cancel_Click);
			// 
			// Update_Lagu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(352, 161);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->btn_ok);
			this->Controls->Add(this->tb_penyanyi);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tb_judul);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Update_Lagu";
			this->Text = L"Lagu";
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


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Update_Lagu_Load(System::Object^ sender, System::EventArgs^ e) {
		if (status_up_lagu == true) {
			tb_judul->Text = selected_lagu;
			tb_penyanyi->Text = selected_penyanyi;
		}
	}
	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		//cancel = false;
		statusUpdate = true;
		Close();
	}
	private: System::Void btn_ok_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ Baca_Lagu = gcnew StreamReader("playlist-" + PB_username + ".txt");
		String^ line;
		String^ up_judul = tb_judul->Text->ToString();
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
	};
}
