#pragma once

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
	/// Summary for Log_Reg
	/// </summary>
	public ref class Log_Reg : public System::Windows::Forms::Form
	{
	public:
		Log_Reg(void)
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
		~Log_Reg()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::TextBox^ tb_username;
	private: System::Windows::Forms::TextBox^ tb_password;




	private: System::Windows::Forms::Button^ btn_ok;
	private: System::Windows::Forms::Button^ btn_register;
	private: System::Windows::Forms::CheckBox^ show_password;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;



	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region 

		/// Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Log_Reg::typeid));
			this->tb_username = (gcnew System::Windows::Forms::TextBox());
			this->tb_password = (gcnew System::Windows::Forms::TextBox());
			this->btn_ok = (gcnew System::Windows::Forms::Button());
			this->btn_register = (gcnew System::Windows::Forms::Button());
			this->show_password = (gcnew System::Windows::Forms::CheckBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tb_username
			// 
			this->tb_username->BackColor = System::Drawing::Color::Plum;
			this->tb_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_username->ForeColor = System::Drawing::Color::White;
			this->tb_username->Location = System::Drawing::Point(221, 107);
			this->tb_username->Margin = System::Windows::Forms::Padding(2);
			this->tb_username->Name = L"tb_username";
			this->tb_username->Size = System::Drawing::Size(99, 13);
			this->tb_username->TabIndex = 2;
			this->tb_username->Text = L"Username";
			this->tb_username->Click += gcnew System::EventHandler(this, &Log_Reg::tb_username_Click);
			this->tb_username->TextChanged += gcnew System::EventHandler(this, &Log_Reg::tb_username_TextChanged);
			// 
			// tb_password
			// 
			this->tb_password->BackColor = System::Drawing::Color::Plum;
			this->tb_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_password->ForeColor = System::Drawing::Color::White;
			this->tb_password->Location = System::Drawing::Point(220, 138);
			this->tb_password->Margin = System::Windows::Forms::Padding(2);
			this->tb_password->Name = L"tb_password";
			this->tb_password->Size = System::Drawing::Size(99, 13);
			this->tb_password->TabIndex = 3;
			this->tb_password->Text = L"Password";
			this->tb_password->UseSystemPasswordChar = true;
			this->tb_password->Click += gcnew System::EventHandler(this, &Log_Reg::tb_password_Click);
			// 
			// btn_ok
			// 
			this->btn_ok->BackColor = System::Drawing::Color::Transparent;
			this->btn_ok->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ok->FlatAppearance->BorderSize = 0;
			this->btn_ok->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_ok->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_ok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ok->Font = (gcnew System::Drawing::Font(L"Poppins", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ok->ForeColor = System::Drawing::Color::Plum;
			this->btn_ok->Location = System::Drawing::Point(228, 174);
			this->btn_ok->Margin = System::Windows::Forms::Padding(0);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(70, 29);
			this->btn_ok->TabIndex = 4;
			this->btn_ok->Text = L"LOGIN";
			this->btn_ok->UseVisualStyleBackColor = false;
			this->btn_ok->Click += gcnew System::EventHandler(this, &Log_Reg::btn_ok_Click);
			// 
			// btn_register
			// 
			this->btn_register->BackColor = System::Drawing::Color::Transparent;
			this->btn_register->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_register->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_register->FlatAppearance->BorderSize = 0;
			this->btn_register->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_register->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_register->ForeColor = System::Drawing::Color::Plum;
			this->btn_register->Location = System::Drawing::Point(218, 205);
			this->btn_register->Margin = System::Windows::Forms::Padding(0);
			this->btn_register->Name = L"btn_register";
			this->btn_register->Size = System::Drawing::Size(91, 29);
			this->btn_register->TabIndex = 5;
			this->btn_register->Text = L"REGISTER";
			this->btn_register->UseVisualStyleBackColor = false;
			this->btn_register->Click += gcnew System::EventHandler(this, &Log_Reg::btn_register_Click);
			// 
			// show_password
			// 
			this->show_password->AutoSize = true;
			this->show_password->FlatAppearance->BorderSize = 0;
			this->show_password->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->show_password->ForeColor = System::Drawing::Color::Transparent;
			this->show_password->Location = System::Drawing::Point(306, 139);
			this->show_password->Margin = System::Windows::Forms::Padding(2);
			this->show_password->Name = L"show_password";
			this->show_password->Size = System::Drawing::Size(12, 11);
			this->show_password->TabIndex = 6;
			this->show_password->UseVisualStyleBackColor = true;
			this->show_password->CheckedChanged += gcnew System::EventHandler(this, &Log_Reg::checkBox1_CheckedChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(485, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(23, 24);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Log_Reg::pictureBox1_Click_1);
			// 
			// Log_Reg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(526, 291);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->show_password);
			this->Controls->Add(this->btn_register);
			this->Controls->Add(this->btn_ok);
			this->Controls->Add(this->tb_username);
			this->Controls->Add(this->tb_password);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Log_Reg";
			this->Text = L"iLoveMusic";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Log_Reg::Log_Reg_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Log_Reg::Log_Reg_Load);
			this->Click += gcnew System::EventHandler(this, &Log_Reg::Log_Reg_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ PB_username;
	public: bool login = false;
	public: bool ExitLog = false;

	private: System::Void input_login_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void btn_ok_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			StreamReader^ reader = gcnew StreamReader("user.txt");
			String^ line;

			while ((line = reader->ReadLine()) != nullptr)
			{
				line = line->Trim();
				String^ temp = tb_username->Text->ToString() + " " + tb_password->Text->ToString();

				if (line == temp) {

					PB_username = tb_username->Text->ToString();
					login = true;
					Close();
					break;
				}

			}
			if (login == false) {
				MessageBox::Show("Gagal Lgoin", "TEST", MessageBoxButtons::OK);
			}
			reader->Close();
		}
		catch (Exception^ e)
		{
			Console::WriteLine("The file could not be read:");
			Console::WriteLine(e->Message);
		}

	}
	private: System::Void btn_register_Click(System::Object^ sender, System::EventArgs^ e) {

		List<String^>^ Overwrite = gcnew List<String^>();
		StreamReader^ baca = gcnew StreamReader("user.txt");
		String^ Dump;
		try {
			while ((Dump = baca->ReadLine()) != nullptr)
			{
				Overwrite->Add(Dump);
			}

		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "TEST", MessageBoxButtons::OK);
		}
		baca->Close();

		try
		{
			StreamReader^ reader = gcnew StreamReader("user.txt");
			String^ line;
			int slice;
			String^ username = tb_username->Text->ToString()->ToLower();
			String^ password = tb_password->Text->ToString()->ToLower();
			String^ temp = username + " " + password;

			while ((line = reader->ReadLine()) != nullptr)
			{
				slice = line->IndexOf(" ");
				line = line->Substring(0, slice);

				if (line == username) {
					MessageBox::Show("Username used", "TEST", MessageBoxButtons::OK);
					reader->Close();
					return;
				}
			}
			reader->Close();
			Overwrite->Add(temp);
			StreamWriter^ writer = gcnew StreamWriter("user.txt");
			for (int i = 0; i < Overwrite->Count; i++) {

				writer->WriteLine(Overwrite[i]);
			}
			writer->Close();
			MessageBox::Show("Berhasil Register", "TEST", MessageBoxButtons::OK);
			StreamWriter^ FilePlaylist = gcnew StreamWriter("playlist-" + username + ".txt");
			FilePlaylist->Close();
			reader->Close();
		}
		catch (Exception^ e)
		{
			Console::WriteLine("The file could not be read:");
			MessageBox::Show(e->Message, "Waton", MessageBoxButtons::OK);


		}

	}
	private: System::Void Log_Reg_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (show_password->Checked) {
			tb_password->UseSystemPasswordChar = false;
		}
		else {
			tb_password->UseSystemPasswordChar = true;
		}
	}
	private: System::Void tb_username_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void tb_username_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tb_username->Text == "Username") {
			tb_username->Text = "";
		}
	}
	private: System::Void tb_password_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tb_password->Text == "Password") {
			tb_password->Text = "";
		}
	}
	private: System::Void Log_Reg_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Log_Reg_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tb_password->Text == "") {
			tb_password->Text = "Password";
		}
		if (tb_username->Text == "") {
			tb_username->Text = "Username";
		}
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		ExitLog = true;
		Close();
	}
	};
}
