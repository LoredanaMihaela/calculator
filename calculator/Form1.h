#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ adunare;
	private: System::Windows::Forms::Button^ scadere;
	private: System::Windows::Forms::Button^ impartire;
	private: System::Windows::Forms::Button^ inmultire;
	private: System::Windows::Forms::TextBox^ afisare;
	private: System::Windows::Forms::Button^ sterge;
	private: System::Windows::Forms::Button^ calculeaza;
	private: System::Windows::Forms::Button^ virgula;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->adunare = (gcnew System::Windows::Forms::Button());
			this->scadere = (gcnew System::Windows::Forms::Button());
			this->impartire = (gcnew System::Windows::Forms::Button());
			this->inmultire = (gcnew System::Windows::Forms::Button());
			this->afisare = (gcnew System::Windows::Forms::TextBox());
			this->sterge = (gcnew System::Windows::Forms::Button());
			this->calculeaza = (gcnew System::Windows::Forms::Button());
			this->virgula = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(136, 161);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(220, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 41);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(41, 218);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(136, 221);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 33);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(220, 223);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(72, 31);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(41, 277);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 35);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(136, 277);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(61, 35);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(220, 279);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(72, 33);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(41, 341);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(61, 36);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// adunare
			// 
			this->adunare->BackColor = System::Drawing::SystemColors::GrayText;
			this->adunare->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->adunare->Location = System::Drawing::Point(317, 161);
			this->adunare->Name = L"adunare";
			this->adunare->Size = System::Drawing::Size(54, 41);
			this->adunare->TabIndex = 10;
			this->adunare->Text = L"+";
			this->adunare->UseVisualStyleBackColor = false;
			this->adunare->Click += gcnew System::EventHandler(this, &Form1::adunare_Click);
			// 
			// scadere
			// 
			this->scadere->BackColor = System::Drawing::SystemColors::GrayText;
			this->scadere->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->scadere->Location = System::Drawing::Point(317, 225);
			this->scadere->Name = L"scadere";
			this->scadere->Size = System::Drawing::Size(54, 39);
			this->scadere->TabIndex = 11;
			this->scadere->Text = L"-";
			this->scadere->UseVisualStyleBackColor = false;
			this->scadere->Click += gcnew System::EventHandler(this, &Form1::scadere_Click);
			// 
			// impartire
			// 
			this->impartire->BackColor = System::Drawing::SystemColors::GrayText;
			this->impartire->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->impartire->Location = System::Drawing::Point(317, 283);
			this->impartire->Name = L"impartire";
			this->impartire->Size = System::Drawing::Size(54, 42);
			this->impartire->TabIndex = 12;
			this->impartire->Text = L"/";
			this->impartire->UseVisualStyleBackColor = false;
			this->impartire->Click += gcnew System::EventHandler(this, &Form1::impartire_Click);
			// 
			// inmultire
			// 
			this->inmultire->BackColor = System::Drawing::SystemColors::GrayText;
			this->inmultire->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->inmultire->Location = System::Drawing::Point(317, 341);
			this->inmultire->Name = L"inmultire";
			this->inmultire->Size = System::Drawing::Size(54, 36);
			this->inmultire->TabIndex = 13;
			this->inmultire->Text = L"*";
			this->inmultire->UseVisualStyleBackColor = false;
			this->inmultire->Click += gcnew System::EventHandler(this, &Form1::inmultire_Click);
			// 
			// afisare
			// 
			this->afisare->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->afisare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->afisare->ForeColor = System::Drawing::SystemColors::Window;
			this->afisare->Location = System::Drawing::Point(41, 47);
			this->afisare->Multiline = true;
			this->afisare->Name = L"afisare";
			this->afisare->Size = System::Drawing::Size(335, 69);
			this->afisare->TabIndex = 14;
			this->afisare->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->afisare->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// sterge
			// 
			this->sterge->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->sterge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sterge->ForeColor = System::Drawing::SystemColors::Highlight;
			this->sterge->Location = System::Drawing::Point(136, 341);
			this->sterge->Name = L"sterge";
			this->sterge->Size = System::Drawing::Size(61, 36);
			this->sterge->TabIndex = 15;
			this->sterge->Text = L"Sterge";
			this->sterge->UseVisualStyleBackColor = false;
			this->sterge->Click += gcnew System::EventHandler(this, &Form1::sterge_Click);
			// 
			// calculeaza
			// 
			this->calculeaza->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->calculeaza->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculeaza->ForeColor = System::Drawing::SystemColors::Info;
			this->calculeaza->Location = System::Drawing::Point(41, 398);
			this->calculeaza->Name = L"calculeaza";
			this->calculeaza->Size = System::Drawing::Size(330, 41);
			this->calculeaza->TabIndex = 16;
			this->calculeaza->Text = L"calculeaza";
			this->calculeaza->UseVisualStyleBackColor = false;
			this->calculeaza->Click += gcnew System::EventHandler(this, &Form1::calculeaza_Click);
			// 
			// virgula
			// 
			this->virgula->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->virgula->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->virgula->Location = System::Drawing::Point(220, 341);
			this->virgula->Name = L"virgula";
			this->virgula->Size = System::Drawing::Size(72, 36);
			this->virgula->TabIndex = 17;
			this->virgula->Text = L",";
			this->virgula->UseVisualStyleBackColor = false;
			this->virgula->Click += gcnew System::EventHandler(this, &Form1::virgula_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 479);
			this->Controls->Add(this->virgula);
			this->Controls->Add(this->calculeaza);
			this->Controls->Add(this->sterge);
			this->Controls->Add(this->afisare);
			this->Controls->Add(this->inmultire);
			this->Controls->Add(this->impartire);
			this->Controls->Add(this->scadere);
			this->Controls->Add(this->adunare);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Calculeaza";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		afisare->Text += "2";
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	afisare->Text += "4";
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//afisare.TextAlign = HorizontalAlignment.Center;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	afisare->Text += "1";
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	afisare->Text += "3";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	afisare->Text += "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	afisare->Text += "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	afisare->Text += "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	afisare->Text += "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	afisare->Text += "9";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	afisare->Text += "0";
}
private: double firstNum = 0;
private: double secondNum = 0;
private: String^ operation = "";

private: System::Void adunare_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisare->Text != "") 
	{
		firstNum = Double::Parse(afisare->Text);
		afisare->Text = "";
		operation = "+";
		afisare->Text = "";
	}
}
private: System::Void scadere_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisare->Text != "")
	{
		firstNum = Double ::Parse(afisare->Text);
		afisare->Text = "";
		operation = "-";
		afisare->Text = "";
	}
}
private: System::Void impartire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisare->Text != "")
	{
		firstNum = Double ::Parse(afisare->Text);
		afisare->Text = "";
		operation = "/";
		afisare->Text = "";
	}
}
private: System::Void inmultire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisare->Text != "")
	{
		firstNum = Double ::Parse(afisare->Text);
		afisare->Text = "";
		operation = "*";
		afisare->Text = "";
	}
}
private: System::Void sterge_Click(System::Object^ sender, System::EventArgs^ e) {
	afisare->Clear();
}
private: System::Void calculeaza_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisare->Text != "") {
		secondNum = Double::Parse(afisare->Text);

		if (operation == "+") {
			afisare->Text = (firstNum + secondNum).ToString();
		}else if (operation == "-") {
			afisare->Text = (firstNum - secondNum).ToString();
		}
		else if (operation == "*") {
			afisare->Text = (firstNum * secondNum).ToString();
		}
		else if (operation == "/") {
			if (secondNum != 0) {
				afisare->Text = (firstNum / secondNum).ToString();
			}
			else {
				afisare->Text="Impartirea la 0 nu se poate!";
			}
		}


	}
}
private: System::Void virgula_Click(System::Object^ sender, System::EventArgs^ e) {
	afisare->Text += ".";
}
};
}
