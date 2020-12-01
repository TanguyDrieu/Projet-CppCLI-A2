#include"gestion.h"
#include"Functions.h"
#include"CLIENT.h"
#include"ADRESSE.h"
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
	private: System::Windows::Forms::TextBox^ txt_ID_CLIENT;
	private: System::Windows::Forms::Label^ lbl_NOM_CLIENT;
	private: System::Windows::Forms::TextBox^ txt_NOM_CLIENT;
	private: System::Windows::Forms::Label^ lbl_PRENOM_CLIENT;
	private: System::Windows::Forms::TextBox^ txt_PRENOM_CLIENT;
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
	private: NS_Svc::gestion^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: int index;
	private: String^ mode;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_DATE_NAISSANCE_CLIENT;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_DATE_PREMIERE_COMMANDE_CLIENT;




	private:
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lbl_Id = (gcnew System::Windows::Forms::Label());
			this->txt_ID_CLIENT = (gcnew System::Windows::Forms::TextBox());
			this->lbl_NOM_CLIENT = (gcnew System::Windows::Forms::Label());
			this->txt_NOM_CLIENT = (gcnew System::Windows::Forms::TextBox());
			this->lbl_PRENOM_CLIENT = (gcnew System::Windows::Forms::Label());
			this->txt_PRENOM_CLIENT = (gcnew System::Windows::Forms::TextBox());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_DATE_NAISSANCE_CLIENT = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_DATE_PREMIERE_COMMANDE_CLIENT = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lbl_Id
			// 
			this->lbl_Id->AutoSize = true;
			this->lbl_Id->Location = System::Drawing::Point(9, 9);
			this->lbl_Id->Name = L"lbl_Id";
			this->lbl_Id->Size = System::Drawing::Size(66, 13);
			this->lbl_Id->TabIndex = 0;
			this->lbl_Id->Text = L"ID Personne";
			// 
			// txt_ID_CLIENT
			// 
			this->txt_ID_CLIENT->Location = System::Drawing::Point(12, 28);
			this->txt_ID_CLIENT->Name = L"txt_ID_CLIENT";
			this->txt_ID_CLIENT->ReadOnly = true;
			this->txt_ID_CLIENT->Size = System::Drawing::Size(89, 20);
			this->txt_ID_CLIENT->TabIndex = 1;
			// 
			// lbl_NOM_CLIENT
			// 
			this->lbl_NOM_CLIENT->AutoSize = true;
			this->lbl_NOM_CLIENT->Location = System::Drawing::Point(9, 51);
			this->lbl_NOM_CLIENT->Name = L"lbl_NOM_CLIENT";
			this->lbl_NOM_CLIENT->Size = System::Drawing::Size(76, 13);
			this->lbl_NOM_CLIENT->TabIndex = 2;
			this->lbl_NOM_CLIENT->Text = L"NOM_CLIENT";
			// 
			// txt_NOM_CLIENT
			// 
			this->txt_NOM_CLIENT->Location = System::Drawing::Point(12, 67);
			this->txt_NOM_CLIENT->Name = L"txt_NOM_CLIENT";
			this->txt_NOM_CLIENT->Size = System::Drawing::Size(89, 20);
			this->txt_NOM_CLIENT->TabIndex = 3;
			// 
			// lbl_PRENOM_CLIENT
			// 
			this->lbl_PRENOM_CLIENT->AutoSize = true;
			this->lbl_PRENOM_CLIENT->Location = System::Drawing::Point(9, 93);
			this->lbl_PRENOM_CLIENT->Name = L"lbl_PRENOM_CLIENT";
			this->lbl_PRENOM_CLIENT->Size = System::Drawing::Size(43, 13);
			this->lbl_PRENOM_CLIENT->TabIndex = 4;
			this->lbl_PRENOM_CLIENT->Text = L"Prénom";
			// 
			// txt_PRENOM_CLIENT
			// 
			this->txt_PRENOM_CLIENT->Location = System::Drawing::Point(12, 109);
			this->txt_PRENOM_CLIENT->Name = L"txt_PRENOM_CLIENT";
			this->txt_PRENOM_CLIENT->Size = System::Drawing::Size(89, 20);
			this->txt_PRENOM_CLIENT->TabIndex = 5;
			// 
			// lbl_message
			// 
			this->lbl_message->AutoSize = true;
			this->lbl_message->Location = System::Drawing::Point(9, 180);
			this->lbl_message->Name = L"lbl_message";
			this->lbl_message->Size = System::Drawing::Size(50, 13);
			this->lbl_message->TabIndex = 6;
			this->lbl_message->Text = L"Message";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(12, 196);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(412, 50);
			this->txt_message->TabIndex = 7;
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(12, 146);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(46, 23);
			this->btn_first->TabIndex = 8;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_first_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(64, 146);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(46, 23);
			this->btn_previous->TabIndex = 9;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_previous_Click);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(116, 146);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(46, 23);
			this->btn_next->TabIndex = 10;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_next_Click);
			// 
			// btn_end
			// 
			this->btn_end->Location = System::Drawing::Point(168, 146);
			this->btn_end->Name = L"btn_end";
			this->btn_end->Size = System::Drawing::Size(46, 23);
			this->btn_end->TabIndex = 11;
			this->btn_end->Text = L">>";
			this->btn_end->UseVisualStyleBackColor = true;
			this->btn_end->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_end_Click);
			// 
			// btn_nouveau
			// 
			this->btn_nouveau->Location = System::Drawing::Point(238, 25);
			this->btn_nouveau->Name = L"btn_nouveau";
			this->btn_nouveau->Size = System::Drawing::Size(80, 36);
			this->btn_nouveau->TabIndex = 12;
			this->btn_nouveau->Text = L"Nouveau";
			this->btn_nouveau->UseVisualStyleBackColor = true;
			this->btn_nouveau->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_nouveau_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->Location = System::Drawing::Point(238, 79);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(80, 36);
			this->btn_modifier->TabIndex = 13;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = true;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_modifier_Click);
			// 
			// btn_sup
			// 
			this->btn_sup->Location = System::Drawing::Point(238, 133);
			this->btn_sup->Name = L"btn_sup";
			this->btn_sup->Size = System::Drawing::Size(80, 36);
			this->btn_sup->TabIndex = 14;
			this->btn_sup->Text = L"Supprimer";
			this->btn_sup->UseVisualStyleBackColor = true;
			this->btn_sup->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_sup_Click);
			// 
			// btn_enregistrer
			// 
			this->btn_enregistrer->Location = System::Drawing::Point(326, 25);
			this->btn_enregistrer->Name = L"btn_enregistrer";
			this->btn_enregistrer->Size = System::Drawing::Size(98, 144);
			this->btn_enregistrer->TabIndex = 15;
			this->btn_enregistrer->Text = L"ENREGISTRER";
			this->btn_enregistrer->UseVisualStyleBackColor = true;
			this->btn_enregistrer->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_enregistrer_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(122, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Date de naissance";
			this->label1->Click += gcnew System::EventHandler(this, &FRM_Principal::label1_Click);
			// 
			// txt_DATE_NAISSANCE_CLIENT
			// 
			this->txt_DATE_NAISSANCE_CLIENT->Location = System::Drawing::Point(125, 28);
			this->txt_DATE_NAISSANCE_CLIENT->Name = L"txt_DATE_NAISSANCE_CLIENT";
			this->txt_DATE_NAISSANCE_CLIENT->Size = System::Drawing::Size(89, 20);
			this->txt_DATE_NAISSANCE_CLIENT->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(113, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Date premiere commande";
			this->label2->Click += gcnew System::EventHandler(this, &FRM_Principal::label2_Click);
			// 
			// txt_DATE_PREMIERE_COMMANDE_CLIENT
			// 
			this->txt_DATE_PREMIERE_COMMANDE_CLIENT->Location = System::Drawing::Point(125, 67);
			this->txt_DATE_PREMIERE_COMMANDE_CLIENT->Name = L"txt_DATE_PREMIERE_COMMANDE_CLIENT";
			this->txt_DATE_PREMIERE_COMMANDE_CLIENT->Size = System::Drawing::Size(89, 20);
			this->txt_DATE_PREMIERE_COMMANDE_CLIENT->TabIndex = 19;
			// 
			// FRM_Principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 261);
			this->Controls->Add(this->txt_DATE_PREMIERE_COMMANDE_CLIENT);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_DATE_NAISSANCE_CLIENT);
			this->Controls->Add(this->label1);
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
			this->Controls->Add(this->txt_PRENOM_CLIENT);
			this->Controls->Add(this->lbl_PRENOM_CLIENT);
			this->Controls->Add(this->txt_NOM_CLIENT);
			this->Controls->Add(this->lbl_NOM_CLIENT);
			this->Controls->Add(this->txt_ID_CLIENT);
			this->Controls->Add(this->lbl_Id);
			this->Name = L"FRM_Principal";
			this->Text = L"A2 POO Corbeille 6";
			this->Load += gcnew System::EventHandler(this, &FRM_Principal::FRM_Principal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void FRM_Principal_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
		this->mode = "RIEN";
		this->ds = gcnew Data::DataSet();
		this->processusPersonnes = gcnew NS_Svc::gestion();
		this->loadData(this->index);
		this->txt_message->Text = "Data chargées";
	}
	private: void loadData(int index)
	{
		this->ds->Clear();
		this->ds = this->processusPersonnes->listePersonnes("liste");
		this->txt_ID_CLIENT->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_NOM_CLIENT->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->txt_PRENOM_CLIENT->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
		this->txt_DATE_NAISSANCE_CLIENT->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
		this->txt_DATE_PREMIERE_COMMANDE_CLIENT->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
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
		this->txt_ID_CLIENT->Clear();
		this->txt_NOM_CLIENT->Clear();
		this->txt_PRENOM_CLIENT->Clear();
		this->txt_DATE_NAISSANCE_CLIENT->Clear();
		this->txt_DATE_PREMIERE_COMMANDE_CLIENT->Clear();
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
			Id = this->processusPersonnes->ajouter(this->txt_NOM_CLIENT->Text, this->txt_PRENOM_CLIENT->Text, this->txt_DATE_NAISSANCE_CLIENT->Text, this->txt_DATE_PREMIERE_COMMANDE_CLIENT->Text);
			this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
		}
		else if (this->mode == "maj")
		{
			this->processusPersonnes->modifier(Convert::ToInt32(this->txt_ID_CLIENT->Text), this->txt_NOM_CLIENT->Text, this->txt_PRENOM_CLIENT->Text, this->txt_DATE_NAISSANCE_CLIENT->Text, this->txt_DATE_PREMIERE_COMMANDE_CLIENT->Text);
		}
		else if (this->mode == "sup")
		{
			this->processusPersonnes->supprimer(Convert::ToInt32(this->txt_ID_CLIENT->Text));
		}
		this->index = 0;
		this->loadData(this->index);
		this->txt_message->Text += "Traitement terminé.";
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}



	/*private: System::Windows::Forms::Label^ lbl_Id;
	private: System::Windows::Forms::TextBox^ txt_ID_PERSONNEL;
	private: System::Windows::Forms::Label^ lbl_NOM_PERSONNEL;
	private: System::Windows::Forms::TextBox^ txt_NOM_PERSONNEL;
	private: System::Windows::Forms::Label^ lbl_PRENOM_PERSONNEL;
	private: System::Windows::Forms::TextBox^ txt_PRENOM_PERSONNEL;
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
	private: NS_Svc::gestion^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: int index;
	private: String^ mode;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_ADRESSE_MAIL_CLIENT;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_DATE_EMBAUCHE;*/
//
//private:
//	System::ComponentModel::Container^ components;
//#pragma region Windows Form Designer generated code
//	void InitializeComponent(void)
//	{
//		this->lbl_Id = (gcnew System::Windows::Forms::Label());
//		this->txt_ID_PERSONNEl = (gcnew System::Windows::Forms::TextBox());
//		this->lbl_NOM_CLIENT = (gcnew System::Windows::Forms::Label());
//		this->txt_NOM_CLIENT = (gcnew System::Windows::Forms::TextBox());
//		this->lbl_PRENOM_CLIENT = (gcnew System::Windows::Forms::Label());
//		this->txt_PRENOM_CLIENT = (gcnew System::Windows::Forms::TextBox());
//		this->lbl_message = (gcnew System::Windows::Forms::Label());
//		this->txt_message = (gcnew System::Windows::Forms::TextBox());
//		this->btn_first = (gcnew System::Windows::Forms::Button());
//		this->btn_previous = (gcnew System::Windows::Forms::Button());
//		this->btn_next = (gcnew System::Windows::Forms::Button());
//		this->btn_end = (gcnew System::Windows::Forms::Button());
//		this->btn_nouveau = (gcnew System::Windows::Forms::Button());
//		this->btn_modifier = (gcnew System::Windows::Forms::Button());
//		this->btn_sup = (gcnew System::Windows::Forms::Button());
//		this->btn_enregistrer = (gcnew System::Windows::Forms::Button());
//		this->label1 = (gcnew System::Windows::Forms::Label());
//		this->txt_DATE_NAISSANCE_CLIENT = (gcnew System::Windows::Forms::TextBox());
//		this->label2 = (gcnew System::Windows::Forms::Label());
//		this->txt_DATE_PREMIERE_COMMANDE_CLIENT = (gcnew System::Windows::Forms::TextBox());
//		this->SuspendLayout();
//		// 
//		// lbl_Id
//		// 
//		this->lbl_Id->AutoSize = true;
//		this->lbl_Id->Location = System::Drawing::Point(9, 9);
//		this->lbl_Id->Name = L"lbl_Id";
//		this->lbl_Id->Size = System::Drawing::Size(66, 13);
//		this->lbl_Id->TabIndex = 0;
//		this->lbl_Id->Text = L"ID Personne";
//		// 
//		// txt_ID_CLIENT
//		// 
//		this->txt_ID_CLIENT->Location = System::Drawing::Point(12, 28);
//		this->txt_ID_CLIENT->Name = L"txt_ID_CLIENT";
//		this->txt_ID_CLIENT->ReadOnly = true;
//		this->txt_ID_CLIENT->Size = System::Drawing::Size(89, 20);
//		this->txt_ID_CLIENT->TabIndex = 1;
//		// 
//		// lbl_NOM_CLIENT
//		// 
//		this->lbl_NOM_CLIENT->AutoSize = true;
//		this->lbl_NOM_CLIENT->Location = System::Drawing::Point(9, 51);
//		this->lbl_NOM_CLIENT->Name = L"lbl_NOM_CLIENT";
//		this->lbl_NOM_CLIENT->Size = System::Drawing::Size(76, 13);
//		this->lbl_NOM_CLIENT->TabIndex = 2;
//		this->lbl_NOM_CLIENT->Text = L"NOM_CLIENT";
//		// 
//		// txt_NOM_CLIENT
//		// 
//		this->txt_NOM_CLIENT->Location = System::Drawing::Point(12, 67);
//		this->txt_NOM_CLIENT->Name = L"txt_NOM_CLIENT";
//		this->txt_NOM_CLIENT->Size = System::Drawing::Size(89, 20);
//		this->txt_NOM_CLIENT->TabIndex = 3;
//		// 
//		// lbl_PRENOM_CLIENT
//		// 
//		this->lbl_PRENOM_CLIENT->AutoSize = true;
//		this->lbl_PRENOM_CLIENT->Location = System::Drawing::Point(9, 93);
//		this->lbl_PRENOM_CLIENT->Name = L"lbl_PRENOM_CLIENT";
//		this->lbl_PRENOM_CLIENT->Size = System::Drawing::Size(43, 13);
//		this->lbl_PRENOM_CLIENT->TabIndex = 4;
//		this->lbl_PRENOM_CLIENT->Text = L"Prénom";
//		// 
//		// txt_PRENOM_CLIENT
//		// 
//		this->txt_PRENOM_CLIENT->Location = System::Drawing::Point(12, 109);
//		this->txt_PRENOM_CLIENT->Name = L"txt_PRENOM_CLIENT";
//		this->txt_PRENOM_CLIENT->Size = System::Drawing::Size(89, 20);
//		this->txt_PRENOM_CLIENT->TabIndex = 5;
//		// 
//		// lbl_message
//		// 
//		this->lbl_message->AutoSize = true;
//		this->lbl_message->Location = System::Drawing::Point(9, 180);
//		this->lbl_message->Name = L"lbl_message";
//		this->lbl_message->Size = System::Drawing::Size(50, 13);
//		this->lbl_message->TabIndex = 6;
//		this->lbl_message->Text = L"Message";
//		// 
//		// txt_message
//		// 
//		this->txt_message->Location = System::Drawing::Point(12, 196);
//		this->txt_message->Multiline = true;
//		this->txt_message->Name = L"txt_message";
//		this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
//		this->txt_message->Size = System::Drawing::Size(412, 50);
//		this->txt_message->TabIndex = 7;
//		// 
//		// btn_first
//		// 
//		this->btn_first->Location = System::Drawing::Point(12, 146);
//		this->btn_first->Name = L"btn_first";
//		this->btn_first->Size = System::Drawing::Size(46, 23);
//		this->btn_first->TabIndex = 8;
//		this->btn_first->Text = L"<<";
//		this->btn_first->UseVisualStyleBackColor = true;
//		this->btn_first->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_first_Click);
//		// 
//		// btn_previous
//		// 
//		this->btn_previous->Location = System::Drawing::Point(64, 146);
//		this->btn_previous->Name = L"btn_previous";
//		this->btn_previous->Size = System::Drawing::Size(46, 23);
//		this->btn_previous->TabIndex = 9;
//		this->btn_previous->Text = L"<";
//		this->btn_previous->UseVisualStyleBackColor = true;
//		this->btn_previous->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_previous_Click);
//		// 
//		// btn_next
//		// 
//		this->btn_next->Location = System::Drawing::Point(116, 146);
//		this->btn_next->Name = L"btn_next";
//		this->btn_next->Size = System::Drawing::Size(46, 23);
//		this->btn_next->TabIndex = 10;
//		this->btn_next->Text = L">";
//		this->btn_next->UseVisualStyleBackColor = true;
//		this->btn_next->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_next_Click);
//		// 
//		// btn_end
//		// 
//		this->btn_end->Location = System::Drawing::Point(168, 146);
//		this->btn_end->Name = L"btn_end";
//		this->btn_end->Size = System::Drawing::Size(46, 23);
//		this->btn_end->TabIndex = 11;
//		this->btn_end->Text = L">>";
//		this->btn_end->UseVisualStyleBackColor = true;
//		this->btn_end->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_end_Click);
//		// 
//		// btn_nouveau
//		// 
//		this->btn_nouveau->Location = System::Drawing::Point(238, 25);
//		this->btn_nouveau->Name = L"btn_nouveau";
//		this->btn_nouveau->Size = System::Drawing::Size(80, 36);
//		this->btn_nouveau->TabIndex = 12;
//		this->btn_nouveau->Text = L"Nouveau";
//		this->btn_nouveau->UseVisualStyleBackColor = true;
//		this->btn_nouveau->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_nouveau_Click);
//		// 
//		// btn_modifier
//		// 
//		this->btn_modifier->Location = System::Drawing::Point(238, 79);
//		this->btn_modifier->Name = L"btn_modifier";
//		this->btn_modifier->Size = System::Drawing::Size(80, 36);
//		this->btn_modifier->TabIndex = 13;
//		this->btn_modifier->Text = L"Modifier";
//		this->btn_modifier->UseVisualStyleBackColor = true;
//		this->btn_modifier->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_modifier_Click);
//		// 
//		// btn_sup
//		// 
//		this->btn_sup->Location = System::Drawing::Point(238, 133);
//		this->btn_sup->Name = L"btn_sup";
//		this->btn_sup->Size = System::Drawing::Size(80, 36);
//		this->btn_sup->TabIndex = 14;
//		this->btn_sup->Text = L"Supprimer";
//		this->btn_sup->UseVisualStyleBackColor = true;
//		this->btn_sup->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_sup_Click);
//		// 
//		// btn_enregistrer
//		// 
//		this->btn_enregistrer->Location = System::Drawing::Point(326, 25);
//		this->btn_enregistrer->Name = L"btn_enregistrer";
//		this->btn_enregistrer->Size = System::Drawing::Size(98, 144);
//		this->btn_enregistrer->TabIndex = 15;
//		this->btn_enregistrer->Text = L"ENREGISTRER";
//		this->btn_enregistrer->UseVisualStyleBackColor = true;
//		this->btn_enregistrer->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_enregistrer_Click);
//		// 
//		// label1
//		// 
//		this->label1->AutoSize = true;
//		this->label1->Location = System::Drawing::Point(122, 9);
//		this->label1->Name = L"label1";
//		this->label1->Size = System::Drawing::Size(96, 13);
//		this->label1->TabIndex = 16;
//		this->label1->Text = L"Date de naissance";
//		this->label1->Click += gcnew System::EventHandler(this, &FRM_Principal::label1_Click);
//		// 
//		// txt_DATE_NAISSANCE_CLIENT
//		// 
//		this->txt_DATE_NAISSANCE_CLIENT->Location = System::Drawing::Point(125, 28);
//		this->txt_DATE_NAISSANCE_CLIENT->Name = L"txt_DATE_NAISSANCE_CLIENT";
//		this->txt_DATE_NAISSANCE_CLIENT->Size = System::Drawing::Size(89, 20);
//		this->txt_DATE_NAISSANCE_CLIENT->TabIndex = 17;
//		// 
//		// label2
//		// 
//		this->label2->AutoSize = true;
//		this->label2->Location = System::Drawing::Point(113, 51);
//		this->label2->Name = L"label2";
//		this->label2->Size = System::Drawing::Size(128, 13);
//		this->label2->TabIndex = 18;
//		this->label2->Text = L"Date premiere commande";
//		this->label2->Click += gcnew System::EventHandler(this, &FRM_Principal::label2_Click);
//		// 
//		// txt_DATE_PREMIERE_COMMANDE_CLIENT
//		// 
//		this->txt_DATE_PREMIERE_COMMANDE_CLIENT->Location = System::Drawing::Point(125, 67);
//		this->txt_DATE_PREMIERE_COMMANDE_CLIENT->Name = L"txt_DATE_PREMIERE_COMMANDE_CLIENT";
//		this->txt_DATE_PREMIERE_COMMANDE_CLIENT->Size = System::Drawing::Size(89, 20);
//		this->txt_DATE_PREMIERE_COMMANDE_CLIENT->TabIndex = 19;
//		// 
//		// FRM_Principal
//		// 
//		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
//		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//		this->ClientSize = System::Drawing::Size(439, 261);
//		this->Controls->Add(this->txt_DATE_PREMIERE_COMMANDE_CLIENT);
//		this->Controls->Add(this->label2);
//		this->Controls->Add(this->txt_DATE_NAISSANCE_CLIENT);
//		this->Controls->Add(this->label1);
//		this->Controls->Add(this->btn_enregistrer);
//		this->Controls->Add(this->btn_sup);
//		this->Controls->Add(this->btn_modifier);
//		this->Controls->Add(this->btn_nouveau);
//		this->Controls->Add(this->btn_end);
//		this->Controls->Add(this->btn_next);
//		this->Controls->Add(this->btn_previous);
//		this->Controls->Add(this->btn_first);
//		this->Controls->Add(this->txt_message);
//		this->Controls->Add(this->lbl_message);
//		this->Controls->Add(this->txt_PRENOM_CLIENT);
//		this->Controls->Add(this->lbl_PRENOM_CLIENT);
//		this->Controls->Add(this->txt_NOM_CLIENT);
//		this->Controls->Add(this->lbl_NOM_CLIENT);
//		this->Controls->Add(this->txt_ID_CLIENT);
//		this->Controls->Add(this->lbl_Id);
//		this->Name = L"FRM_Principal";
//		this->Text = L"A2 POO Corbeille 6";
//		this->Load += gcnew System::EventHandler(this, &FRM_Principal::FRM_Principal_Load);
//		this->ResumeLayout(false);
//		this->PerformLayout();
//
//	}
