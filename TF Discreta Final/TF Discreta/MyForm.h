#pragma once
#include "Controlador.h"

namespace TFDiscreta {

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
	private:
		Controlador *objControlador;
		String^ L;
		int **MatrizO;
		int **MatrizI;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numCiclo;
	private: System::Windows::Forms::Button^  btnVerificarCiclo;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numCon1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  numCon2;
	private: System::Windows::Forms::Label^  lblRutaCiclo;
	private: System::Windows::Forms::Label^  lblConexion;

	private: System::Windows::Forms::Button^  btnConexion;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  y20;
	private: System::Windows::Forms::Label^  y19;

	private: System::Windows::Forms::Label^  y18;
	private: System::Windows::Forms::Label^  y17;
	private: System::Windows::Forms::Label^  y16;
	private: System::Windows::Forms::Label^  y14;
	private: System::Windows::Forms::Label^  y13;
	private: System::Windows::Forms::Label^  y11;
	private: System::Windows::Forms::Label^  y10;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  y9;
	private: System::Windows::Forms::Label^  y12;
	private: System::Windows::Forms::Label^  y15;
	private: System::Windows::Forms::Label^  j15;




	private: System::Windows::Forms::Label^  j12;

	private: System::Windows::Forms::Label^  j9;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  j20;

	private: System::Windows::Forms::Label^  j19;

	private: System::Windows::Forms::Label^  j18;

	private: System::Windows::Forms::Label^  j17;

	private: System::Windows::Forms::Label^  j16;

	private: System::Windows::Forms::Label^  j14;

	private: System::Windows::Forms::Label^  j13;

	private: System::Windows::Forms::Label^  j11;

	private: System::Windows::Forms::Label^  j10;

	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  x19;

	private: System::Windows::Forms::Label^  x11;

	private: System::Windows::Forms::Label^  x20;
	private: System::Windows::Forms::Label^  x18;
	private: System::Windows::Forms::Label^  x17;
	private: System::Windows::Forms::Label^  x16;
	private: System::Windows::Forms::Label^  x15;
	private: System::Windows::Forms::Label^  x14;
	private: System::Windows::Forms::Label^  x13;
	private: System::Windows::Forms::Label^  x12;
	private: System::Windows::Forms::Label^  x9;

	private: System::Windows::Forms::Label^  x10;
	private: System::Windows::Forms::Label^  x8;
	private: System::Windows::Forms::Label^  x7;
	private: System::Windows::Forms::Label^  x6;
	private: System::Windows::Forms::Label^  x5;
	private: System::Windows::Forms::Label^  x4;
	private: System::Windows::Forms::Label^  x3;
	private: System::Windows::Forms::Label^  x2;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  i19;
	private: System::Windows::Forms::Label^  i11;
	private: System::Windows::Forms::Label^  i20;
	private: System::Windows::Forms::Label^  i18;
	private: System::Windows::Forms::Label^  i17;
	private: System::Windows::Forms::Label^  i16;
	private: System::Windows::Forms::Label^  i15;
	private: System::Windows::Forms::Label^  i14;
	private: System::Windows::Forms::Label^  i13;
	private: System::Windows::Forms::Label^  i12;
	private: System::Windows::Forms::Label^  i9;
	private: System::Windows::Forms::Label^  i10;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Button^  btnGenerarCeros;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::NumericUpDown^  numX;
private: System::Windows::Forms::NumericUpDown^  numY;
private: System::Windows::Forms::Button^  btnModificar;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;




		 int N;

	
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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::NumericUpDown^  numN;
	private: System::Windows::Forms::Button^  btnGenerarMatriz;
	private: System::Windows::Forms::ListBox^  lbMatrizO;
	private: System::Windows::Forms::ListBox^  lbMatrizI;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numN = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnGenerarMatriz = (gcnew System::Windows::Forms::Button());
			this->lbMatrizO = (gcnew System::Windows::Forms::ListBox());
			this->lbMatrizI = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numCiclo = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnVerificarCiclo = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numCon1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numCon2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblRutaCiclo = (gcnew System::Windows::Forms::Label());
			this->lblConexion = (gcnew System::Windows::Forms::Label());
			this->btnConexion = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->y20 = (gcnew System::Windows::Forms::Label());
			this->y19 = (gcnew System::Windows::Forms::Label());
			this->y18 = (gcnew System::Windows::Forms::Label());
			this->y17 = (gcnew System::Windows::Forms::Label());
			this->y16 = (gcnew System::Windows::Forms::Label());
			this->y14 = (gcnew System::Windows::Forms::Label());
			this->y13 = (gcnew System::Windows::Forms::Label());
			this->y11 = (gcnew System::Windows::Forms::Label());
			this->y10 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->y9 = (gcnew System::Windows::Forms::Label());
			this->y12 = (gcnew System::Windows::Forms::Label());
			this->y15 = (gcnew System::Windows::Forms::Label());
			this->j15 = (gcnew System::Windows::Forms::Label());
			this->j12 = (gcnew System::Windows::Forms::Label());
			this->j9 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->j20 = (gcnew System::Windows::Forms::Label());
			this->j19 = (gcnew System::Windows::Forms::Label());
			this->j18 = (gcnew System::Windows::Forms::Label());
			this->j17 = (gcnew System::Windows::Forms::Label());
			this->j16 = (gcnew System::Windows::Forms::Label());
			this->j14 = (gcnew System::Windows::Forms::Label());
			this->j13 = (gcnew System::Windows::Forms::Label());
			this->j11 = (gcnew System::Windows::Forms::Label());
			this->j10 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->x19 = (gcnew System::Windows::Forms::Label());
			this->x11 = (gcnew System::Windows::Forms::Label());
			this->x20 = (gcnew System::Windows::Forms::Label());
			this->x18 = (gcnew System::Windows::Forms::Label());
			this->x17 = (gcnew System::Windows::Forms::Label());
			this->x16 = (gcnew System::Windows::Forms::Label());
			this->x15 = (gcnew System::Windows::Forms::Label());
			this->x14 = (gcnew System::Windows::Forms::Label());
			this->x13 = (gcnew System::Windows::Forms::Label());
			this->x12 = (gcnew System::Windows::Forms::Label());
			this->x9 = (gcnew System::Windows::Forms::Label());
			this->x10 = (gcnew System::Windows::Forms::Label());
			this->x8 = (gcnew System::Windows::Forms::Label());
			this->x7 = (gcnew System::Windows::Forms::Label());
			this->x6 = (gcnew System::Windows::Forms::Label());
			this->x5 = (gcnew System::Windows::Forms::Label());
			this->x4 = (gcnew System::Windows::Forms::Label());
			this->x3 = (gcnew System::Windows::Forms::Label());
			this->x2 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->i19 = (gcnew System::Windows::Forms::Label());
			this->i11 = (gcnew System::Windows::Forms::Label());
			this->i20 = (gcnew System::Windows::Forms::Label());
			this->i18 = (gcnew System::Windows::Forms::Label());
			this->i17 = (gcnew System::Windows::Forms::Label());
			this->i16 = (gcnew System::Windows::Forms::Label());
			this->i15 = (gcnew System::Windows::Forms::Label());
			this->i14 = (gcnew System::Windows::Forms::Label());
			this->i13 = (gcnew System::Windows::Forms::Label());
			this->i12 = (gcnew System::Windows::Forms::Label());
			this->i9 = (gcnew System::Windows::Forms::Label());
			this->i10 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->btnGenerarCeros = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->numX = (gcnew System::Windows::Forms::NumericUpDown());
			this->numY = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCiclo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCon1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCon2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese # de vertices: ";
			// 
			// numN
			// 
			this->numN->Location = System::Drawing::Point(131, 18);
			this->numN->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numN->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->numN->Name = L"numN";
			this->numN->Size = System::Drawing::Size(40, 20);
			this->numN->TabIndex = 1;
			this->numN->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			// 
			// btnGenerarMatriz
			// 
			this->btnGenerarMatriz->Location = System::Drawing::Point(12, 51);
			this->btnGenerarMatriz->Name = L"btnGenerarMatriz";
			this->btnGenerarMatriz->Size = System::Drawing::Size(197, 23);
			this->btnGenerarMatriz->TabIndex = 2;
			this->btnGenerarMatriz->Text = L"Generar aleatoriamente Matriz de R";
			this->btnGenerarMatriz->UseVisualStyleBackColor = true;
			this->btnGenerarMatriz->Click += gcnew System::EventHandler(this, &MyForm::btnGenerarMatriz_Click);
			// 
			// lbMatrizO
			// 
			this->lbMatrizO->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMatrizO->FormattingEnabled = true;
			this->lbMatrizO->ItemHeight = 17;
			this->lbMatrizO->Location = System::Drawing::Point(44, 131);
			this->lbMatrizO->Name = L"lbMatrizO";
			this->lbMatrizO->Size = System::Drawing::Size(336, 344);
			this->lbMatrizO->TabIndex = 3;
			this->lbMatrizO->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::lbMatrizO_SelectedIndexChanged);
			// 
			// lbMatrizI
			// 
			this->lbMatrizI->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMatrizI->FormattingEnabled = true;
			this->lbMatrizI->ItemHeight = 17;
			this->lbMatrizI->Location = System::Drawing::Point(464, 131);
			this->lbMatrizI->Name = L"lbMatrizI";
			this->lbMatrizI->Size = System::Drawing::Size(336, 344);
			this->lbMatrizI->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkRed;
			this->label2->Location = System::Drawing::Point(160, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Matriz de R";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkRed;
			this->label3->Location = System::Drawing::Point(552, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Matriz de R al infinito";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Vertice #: ";
			// 
			// numCiclo
			// 
			this->numCiclo->Enabled = false;
			this->numCiclo->Location = System::Drawing::Point(77, 27);
			this->numCiclo->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numCiclo->Name = L"numCiclo";
			this->numCiclo->Size = System::Drawing::Size(42, 20);
			this->numCiclo->TabIndex = 8;
			this->numCiclo->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// btnVerificarCiclo
			// 
			this->btnVerificarCiclo->Enabled = false;
			this->btnVerificarCiclo->Location = System::Drawing::Point(182, 24);
			this->btnVerificarCiclo->Name = L"btnVerificarCiclo";
			this->btnVerificarCiclo->Size = System::Drawing::Size(75, 23);
			this->btnVerificarCiclo->TabIndex = 9;
			this->btnVerificarCiclo->Text = L"Hallar ciclo";
			this->btnVerificarCiclo->UseVisualStyleBackColor = true;
			this->btnVerificarCiclo->Click += gcnew System::EventHandler(this, &MyForm::btnVerificarCiclo_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Del vertice #:";
			// 
			// numCon1
			// 
			this->numCon1->Enabled = false;
			this->numCon1->Location = System::Drawing::Point(100, 27);
			this->numCon1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numCon1->Name = L"numCon1";
			this->numCon1->Size = System::Drawing::Size(44, 20);
			this->numCon1->TabIndex = 11;
			this->numCon1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(150, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"hasta vertice #: ";
			// 
			// numCon2
			// 
			this->numCon2->Enabled = false;
			this->numCon2->Location = System::Drawing::Point(240, 27);
			this->numCon2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numCon2->Name = L"numCon2";
			this->numCon2->Size = System::Drawing::Size(44, 20);
			this->numCon2->TabIndex = 13;
			this->numCon2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// lblRutaCiclo
			// 
			this->lblRutaCiclo->AutoSize = true;
			this->lblRutaCiclo->Location = System::Drawing::Point(15, 66);
			this->lblRutaCiclo->Name = L"lblRutaCiclo";
			this->lblRutaCiclo->Size = System::Drawing::Size(93, 13);
			this->lblRutaCiclo->TabIndex = 14;
			this->lblRutaCiclo->Text = L"Una ruta del ciclo:";
			// 
			// lblConexion
			// 
			this->lblConexion->AutoSize = true;
			this->lblConexion->Location = System::Drawing::Point(23, 66);
			this->lblConexion->Name = L"lblConexion";
			this->lblConexion->Size = System::Drawing::Size(123, 13);
			this->lblConexion->TabIndex = 15;
			this->lblConexion->Text = L"Una ruta de la conexion:";
			// 
			// btnConexion
			// 
			this->btnConexion->Enabled = false;
			this->btnConexion->Location = System::Drawing::Point(295, 24);
			this->btnConexion->Name = L"btnConexion";
			this->btnConexion->Size = System::Drawing::Size(100, 23);
			this->btnConexion->TabIndex = 16;
			this->btnConexion->Text = L"Hallar conexion";
			this->btnConexion->UseVisualStyleBackColor = true;
			this->btnConexion->Click += gcnew System::EventHandler(this, &MyForm::btnConexion_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblRutaCiclo);
			this->groupBox1->Controls->Add(this->btnVerificarCiclo);
			this->groupBox1->Controls->Add(this->numCiclo);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(35, 492);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(354, 110);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ciclo";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnConexion);
			this->groupBox2->Controls->Add(this->lblConexion);
			this->groupBox2->Controls->Add(this->numCon2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->numCon1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(427, 493);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(412, 109);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Conectividad";
			// 
			// y20
			// 
			this->y20->AutoSize = true;
			this->y20->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y20->ForeColor = System::Drawing::Color::Blue;
			this->y20->Location = System::Drawing::Point(353, 114);
			this->y20->Name = L"y20";
			this->y20->Size = System::Drawing::Size(19, 14);
			this->y20->TabIndex = 224;
			this->y20->Text = L"20";
			// 
			// y19
			// 
			this->y19->AutoSize = true;
			this->y19->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y19->ForeColor = System::Drawing::Color::Blue;
			this->y19->Location = System::Drawing::Point(335, 114);
			this->y19->Name = L"y19";
			this->y19->Size = System::Drawing::Size(19, 14);
			this->y19->TabIndex = 223;
			this->y19->Text = L"19";
			// 
			// y18
			// 
			this->y18->AutoSize = true;
			this->y18->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y18->ForeColor = System::Drawing::Color::Blue;
			this->y18->Location = System::Drawing::Point(319, 114);
			this->y18->Name = L"y18";
			this->y18->Size = System::Drawing::Size(19, 14);
			this->y18->TabIndex = 222;
			this->y18->Text = L"18";
			// 
			// y17
			// 
			this->y17->AutoSize = true;
			this->y17->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y17->ForeColor = System::Drawing::Color::Blue;
			this->y17->Location = System::Drawing::Point(304, 114);
			this->y17->Name = L"y17";
			this->y17->Size = System::Drawing::Size(19, 14);
			this->y17->TabIndex = 221;
			this->y17->Text = L"17";
			// 
			// y16
			// 
			this->y16->AutoSize = true;
			this->y16->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y16->ForeColor = System::Drawing::Color::Blue;
			this->y16->Location = System::Drawing::Point(287, 114);
			this->y16->Name = L"y16";
			this->y16->Size = System::Drawing::Size(19, 14);
			this->y16->TabIndex = 220;
			this->y16->Text = L"16";
			// 
			// y14
			// 
			this->y14->AutoSize = true;
			this->y14->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y14->ForeColor = System::Drawing::Color::Blue;
			this->y14->Location = System::Drawing::Point(255, 114);
			this->y14->Name = L"y14";
			this->y14->Size = System::Drawing::Size(19, 14);
			this->y14->TabIndex = 219;
			this->y14->Text = L"14";
			// 
			// y13
			// 
			this->y13->AutoSize = true;
			this->y13->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y13->ForeColor = System::Drawing::Color::Blue;
			this->y13->Location = System::Drawing::Point(239, 114);
			this->y13->Name = L"y13";
			this->y13->Size = System::Drawing::Size(19, 14);
			this->y13->TabIndex = 218;
			this->y13->Text = L"13";
			// 
			// y11
			// 
			this->y11->AutoSize = true;
			this->y11->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y11->ForeColor = System::Drawing::Color::Blue;
			this->y11->Location = System::Drawing::Point(207, 114);
			this->y11->Name = L"y11";
			this->y11->Size = System::Drawing::Size(18, 14);
			this->y11->TabIndex = 226;
			this->y11->Text = L"11";
			// 
			// y10
			// 
			this->y10->AutoSize = true;
			this->y10->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y10->ForeColor = System::Drawing::Color::Blue;
			this->y10->Location = System::Drawing::Point(190, 114);
			this->y10->Name = L"y10";
			this->y10->Size = System::Drawing::Size(19, 14);
			this->y10->TabIndex = 217;
			this->y10->Text = L"10";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Blue;
			this->label14->Location = System::Drawing::Point(146, 114);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 14);
			this->label14->TabIndex = 216;
			this->label14->Text = L"7";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Blue;
			this->label11->Location = System::Drawing::Point(131, 114);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 14);
			this->label11->TabIndex = 215;
			this->label11->Text = L"6";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Blue;
			this->label12->Location = System::Drawing::Point(115, 114);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 14);
			this->label12->TabIndex = 214;
			this->label12->Text = L"5";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Blue;
			this->label10->Location = System::Drawing::Point(83, 114);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 14);
			this->label10->TabIndex = 213;
			this->label10->Text = L"3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Blue;
			this->label8->Location = System::Drawing::Point(66, 114);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 14);
			this->label8->TabIndex = 212;
			this->label8->Text = L"2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Blue;
			this->label7->Location = System::Drawing::Point(50, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 14);
			this->label7->TabIndex = 225;
			this->label7->Text = L"1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Blue;
			this->label9->Location = System::Drawing::Point(98, 114);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 14);
			this->label9->TabIndex = 227;
			this->label9->Text = L"4";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Blue;
			this->label13->Location = System::Drawing::Point(160, 114);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 14);
			this->label13->TabIndex = 228;
			this->label13->Text = L"8";
			// 
			// y9
			// 
			this->y9->AutoSize = true;
			this->y9->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y9->ForeColor = System::Drawing::Color::Blue;
			this->y9->Location = System::Drawing::Point(176, 114);
			this->y9->Name = L"y9";
			this->y9->Size = System::Drawing::Size(13, 14);
			this->y9->TabIndex = 229;
			this->y9->Text = L"9";
			// 
			// y12
			// 
			this->y12->AutoSize = true;
			this->y12->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y12->ForeColor = System::Drawing::Color::Blue;
			this->y12->Location = System::Drawing::Point(221, 114);
			this->y12->Name = L"y12";
			this->y12->Size = System::Drawing::Size(19, 14);
			this->y12->TabIndex = 230;
			this->y12->Text = L"12";
			// 
			// y15
			// 
			this->y15->AutoSize = true;
			this->y15->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y15->ForeColor = System::Drawing::Color::Blue;
			this->y15->Location = System::Drawing::Point(271, 114);
			this->y15->Name = L"y15";
			this->y15->Size = System::Drawing::Size(19, 14);
			this->y15->TabIndex = 231;
			this->y15->Text = L"15";
			// 
			// j15
			// 
			this->j15->AutoSize = true;
			this->j15->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j15->ForeColor = System::Drawing::Color::Blue;
			this->j15->Location = System::Drawing::Point(692, 114);
			this->j15->Name = L"j15";
			this->j15->Size = System::Drawing::Size(19, 14);
			this->j15->TabIndex = 251;
			this->j15->Text = L"15";
			// 
			// j12
			// 
			this->j12->AutoSize = true;
			this->j12->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j12->ForeColor = System::Drawing::Color::Blue;
			this->j12->Location = System::Drawing::Point(642, 114);
			this->j12->Name = L"j12";
			this->j12->Size = System::Drawing::Size(19, 14);
			this->j12->TabIndex = 250;
			this->j12->Text = L"12";
			// 
			// j9
			// 
			this->j9->AutoSize = true;
			this->j9->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j9->ForeColor = System::Drawing::Color::Blue;
			this->j9->Location = System::Drawing::Point(597, 114);
			this->j9->Name = L"j9";
			this->j9->Size = System::Drawing::Size(13, 14);
			this->j9->TabIndex = 249;
			this->j9->Text = L"9";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Blue;
			this->label21->Location = System::Drawing::Point(581, 114);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(13, 14);
			this->label21->TabIndex = 248;
			this->label21->Text = L"8";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Blue;
			this->label22->Location = System::Drawing::Point(519, 114);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(13, 14);
			this->label22->TabIndex = 247;
			this->label22->Text = L"4";
			// 
			// j20
			// 
			this->j20->AutoSize = true;
			this->j20->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j20->ForeColor = System::Drawing::Color::Blue;
			this->j20->Location = System::Drawing::Point(774, 114);
			this->j20->Name = L"j20";
			this->j20->Size = System::Drawing::Size(19, 14);
			this->j20->TabIndex = 244;
			this->j20->Text = L"20";
			// 
			// j19
			// 
			this->j19->AutoSize = true;
			this->j19->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j19->ForeColor = System::Drawing::Color::Blue;
			this->j19->Location = System::Drawing::Point(756, 114);
			this->j19->Name = L"j19";
			this->j19->Size = System::Drawing::Size(19, 14);
			this->j19->TabIndex = 243;
			this->j19->Text = L"19";
			// 
			// j18
			// 
			this->j18->AutoSize = true;
			this->j18->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j18->ForeColor = System::Drawing::Color::Blue;
			this->j18->Location = System::Drawing::Point(740, 114);
			this->j18->Name = L"j18";
			this->j18->Size = System::Drawing::Size(19, 14);
			this->j18->TabIndex = 242;
			this->j18->Text = L"18";
			// 
			// j17
			// 
			this->j17->AutoSize = true;
			this->j17->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j17->ForeColor = System::Drawing::Color::Blue;
			this->j17->Location = System::Drawing::Point(725, 114);
			this->j17->Name = L"j17";
			this->j17->Size = System::Drawing::Size(19, 14);
			this->j17->TabIndex = 241;
			this->j17->Text = L"17";
			// 
			// j16
			// 
			this->j16->AutoSize = true;
			this->j16->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j16->ForeColor = System::Drawing::Color::Blue;
			this->j16->Location = System::Drawing::Point(708, 114);
			this->j16->Name = L"j16";
			this->j16->Size = System::Drawing::Size(19, 14);
			this->j16->TabIndex = 240;
			this->j16->Text = L"16";
			// 
			// j14
			// 
			this->j14->AutoSize = true;
			this->j14->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j14->ForeColor = System::Drawing::Color::Blue;
			this->j14->Location = System::Drawing::Point(676, 114);
			this->j14->Name = L"j14";
			this->j14->Size = System::Drawing::Size(19, 14);
			this->j14->TabIndex = 239;
			this->j14->Text = L"14";
			// 
			// j13
			// 
			this->j13->AutoSize = true;
			this->j13->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j13->ForeColor = System::Drawing::Color::Blue;
			this->j13->Location = System::Drawing::Point(660, 114);
			this->j13->Name = L"j13";
			this->j13->Size = System::Drawing::Size(19, 14);
			this->j13->TabIndex = 238;
			this->j13->Text = L"13";
			// 
			// j11
			// 
			this->j11->AutoSize = true;
			this->j11->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j11->ForeColor = System::Drawing::Color::Blue;
			this->j11->Location = System::Drawing::Point(628, 114);
			this->j11->Name = L"j11";
			this->j11->Size = System::Drawing::Size(18, 14);
			this->j11->TabIndex = 246;
			this->j11->Text = L"11";
			// 
			// j10
			// 
			this->j10->AutoSize = true;
			this->j10->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->j10->ForeColor = System::Drawing::Color::Blue;
			this->j10->Location = System::Drawing::Point(611, 114);
			this->j10->Name = L"j10";
			this->j10->Size = System::Drawing::Size(19, 14);
			this->j10->TabIndex = 237;
			this->j10->Text = L"10";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::Blue;
			this->label32->Location = System::Drawing::Point(567, 114);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(13, 14);
			this->label32->TabIndex = 236;
			this->label32->Text = L"7";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::Blue;
			this->label33->Location = System::Drawing::Point(552, 114);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(13, 14);
			this->label33->TabIndex = 235;
			this->label33->Text = L"6";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::Blue;
			this->label34->Location = System::Drawing::Point(536, 114);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(13, 14);
			this->label34->TabIndex = 234;
			this->label34->Text = L"5";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::Blue;
			this->label35->Location = System::Drawing::Point(504, 114);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(13, 14);
			this->label35->TabIndex = 233;
			this->label35->Text = L"3";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::Blue;
			this->label36->Location = System::Drawing::Point(487, 114);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(13, 14);
			this->label36->TabIndex = 232;
			this->label36->Text = L"2";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::Blue;
			this->label37->Location = System::Drawing::Point(471, 114);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(13, 14);
			this->label37->TabIndex = 245;
			this->label37->Text = L"1";
			// 
			// x19
			// 
			this->x19->AutoSize = true;
			this->x19->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x19->ForeColor = System::Drawing::Color::Blue;
			this->x19->Location = System::Drawing::Point(19, 441);
			this->x19->Name = L"x19";
			this->x19->Size = System::Drawing::Size(19, 14);
			this->x19->TabIndex = 1133;
			this->x19->Text = L"19";
			// 
			// x11
			// 
			this->x11->AutoSize = true;
			this->x11->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x11->ForeColor = System::Drawing::Color::Blue;
			this->x11->Location = System::Drawing::Point(20, 304);
			this->x11->Name = L"x11";
			this->x11->Size = System::Drawing::Size(18, 14);
			this->x11->TabIndex = 1132;
			this->x11->Text = L"11";
			// 
			// x20
			// 
			this->x20->AutoSize = true;
			this->x20->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x20->ForeColor = System::Drawing::Color::Blue;
			this->x20->Location = System::Drawing::Point(19, 458);
			this->x20->Name = L"x20";
			this->x20->Size = System::Drawing::Size(19, 14);
			this->x20->TabIndex = 1129;
			this->x20->Text = L"20";
			// 
			// x18
			// 
			this->x18->AutoSize = true;
			this->x18->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x18->ForeColor = System::Drawing::Color::Blue;
			this->x18->Location = System::Drawing::Point(19, 424);
			this->x18->Name = L"x18";
			this->x18->Size = System::Drawing::Size(19, 14);
			this->x18->TabIndex = 1128;
			this->x18->Text = L"18";
			// 
			// x17
			// 
			this->x17->AutoSize = true;
			this->x17->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x17->ForeColor = System::Drawing::Color::Blue;
			this->x17->Location = System::Drawing::Point(19, 407);
			this->x17->Name = L"x17";
			this->x17->Size = System::Drawing::Size(19, 14);
			this->x17->TabIndex = 1127;
			this->x17->Text = L"17";
			// 
			// x16
			// 
			this->x16->AutoSize = true;
			this->x16->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x16->ForeColor = System::Drawing::Color::Blue;
			this->x16->Location = System::Drawing::Point(19, 390);
			this->x16->Name = L"x16";
			this->x16->Size = System::Drawing::Size(19, 14);
			this->x16->TabIndex = 1126;
			this->x16->Text = L"16";
			// 
			// x15
			// 
			this->x15->AutoSize = true;
			this->x15->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x15->ForeColor = System::Drawing::Color::Blue;
			this->x15->Location = System::Drawing::Point(19, 373);
			this->x15->Name = L"x15";
			this->x15->Size = System::Drawing::Size(19, 14);
			this->x15->TabIndex = 1125;
			this->x15->Text = L"15";
			// 
			// x14
			// 
			this->x14->AutoSize = true;
			this->x14->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x14->ForeColor = System::Drawing::Color::Blue;
			this->x14->Location = System::Drawing::Point(19, 356);
			this->x14->Name = L"x14";
			this->x14->Size = System::Drawing::Size(19, 14);
			this->x14->TabIndex = 1124;
			this->x14->Text = L"14";
			// 
			// x13
			// 
			this->x13->AutoSize = true;
			this->x13->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x13->ForeColor = System::Drawing::Color::Blue;
			this->x13->Location = System::Drawing::Point(19, 339);
			this->x13->Name = L"x13";
			this->x13->Size = System::Drawing::Size(19, 14);
			this->x13->TabIndex = 1123;
			this->x13->Text = L"13";
			// 
			// x12
			// 
			this->x12->AutoSize = true;
			this->x12->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x12->ForeColor = System::Drawing::Color::Blue;
			this->x12->Location = System::Drawing::Point(20, 322);
			this->x12->Name = L"x12";
			this->x12->Size = System::Drawing::Size(19, 14);
			this->x12->TabIndex = 1131;
			this->x12->Text = L"12";
			// 
			// x9
			// 
			this->x9->AutoSize = true;
			this->x9->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x9->ForeColor = System::Drawing::Color::Blue;
			this->x9->Location = System::Drawing::Point(25, 270);
			this->x9->Name = L"x9";
			this->x9->Size = System::Drawing::Size(13, 14);
			this->x9->TabIndex = 1121;
			this->x9->Text = L"9";
			// 
			// x10
			// 
			this->x10->AutoSize = true;
			this->x10->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x10->ForeColor = System::Drawing::Color::Blue;
			this->x10->Location = System::Drawing::Point(19, 288);
			this->x10->Name = L"x10";
			this->x10->Size = System::Drawing::Size(19, 14);
			this->x10->TabIndex = 1122;
			this->x10->Text = L"10";
			// 
			// x8
			// 
			this->x8->AutoSize = true;
			this->x8->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x8->ForeColor = System::Drawing::Color::Blue;
			this->x8->Location = System::Drawing::Point(25, 253);
			this->x8->Name = L"x8";
			this->x8->Size = System::Drawing::Size(13, 14);
			this->x8->TabIndex = 1120;
			this->x8->Text = L"8";
			// 
			// x7
			// 
			this->x7->AutoSize = true;
			this->x7->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x7->ForeColor = System::Drawing::Color::Blue;
			this->x7->Location = System::Drawing::Point(25, 236);
			this->x7->Name = L"x7";
			this->x7->Size = System::Drawing::Size(13, 14);
			this->x7->TabIndex = 1119;
			this->x7->Text = L"7";
			// 
			// x6
			// 
			this->x6->AutoSize = true;
			this->x6->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x6->ForeColor = System::Drawing::Color::Blue;
			this->x6->Location = System::Drawing::Point(25, 219);
			this->x6->Name = L"x6";
			this->x6->Size = System::Drawing::Size(13, 14);
			this->x6->TabIndex = 1118;
			this->x6->Text = L"6";
			// 
			// x5
			// 
			this->x5->AutoSize = true;
			this->x5->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x5->ForeColor = System::Drawing::Color::Blue;
			this->x5->Location = System::Drawing::Point(25, 203);
			this->x5->Name = L"x5";
			this->x5->Size = System::Drawing::Size(13, 14);
			this->x5->TabIndex = 1117;
			this->x5->Text = L"5";
			// 
			// x4
			// 
			this->x4->AutoSize = true;
			this->x4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x4->ForeColor = System::Drawing::Color::Blue;
			this->x4->Location = System::Drawing::Point(25, 185);
			this->x4->Name = L"x4";
			this->x4->Size = System::Drawing::Size(13, 14);
			this->x4->TabIndex = 1116;
			this->x4->Text = L"4";
			// 
			// x3
			// 
			this->x3->AutoSize = true;
			this->x3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x3->ForeColor = System::Drawing::Color::Blue;
			this->x3->Location = System::Drawing::Point(25, 169);
			this->x3->Name = L"x3";
			this->x3->Size = System::Drawing::Size(13, 14);
			this->x3->TabIndex = 1115;
			this->x3->Text = L"3";
			// 
			// x2
			// 
			this->x2->AutoSize = true;
			this->x2->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x2->ForeColor = System::Drawing::Color::Blue;
			this->x2->Location = System::Drawing::Point(25, 152);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(13, 14);
			this->x2->TabIndex = 1114;
			this->x2->Text = L"2";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::Blue;
			this->label40->Location = System::Drawing::Point(25, 136);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(13, 14);
			this->label40->TabIndex = 1134;
			this->label40->Text = L"1";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Blue;
			this->label15->Location = System::Drawing::Point(444, 136);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 14);
			this->label15->TabIndex = 1154;
			this->label15->Text = L"1";
			// 
			// i19
			// 
			this->i19->AutoSize = true;
			this->i19->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i19->ForeColor = System::Drawing::Color::Blue;
			this->i19->Location = System::Drawing::Point(438, 441);
			this->i19->Name = L"i19";
			this->i19->Size = System::Drawing::Size(19, 14);
			this->i19->TabIndex = 1153;
			this->i19->Text = L"19";
			// 
			// i11
			// 
			this->i11->AutoSize = true;
			this->i11->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i11->ForeColor = System::Drawing::Color::Blue;
			this->i11->Location = System::Drawing::Point(439, 304);
			this->i11->Name = L"i11";
			this->i11->Size = System::Drawing::Size(18, 14);
			this->i11->TabIndex = 1152;
			this->i11->Text = L"11";
			// 
			// i20
			// 
			this->i20->AutoSize = true;
			this->i20->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i20->ForeColor = System::Drawing::Color::Blue;
			this->i20->Location = System::Drawing::Point(438, 458);
			this->i20->Name = L"i20";
			this->i20->Size = System::Drawing::Size(19, 14);
			this->i20->TabIndex = 1150;
			this->i20->Text = L"20";
			// 
			// i18
			// 
			this->i18->AutoSize = true;
			this->i18->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i18->ForeColor = System::Drawing::Color::Blue;
			this->i18->Location = System::Drawing::Point(438, 424);
			this->i18->Name = L"i18";
			this->i18->Size = System::Drawing::Size(19, 14);
			this->i18->TabIndex = 1149;
			this->i18->Text = L"18";
			// 
			// i17
			// 
			this->i17->AutoSize = true;
			this->i17->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i17->ForeColor = System::Drawing::Color::Blue;
			this->i17->Location = System::Drawing::Point(438, 407);
			this->i17->Name = L"i17";
			this->i17->Size = System::Drawing::Size(19, 14);
			this->i17->TabIndex = 1148;
			this->i17->Text = L"17";
			// 
			// i16
			// 
			this->i16->AutoSize = true;
			this->i16->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i16->ForeColor = System::Drawing::Color::Blue;
			this->i16->Location = System::Drawing::Point(438, 390);
			this->i16->Name = L"i16";
			this->i16->Size = System::Drawing::Size(19, 14);
			this->i16->TabIndex = 1147;
			this->i16->Text = L"16";
			// 
			// i15
			// 
			this->i15->AutoSize = true;
			this->i15->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i15->ForeColor = System::Drawing::Color::Blue;
			this->i15->Location = System::Drawing::Point(438, 373);
			this->i15->Name = L"i15";
			this->i15->Size = System::Drawing::Size(19, 14);
			this->i15->TabIndex = 1146;
			this->i15->Text = L"15";
			// 
			// i14
			// 
			this->i14->AutoSize = true;
			this->i14->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i14->ForeColor = System::Drawing::Color::Blue;
			this->i14->Location = System::Drawing::Point(438, 356);
			this->i14->Name = L"i14";
			this->i14->Size = System::Drawing::Size(19, 14);
			this->i14->TabIndex = 1145;
			this->i14->Text = L"14";
			// 
			// i13
			// 
			this->i13->AutoSize = true;
			this->i13->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i13->ForeColor = System::Drawing::Color::Blue;
			this->i13->Location = System::Drawing::Point(438, 339);
			this->i13->Name = L"i13";
			this->i13->Size = System::Drawing::Size(19, 14);
			this->i13->TabIndex = 1144;
			this->i13->Text = L"13";
			// 
			// i12
			// 
			this->i12->AutoSize = true;
			this->i12->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i12->ForeColor = System::Drawing::Color::Blue;
			this->i12->Location = System::Drawing::Point(439, 322);
			this->i12->Name = L"i12";
			this->i12->Size = System::Drawing::Size(19, 14);
			this->i12->TabIndex = 1151;
			this->i12->Text = L"12";
			// 
			// i9
			// 
			this->i9->AutoSize = true;
			this->i9->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i9->ForeColor = System::Drawing::Color::Blue;
			this->i9->Location = System::Drawing::Point(444, 270);
			this->i9->Name = L"i9";
			this->i9->Size = System::Drawing::Size(13, 14);
			this->i9->TabIndex = 1142;
			this->i9->Text = L"9";
			// 
			// i10
			// 
			this->i10->AutoSize = true;
			this->i10->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i10->ForeColor = System::Drawing::Color::Blue;
			this->i10->Location = System::Drawing::Point(438, 288);
			this->i10->Name = L"i10";
			this->i10->Size = System::Drawing::Size(19, 14);
			this->i10->TabIndex = 1143;
			this->i10->Text = L"10";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::Blue;
			this->label30->Location = System::Drawing::Point(444, 253);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(13, 14);
			this->label30->TabIndex = 1141;
			this->label30->Text = L"8";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::Blue;
			this->label31->Location = System::Drawing::Point(444, 236);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(13, 14);
			this->label31->TabIndex = 1140;
			this->label31->Text = L"7";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::Blue;
			this->label38->Location = System::Drawing::Point(444, 219);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(13, 14);
			this->label38->TabIndex = 1139;
			this->label38->Text = L"6";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::Blue;
			this->label39->Location = System::Drawing::Point(444, 203);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(13, 14);
			this->label39->TabIndex = 1138;
			this->label39->Text = L"5";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::Blue;
			this->label41->Location = System::Drawing::Point(444, 185);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(13, 14);
			this->label41->TabIndex = 1137;
			this->label41->Text = L"4";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::Blue;
			this->label42->Location = System::Drawing::Point(444, 169);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(13, 14);
			this->label42->TabIndex = 1136;
			this->label42->Text = L"3";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::Blue;
			this->label43->Location = System::Drawing::Point(444, 152);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(13, 14);
			this->label43->TabIndex = 1135;
			this->label43->Text = L"2";
			// 
			// btnGenerarCeros
			// 
			this->btnGenerarCeros->Location = System::Drawing::Point(258, 15);
			this->btnGenerarCeros->Name = L"btnGenerarCeros";
			this->btnGenerarCeros->Size = System::Drawing::Size(130, 23);
			this->btnGenerarCeros->TabIndex = 1155;
			this->btnGenerarCeros->Text = L"Generar matriz de ceros";
			this->btnGenerarCeros->UseVisualStyleBackColor = true;
			this->btnGenerarCeros->Click += gcnew System::EventHandler(this, &MyForm::btnGenerarCeros_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(255, 56);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 13);
			this->label16->TabIndex = 1156;
			this->label16->Text = L"X: ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(335, 56);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(17, 13);
			this->label17->TabIndex = 1157;
			this->label17->Text = L"Y:";
			// 
			// numX
			// 
			this->numX->Enabled = false;
			this->numX->Location = System::Drawing::Point(281, 54);
			this->numX->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numX->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numX->Name = L"numX";
			this->numX->Size = System::Drawing::Size(40, 20);
			this->numX->TabIndex = 1158;
			this->numX->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numY
			// 
			this->numY->Enabled = false;
			this->numY->Location = System::Drawing::Point(358, 54);
			this->numY->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numY->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numY->Name = L"numY";
			this->numY->Size = System::Drawing::Size(40, 20);
			this->numY->TabIndex = 1159;
			this->numY->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// btnModificar
			// 
			this->btnModificar->Enabled = false;
			this->btnModificar->Location = System::Drawing::Point(419, 51);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(130, 23);
			this->btnModificar->TabIndex = 1160;
			this->btnModificar->Text = L"Unir /  Desunir";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &MyForm::btnModificar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(663, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 57);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 1161;
			this->pictureBox1->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(732, 15);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(65, 12);
			this->label18->TabIndex = 1162;
			this->label18->Text = L"Developed by:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(732, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(87, 12);
			this->label19->TabIndex = 1163;
			this->label19->Text = L"Giancarlo Escobedo";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 611);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->numY);
			this->Controls->Add(this->numX);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->btnGenerarCeros);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->i19);
			this->Controls->Add(this->i11);
			this->Controls->Add(this->i20);
			this->Controls->Add(this->i18);
			this->Controls->Add(this->i17);
			this->Controls->Add(this->i16);
			this->Controls->Add(this->i15);
			this->Controls->Add(this->i14);
			this->Controls->Add(this->i13);
			this->Controls->Add(this->i12);
			this->Controls->Add(this->i9);
			this->Controls->Add(this->i10);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->x19);
			this->Controls->Add(this->x11);
			this->Controls->Add(this->x20);
			this->Controls->Add(this->x18);
			this->Controls->Add(this->x17);
			this->Controls->Add(this->x16);
			this->Controls->Add(this->x15);
			this->Controls->Add(this->x14);
			this->Controls->Add(this->x13);
			this->Controls->Add(this->x12);
			this->Controls->Add(this->x9);
			this->Controls->Add(this->x10);
			this->Controls->Add(this->x8);
			this->Controls->Add(this->x7);
			this->Controls->Add(this->x6);
			this->Controls->Add(this->x5);
			this->Controls->Add(this->x4);
			this->Controls->Add(this->x3);
			this->Controls->Add(this->x2);
			this->Controls->Add(this->j15);
			this->Controls->Add(this->j12);
			this->Controls->Add(this->j9);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->j20);
			this->Controls->Add(this->j19);
			this->Controls->Add(this->j18);
			this->Controls->Add(this->j17);
			this->Controls->Add(this->j16);
			this->Controls->Add(this->j14);
			this->Controls->Add(this->j13);
			this->Controls->Add(this->j11);
			this->Controls->Add(this->j10);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->y15);
			this->Controls->Add(this->y12);
			this->Controls->Add(this->y9);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->y20);
			this->Controls->Add(this->y19);
			this->Controls->Add(this->y18);
			this->Controls->Add(this->y17);
			this->Controls->Add(this->y16);
			this->Controls->Add(this->y14);
			this->Controls->Add(this->y13);
			this->Controls->Add(this->y11);
			this->Controls->Add(this->y10);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbMatrizI);
			this->Controls->Add(this->lbMatrizO);
			this->Controls->Add(this->btnGenerarMatriz);
			this->Controls->Add(this->numN);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"TF Discreta Conectividad";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCiclo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCon1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCon2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 
				 objControlador = new Controlador();				 
	}
private: System::Void btnGenerarMatriz_Click(System::Object^  sender, System::EventArgs^  e) {
				 
			 N = Convert::ToInt32(numN->Value);
			 MatrizO = objControlador->CrearMatrizOriginal(N);
			 MatrizI = objControlador->CrearMatrizInfinito(N);
			 MostrarMatrices(MatrizO, MatrizI);

			 numCiclo->Maximum = (Decimal)N;
			 numCon1->Maximum = (Decimal)N;
			 numCon2->Maximum = (Decimal)N;

			 numX->Maximum = (Decimal)N;
			 numY->Maximum = (Decimal)N;

			 numCiclo->Enabled = true;
			 numCon1->Enabled = true;
			 numCon2->Enabled = true;

			 numX->Enabled = true;
			 numY->Enabled = true;
			 btnModificar->Enabled = true;

			 numX->Value = 1;
			 numY->Value = 1;

			 btnVerificarCiclo->Enabled = true;
			 btnConexion->Enabled = true;

			 lblRutaCiclo->Text = "Una ruta del ciclo: ";
			 lblConexion->Text = "Una ruta de la conexion: ";

			 OcultarVertices();
			 MostrarVertices();
	}
			 void MostrarMatrices(int **MatrizO, int**MatrizI)
			 {
				 lbMatrizO->Items->Clear();
				 lbMatrizI->Items->Clear();

				 for (int i = 0; i < N; i++)
				 {
					 L = gcnew String("");
					 for (int j = 0; j < N; j++)
					 {
						 L = L + " " + MatrizO[j][i] + " ";
					 }
					 lbMatrizO->Items->Add(L);


					 L = "";
					 for (int j = 0; j < N; j++)
					 {
						 L = L + " " + MatrizI[j][i] + " ";
					 }
					 lbMatrizI->Items->Add(L);
				 }
			 }
			 void OcultarVertices()
			 {
				 x9->Visible = false;
				 y9->Visible = false;
				 i9->Visible = false;
				 j9->Visible = false;

				 x10->Visible = false;
				 y10->Visible = false;
				 i10->Visible = false;
				 j10->Visible = false;

				 x11->Visible = false;
				 y11->Visible = false;
				 i11->Visible = false;
				 j11->Visible = false;

				 x12->Visible = false;
				 y12->Visible = false;
				 i12->Visible = false;
				 j12->Visible = false;

				 x13->Visible = false;
				 y13->Visible = false;
				 i13->Visible = false;
				 j13->Visible = false;

				 x14->Visible = false;
				 y14->Visible = false;
				 i14->Visible = false;
				 j14->Visible = false;

				 x15->Visible = false;
				 y15->Visible = false;
				 i15->Visible = false;
				 j15->Visible = false;

				 x16->Visible = false;
				 y16->Visible = false;
				 i16->Visible = false;
				 j16->Visible = false;

				 x17->Visible = false;
				 y17->Visible = false;
				 i17->Visible = false;
				 j17->Visible = false;

				 x18->Visible = false;
				 y18->Visible = false;
				 i18->Visible = false;
				 j18->Visible = false;

				 x19->Visible = false;
				 y19->Visible = false;
				 i19->Visible = false;
				 j19->Visible = false;

				 x20->Visible = false;
				 y20->Visible = false;
				 i20->Visible = false;
				 j20->Visible = false;				 
			 }

			 void MostrarVertices()
			 {
				 switch (N)
				 {
				 case 9:  x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;
					 break;
				 case 10: x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;

					 x10->Visible = true;
					 y10->Visible = true;
					 i10->Visible = true;
					 j10->Visible = true;
					 break;
				 case 11:x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;

					 x10->Visible = true;
					 y10->Visible = true;
					 i10->Visible = true;
					 j10->Visible = true;

					 x11->Visible = true;
					 y11->Visible = true;
					 i11->Visible = true;
					 j11->Visible = true;
					 break;
				 case 12: x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;

					 x10->Visible = true;
					 y10->Visible = true;
					 i10->Visible = true;
					 j10->Visible = true;

					 x11->Visible = true;
					 y11->Visible = true;
					 i11->Visible = true;
					 j11->Visible = true;

					 x12->Visible = true;
					 y12->Visible = true;
					 i12->Visible = true;
					 j12->Visible = true;
					 break;
				 case 13: x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;

					 x10->Visible = true;
					 y10->Visible = true;
					 i10->Visible = true;
					 j10->Visible = true;

					 x11->Visible = true;
					 y11->Visible = true;
					 i11->Visible = true;
					 j11->Visible = true;

					 x12->Visible = true;
					 y12->Visible = true;
					 i12->Visible = true;
					 j12->Visible = true;

					 x13->Visible = true;
					 y13->Visible = true;
					 i13->Visible = true;
					 j13->Visible = true;
					 break;
				 case 14: x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;

					 x10->Visible = true;
					 y10->Visible = true;
					 i10->Visible = true;
					 j10->Visible = true;

					 x11->Visible = true;
					 y11->Visible = true;
					 i11->Visible = true;
					 j11->Visible = true;

					 x12->Visible = true;
					 y12->Visible = true;
					 i12->Visible = true;
					 j12->Visible = true;

					 x13->Visible = true;
					 y13->Visible = true;
					 i13->Visible = true;
					 j13->Visible = true;

					 x14->Visible = true;
					 y14->Visible = true;
					 i14->Visible = true;
					 j14->Visible = true;
					 break;
				 case 15: x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;

					 x10->Visible = true;
					 y10->Visible = true;
					 i10->Visible = true;
					 j10->Visible = true;

					 x11->Visible = true;
					 y11->Visible = true;
					 i11->Visible = true;
					 j11->Visible = true;

					 x12->Visible = true;
					 y12->Visible = true;
					 i12->Visible = true;
					 j12->Visible = true;

					 x13->Visible = true;
					 y13->Visible = true;
					 i13->Visible = true;
					 j13->Visible = true;

					 x14->Visible = true;
					 y14->Visible = true;
					 i14->Visible = true;
					 j14->Visible = true;

					 x15->Visible = true;
					 y15->Visible = true;
					 i15->Visible = true;
					 j15->Visible = true;
					 break;
				 case 16: x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;

					 x10->Visible = true;
					 y10->Visible = true;
					 i10->Visible = true;
					 j10->Visible = true;

					 x11->Visible = true;
					 y11->Visible = true;
					 i11->Visible = true;
					 j11->Visible = true;

					 x12->Visible = true;
					 y12->Visible = true;
					 i12->Visible = true;
					 j12->Visible = true;

					 x13->Visible = true;
					 y13->Visible = true;
					 i13->Visible = true;
					 j13->Visible = true;

					 x14->Visible = true;
					 y14->Visible = true;
					 i14->Visible = true;
					 j14->Visible = true;

					 x15->Visible = true;
					 y15->Visible = true;
					 i15->Visible = true;
					 j15->Visible = true;

					 x16->Visible = true;
					 y16->Visible = true;
					 i16->Visible = true;
					 j16->Visible = true;
					 break;
				 case 17: x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;

					 x10->Visible = true;
					 y10->Visible = true;
					 i10->Visible = true;
					 j10->Visible = true;

					 x11->Visible = true;
					 y11->Visible = true;
					 i11->Visible = true;
					 j11->Visible = true;

					 x12->Visible = true;
					 y12->Visible = true;
					 i12->Visible = true;
					 j12->Visible = true;

					 x13->Visible = true;
					 y13->Visible = true;
					 i13->Visible = true;
					 j13->Visible = true;

					 x14->Visible = true;
					 y14->Visible = true;
					 i14->Visible = true;
					 j14->Visible = true;

					 x15->Visible = true;
					 y15->Visible = true;
					 i15->Visible = true;
					 j15->Visible = true;

					 x16->Visible = true;
					 y16->Visible = true;
					 i16->Visible = true;
					 j16->Visible = true;

					 x17->Visible = true;
					 y17->Visible = true;
					 i17->Visible = true;
					 j17->Visible = true;
					 break;
				 case 18: x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;

					 x10->Visible = true;
					 y10->Visible = true;
					 i10->Visible = true;
					 j10->Visible = true;

					 x11->Visible = true;
					 y11->Visible = true;
					 i11->Visible = true;
					 j11->Visible = true;

					 x12->Visible = true;
					 y12->Visible = true;
					 i12->Visible = true;
					 j12->Visible = true;

					 x13->Visible = true;
					 y13->Visible = true;
					 i13->Visible = true;
					 j13->Visible = true;

					 x14->Visible = true;
					 y14->Visible = true;
					 i14->Visible = true;
					 j14->Visible = true;

					 x15->Visible = true;
					 y15->Visible = true;
					 i15->Visible = true;
					 j15->Visible = true;

					 x16->Visible = true;
					 y16->Visible = true;
					 i16->Visible = true;
					 j16->Visible = true;

					 x17->Visible = true;
					 y17->Visible = true;
					 i17->Visible = true;
					 j17->Visible = true;

					 x18->Visible = true;
					 y18->Visible = true;
					 i18->Visible = true;
					 j18->Visible = true;
					 break;
				 case 19: x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;

					 x10->Visible = true;
					 y10->Visible = true;
					 i10->Visible = true;
					 j10->Visible = true;

					 x11->Visible = true;
					 y11->Visible = true;
					 i11->Visible = true;
					 j11->Visible = true;

					 x12->Visible = true;
					 y12->Visible = true;
					 i12->Visible = true;
					 j12->Visible = true;

					 x13->Visible = true;
					 y13->Visible = true;
					 i13->Visible = true;
					 j13->Visible = true;

					 x14->Visible = true;
					 y14->Visible = true;
					 i14->Visible = true;
					 j14->Visible = true;

					 x15->Visible = true;
					 y15->Visible = true;
					 i15->Visible = true;
					 j15->Visible = true;

					 x16->Visible = true;
					 y16->Visible = true;
					 i16->Visible = true;
					 j16->Visible = true;

					 x17->Visible = true;
					 y17->Visible = true;
					 i17->Visible = true;
					 j17->Visible = true;

					 x18->Visible = true;
					 y18->Visible = true;
					 i18->Visible = true;
					 j18->Visible = true;

					 x19->Visible = true;
					 y19->Visible = true;
					 i19->Visible = true;
					 j19->Visible = true;
					 break;
				 case 20: x9->Visible = true;
					 y9->Visible = true;
					 i9->Visible = true;
					 j9->Visible = true;

					 x10->Visible = true;
					 y10->Visible = true;
					 i10->Visible = true;
					 j10->Visible = true;

					 x11->Visible = true;
					 y11->Visible = true;
					 i11->Visible = true;
					 j11->Visible = true;

					 x12->Visible = true;
					 y12->Visible = true;
					 i12->Visible = true;
					 j12->Visible = true;

					 x13->Visible = true;
					 y13->Visible = true;
					 i13->Visible = true;
					 j13->Visible = true;

					 x14->Visible = true;
					 y14->Visible = true;
					 i14->Visible = true;
					 j14->Visible = true;

					 x15->Visible = true;
					 y15->Visible = true;
					 i15->Visible = true;
					 j15->Visible = true;

					 x16->Visible = true;
					 y16->Visible = true;
					 i16->Visible = true;
					 j16->Visible = true;

					 x17->Visible = true;
					 y17->Visible = true;
					 i17->Visible = true;
					 j17->Visible = true;

					 x18->Visible = true;
					 y18->Visible = true;
					 i18->Visible = true;
					 j18->Visible = true;

					 x19->Visible = true;
					 y19->Visible = true;
					 i19->Visible = true;
					 j19->Visible = true;

					 x20->Visible = true;
					 y20->Visible = true;
					 i20->Visible = true;
					 j20->Visible = true;
					 break;
				 default:break;
				 }
			 }

private: System::Void btnVerificarCiclo_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 int x = Convert::ToInt32(numCiclo->Value);
			 lblRutaCiclo->Text = "Una ruta del ciclo: ";

			 if (MatrizI[x - 1][x - 1] == 0)
				 lblRutaCiclo->Text = "Una ruta del ciclo: NO EXISTE CICLO";
			 else
			 {
				 objControlador->HallarRuta(x - 1, x - 1, N);
				 String^ Resultado = gcnew String("");
				 int * ruta = new int[100];
				 ruta = objControlador->GetRuta();
				 int cant = objControlador->GetCant_ruta();

				 for (int x = 0; x < cant; x++)
				 {
					 if (ruta[x] != 0)
					 {
						 Resultado = Resultado + ruta[x];
						 if (x < cant - 1) Resultado = Resultado + " - ";
					 }
				 }

				 lblRutaCiclo->Text = "Una ruta del ciclo: " + Resultado;
			 }
}
private: System::Void btnConexion_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 int x = Convert::ToInt32(numCon1->Value);
			 int y = Convert::ToInt32(numCon2->Value);
			 lblConexion->Text = "Una ruta de la conexion: ";

			 if (MatrizI[y - 1][x - 1] == 0)
				 lblConexion->Text = "Una ruta de la conexion: NO ESTAN CONECTADOS";
			 else
			 {
				 objControlador->HallarRuta(x - 1, y - 1, N);
				 String^ Resultado = gcnew String("");
				 int * ruta = new int[100];
				 ruta = objControlador->GetRuta();
				 int cant = objControlador->GetCant_ruta();

				 for (int x = 0; x < cant; x++)
				 {
					 if (ruta[x] != 0)
					 {
						 Resultado = Resultado + ruta[x];
						 if (x < cant - 1) Resultado = Resultado + " - ";
					 }
				 }

				 lblConexion->Text = "Una ruta de la conexion: " + Resultado;
			 }
}

private: System::Void btnGenerarCeros_Click(System::Object^  sender, System::EventArgs^  e) {
			 N = Convert::ToInt32(numN->Value);
			 MatrizO = objControlador->GenerarMatrizCero(N);
			 MatrizI = objControlador->CrearMatrizInfinito(N);
			 MostrarMatrices(MatrizO, MatrizI);

			 numCiclo->Maximum = (Decimal)N;
			 numCon1->Maximum = (Decimal)N;
			 numCon2->Maximum = (Decimal)N;

			 numX->Maximum = (Decimal)N;
			 numY->Maximum = (Decimal)N;

			 numCiclo->Enabled = true;
			 numCon1->Enabled = true;
			 numCon2->Enabled = true;

			 numX->Enabled = true;
			 numY->Enabled = true;
			 btnModificar->Enabled = true;

			 numX->Value = 1;
			 numY->Value = 1;

			 btnVerificarCiclo->Enabled = true;
			 btnConexion->Enabled = true;

			 lblRutaCiclo->Text = "Una ruta del ciclo: ";
			 lblConexion->Text = "Una ruta de la conexion: ";

			 OcultarVertices();
			 MostrarVertices();

}
private: System::Void lbMatrizO_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (lbMatrizO->SelectedIndex != -1)
			 {
				 int valor = lbMatrizO->SelectedIndex + 1;
				 numX->Value = (Decimal)valor;
				 numY->Value = 1;
			 }
}
private: System::Void btnModificar_Click(System::Object^  sender, System::EventArgs^  e) {

			 int x = (int)numX->Value;
			 int y = (int)numY->Value;			
			 int **M = objControlador->GetMatrizOriginal();

			 if (objControlador->ContarUnos(N) < N * 2 || M[y-1][x-1]==1)
			 {
				 objControlador->ModificarMatriz(x, y);
			 }
			 else
				 MessageBox::Show("Ya llegó al límite de unos permitidos");

			 MatrizO = objControlador->GetMatrizOriginal();
			 MatrizI = objControlador->CrearMatrizInfinito(N);
			 MostrarMatrices(MatrizO, MatrizI);
}
};
}
