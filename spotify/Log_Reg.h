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
	private: System::Windows::Forms::Label^ lb_username;
	protected:

	private: System::Windows::Forms::Label^ lb_Password;
	private: System::Windows::Forms::TextBox^ tb_username;
	private: System::Windows::Forms::TextBox^ tb_password;




	private: System::Windows::Forms::Button^ btn_ok;
	private: System::Windows::Forms::Button^ btn_register;
	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region 

		/// Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lb_username = (gcnew System::Windows::Forms::Label());
			this->lb_Password = (gcnew System::Windows::Forms::Label());
			this->tb_username = (gcnew System::Windows::Forms::TextBox());
			this->tb_password = (gcnew System::Windows::Forms::TextBox());
			this->btn_ok = (gcnew System::Windows::Forms::Button());
			this->btn_register = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lb_username
			// 
			this->lb_username->AutoSize = true;
			this->lb_username->Location = System::Drawing::Point(38, 52);
			this->lb_username->Name = L"lb_username";
			this->lb_username->Size = System::Drawing::Size(70, 16);
			this->lb_username->TabIndex = 0;
			this->lb_username->Text = L"Username";
			this->lb_username->Click += gcnew System::EventHandler(this, &Log_Reg::input_login_Click);
			// 
			// lb_Password
			// 
			this->lb_Password->AutoSize = true;
			this->lb_Password->Location = System::Drawing::Point(41, 141);
			this->lb_Password->Name = L"lb_Password";
			this->lb_Password->Size = System::Drawing::Size(67, 16);
			this->lb_Password->TabIndex = 1;
			this->lb_Password->Text = L"Password";
			// 
			// tb_username
			// 
			this->tb_username->Location = System::Drawing::Point(41, 87);
			this->tb_username->Name = L"tb_username";
			this->tb_username->Size = System::Drawing::Size(207, 22);
			this->tb_username->TabIndex = 2;
			// 
			// tb_password
			// 
			this->tb_password->Location = System::Drawing::Point(41, 175);
			this->tb_password->Name = L"tb_password";
			this->tb_password->Size = System::Drawing::Size(199, 22);
			this->tb_password->TabIndex = 3;
			// 
			// btn_ok
			// 
			this->btn_ok->Location = System::Drawing::Point(44, 280);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(110, 50);
			this->btn_ok->TabIndex = 4;
			this->btn_ok->Text = L"OK";
			this->btn_ok->UseVisualStyleBackColor = true;
			this->btn_ok->Click += gcnew System::EventHandler(this, &Log_Reg::btn_ok_Click);
			// 
			// btn_register
			// 
			this->btn_register->Location = System::Drawing::Point(193, 280);
			this->btn_register->Name = L"btn_register";
			this->btn_register->Size = System::Drawing::Size(110, 50);
			this->btn_register->TabIndex = 5;
			this->btn_register->Text = L"REGISTER";
			this->btn_register->UseVisualStyleBackColor = true;
			this->btn_register->Click += gcnew System::EventHandler(this, &Log_Reg::btn_register_Click);
			// 
			// Log_Reg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 389);
			this->Controls->Add(this->btn_register);
			this->Controls->Add(this->btn_ok);
			this->Controls->Add(this->tb_password);
			this->Controls->Add(this->tb_username);
			this->Controls->Add(this->lb_Password);
			this->Controls->Add(this->lb_username);
			this->Name = L"Log_Reg";
			this->Text = L"Log_Reg";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: String^ PB_username;
		public: bool login = false;

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
				//MessageBox::Show(line + "\n" + temp, "TEST", MessageBoxButtons::OK);

				if (line == temp) {
					MessageBox::Show("Berhasil Lgoin", "TEST", MessageBoxButtons::OK);
					PB_username = tb_username->Text->ToString();
					login = true;
					Close();
					break;
				}
				else {
					MessageBox::Show("Gagal Lgoin", "TEST", MessageBoxButtons::OK);

				}

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
			String^ username = tb_username->Text->ToString();
			String^ password = tb_password->Text->ToString();
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
	};
}
