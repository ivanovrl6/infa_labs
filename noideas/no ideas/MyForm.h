#pragma once
#include "operations.h"
namespace noideas {

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
			br = gcnew SolidBrush(Color::White);
			pbPlot->Image = gcnew Bitmap(pbPlot->Width, pbPlot->Height);
			draw_pn = gcnew Pen(Color::Blue, 3);
			br_pol = gcnew SolidBrush(Color::Blue);
			ar = gcnew array<PointF>(1);
			prev_ch = gcnew array<float, 2>(3, 3);
			identity_mat(prev_ch);
			curr_ch = gcnew array<float, 2>(3, 3);
			identity_mat(curr_ch);
			 gen_ch= gcnew array<float, 2>(3, 3);
			 identity_mat(gen_ch);
			 buff_arr = gcnew array<PointF>(1);
			origin.X = 0;
			origin.Y = 0;
			buf_origin = origin;
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
	private: System::Windows::Forms::PictureBox^ pbPlot;
	private: System::Windows::Forms::Button^ Right_scale;
	protected:


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ plot_button;
	private: System::Windows::Forms::ListBox^ lBx;
	private: System::Windows::Forms::ListBox^ lBy;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btn_center;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ tBname;

	private: System::Windows::Forms::Label^ label1;

	protected:

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
			this->pbPlot = (gcnew System::Windows::Forms::PictureBox());
			this->Right_scale = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->plot_button = (gcnew System::Windows::Forms::Button());
			this->lBx = (gcnew System::Windows::Forms::ListBox());
			this->lBy = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btn_center = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->tBname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPlot))->BeginInit();
			this->SuspendLayout();
			// 
			// pbPlot
			// 
			this->pbPlot->Location = System::Drawing::Point(53, 39);
			this->pbPlot->Name = L"pbPlot";
			this->pbPlot->Size = System::Drawing::Size(1081, 475);
			this->pbPlot->TabIndex = 0;
			this->pbPlot->TabStop = false;
			this->pbPlot->Click += gcnew System::EventHandler(this, &MyForm::pbPlot_Click);
			this->pbPlot->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pbPlot_MouseClick);
			// 
			// Right_scale
			// 
			this->Right_scale->Location = System::Drawing::Point(1357, 703);
			this->Right_scale->Name = L"Right_scale";
			this->Right_scale->Size = System::Drawing::Size(237, 71);
			this->Right_scale->TabIndex = 1;
			this->Right_scale->Text = L"h.Scale+";
			this->Right_scale->UseVisualStyleBackColor = true;
			this->Right_scale->Click += gcnew System::EventHandler(this, &MyForm::Right_scale_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1357, 780);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(237, 64);
			this->button2->TabIndex = 2;
			this->button2->Text = L"h.Scale -";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// plot_button
			// 
			this->plot_button->Location = System::Drawing::Point(1357, 515);
			this->plot_button->Name = L"plot_button";
			this->plot_button->Size = System::Drawing::Size(237, 76);
			this->plot_button->TabIndex = 3;
			this->plot_button->Text = L"Построить график";
			this->plot_button->UseVisualStyleBackColor = true;
			this->plot_button->Click += gcnew System::EventHandler(this, &MyForm::plot_button_Click);
			// 
			// lBx
			// 
			this->lBx->FormattingEnabled = true;
			this->lBx->ItemHeight = 25;
			this->lBx->Location = System::Drawing::Point(1226, 39);
			this->lBx->Name = L"lBx";
			this->lBx->Size = System::Drawing::Size(193, 404);
			this->lBx->TabIndex = 4;
			this->lBx->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lBx_MouseClick);
			// 
			// lBy
			// 
			this->lBy->FormattingEnabled = true;
			this->lBy->ItemHeight = 25;
			this->lBy->Location = System::Drawing::Point(1531, 39);
			this->lBy->Name = L"lBy";
			this->lBy->Size = System::Drawing::Size(193, 404);
			this->lBy->TabIndex = 5;
			this->lBy->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lBy_MouseClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1357, 929);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(237, 69);
			this->button1->TabIndex = 6;
			this->button1->Text = L"w.Scale-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1357, 850);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(237, 73);
			this->button3->TabIndex = 7;
			this->button3->Text = L"w.Scale+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btn_center
			// 
			this->btn_center->Location = System::Drawing::Point(1357, 604);
			this->btn_center->Name = L"btn_center";
			this->btn_center->Size = System::Drawing::Size(237, 70);
			this->btn_center->TabIndex = 8;
			this->btn_center->Text = L"Выбрать центр";
			this->btn_center->UseVisualStyleBackColor = true;
			this->btn_center->Click += gcnew System::EventHandler(this, &MyForm::btn_center_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(343, 530);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(179, 48);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Up";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(181, 576);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 74);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Left";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(343, 650);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(179, 64);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Down";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(528, 576);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(174, 74);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Right";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(890, 703);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(195, 72);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Rotate";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// tBname
			// 
			this->tBname->Location = System::Drawing::Point(890, 643);
			this->tBname->Name = L"tBname";
			this->tBname->Size = System::Drawing::Size(167, 31);
			this->tBname->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(885, 604);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 46);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Введите угол:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1880, 1262);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tBname);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btn_center);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lBy);
			this->Controls->Add(this->lBx);
			this->Controls->Add(this->plot_button);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Right_scale);
			this->Controls->Add(this->pbPlot);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPlot))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Pen^ draw_pn;
		Brush^ br;
		Brush^ br_pol;
		array<PointF, 1>^ ar;
		int pointID = 0;
		array<float, 2>^ prev_ch;
		array<float, 2>^ curr_ch;
		array<float, 2>^ gen_ch;
		bool isPoint = false;
		array<PointF>^ buff_arr;
		PointF origin;
		PointF buf_origin;

		Void clear(Image^ img, Brush^ br) {
			Graphics^ gr = Graphics::FromImage(img);
			gr->FillRectangle(br, 0, 0, img->Width, img->Height);
		}
		/*void rotate(double phi) {
			array<float, 2>^ rot = gcnew array<float, 2>(3, 3);
			PointF buffer;
			rotate_mat(origin,phi, rot);
			for (int i = 0; i < lBx->Items->Count; i++)
			{
				buffer.X = Convert::ToDouble(lBx->Items[i]);
				buffer.Y = Convert::ToDouble(lBy->Items[i]);
				buffer = apply(buffer, rot);
				lBx->Items[i] = Convert::ToString(buffer.X);
				lBy->Items[i] = Convert::ToString(buffer.Y);
			}
			for (int i = 0; i < ar->Length; i++)
			{
				ar[i] = apply(ar[i], rot);
			}
			clear(pbPlot->Image, br);
			Graphics^ gr;
			gr = Graphics::FromImage(pbPlot->Image);
			gr->FillPolygon(br_pol, ar);
			pbPlot->Refresh();

		}
		void move(float x, float y) {
			array<float, 2>^ move = gcnew array<float,2>(3,3);
			PointF buffer; 
			move_mat(x, y, move);
			for (int i = 0;i < lBx->Items->Count; i++)
			{	
				
				buffer.X = Convert::ToDouble(lBx->Items[i]);
				buffer.Y = Convert::ToDouble(lBy->Items[i]);
				buffer = apply(buffer, move);
				lBx->Items[i] = Convert::ToString(buffer.X);
				lBy->Items[i] = Convert::ToString(buffer.Y);
			}
			origin.X = Convert::ToDouble(lBx->SelectedItem);
			origin.Y = Convert::ToDouble(lBy->SelectedItem);
			for (int i = 0; i < ar->Length; i++)
			{
				ar[i] = apply(ar[i], move);
			}
			clear(pbPlot->Image, br);
			Graphics^ gr;
			gr = Graphics::FromImage(pbPlot->Image);
			gr->FillPolygon(br_pol, ar);
			pbPlot->Refresh();

		}
		void scale(float x, float y) {
			array<float, 2>^ scal = gcnew array<float, 2>(3, 3);
			PointF buffer;	
			scale_mat(origin, x, y, scal);
		
			for (int i = 0; i < lBx->Items->Count; i++)
			{
				if (origin.X!= Convert::ToDouble(lBx->Items[i]))
				{
					buffer.X = Convert::ToDouble(lBx->Items[i]);
					buffer.Y = Convert::ToDouble(lBy->Items[i]);
					buffer = apply(buffer, scal);
					lBx->Items[i] = Convert::ToString(buffer.X);
					lBy->Items[i] = Convert::ToString(buffer.Y);
				}
			}
			for (int i = 0; i < ar->Length; i++) {	
				ar[i] = apply(ar[i], scal);
			}
			clear(pbPlot->Image, br);
			Graphics^ gr;
			gr = Graphics::FromImage(pbPlot->Image);
			gr->FillPolygon(br_pol, ar);
			pbPlot->Refresh();
		}*/
	private: System::Void plot_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lBx->Items->Count > 2) {
			clear(pbPlot->Image, br);
			ar->Resize(ar, lBx->Items->Count);
			buff_arr->Resize(buff_arr, lBx->Items->Count);
			for (int i = 0; i < lBx->Items->Count; i++) {
				ar[i].X = Convert::ToDouble(lBx->Items[i]);
				ar[i].Y = Convert::ToDouble(lBy->Items[i]);
				buff_arr[i] = ar[i];
			}
			Graphics^ gr;
			gr = Graphics::FromImage(pbPlot->Image);
			gr->FillPolygon(br_pol, ar);
			pbPlot->Refresh();
		}
	}
private: System::Void pbPlot_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	lBx->Items->Add(Convert::ToString(e->Location.X));
	lBy->Items->Add(Convert::ToString(e->Location.Y));
}
private: System::Void Right_scale_Click(System::Object^ sender, System::EventArgs^ e) {
	scale_mat(buf_origin,1,1.1,curr_ch);
	multiply(curr_ch, prev_ch, gen_ch);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			prev_ch[i, j] = gen_ch[i, j];
		}
	}for (int i = 0; i < lBx->Items->Count; i++)
	{
		buff_arr[i] = apply(ar[i], gen_ch);
	}
	buf_origin = apply(origin, gen_ch);
	clear(pbPlot->Image, br);
	Graphics^ gr;
	gr = Graphics::FromImage(pbPlot->Image);
	gr->FillPolygon(br_pol, buff_arr);
	pbPlot->Refresh();
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	scale_mat(buf_origin, 1, 0.9, curr_ch);
	multiply(curr_ch, prev_ch, gen_ch);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			prev_ch[i, j] = gen_ch[i, j];
		}
	}for (int i = 0; i < lBx->Items->Count; i++)
	{
		buff_arr[i] = apply(ar[i], gen_ch);
	}
	buf_origin = apply(origin, gen_ch);
	clear(pbPlot->Image, br);
	Graphics^ gr;
	gr = Graphics::FromImage(pbPlot->Image);
	gr->FillPolygon(br_pol, buff_arr);
	pbPlot->Refresh();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	scale_mat(buf_origin, 1.1, 1, curr_ch);
	multiply(curr_ch, prev_ch, gen_ch);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			prev_ch[i, j] = gen_ch[i, j];
		}
	}for (int i = 0; i < lBx->Items->Count; i++)
	{
		buff_arr[i] = apply(ar[i], gen_ch);
	}
	buf_origin = apply(origin, gen_ch);
	clear(pbPlot->Image, br);
	Graphics^ gr;
	gr = Graphics::FromImage(pbPlot->Image);
	gr->FillPolygon(br_pol, buff_arr);
	pbPlot->Refresh();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	scale_mat(buf_origin, 0.9, 1, curr_ch);
	multiply(curr_ch, prev_ch, gen_ch);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			prev_ch[i, j] = gen_ch[i, j];
		}
	}for (int i = 0; i < lBx->Items->Count; i++)
	{
		buff_arr[i] = apply(ar[i], gen_ch);
	}
	buf_origin = apply(origin, gen_ch);
	clear(pbPlot->Image, br);
	Graphics^ gr;
	gr = Graphics::FromImage(pbPlot->Image);
	gr->FillPolygon(br_pol, buff_arr);
	pbPlot->Refresh();
}
private: System::Void btn_center_Click(System::Object^ sender, System::EventArgs^ e) {
	origin.X = Convert::ToDouble(lBx->SelectedItem);
	origin.Y = Convert::ToDouble(lBy->SelectedItem);
	buf_origin = apply(origin,gen_ch);
}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		move_mat(0, 10, curr_ch);
		multiply(curr_ch, prev_ch, gen_ch);
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++) {
				prev_ch[i, j] = gen_ch[i, j];
			}
		}for (int i = 0; i < buff_arr->Length; i++)
		{
			buff_arr[i] = apply(ar[i], gen_ch);
		}
		buf_origin = apply(origin, gen_ch);
		clear(pbPlot->Image, br);
		Graphics^ gr;
		gr = Graphics::FromImage(pbPlot->Image);
		gr->FillPolygon(br_pol, buff_arr);
		pbPlot->Refresh();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	move_mat(0, -10, curr_ch);
	multiply(curr_ch, prev_ch, gen_ch);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			prev_ch[i, j] = gen_ch[i, j];
		}
	}for (int i = 0; i < buff_arr->Length; i++)
	{
		buff_arr[i] = apply(ar[i], gen_ch);
	}
	buf_origin = apply(origin, gen_ch);
	clear(pbPlot->Image, br);
	Graphics^ gr;
	gr = Graphics::FromImage(pbPlot->Image);
	gr->FillPolygon(br_pol, buff_arr);
	pbPlot->Refresh();
}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		move_mat(10, 0, curr_ch);
		multiply(curr_ch, prev_ch, gen_ch);
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++) {
				prev_ch[i, j] = gen_ch[i, j];
			}
		}for (int i = 0; i < buff_arr->Length; i++)
		{
			buff_arr[i] = apply(ar[i], gen_ch);
		}
		buf_origin = apply(origin, gen_ch);
		clear(pbPlot->Image, br);
		Graphics^ gr;
		gr = Graphics::FromImage(pbPlot->Image);
		gr->FillPolygon(br_pol, buff_arr);
		pbPlot->Refresh();
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	move_mat(-10, 0, curr_ch);
	multiply(curr_ch, prev_ch, gen_ch);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			prev_ch[i, j] = gen_ch[i, j];
		}
	}for (int i = 0; i < buff_arr->Length; i++)
	{
		buff_arr[i] = apply(ar[i], gen_ch);
	}
	buf_origin = apply(origin, gen_ch);
	clear(pbPlot->Image, br);
	Graphics^ gr;
	gr = Graphics::FromImage(pbPlot->Image);
	gr->FillPolygon(br_pol, buff_arr);
	pbPlot->Refresh();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	rotate_mat(buf_origin, Convert::ToDouble(tBname->Text) / 57.3, curr_ch);
	multiply(curr_ch, prev_ch, gen_ch);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			prev_ch[i, j] = gen_ch[i, j];
		}
	}for (int i = 0; i < buff_arr->Length; i++)
	{
		buff_arr[i] = apply(ar[i], gen_ch);
	}
	buf_origin = apply(origin, gen_ch);
	clear(pbPlot->Image, br);
	Graphics^ gr;
	gr = Graphics::FromImage(pbPlot->Image);
	gr->FillPolygon(br_pol, buff_arr);
	pbPlot->Refresh();
}
private: System::Void pbPlot_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lBx_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	lBy->SetSelected(lBx->Items->IndexOf(lBx->SelectedItems[0]), true);
}
private: System::Void lBy_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	lBx->SetSelected(lBy->Items->IndexOf(lBy->SelectedItems[0]), true);
}
};
}
