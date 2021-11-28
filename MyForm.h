#pragma once

namespace PetroCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ Permeability;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ Area;
	private: System::Windows::Forms::Label^ Pressure;
	private: System::Windows::Forms::Label^ Viscosity;
	private: System::Windows::Forms::Label^ Length;




	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ Flow_Rate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Permeability = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Area = (gcnew System::Windows::Forms::Label());
			this->Pressure = (gcnew System::Windows::Forms::Label());
			this->Viscosity = (gcnew System::Windows::Forms::Label());
			this->Length = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->Flow_Rate = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(259, 119);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(277, 42);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0\r\n";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Permeability
			// 
			this->Permeability->AutoSize = true;
			this->Permeability->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Permeability->Location = System::Drawing::Point(12, 136);
			this->Permeability->Name = L"Permeability";
			this->Permeability->Size = System::Drawing::Size(143, 25);
			this->Permeability->TabIndex = 2;
			this->Permeability->Text = L"Permeability , k";
			this->Permeability->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(259, 211);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(277, 38);
			this->textBox2->TabIndex = 3;
			// 
			// Area
			// 
			this->Area->AutoSize = true;
			this->Area->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Area->Location = System::Drawing::Point(12, 282);
			this->Area->Name = L"Area";
			this->Area->Size = System::Drawing::Size(207, 25);
			this->Area->TabIndex = 4;
			this->Area->Text = L"Crossectional Area , A";
			this->Area->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// Pressure
			// 
			this->Pressure->AutoSize = true;
			this->Pressure->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pressure->Location = System::Drawing::Point(12, 337);
			this->Pressure->Name = L"Pressure";
			this->Pressure->Size = System::Drawing::Size(179, 25);
			this->Pressure->TabIndex = 5;
			this->Pressure->Text = L"Pressure Drop , ∆P";
			// 
			// Viscosity
			// 
			this->Viscosity->AutoSize = true;
			this->Viscosity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Viscosity->Location = System::Drawing::Point(12, 398);
			this->Viscosity->Name = L"Viscosity";
			this->Viscosity->Size = System::Drawing::Size(163, 25);
			this->Viscosity->TabIndex = 6;
			this->Viscosity->Text = L"Fluid Viscosity , µ\r\n";
			// 
			// Length
			// 
			this->Length->AutoSize = true;
			this->Length->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Length->Location = System::Drawing::Point(12, 452);
			this->Length->Name = L"Length";
			this->Length->Size = System::Drawing::Size(193, 25);
			this->Length->TabIndex = 7;
			this->Length->Text = L"Length of medium , L";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(259, 328);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(277, 38);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(259, 269);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(277, 38);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(259, 385);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(277, 38);
			this->textBox5->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(259, 443);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(277, 38);
			this->textBox6->TabIndex = 11;
			// 
			// Flow_Rate
			// 
			this->Flow_Rate->AutoSize = true;
			this->Flow_Rate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Flow_Rate->Location = System::Drawing::Point(12, 224);
			this->Flow_Rate->Name = L"Flow_Rate";
			this->Flow_Rate->Size = System::Drawing::Size(129, 25);
			this->Flow_Rate->TabIndex = 12;
			this->Flow_Rate->Text = L"Flow Rate , Q";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(85, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 38);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Permeability Calculator";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(174, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 54);
			this->button1->TabIndex = 14;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 504);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Flow_Rate);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->Length);
			this->Controls->Add(this->Viscosity);
			this->Controls->Add(this->Pressure);
			this->Controls->Add(this->Area);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->Permeability);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double k, A, L, P, µ, Q;
		

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void k_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e)
	{
		A = Double::Parse(textBox4->Text);
		L = Double::Parse(textBox6->Text);
		P = Double::Parse(textBox3->Text);
		Q = Double::Parse(textBox2->Text);
		µ = Double::Parse(textBox5->Text);
		if (textBox3->Text == "0" || textBox4->Text == "0")
		{
			textBox1->Text = "Not valid input";
		}
		else
		{
			k = (µ * L * Q) / (A * P);
			textBox1->Text = System::Convert::ToString(k);
		}
	}
};
}
