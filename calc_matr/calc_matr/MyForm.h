#pragma once

namespace calcmatr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ First_Mat;
	private: System::Windows::Forms::DataGridView^ Sec_Mat;
	private: System::Windows::Forms::DataGridView^ Result_Mat;
	protected:

	protected:


	private: System::Windows::Forms::Button^ btn_PLus;
	private: System::Windows::Forms::Button^ btn_Min;
	private: System::Windows::Forms::Button^ btn_Umn;
	private: System::Windows::Forms::Button^ fir_Colmn_plus;
	private: System::Windows::Forms::Button^ fir_row_plus;
	private: System::Windows::Forms::Button^ fir_colmn_min;
	private: System::Windows::Forms::Button^ fir_row_minus;
	private: System::Windows::Forms::Button^ sec_row_plus;
	private: System::Windows::Forms::Button^ sec_colmn_plus;
	private: System::Windows::Forms::Button^ sec_colm_min;
	private: System::Windows::Forms::Button^ sec_row_min;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->First_Mat = (gcnew System::Windows::Forms::DataGridView());
			this->Sec_Mat = (gcnew System::Windows::Forms::DataGridView());
			this->Result_Mat = (gcnew System::Windows::Forms::DataGridView());
			this->btn_PLus = (gcnew System::Windows::Forms::Button());
			this->btn_Min = (gcnew System::Windows::Forms::Button());
			this->btn_Umn = (gcnew System::Windows::Forms::Button());
			this->fir_Colmn_plus = (gcnew System::Windows::Forms::Button());
			this->fir_row_plus = (gcnew System::Windows::Forms::Button());
			this->fir_colmn_min = (gcnew System::Windows::Forms::Button());
			this->fir_row_minus = (gcnew System::Windows::Forms::Button());
			this->sec_row_plus = (gcnew System::Windows::Forms::Button());
			this->sec_colmn_plus = (gcnew System::Windows::Forms::Button());
			this->sec_colm_min = (gcnew System::Windows::Forms::Button());
			this->sec_row_min = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->First_Mat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sec_Mat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result_Mat))->BeginInit();
			this->SuspendLayout();
			// 
			// First_Mat
			// 
			this->First_Mat->AllowUserToAddRows = false;
			this->First_Mat->ColumnHeadersHeight = 18;
			this->First_Mat->ColumnHeadersVisible = false;
			this->First_Mat->Location = System::Drawing::Point(44, 39);
			this->First_Mat->Name = L"First_Mat";
			this->First_Mat->RowHeadersVisible = false;
			this->First_Mat->RowHeadersWidth = 82;
			this->First_Mat->RowTemplate->Height = 33;
			this->First_Mat->Size = System::Drawing::Size(663, 399);
			this->First_Mat->TabIndex = 0;
			this->First_Mat->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::First_Mat_CellContentClick);
			// 
			// Sec_Mat
			// 
			this->Sec_Mat->AllowUserToAddRows = false;
			this->Sec_Mat->ColumnHeadersHeight = 18;
			this->Sec_Mat->ColumnHeadersVisible = false;
			this->Sec_Mat->Location = System::Drawing::Point(1174, 39);
			this->Sec_Mat->Name = L"Sec_Mat";
			this->Sec_Mat->RowHeadersVisible = false;
			this->Sec_Mat->RowHeadersWidth = 82;
			this->Sec_Mat->RowTemplate->Height = 33;
			this->Sec_Mat->Size = System::Drawing::Size(663, 388);
			this->Sec_Mat->TabIndex = 1;
			// 
			// Result_Mat
			// 
			this->Result_Mat->AllowUserToAddRows = false;
			this->Result_Mat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Result_Mat->ColumnHeadersVisible = false;
			this->Result_Mat->Location = System::Drawing::Point(588, 549);
			this->Result_Mat->Name = L"Result_Mat";
			this->Result_Mat->RowHeadersVisible = false;
			this->Result_Mat->RowHeadersWidth = 82;
			this->Result_Mat->RowTemplate->Height = 33;
			this->Result_Mat->Size = System::Drawing::Size(772, 349);
			this->Result_Mat->TabIndex = 2;
			// 
			// btn_PLus
			// 
			this->btn_PLus->Location = System::Drawing::Point(830, 115);
			this->btn_PLus->Name = L"btn_PLus";
			this->btn_PLus->Size = System::Drawing::Size(192, 70);
			this->btn_PLus->TabIndex = 3;
			this->btn_PLus->Text = L"Сложение";
			this->btn_PLus->UseVisualStyleBackColor = true;
			this->btn_PLus->Click += gcnew System::EventHandler(this, &MyForm::btn_PLus_Click);
			// 
			// btn_Min
			// 
			this->btn_Min->Location = System::Drawing::Point(830, 200);
			this->btn_Min->Name = L"btn_Min";
			this->btn_Min->Size = System::Drawing::Size(192, 70);
			this->btn_Min->TabIndex = 4;
			this->btn_Min->Text = L"Разность";
			this->btn_Min->UseVisualStyleBackColor = true;
			this->btn_Min->Click += gcnew System::EventHandler(this, &MyForm::btn_Min_Click);
			// 
			// btn_Umn
			// 
			this->btn_Umn->Location = System::Drawing::Point(830, 276);
			this->btn_Umn->Name = L"btn_Umn";
			this->btn_Umn->Size = System::Drawing::Size(192, 70);
			this->btn_Umn->TabIndex = 5;
			this->btn_Umn->Text = L"Умножение";
			this->btn_Umn->UseVisualStyleBackColor = true;
			this->btn_Umn->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// fir_Colmn_plus
			// 
			this->fir_Colmn_plus->Location = System::Drawing::Point(588, 444);
			this->fir_Colmn_plus->Name = L"fir_Colmn_plus";
			this->fir_Colmn_plus->Size = System::Drawing::Size(119, 70);
			this->fir_Colmn_plus->TabIndex = 6;
			this->fir_Colmn_plus->Text = L"добавить столбец";
			this->fir_Colmn_plus->UseVisualStyleBackColor = true;
			this->fir_Colmn_plus->Click += gcnew System::EventHandler(this, &MyForm::fir_Colmn_plus_Click);
			// 
			// fir_row_plus
			// 
			this->fir_row_plus->Location = System::Drawing::Point(713, 39);
			this->fir_row_plus->Name = L"fir_row_plus";
			this->fir_row_plus->Size = System::Drawing::Size(119, 70);
			this->fir_row_plus->TabIndex = 7;
			this->fir_row_plus->Text = L"добавить строку";
			this->fir_row_plus->UseVisualStyleBackColor = true;
			this->fir_row_plus->Click += gcnew System::EventHandler(this, &MyForm::fir_row_plus_Click);
			// 
			// fir_colmn_min
			// 
			this->fir_colmn_min->Location = System::Drawing::Point(44, 444);
			this->fir_colmn_min->Name = L"fir_colmn_min";
			this->fir_colmn_min->Size = System::Drawing::Size(119, 70);
			this->fir_colmn_min->TabIndex = 8;
			this->fir_colmn_min->Text = L"убрать столбец";
			this->fir_colmn_min->UseVisualStyleBackColor = true;
			this->fir_colmn_min->Click += gcnew System::EventHandler(this, &MyForm::fir_colmn_min_Click);
			// 
			// fir_row_minus
			// 
			this->fir_row_minus->Location = System::Drawing::Point(713, 368);
			this->fir_row_minus->Name = L"fir_row_minus";
			this->fir_row_minus->Size = System::Drawing::Size(119, 70);
			this->fir_row_minus->TabIndex = 9;
			this->fir_row_minus->Text = L"убрать строку";
			this->fir_row_minus->UseVisualStyleBackColor = true;
			this->fir_row_minus->Click += gcnew System::EventHandler(this, &MyForm::fir_row_minus_Click);
			// 
			// sec_row_plus
			// 
			this->sec_row_plus->Location = System::Drawing::Point(1049, 39);
			this->sec_row_plus->Name = L"sec_row_plus";
			this->sec_row_plus->Size = System::Drawing::Size(119, 70);
			this->sec_row_plus->TabIndex = 10;
			this->sec_row_plus->Text = L"добавить строку";
			this->sec_row_plus->UseVisualStyleBackColor = true;
			this->sec_row_plus->Click += gcnew System::EventHandler(this, &MyForm::sec_row_plus_Click);
			// 
			// sec_colmn_plus
			// 
			this->sec_colmn_plus->Location = System::Drawing::Point(1174, 433);
			this->sec_colmn_plus->Name = L"sec_colmn_plus";
			this->sec_colmn_plus->Size = System::Drawing::Size(119, 70);
			this->sec_colmn_plus->TabIndex = 11;
			this->sec_colmn_plus->Text = L"добавить столбец";
			this->sec_colmn_plus->UseVisualStyleBackColor = true;
			this->sec_colmn_plus->Click += gcnew System::EventHandler(this, &MyForm::sec_colmn_plus_Click);
			// 
			// sec_colm_min
			// 
			this->sec_colm_min->Location = System::Drawing::Point(1718, 433);
			this->sec_colm_min->Name = L"sec_colm_min";
			this->sec_colm_min->Size = System::Drawing::Size(119, 70);
			this->sec_colm_min->TabIndex = 12;
			this->sec_colm_min->Text = L"убрать столбец";
			this->sec_colm_min->UseVisualStyleBackColor = true;
			this->sec_colm_min->Click += gcnew System::EventHandler(this, &MyForm::sec_colm_min_Click);
			// 
			// sec_row_min
			// 
			this->sec_row_min->Location = System::Drawing::Point(1049, 357);
			this->sec_row_min->Name = L"sec_row_min";
			this->sec_row_min->Size = System::Drawing::Size(119, 70);
			this->sec_row_min->TabIndex = 13;
			this->sec_row_min->Text = L"убрать строку";
			this->sec_row_min->UseVisualStyleBackColor = true;
			this->sec_row_min->Click += gcnew System::EventHandler(this, &MyForm::sec_row_min_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1902, 1079);
			this->Controls->Add(this->sec_row_min);
			this->Controls->Add(this->sec_colm_min);
			this->Controls->Add(this->sec_colmn_plus);
			this->Controls->Add(this->sec_row_plus);
			this->Controls->Add(this->fir_row_minus);
			this->Controls->Add(this->fir_colmn_min);
			this->Controls->Add(this->fir_row_plus);
			this->Controls->Add(this->fir_Colmn_plus);
			this->Controls->Add(this->btn_Umn);
			this->Controls->Add(this->btn_Min);
			this->Controls->Add(this->btn_PLus);
			this->Controls->Add(this->Result_Mat);
			this->Controls->Add(this->Sec_Mat);
			this->Controls->Add(this->First_Mat);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->First_Mat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sec_Mat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result_Mat))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void Slogenie(int fir_r,int fir_c,int sec_r,int sec_c) {
			if (fir_r != sec_r || fir_c != sec_c) {
				MessageBox::Show("Размеры матрицы должны быть одинаковыми!!!");
			}
			else {
				Result_Mat->RowCount = fir_r;
				Result_Mat->ColumnCount = fir_c;
				for (int i = 0; i < fir_r; i++){
					for (int j = 0; j < fir_c; j++) {
						double a = Convert::ToDouble(First_Mat[j, i]->Value);
						double b = Convert::ToDouble(Sec_Mat[j, i]->Value);
						double s = a + b;
						Result_Mat[j, i]->Value = Convert::ToString(s);
					}
				}
			}


		}
		void Raznost(int fir_r, int fir_c, int sec_r, int sec_c) {
			if (fir_r != sec_r || fir_c != sec_c) {
				MessageBox::Show("Размеры матрицы должны быть одинаковыми!!!");
			}
			else {
				Result_Mat->RowCount = fir_r;
				Result_Mat->ColumnCount = fir_c;
				for (int i = 0; i < fir_r; i++) {
					for (int j = 0; j < fir_c; j++) {
						double a = Convert::ToDouble(First_Mat[j, i]->Value);
						double b = Convert::ToDouble(Sec_Mat[j, i]->Value);
						double s = a - b;
						Result_Mat[j, i]->Value = Convert::ToString(s);
					}
				}
			}


		}
		void Umnojenie(int fir_r, int fir_c, int sec_r, int sec_c) {
			if ( fir_c!=sec_r) {
				MessageBox::Show("Размеры матрицы должны быть одинаковыми!!!");
			}
			else {
				Result_Mat->RowCount = fir_r;
				Result_Mat->ColumnCount = sec_c;
				
				for (int i = 0; i < fir_r; i++) {
					for (int j = 0; j < sec_c; j++) {
						double s=0;
						for (int k = 0; k < fir_c; k++){
							double a = Convert::ToDouble(First_Mat[k, i]->Value);
							double b = Convert::ToDouble(Sec_Mat[j, k]->Value);
							s += a * b;
						
						}
						Result_Mat[j, i]->Value = Convert::ToString(s);
					}
				}
			}


		}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Umnojenie(First_Mat->RowCount, First_Mat->ColumnCount, Sec_Mat->RowCount, Sec_Mat->ColumnCount);

}
private: System::Void btn_PLus_Click(System::Object^ sender, System::EventArgs^ e) {
	Slogenie(First_Mat->RowCount, First_Mat->ColumnCount, Sec_Mat->RowCount, Sec_Mat->ColumnCount);

}
private: System::Void btn_Min_Click(System::Object^ sender, System::EventArgs^ e) {
	Raznost(First_Mat->RowCount, First_Mat->ColumnCount, Sec_Mat->RowCount, Sec_Mat->ColumnCount);
}
private: System::Void First_Mat_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void fir_row_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	First_Mat->RowCount++;
}
private: System::Void fir_row_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	First_Mat->RowCount--;
}
private: System::Void fir_Colmn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	First_Mat->ColumnCount++;
}
private: System::Void fir_colmn_min_Click(System::Object^ sender, System::EventArgs^ e) {
	First_Mat->ColumnCount--;
}
private: System::Void sec_row_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	Sec_Mat->RowCount++;
}
private: System::Void sec_row_min_Click(System::Object^ sender, System::EventArgs^ e) {
	Sec_Mat->RowCount--;
}
private: System::Void sec_colmn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	Sec_Mat->ColumnCount++;
}
private: System::Void sec_colm_min_Click(System::Object^ sender, System::EventArgs^ e) {
	Sec_Mat->ColumnCount--;
}
};
}
