#pragma once
#include "BackEnd.h"

namespace HugeIntCalculatorApp {

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
			A = new HugeInteger();
			B = new HugeInteger();
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
	private: System::Windows::Forms::Button^ Pressed0;
	protected:

	private: System::Windows::Forms::Button^ Pressed1;
	private: System::Windows::Forms::Button^ Pressed2;
	protected:


	private: System::Windows::Forms::Button^ Pressed3;
	private: System::Windows::Forms::Button^ Pressed4;
	private: System::Windows::Forms::Button^ Pressed5;
	private: System::Windows::Forms::Button^ Pressed6;
	private: System::Windows::Forms::Button^ Pressed7;
	private: System::Windows::Forms::Button^ Pressed8;
	private: System::Windows::Forms::Button^ Pressed9;
	private: HugeInteger* A;
	private: HugeInteger* B;
	private: char Operator;
	private: System::Windows::Forms::Button^ PressedSum;
	private: System::Windows::Forms::Button^ PressedSubtract;
	private: System::Windows::Forms::Button^ PressedDivide;
	private: System::Windows::Forms::Button^ PressedMultiply;
	private: System::Windows::Forms::Button^ PressedSquareRoot;
	private: System::Windows::Forms::Button^ PressedEqual;
	private: System::Windows::Forms::TextBox^ InputBox;
	private: String ^Global = "";
	private: System::Windows::Forms::Button^ PressedClear;
	private: System::Windows::Forms::Button^ PressedAllClear;
	private: System::Windows::Forms::Label^ Heading;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Pressed0 = (gcnew System::Windows::Forms::Button());
			this->Pressed1 = (gcnew System::Windows::Forms::Button());
			this->Pressed2 = (gcnew System::Windows::Forms::Button());
			this->Pressed3 = (gcnew System::Windows::Forms::Button());
			this->Pressed4 = (gcnew System::Windows::Forms::Button());
			this->Pressed5 = (gcnew System::Windows::Forms::Button());
			this->Pressed6 = (gcnew System::Windows::Forms::Button());
			this->Pressed7 = (gcnew System::Windows::Forms::Button());
			this->Pressed8 = (gcnew System::Windows::Forms::Button());
			this->Pressed9 = (gcnew System::Windows::Forms::Button());
			this->PressedSum = (gcnew System::Windows::Forms::Button());
			this->PressedSubtract = (gcnew System::Windows::Forms::Button());
			this->PressedDivide = (gcnew System::Windows::Forms::Button());
			this->PressedMultiply = (gcnew System::Windows::Forms::Button());
			this->PressedSquareRoot = (gcnew System::Windows::Forms::Button());
			this->PressedEqual = (gcnew System::Windows::Forms::Button());
			this->InputBox = (gcnew System::Windows::Forms::TextBox());
			this->PressedClear = (gcnew System::Windows::Forms::Button());
			this->PressedAllClear = (gcnew System::Windows::Forms::Button());
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Pressed0
			// 
			this->Pressed0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pressed0->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pressed0->Location = System::Drawing::Point(65, 347);
			this->Pressed0->Name = L"Pressed0";
			this->Pressed0->Size = System::Drawing::Size(169, 45);
			this->Pressed0->TabIndex = 0;
			this->Pressed0->Text = L"0";
			this->Pressed0->UseVisualStyleBackColor = true;
			this->Pressed0->Click += gcnew System::EventHandler(this, &MyForm::Pressed0_Click);
			// 
			// Pressed1
			// 
			this->Pressed1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pressed1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pressed1->Location = System::Drawing::Point(65, 282);
			this->Pressed1->Name = L"Pressed1";
			this->Pressed1->Size = System::Drawing::Size(75, 45);
			this->Pressed1->TabIndex = 1;
			this->Pressed1->Text = L"1";
			this->Pressed1->UseVisualStyleBackColor = true;
			this->Pressed1->Click += gcnew System::EventHandler(this, &MyForm::Pressed1_Click);
			// 
			// Pressed2
			// 
			this->Pressed2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pressed2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pressed2->Location = System::Drawing::Point(159, 282);
			this->Pressed2->Name = L"Pressed2";
			this->Pressed2->Size = System::Drawing::Size(75, 45);
			this->Pressed2->TabIndex = 2;
			this->Pressed2->Text = L"2";
			this->Pressed2->UseVisualStyleBackColor = true;
			this->Pressed2->Click += gcnew System::EventHandler(this, &MyForm::Pressed2_Click);
			// 
			// Pressed3
			// 
			this->Pressed3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pressed3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pressed3->Location = System::Drawing::Point(254, 282);
			this->Pressed3->Name = L"Pressed3";
			this->Pressed3->Size = System::Drawing::Size(75, 45);
			this->Pressed3->TabIndex = 3;
			this->Pressed3->Text = L"3";
			this->Pressed3->UseVisualStyleBackColor = true;
			this->Pressed3->Click += gcnew System::EventHandler(this, &MyForm::Pressed3_Click);
			// 
			// Pressed4
			// 
			this->Pressed4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pressed4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pressed4->Location = System::Drawing::Point(65, 215);
			this->Pressed4->Name = L"Pressed4";
			this->Pressed4->Size = System::Drawing::Size(75, 45);
			this->Pressed4->TabIndex = 4;
			this->Pressed4->Text = L"4";
			this->Pressed4->UseVisualStyleBackColor = true;
			this->Pressed4->Click += gcnew System::EventHandler(this, &MyForm::Pressed4_Click);
			// 
			// Pressed5
			// 
			this->Pressed5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pressed5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pressed5->Location = System::Drawing::Point(159, 215);
			this->Pressed5->Name = L"Pressed5";
			this->Pressed5->Size = System::Drawing::Size(75, 45);
			this->Pressed5->TabIndex = 5;
			this->Pressed5->Text = L"5";
			this->Pressed5->UseVisualStyleBackColor = true;
			this->Pressed5->Click += gcnew System::EventHandler(this, &MyForm::Pressed5_Click);
			// 
			// Pressed6
			// 
			this->Pressed6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pressed6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pressed6->Location = System::Drawing::Point(254, 215);
			this->Pressed6->Name = L"Pressed6";
			this->Pressed6->Size = System::Drawing::Size(75, 45);
			this->Pressed6->TabIndex = 6;
			this->Pressed6->Text = L"6";
			this->Pressed6->UseVisualStyleBackColor = true;
			this->Pressed6->Click += gcnew System::EventHandler(this, &MyForm::Pressed6_Click);
			// 
			// Pressed7
			// 
			this->Pressed7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pressed7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pressed7->Location = System::Drawing::Point(65, 152);
			this->Pressed7->Name = L"Pressed7";
			this->Pressed7->Size = System::Drawing::Size(75, 45);
			this->Pressed7->TabIndex = 7;
			this->Pressed7->Text = L"7";
			this->Pressed7->UseVisualStyleBackColor = true;
			this->Pressed7->Click += gcnew System::EventHandler(this, &MyForm::Pressed7_Click);
			// 
			// Pressed8
			// 
			this->Pressed8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pressed8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pressed8->Location = System::Drawing::Point(159, 152);
			this->Pressed8->Name = L"Pressed8";
			this->Pressed8->Size = System::Drawing::Size(75, 45);
			this->Pressed8->TabIndex = 8;
			this->Pressed8->Text = L"8";
			this->Pressed8->UseVisualStyleBackColor = true;
			this->Pressed8->Click += gcnew System::EventHandler(this, &MyForm::Pressed8_Click);
			// 
			// Pressed9
			// 
			this->Pressed9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pressed9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pressed9->Location = System::Drawing::Point(254, 152);
			this->Pressed9->Name = L"Pressed9";
			this->Pressed9->Size = System::Drawing::Size(75, 45);
			this->Pressed9->TabIndex = 9;
			this->Pressed9->Text = L"9";
			this->Pressed9->UseVisualStyleBackColor = true;
			this->Pressed9->Click += gcnew System::EventHandler(this, &MyForm::Pressed9_Click);
			// 
			// PressedSum
			// 
			this->PressedSum->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PressedSum->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PressedSum->Location = System::Drawing::Point(254, 347);
			this->PressedSum->Name = L"PressedSum";
			this->PressedSum->Size = System::Drawing::Size(75, 45);
			this->PressedSum->TabIndex = 10;
			this->PressedSum->Text = L"+";
			this->PressedSum->UseVisualStyleBackColor = true;
			this->PressedSum->Click += gcnew System::EventHandler(this, &MyForm::PressedSum_Click);
			// 
			// PressedSubtract
			// 
			this->PressedSubtract->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PressedSubtract->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PressedSubtract->Location = System::Drawing::Point(354, 282);
			this->PressedSubtract->Name = L"PressedSubtract";
			this->PressedSubtract->Size = System::Drawing::Size(75, 45);
			this->PressedSubtract->TabIndex = 11;
			this->PressedSubtract->Text = L" − ";
			this->PressedSubtract->UseVisualStyleBackColor = true;
			this->PressedSubtract->Click += gcnew System::EventHandler(this, &MyForm::PressedSubtract_Click);
			// 
			// PressedDivide
			// 
			this->PressedDivide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PressedDivide->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PressedDivide->Location = System::Drawing::Point(354, 152);
			this->PressedDivide->Name = L"PressedDivide";
			this->PressedDivide->Size = System::Drawing::Size(75, 45);
			this->PressedDivide->TabIndex = 12;
			this->PressedDivide->Text = L"÷";
			this->PressedDivide->UseVisualStyleBackColor = true;
			this->PressedDivide->Click += gcnew System::EventHandler(this, &MyForm::PressedDivide_Click);
			// 
			// PressedMultiply
			// 
			this->PressedMultiply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PressedMultiply->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PressedMultiply->Location = System::Drawing::Point(354, 215);
			this->PressedMultiply->Name = L"PressedMultiply";
			this->PressedMultiply->Size = System::Drawing::Size(75, 45);
			this->PressedMultiply->TabIndex = 13;
			this->PressedMultiply->Text = L"x";
			this->PressedMultiply->UseVisualStyleBackColor = true;
			this->PressedMultiply->Click += gcnew System::EventHandler(this, &MyForm::PressedMultiply_Click);
			// 
			// PressedSquareRoot
			// 
			this->PressedSquareRoot->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PressedSquareRoot->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PressedSquareRoot->Location = System::Drawing::Point(354, 347);
			this->PressedSquareRoot->Name = L"PressedSquareRoot";
			this->PressedSquareRoot->Size = System::Drawing::Size(75, 44);
			this->PressedSquareRoot->TabIndex = 14;
			this->PressedSquareRoot->Text = L"√";
			this->PressedSquareRoot->UseVisualStyleBackColor = true;
			this->PressedSquareRoot->Click += gcnew System::EventHandler(this, &MyForm::PressedSquareRoot_Click);
			// 
			// PressedEqual
			// 
			this->PressedEqual->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PressedEqual->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PressedEqual->Location = System::Drawing::Point(457, 282);
			this->PressedEqual->Name = L"PressedEqual";
			this->PressedEqual->Size = System::Drawing::Size(75, 110);
			this->PressedEqual->TabIndex = 15;
			this->PressedEqual->Text = L"=";
			this->PressedEqual->UseVisualStyleBackColor = true;
			this->PressedEqual->Click += gcnew System::EventHandler(this, &MyForm::PressedEqual_Click);
			// 
			// InputBox
			// 
			this->InputBox->BackColor = System::Drawing::Color::White;
			this->InputBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->InputBox->CausesValidation = false;
			this->InputBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputBox->Location = System::Drawing::Point(65, 71);
			this->InputBox->MaxLength = 200;
			this->InputBox->Multiline = true;
			this->InputBox->Name = L"InputBox";
			this->InputBox->ReadOnly = true;
			this->InputBox->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->InputBox->Size = System::Drawing::Size(467, 55);
			this->InputBox->TabIndex = 17;
			this->InputBox->WordWrap = false;
			// 
			// PressedClear
			// 
			this->PressedClear->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PressedClear->Location = System::Drawing::Point(457, 215);
			this->PressedClear->Name = L"PressedClear";
			this->PressedClear->Size = System::Drawing::Size(75, 45);
			this->PressedClear->TabIndex = 18;
			this->PressedClear->Text = L"C";
			this->PressedClear->UseVisualStyleBackColor = true;
			this->PressedClear->Click += gcnew System::EventHandler(this, &MyForm::PressedClear_Click);
			// 
			// PressedAllClear
			// 
			this->PressedAllClear->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.32727F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PressedAllClear->Location = System::Drawing::Point(457, 152);
			this->PressedAllClear->Name = L"PressedAllClear";
			this->PressedAllClear->Size = System::Drawing::Size(75, 45);
			this->PressedAllClear->TabIndex = 19;
			this->PressedAllClear->Text = L"AC";
			this->PressedAllClear->UseVisualStyleBackColor = true;
			this->PressedAllClear->Click += gcnew System::EventHandler(this, &MyForm::PressedAllClear_Click);
			// 
			// Heading
			// 
			this->Heading->Font = (gcnew System::Drawing::Font(L"Gabriola", 37.30909F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Heading->Location = System::Drawing::Point(142, -16);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(312, 84);
			this->Heading->TabIndex = 20;
			this->Heading->Text = L"CALCULATOR";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(592, 430);
			this->Controls->Add(this->Heading);
			this->Controls->Add(this->PressedAllClear);
			this->Controls->Add(this->PressedClear);
			this->Controls->Add(this->InputBox);
			this->Controls->Add(this->PressedEqual);
			this->Controls->Add(this->PressedSquareRoot);
			this->Controls->Add(this->PressedMultiply);
			this->Controls->Add(this->PressedDivide);
			this->Controls->Add(this->PressedSubtract);
			this->Controls->Add(this->PressedSum);
			this->Controls->Add(this->Pressed9);
			this->Controls->Add(this->Pressed8);
			this->Controls->Add(this->Pressed7);
			this->Controls->Add(this->Pressed6);
			this->Controls->Add(this->Pressed5);
			this->Controls->Add(this->Pressed4);
			this->Controls->Add(this->Pressed3);
			this->Controls->Add(this->Pressed2);
			this->Controls->Add(this->Pressed1);
			this->Controls->Add(this->Pressed0);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(610, 473);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(610, 473);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		static std::string toStandardString(System::String^ string)
		{
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);
			return returnString;
		}
#pragma endregion

private: System::Void Pressed1_Click(System::Object^ sender, System::EventArgs^ e) {
	Global = Global + "1";
	this->InputBox->Text = Global;
}
private: System::Void Pressed2_Click(System::Object^ sender, System::EventArgs^ e) {
	Global = Global + "2";
	this->InputBox->Text = Global;
}
private: System::Void Pressed3_Click(System::Object^ sender, System::EventArgs^ e) {
	Global = Global + "3";
	this->InputBox->Text = Global;
}
private: System::Void Pressed4_Click(System::Object^ sender, System::EventArgs^ e) {
	Global = Global + "4";
	this->InputBox->Text = Global;
}
private: System::Void Pressed5_Click(System::Object^ sender, System::EventArgs^ e) {
	Global = Global + "5";
	this->InputBox->Text = Global;
}
private: System::Void Pressed6_Click(System::Object^ sender, System::EventArgs^ e) {
	Global = Global + "6";
	this->InputBox->Text = Global;
}
private: System::Void Pressed7_Click(System::Object^ sender, System::EventArgs^ e) {
	Global = Global + "7";
	this->InputBox->Text = Global;
}
private: System::Void Pressed8_Click(System::Object^ sender, System::EventArgs^ e) {
	Global = Global + "8";
	this->InputBox->Text = Global;
}
private: System::Void Pressed9_Click(System::Object^ sender, System::EventArgs^ e) {
	Global = Global + "9";
	this->InputBox->Text = Global;
}
private: System::Void Pressed0_Click(System::Object^ sender, System::EventArgs^ e) {
	Global = Global + "0";
	this->InputBox->Text = Global;
}
private: System::Void PressedClear_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (Global->Length > 0)
	{
		int Length = Global->Length - 1;
		String^ Temp = "";
		for (unsigned int i = 0; i < Length; i++)
		{
			Temp = Temp + Global[i];
		}

		Global = Temp;
		this->InputBox->Text = Global;
	}

}
private: System::Void PressedAllClear_Click(System::Object^ sender, System::EventArgs^ e) {
	Global = "";
	this->InputBox->Text = Global;
	string Value = toStandardString(this->InputBox->Text);
	B->Write(Value);
	A->Write(Value);
}
private: System::Void PressedSum_Click(System::Object^ sender, System::EventArgs^ e) {
	string Value = toStandardString(this->InputBox->Text);
	A->Write(Value);
	Global = "";
	this->InputBox->Text = Global;
	Value = toStandardString(this->InputBox->Text);
	B->Write(Value);
	this->Operator = '+';
}
private: System::Void PressedEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (B->GetSize() == 0 && this->Operator)
	{
		string Value = toStandardString(this->InputBox->Text);
		B->Write(Value);

		HugeInteger Answer;
		if (this->Operator == '+')
		{
			Answer = A->operator+(*B);
		}
		else if (this->Operator == '-')
		{
			Answer = A->operator-(*B);
		}
		else if (this->Operator == '*')
		{
			Answer = A->operator*(*B);
		}
		else if (this->Operator == '/')
		{
			Answer = A->operator/(*B);
		}

		String^ Temp = gcnew String(Answer.Read().c_str());
		Global = Temp;
		this->InputBox->Text = Global;
	}
}
private: System::Void PressedSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
	string Value = toStandardString(this->InputBox->Text);
	A->Write(Value);
	Global = "";
	this->InputBox->Text = Global;
	Value = toStandardString(this->InputBox->Text);
	B->Write(Value);
	this->Operator = '-';
}
private: System::Void PressedMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
	string Value = toStandardString(this->InputBox->Text);
	A->Write(Value);
	Global = "";
	this->InputBox->Text = Global;
	Value = toStandardString(this->InputBox->Text);
	B->Write(Value);
	this->Operator = '*';
}
private: System::Void PressedDivide_Click(System::Object^ sender, System::EventArgs^ e) {
	string Value = toStandardString(this->InputBox->Text);
	A->Write(Value);
	Global = "";
	this->InputBox->Text = Global;
	Value = toStandardString(this->InputBox->Text);
	B->Write(Value);
	this->Operator = '/';
}
private: System::Void PressedSquareRoot_Click(System::Object^ sender, System::EventArgs^ e) {
	string Value = toStandardString(this->InputBox->Text);
	A->Write(Value);
	HugeInteger Answer;
	Answer = A->squareRoot();
	String^ Temp = gcnew String(Answer.Read().c_str());
	Global = Temp;
	this->InputBox->Text = Global;
}
};
}
