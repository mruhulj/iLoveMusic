#pragma once

namespace spotify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(162, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 22);
			this->textBox1->TabIndex = 1;
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
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(162, 94);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(215, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Update_Lagu::textBox2_TextChanged);
			// 
			// btn_ok
			// 
			this->btn_ok->Location = System::Drawing::Point(272, 135);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(105, 40);
			this->btn_ok->TabIndex = 4;
			this->btn_ok->Text = L"OK";
			this->btn_ok->UseVisualStyleBackColor = true;
			// 
			// btn_cancel
			// 
			this->btn_cancel->Location = System::Drawing::Point(162, 135);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(94, 40);
			this->btn_cancel->TabIndex = 5;
			this->btn_cancel->Text = L"CANCEL";
			this->btn_cancel->UseVisualStyleBackColor = true;
			// 
			// Update_Lagu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 198);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->btn_ok);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Update_Lagu";
			this->Text = L"Update_Lagu";
			this->Load += gcnew System::EventHandler(this, &Update_Lagu::Update_Lagu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Update_Lagu_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
