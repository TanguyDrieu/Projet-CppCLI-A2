#include"gestion.h"
#include"Functions.h"
#include"CLIENT.h"
#include"ADRESSE.h"
#include"COMMANDES.h"
#include"PRODUITS.h"
#include"STATISTIQUES.h"
#include "STATISTIQUES.h"

namespace A2POOCorb6 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FRM_Principal : public System::Windows::Forms::Form
	{
	public:
		FRM_Principal(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FRM_Principal()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lbl_Id;
	private: System::Windows::Forms::TextBox^ TT_ID;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TT_1;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TT_2;



	private: System::Windows::Forms::Label^ lbl_message;
	private: System::Windows::Forms::TextBox^ txt_message;
	private: System::Windows::Forms::Button^ btn_first;
	private: System::Windows::Forms::Button^ btn_previous;
	private: System::Windows::Forms::Button^ btn_next;
	private: System::Windows::Forms::Button^ btn_end;
	private: System::Windows::Forms::Button^ btn_nouveau;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ btn_sup;
	private: System::Windows::Forms::Button^ btn_enregistrer;
	private: NS_Svc::gestion^ gestion;
	private: Data::DataSet^ ds;
	private: int index;
	private: String^ mode;
	private: String^ tableSelect;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TT_3;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TT_4;




	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label_tbl;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ TT_5;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TT_6;
	private: System::Windows::Forms::TextBox^ TT_7;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ TT_10;
	private: System::Windows::Forms::TextBox^ TT_9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ TT_8;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_egal;
	private: System::Windows::Forms::TextBox^ TT_Pers;
	private: System::Windows::Forms::Label^ lbl_Pers;
	private: System::Windows::Forms::TextBox^ TT_11;





	private: System::Windows::Forms::Label^ label11;














	private:
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lbl_Id = (gcnew System::Windows::Forms::Label());
			this->TT_ID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TT_1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TT_2 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_message = (gcnew System::Windows::Forms::Label());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->btn_first = (gcnew System::Windows::Forms::Button());
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_end = (gcnew System::Windows::Forms::Button());
			this->btn_nouveau = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->btn_sup = (gcnew System::Windows::Forms::Button());
			this->btn_enregistrer = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TT_3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TT_4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label_tbl = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TT_5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TT_6 = (gcnew System::Windows::Forms::TextBox());
			this->TT_7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TT_10 = (gcnew System::Windows::Forms::TextBox());
			this->TT_9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TT_8 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_egal = (gcnew System::Windows::Forms::Button());
			this->TT_Pers = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Pers = (gcnew System::Windows::Forms::Label());
			this->TT_11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_Id
			// 
			this->lbl_Id->AutoSize = true;
			this->lbl_Id->Location = System::Drawing::Point(9, 16);
			this->lbl_Id->Name = L"lbl_Id";
			this->lbl_Id->Size = System::Drawing::Size(47, 13);
			this->lbl_Id->TabIndex = 0;
			this->lbl_Id->Text = L"ID Client";
			// 
			// TT_ID
			// 
			this->TT_ID->Location = System::Drawing::Point(12, 35);
			this->TT_ID->Name = L"TT_ID";
			this->TT_ID->ReadOnly = true;
			this->TT_ID->Size = System::Drawing::Size(89, 20);
			this->TT_ID->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(104, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nom Client";
			// 
			// TT_1
			// 
			this->TT_1->Location = System::Drawing::Point(107, 35);
			this->TT_1->Name = L"TT_1";
			this->TT_1->Size = System::Drawing::Size(89, 20);
			this->TT_1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(199, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Prénom Client";
			// 
			// TT_2
			// 
			this->TT_2->Location = System::Drawing::Point(202, 35);
			this->TT_2->Name = L"TT_2";
			this->TT_2->Size = System::Drawing::Size(89, 20);
			this->TT_2->TabIndex = 5;
			// 
			// lbl_message
			// 
			this->lbl_message->AutoSize = true;
			this->lbl_message->Location = System::Drawing::Point(9, 316);
			this->lbl_message->Name = L"lbl_message";
			this->lbl_message->Size = System::Drawing::Size(50, 13);
			this->lbl_message->TabIndex = 6;
			this->lbl_message->Text = L"Message";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(12, 332);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(326, 50);
			this->txt_message->TabIndex = 7;
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(47, 159);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(54, 29);
			this->btn_first->TabIndex = 8;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_first_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(107, 159);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(54, 29);
			this->btn_previous->TabIndex = 9;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_previous_Click);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(188, 159);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(54, 29);
			this->btn_next->TabIndex = 10;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_next_Click);
			// 
			// btn_end
			// 
			this->btn_end->Location = System::Drawing::Point(248, 159);
			this->btn_end->Name = L"btn_end";
			this->btn_end->Size = System::Drawing::Size(54, 29);
			this->btn_end->TabIndex = 11;
			this->btn_end->Text = L">>";
			this->btn_end->UseVisualStyleBackColor = true;
			this->btn_end->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_end_Click);
			// 
			// btn_nouveau
			// 
			this->btn_nouveau->Location = System::Drawing::Point(409, 146);
			this->btn_nouveau->Name = L"btn_nouveau";
			this->btn_nouveau->Size = System::Drawing::Size(80, 75);
			this->btn_nouveau->TabIndex = 12;
			this->btn_nouveau->Text = L"Nouveau";
			this->btn_nouveau->UseVisualStyleBackColor = true;
			this->btn_nouveau->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_nouveau_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->Location = System::Drawing::Point(409, 227);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(80, 75);
			this->btn_modifier->TabIndex = 13;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = true;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_modifier_Click);
			// 
			// btn_sup
			// 
			this->btn_sup->Location = System::Drawing::Point(409, 308);
			this->btn_sup->Name = L"btn_sup";
			this->btn_sup->Size = System::Drawing::Size(80, 75);
			this->btn_sup->TabIndex = 14;
			this->btn_sup->Text = L"Supprimer";
			this->btn_sup->UseVisualStyleBackColor = true;
			this->btn_sup->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_sup_Click);
			// 
			// btn_enregistrer
			// 
			this->btn_enregistrer->Location = System::Drawing::Point(497, 146);
			this->btn_enregistrer->Name = L"btn_enregistrer";
			this->btn_enregistrer->Size = System::Drawing::Size(98, 237);
			this->btn_enregistrer->TabIndex = 15;
			this->btn_enregistrer->Text = L"ENREGISTRER";
			this->btn_enregistrer->UseVisualStyleBackColor = true;
			this->btn_enregistrer->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_enregistrer_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(294, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Date de naissance";
			// 
			// TT_3
			// 
			this->TT_3->Location = System::Drawing::Point(297, 35);
			this->TT_3->Name = L"TT_3";
			this->TT_3->Size = System::Drawing::Size(89, 20);
			this->TT_3->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(389, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Date premiere commande";
			// 
			// TT_4
			// 
			this->TT_4->Location = System::Drawing::Point(392, 35);
			this->TT_4->Name = L"TT_4";
			this->TT_4->Size = System::Drawing::Size(89, 20);
			this->TT_4->TabIndex = 19;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Client", L"Commande", L"Stock", L"Personnel",
					L"Statistiques"
			});
			this->comboBox1->Location = System::Drawing::Point(47, 255);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(127, 21);
			this->comboBox1->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(213, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 75);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Changer table";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FRM_Principal::button1_Click);
			// 
			// label_tbl
			// 
			this->label_tbl->AutoSize = true;
			this->label_tbl->Location = System::Drawing::Point(47, 240);
			this->label_tbl->Name = L"label_tbl";
			this->label_tbl->Size = System::Drawing::Size(39, 13);
			this->label_tbl->TabIndex = 22;
			this->label_tbl->Text = L"Tables";
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(5, 66);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(296, 67);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Adresse de facturation";
			// 
			// TT_5
			// 
			this->TT_5->Location = System::Drawing::Point(12, 105);
			this->TT_5->Name = L"TT_5";
			this->TT_5->Size = System::Drawing::Size(89, 20);
			this->TT_5->TabIndex = 24;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Rue";
			// 
			// TT_6
			// 
			this->TT_6->Location = System::Drawing::Point(107, 105);
			this->TT_6->Name = L"TT_6";
			this->TT_6->Size = System::Drawing::Size(89, 20);
			this->TT_6->TabIndex = 26;
			// 
			// TT_7
			// 
			this->TT_7->Location = System::Drawing::Point(202, 105);
			this->TT_7->Name = L"TT_7";
			this->TT_7->Size = System::Drawing::Size(89, 20);
			this->TT_7->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(107, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Code Postal";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(199, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Ville";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(536, 86);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 13);
			this->label10->TabIndex = 37;
			this->label10->Text = L"Ville";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(444, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 13);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Code Postal";
			// 
			// TT_10
			// 
			this->TT_10->Location = System::Drawing::Point(539, 105);
			this->TT_10->Name = L"TT_10";
			this->TT_10->Size = System::Drawing::Size(89, 20);
			this->TT_10->TabIndex = 35;
			// 
			// TT_9
			// 
			this->TT_9->Location = System::Drawing::Point(444, 105);
			this->TT_9->Name = L"TT_9";
			this->TT_9->Size = System::Drawing::Size(89, 20);
			this->TT_9->TabIndex = 34;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(346, 86);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 13);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Rue";
			// 
			// TT_8
			// 
			this->TT_8->Location = System::Drawing::Point(349, 105);
			this->TT_8->Name = L"TT_8";
			this->TT_8->Size = System::Drawing::Size(89, 20);
			this->TT_8->TabIndex = 32;
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(342, 66);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(296, 67);
			this->groupBox2->TabIndex = 31;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Adresse de livraison";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 405);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(945, 188);
			this->dataGridView1->TabIndex = 38;
			// 
			// btn_egal
			// 
			this->btn_egal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->btn_egal->Location = System::Drawing::Point(307, 97);
			this->btn_egal->Name = L"btn_egal";
			this->btn_egal->Size = System::Drawing::Size(29, 28);
			this->btn_egal->TabIndex = 39;
			this->btn_egal->Text = L"=";
			this->btn_egal->UseVisualStyleBackColor = true;
			this->btn_egal->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_egal_Click);
			// 
			// TT_11
			// 
			this->TT_11->Location = System::Drawing::Point(539, 35);
			this->TT_11->Name = L"TT_11";
			this->TT_11->Size = System::Drawing::Size(100, 20);
			this->TT_11->TabIndex = 40;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(562, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 43;
			this->label11->Text = L"label11";
			// 
			// TT_Pers
			// 
			this->TT_Pers->Location = System::Drawing::Point(487, 35);
			this->TT_Pers->Name = L"TT_Pers";
			this->TT_Pers->Size = System::Drawing::Size(89, 20);
			this->TT_Pers->TabIndex = 41;
			// 
			// lbl_Pers
			// 
			this->lbl_Pers->AutoSize = true;
			this->lbl_Pers->Location = System::Drawing::Point(484, 19);
			this->lbl_Pers->Name = L"lbl_Pers";
			this->lbl_Pers->Size = System::Drawing::Size(84, 13);
			this->lbl_Pers->TabIndex = 40;
			this->lbl_Pers->Text = L"Date Embauche";
			// 
			// FRM_Principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(968, 605);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->TT_11);
			this->Controls->Add(this->TT_Pers);
			this->Controls->Add(this->lbl_Pers);
			this->Controls->Add(this->btn_egal);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->TT_10);
			this->Controls->Add(this->TT_9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TT_8);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TT_7);
			this->Controls->Add(this->TT_6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TT_5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label_tbl);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->TT_4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TT_3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_enregistrer);
			this->Controls->Add(this->btn_sup);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->btn_nouveau);
			this->Controls->Add(this->btn_end);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->btn_previous);
			this->Controls->Add(this->btn_first);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->lbl_message);
			this->Controls->Add(this->TT_2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TT_1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TT_ID);
			this->Controls->Add(this->lbl_Id);
			this->Name = L"FRM_Principal";
			this->Text = L"CastApp";
			this->Load += gcnew System::EventHandler(this, &FRM_Principal::FRM_Principal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void FRM_Principal_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->comboBox1->SelectedIndex = 0;
		this->index = 0;
		this->mode = "RIEN";
		this->tableSelect = "Client";
		this->ds = gcnew Data::DataSet();
		this->gestion = gcnew NS_Svc::gestion();
		this->loadData(this->index);
		this->txt_message->Text = "Data chargees";
		this->TT_Pers->Hide();
		this->lbl_Pers->Hide();
	}
	private: void loadData(int index)
	{
		this->ds->Clear();
		if (this->tableSelect == "Client") {
			this->ds = this->gestion->listeClientAdresse("liste");
			dataGridView1->DataSource = ds;
			dataGridView1->DataMember = "liste";
			this->TT_ID->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
			this->TT_1->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
			this->TT_2->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
			this->TT_3->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
			this->TT_4->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
			this->TT_5->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
			this->TT_6->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[6]);
			this->TT_7->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[7]);
			this->TT_8->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[8]);
			this->TT_9->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[9]);
			this->TT_10->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[10]);

			this->TT_8->Show();
			this->TT_9->Show();
			this->TT_10->Show();
			this->groupBox1->Show();
			this->groupBox2->Show();
		}

		else if (this->tableSelect == "Personnel") {
			this->ds = this->gestion->listePersonnelAdresse("liste");
			dataGridView1->DataSource = ds;
			dataGridView1->DataMember = "liste";
			this->TT_ID->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
			this->TT_1->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
			this->TT_2->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
			this->TT_3->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
			this->TT_4->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
			this->TT_Pers->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[6]);
			this->TT_5->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[7]);
			this->TT_6->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[8]);
			this->TT_7->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[9]);
		}

		else if (this->tableSelect == "Stock") {
			this->ds = this->gestion->listeProduits("liste");
			dataGridView1->DataSource = ds;
			dataGridView1->DataMember = "liste";
			this->TT_ID->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
			this->TT_1->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
			this->TT_2->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
			this->TT_3->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
			this->TT_4->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
			this->TT_5->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
			this->TT_6->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[6]);
			this->TT_7->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[7]);
			this->TT_8->Hide();
			this->TT_9->Hide();
			this->TT_10->Hide();
			this->TT_11->Hide();
			
			
			this->groupBox1->Text = "Adresse";
			this->groupBox2->Hide();
			
		

		}

		if (this->tableSelect == "Commande") {
			this->ds = this->gestion->listeCommande("liste");
			dataGridView1->DataSource = ds;
			dataGridView1->DataMember = "liste";
			this->TT_8->Show();
			this->TT_9->Show();
			this->TT_10->Show();
			this->TT_11->Show();
			
			
			this->TT_ID->ReadOnly = false;
			this->TT_ID->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
			this->TT_1->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
			this->TT_2->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
			this->TT_3->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
			this->TT_4->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
			this->TT_5->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
			this->TT_6->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[6]);
			this->TT_7->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[7]);
			this->TT_8->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[8]);
			this->TT_9->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[9]);
			this->TT_10->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[10]);;
			this->TT_11->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[11]);
			this->groupBox1->Text = "Adresse";
			this->groupBox2->Hide();



		}


	}
	private: System::Void btn_first_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
		this->loadData(this->index);
		this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
	}
	private: System::Void btn_previous_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index > 0)
		{
			this->index--;
			this->loadData(this->index);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
		}
	}
	private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index < this->ds->Tables["liste"]->Rows->Count - 1)
		{
			this->index++;
			this->loadData(this->index);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
		}
	}
	private: System::Void btn_end_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = this->ds->Tables["liste"]->Rows->Count - 1;
		this->loadData(this->index);
		this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
	}
	private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->TT_ID->Clear();
		this->TT_1->Clear();
		this->TT_2->Clear();
		this->TT_3->Clear();
		this->TT_4->Clear();
		this->TT_5->Clear();
		this->TT_6->Clear();
		this->TT_7->Clear();
		this->TT_8->Clear();
		this->TT_9->Clear();
		this->TT_10->Clear();
		this->TT_Pers->Clear();
		this->mode = "nouv";
		this->txt_message->Text = "Veuillez saisir les information de la nouvelle personne et enregistrer";
	}
	private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->mode = "maj";
		this->txt_message->Text = "Veuillez modifier les information de la nouvelle courante et enregistrer.";
	}
	private: System::Void btn_sup_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->mode = "sup";
		this->txt_message->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";
	}
	private: System::Void btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->mode == "nouv")
		{
			int Id;
			if (this->tableSelect == "Client")
				Id = this->gestion->ajouterClient(this->TT_1->Text, this->TT_2->Text, this->TT_3->Text, this->TT_4->Text, this->TT_5->Text,	Convert::ToInt32(this->TT_6->Text), this->TT_7->Text, this->TT_8->Text,Convert::ToInt32(this->TT_9->Text), this->TT_10->Text);
			if (this->tableSelect == "Personnel")
				Id = this->gestion->ajouterPersonnel(Convert::ToInt32(this->TT_1->Text), this->TT_2->Text, this->TT_3->Text, this->TT_4->Text, this->TT_Pers->Text, this->TT_5->Text, Convert::ToInt32(this->TT_6->Text), this->TT_7->Text);
			if (this->tableSelect == "Stock")
				this->gestion->ajouterProduit(this->TT_ID->Text, Convert::ToInt32(this->TT_1->Text), Convert::ToInt32(this->TT_2->Text), Convert::ToDouble(this->TT_3->Text), this->TT_4->Text, Convert::ToInt32(this->TT_5->Text), Convert::ToInt32(this->TT_6->Text), this->TT_7->Text);
			if(this->tableSelect == "Commande")
			Id = this->gestion->ajouterCommande(this->TT_ID->Text, this->TT_1->Text, this->TT_2->Text, this->TT_3->Text, Convert::ToInt32(this->TT_4->Text), Convert::ToInt32(this->TT_5->Text), Convert::ToInt32(this->TT_6->Text), this->TT_7->Text, Convert::ToInt32(this->TT_8->Text), this->TT_9->Text, this->TT_10->Text, Convert::ToInt32(this->TT_11->Text));//

			



		}
		else if (this->mode == "maj")
		{
			if (this->tableSelect == "Client")
				this->gestion->modifierClient(Convert::ToInt32(this->TT_ID->Text), this->TT_1->Text, this->TT_2->Text, this->TT_3->Text, this->TT_4->Text);
			
		}
		else if (this->mode == "sup")
		{
			if (this->tableSelect == "Client") {
				this->gestion->supprimerClient(Convert::ToInt32(this->TT_ID->Text));
				this->gestion->supprimerAdresseClient(Convert::ToInt32(this->TT_ID->Text));
			}
			else if (this->tableSelect == "Personnel")
				this->gestion->supprimerPersonnel(Convert::ToInt32(this->TT_ID->Text));
				this->gestion->supprimerAdresse(Convert::ToInt32(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]));
		}
		this->index = 0;
		this->loadData(this->index);
		this->txt_message->Text += "Traitement terminé.";
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if(comboBox1->SelectedIndex == -1)
		this->txt_message->Text = "Veuillez sélectionner une table";
	else {
		if (comboBox1->SelectedIndex == 0) {
			this->TT_ID->ReadOnly = true;
			this->tableSelect = "Client";
			lbl_Id->Text = "ID Client";
			label1->Text = "Nom Client";
			label2->Text = "Prénom Client";
			label3->Text = "Date de naissance";
			label4->Text = "Date premiere commande";
			label5->Text = "Rue";
			label6->Text = "Code Postal";
			label7->Text = "Ville";
			label8->Text = "Rue";
			label9->Text = "Code Postal";
			label10->Text = "Ville";
			groupBox1->Text = "Adresse de facturation";

			TT_Pers->Hide();
			lbl_Pers->Hide();

			groupBox1->Show();
			groupBox2->Show();
			label8->Show();
			label9->Show();
			label10->Show();
			btn_egal->Show();

			this->loadData(this->index);
		}
		if (comboBox1->SelectedIndex == 2) {
			this->TT_ID->ReadOnly = false;
			this->tableSelect = "Stock";
			lbl_Id->Text = "Ref Produit";
			label1->Text = "ID Nature";
			label2->Text = "ID Tarif";
			label3->Text = "Prix HT";
			label4->Text = "Désignation";
			label5->Text = "Quantité en stock";
			label6->Text = "Seuil de réaprovisionnement";
			label7->Text = "Taux TVA";
			label8->Hide();
			label9->Hide();
			label10->Hide();
			groupBox1->Hide();
			groupBox2->Hide();
			btn_egal->Hide();
			this->TT_8->Hide();
			this->TT_9->Hide();
			this->TT_10->Hide();

			this->loadData(this->index);
		}
		if (comboBox1->SelectedIndex == 3) {
			this->TT_ID->ReadOnly = true;
			this->tableSelect = "Personnel";
			lbl_Id->Text = "ID Personnel";
			label1->Text = "ID Supérieur";
			label2->Text = "Nom Personnel";
			label3->Text = "Prenom Personnel";
			label4->Text = "Adresse mail Personnel";
			lbl_Pers->Show();
			TT_Pers->Show();
			label5->Text = "Rue";
			label6->Text = "Code Postal";
			label7->Text = "Ville";
			lbl_Pers->Text = "Date Embauche";
			label8->Hide();
			label9->Hide();
			label10->Hide();
			btn_egal->Hide();
			this->TT_8->Hide();
			this->TT_9->Hide();
			this->TT_10->Hide();
			this->groupBox1->Show();
			this->groupBox1->Text = "Adresse";
			this->groupBox2->Hide();
			

			this->loadData(this->index);
		}
		if (comboBox1->SelectedIndex == 1) {
			this->tableSelect = "Commande";
			lbl_Id->Text = "REF_COMMANDE";
			label1->Text = "DATE LIVRAISON";
			label2->Text = "DATE EMISSION COMMANDE";
			label3->Text = "DATE SOLDE REGLEMENT";
			label4->Text = "MONTANT_HT";
			label5->Text = "MONTANT_TVA";
			label6->Text = "MONTANT_TTC";
			label7->Text = "DATE EMISSION FACTURE";
			label8->Text = "MONTANT_PAIEMENT";
			label9->Text = "DATE_PAIEMENT";
			label10->Text = "MODE REGLEMENT";
			label11->Text = "QUANTITE ARTICLE";

			label8->Show();
			label9->Show();
			label10->Show();
			groupBox1->Hide();
			btn_egal->Hide();

			

			this->loadData(this->index);
		}

		if (comboBox1->SelectedIndex == 4) {
			STATISTIQUES^ stats = gcnew STATISTIQUES();
			stats->Show();






		}

		this->txt_message->Text = "La table " + comboBox1->SelectedItem + " a ete selectionee";
	}
}
private: System::Void btn_egal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->mode == "nouv" || this->mode == "maj") {
		this->TT_8->Text = this->TT_5->Text;
		this->TT_9->Text = this->TT_6->Text;
		this->TT_10->Text = this->TT_7->Text;
	}
}
};
}