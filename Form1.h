#pragma once
#include "Fraction_DLL.h"
#include <iostream>
#include <string> 
#include <fstream> 
#include <cstdlib>
#include <cmath>


/*
Fraction GUI

Author: Kurt Blair
*/

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Numerator1;
	private: System::Windows::Forms::TextBox^  Denominator1;
	private: System::Windows::Forms::TextBox^  Denominator2;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^  Numerator2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Button^  SubButton;

	private: System::Windows::Forms::Button^  AddButton;
	private: System::Windows::Forms::Button^  MulButton;
	private: System::Windows::Forms::Button^  DivButton;
	private: System::Windows::Forms::Button^  EquButton;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  Op_Label;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Numerator1 = (gcnew System::Windows::Forms::TextBox());
			this->Denominator1 = (gcnew System::Windows::Forms::TextBox());
			this->Denominator2 = (gcnew System::Windows::Forms::TextBox());
			this->Numerator2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SubButton = (gcnew System::Windows::Forms::Button());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->MulButton = (gcnew System::Windows::Forms::Button());
			this->DivButton = (gcnew System::Windows::Forms::Button());
			this->EquButton = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Op_Label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Numerator1
			// 
			this->Numerator1->Location = System::Drawing::Point(104, 98);
			this->Numerator1->Name = L"Numerator1";
			this->Numerator1->Size = System::Drawing::Size(100, 26);
			this->Denominator1->Text = L" ";
			this->Numerator1->TabIndex = 0;
			this->Numerator1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// Denominator1
			// 
			this->Denominator1->Location = System::Drawing::Point(104, 162);
			this->Denominator1->Name = L"Denominator1";
			this->Denominator1->Size = System::Drawing::Size(100, 26);
			this->Denominator1->Text = L" ";
			this->Denominator1->TabIndex = 1;
			this->Denominator1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// Denominator2
			// 
			this->Denominator2->Location = System::Drawing::Point(446, 162);
			this->Denominator2->Name = L"Denominator2";
			this->Denominator2->Size = System::Drawing::Size(100, 26);
			this->Denominator2->Text = L" ";
			this->Denominator2->TabIndex = 2;
			this->Denominator2->TextChanged += gcnew System::EventHandler(this, &Form1::Denominator2_TextChanged);
			// 
			// Numerator2
			// 
			this->Numerator2->Location = System::Drawing::Point(446, 98);
			this->Numerator2->Name = L"Numerator2";
			this->Numerator2->Size = System::Drawing::Size(100, 26);
			this->Numerator2->Text = L" ";
			this->Numerator2->TabIndex = 3;
			this->Numerator2->TextChanged += gcnew System::EventHandler(this, &Form1::Numerator2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(442, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Fraction 2";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(100, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Fraction 1";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// SubButton
			// 
			this->SubButton->Location = System::Drawing::Point(310, 112);
			this->SubButton->Name = L"SubButton";
			this->SubButton->Size = System::Drawing::Size(49, 46);
			this->SubButton->TabIndex = 6;
			this->SubButton->Text = L"-";
			this->SubButton->UseVisualStyleBackColor = true;
			this->SubButton->Click += gcnew System::EventHandler(this, &Form1::SubButton_Click);
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(310, 60);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(49, 46);
			this->AddButton->TabIndex = 7;
			this->AddButton->Text = L"+";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &Form1::AddButton_Click);
			// 
			// MulButton
			// 
			this->MulButton->Location = System::Drawing::Point(310, 164);
			this->MulButton->Name = L"MulButton";
			this->MulButton->Size = System::Drawing::Size(49, 46);
			this->MulButton->TabIndex = 8;
			this->MulButton->Text = L"*";
			this->MulButton->UseVisualStyleBackColor = true;
			this->MulButton->Click += gcnew System::EventHandler(this, &Form1::MulButton_Click);
			// 
			// DivButton
			// 
			this->DivButton->Location = System::Drawing::Point(310, 216);
			this->DivButton->Name = L"DivButton";
			this->DivButton->Size = System::Drawing::Size(49, 46);
			this->DivButton->TabIndex = 9;
			this->DivButton->Text = L"/";
			this->DivButton->UseVisualStyleBackColor = true;
			this->DivButton->Click += gcnew System::EventHandler(this, &Form1::DivButton_Click);
			// 
			// EquButton
			// 
			this->EquButton->Location = System::Drawing::Point(609, 112);
			this->EquButton->Name = L"EquButton";
			this->EquButton->Size = System::Drawing::Size(49, 46);
			this->EquButton->TabIndex = 10;
			this->EquButton->Text = L"=";
			this->EquButton->UseVisualStyleBackColor = true;
			this->EquButton->Click += gcnew System::EventHandler(this, &Form1::EquButton_Click_1);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(701, 91);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(83, 96);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L" ";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// Op_Label
			// 
			this->Op_Label->AutoSize = true;
			this->Op_Label->Location = System::Drawing::Point(310, 37);
			this->Op_Label->Name = L"Op_Label";
			this->Op_Label->Size = System::Drawing::Size(0, 20);
			this->Op_Label->Text = L"";
			this->Op_Label->TabIndex = 12;
			this->Op_Label->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(846, 694);
			this->Controls->Add(this->Op_Label);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->EquButton);
			this->Controls->Add(this->DivButton);
			this->Controls->Add(this->MulButton);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->SubButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Numerator2);
			this->Controls->Add(this->Denominator2);
			this->Controls->Add(this->Denominator1);
			this->Controls->Add(this->Numerator1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->Text = L"22";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew KeyEventHandler(this, &Form1::HandleKeyPressed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
 private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
 }
 private: System::Void Numerator2_TextChanged(System::Object^  sender, System::EventArgs^  e) {	
 }
private: System::Void Denominator2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void EquButton_Click_1(System::Object^  sender, System::EventArgs^  e) {

	int n1, d1, n2, d2;
	string m;

	//Convert numerator and denominator strings into integers for the fraction class

	char s = System::Convert::ToChar(Op_Label->Text);
	try {
		n1 = System::Convert::ToInt16(Numerator1->Text);
		d1 = System::Convert::ToInt16(Denominator1->Text);
		n2 = System::Convert::ToInt16(Numerator2->Text);
		d2 = System::Convert::ToInt16(Denominator2->Text);
	}
	catch (exception FormatException) {
		throw FractionException("Invalid Input");
	}

	//Exception handler for a zero denominator

	if (d1 == 0 || d2 == 0) {
		throw FractionException("Denominators Cannot Be Zero!");
	}

	//Construct the fraction using the textboxt inputs 
	
	Fraction f1(n1, d1);
	Fraction f2(n2, d2);
	Fraction r;

	//Switch statement to determine which fraction operator to perform

	switch (s) {

	case '+':
		r = operator+(f1,f2);
		break;
	case '-':
		r = operator-(f1,f2);
		break;
	case '*':
		r = operator*(f1, f2);
		break;
	case '/':
		r = operator/(f2,f2);
		break;

	}

	//Normalize fraction and take set the numerator and denominator as ints to display fraction in the rich text box

	r.normalize();

	int n3 = r.numerator();
	int d3 = r.denominator();


	richTextBox1->Text = System::Convert::ToString(n3) + " / " + System::Convert::ToString(d3);

	//Handle case of a zero numerator

	if (n3 == 0) {
	richTextBox1->Text = "0";
	}

	//Handle case of a 1 denominator

	if (d3 == 1) {
	richTextBox1->Text = System::Convert::ToString(n3);
	}


	
}


//Event handler for system to close when alt c is pressed and to perform equal button operation when enter is pressed

private: System::Void HandleKeyPressed(System::Object^sender, KeyEventArgs^ e) {
	if (e->Alt == true && (char)e->KeyCode == (char)67) {
		Close();
	}
	else if ((char)e->KeyCode == (char)108) {
		EquButton_Click_1(sender, e);
	}
}

private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

//Set label above operation buttons to the chosen operator

private: System::Void AddButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Op_Label->Text = "+";
}
private: System::Void SubButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Op_Label->Text = "-";
}
private: System::Void MulButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Op_Label->Text = "*";
}

private: System::Void DivButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Op_Label->Text = "/";
}
};
}
