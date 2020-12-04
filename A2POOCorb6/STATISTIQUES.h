#pragma once
#include "FUNCTIONSTATS.h"

namespace A2POOCorb6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InsertData
	/// </summary>
	public ref class STATISTIQUES : public System::Windows::Forms::Form
	{
	public:
		STATISTIQUES(void)
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
		~STATISTIQUES()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblAffichagePanierMoyen;
	private: System::Windows::Forms::Label^ lblCAM;
	private: System::Windows::Forms::Label^ lblVCS;
	private: System::Windows::Forms::Label^ lblVAS;
	private: System::Windows::Forms::DataGridView^ dgvPSSR;
	private: System::Windows::Forms::ComboBox^ cbMOIS;
	private: System::Windows::Forms::TextBox^ txtANNEE;
	private: System::Windows::Forms::TextBox^ txtMTAC;
	private: System::Windows::Forms::Label^ lblMTAC;
	private: System::Windows::Forms::DataGridView^ dgvPPV;
	private: System::Windows::Forms::DataGridView^ dgvPMV;
	private: System::Windows::Forms::Button^ btnPM;
	private: System::Windows::Forms::Button^ btnVCS;
	private: System::Windows::Forms::Button^ btnVAS;
	private: System::Windows::Forms::Button^ btnCAM;
	private: System::Windows::Forms::Button^ btnMTAC;
	private: System::Windows::Forms::Button^ btnAPV;
	private: System::Windows::Forms::Button^ btnAMV;
	private: System::Windows::Forms::Button^ btnPSSR;
	private: System::Windows::Forms::Button^ btnSIM;
	private: System::Windows::Forms::ComboBox^ cbTVA;
	private: System::Windows::Forms::ComboBox^ cbMC;
	private: System::Windows::Forms::Label^ lblSIM;
	private: System::Windows::Forms::ComboBox^ cbRC;
	private: System::Windows::Forms::ComboBox^ cbDI;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblAffichagePanierMoyen = (gcnew System::Windows::Forms::Label());
			this->lblCAM = (gcnew System::Windows::Forms::Label());
			this->lblVCS = (gcnew System::Windows::Forms::Label());
			this->lblVAS = (gcnew System::Windows::Forms::Label());
			this->dgvPSSR = (gcnew System::Windows::Forms::DataGridView());
			this->cbMOIS = (gcnew System::Windows::Forms::ComboBox());
			this->txtANNEE = (gcnew System::Windows::Forms::TextBox());
			this->txtMTAC = (gcnew System::Windows::Forms::TextBox());
			this->lblMTAC = (gcnew System::Windows::Forms::Label());
			this->dgvPPV = (gcnew System::Windows::Forms::DataGridView());
			this->dgvPMV = (gcnew System::Windows::Forms::DataGridView());
			this->btnPM = (gcnew System::Windows::Forms::Button());
			this->btnVCS = (gcnew System::Windows::Forms::Button());
			this->btnVAS = (gcnew System::Windows::Forms::Button());
			this->btnCAM = (gcnew System::Windows::Forms::Button());
			this->btnMTAC = (gcnew System::Windows::Forms::Button());
			this->btnAPV = (gcnew System::Windows::Forms::Button());
			this->btnAMV = (gcnew System::Windows::Forms::Button());
			this->btnPSSR = (gcnew System::Windows::Forms::Button());
			this->btnSIM = (gcnew System::Windows::Forms::Button());
			this->cbTVA = (gcnew System::Windows::Forms::ComboBox());
			this->cbMC = (gcnew System::Windows::Forms::ComboBox());
			this->lblSIM = (gcnew System::Windows::Forms::Label());
			this->cbRC = (gcnew System::Windows::Forms::ComboBox());
			this->cbDI = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPSSR))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPPV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPMV))->BeginInit();
			this->SuspendLayout();
			// 
			// lblAffichagePanierMoyen
			// 
			this->lblAffichagePanierMoyen->AutoSize = true;
			this->lblAffichagePanierMoyen->Location = System::Drawing::Point(157, 16);
			this->lblAffichagePanierMoyen->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAffichagePanierMoyen->Name = L"lblAffichagePanierMoyen";
			this->lblAffichagePanierMoyen->Size = System::Drawing::Size(77, 13);
			this->lblAffichagePanierMoyen->TabIndex = 4;
			this->lblAffichagePanierMoyen->Text = L"Panier moyen :";
			// 
			// lblCAM
			// 
			this->lblCAM->AutoSize = true;
			this->lblCAM->Location = System::Drawing::Point(386, 81);
			this->lblCAM->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblCAM->Name = L"lblCAM";
			this->lblCAM->Size = System::Drawing::Size(139, 13);
			this->lblCAM->TabIndex = 6;
			this->lblCAM->Text = L"Chiffre d\'affaire sur un mois :";
			// 
			// lblVCS
			// 
			this->lblVCS->AutoSize = true;
			this->lblVCS->Location = System::Drawing::Point(157, 60);
			this->lblVCS->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblVCS->Name = L"lblVCS";
			this->lblVCS->Size = System::Drawing::Size(149, 13);
			this->lblVCS->TabIndex = 8;
			this->lblVCS->Text = L"Valeur commerciale du stock :";
			// 
			// lblVAS
			// 
			this->lblVAS->AutoSize = true;
			this->lblVAS->Location = System::Drawing::Point(157, 110);
			this->lblVAS->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblVAS->Name = L"lblVAS";
			this->lblVAS->Size = System::Drawing::Size(125, 13);
			this->lblVAS->TabIndex = 9;
			this->lblVAS->Text = L"Valeur d\'achat du stock :";
			// 
			// dgvPSSR
			// 
			this->dgvPSSR->AllowUserToOrderColumns = true;
			this->dgvPSSR->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPSSR->Location = System::Drawing::Point(388, 158);
			this->dgvPSSR->Margin = System::Windows::Forms::Padding(2);
			this->dgvPSSR->Name = L"dgvPSSR";
			this->dgvPSSR->RowHeadersWidth = 51;
			this->dgvPSSR->RowTemplate->Height = 24;
			this->dgvPSSR->Size = System::Drawing::Size(552, 179);
			this->dgvPSSR->TabIndex = 10;
			// 
			// cbMOIS
			// 
			this->cbMOIS->FormattingEnabled = true;
			this->cbMOIS->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Janvier", L"Février", L"Mars", L"Avril", L"Mai",
					L"Juin", L"Juillet", L"Août", L"Septembre", L"Octobre", L"Novembre", L"Décembre"
			});
			this->cbMOIS->Location = System::Drawing::Point(388, 49);
			this->cbMOIS->Margin = System::Windows::Forms::Padding(2);
			this->cbMOIS->Name = L"cbMOIS";
			this->cbMOIS->Size = System::Drawing::Size(138, 21);
			this->cbMOIS->TabIndex = 11;
			this->cbMOIS->Text = L"Sélectionnez un mois";
			// 
			// txtANNEE
			// 
			this->txtANNEE->Location = System::Drawing::Point(530, 49);
			this->txtANNEE->Margin = System::Windows::Forms::Padding(2);
			this->txtANNEE->Name = L"txtANNEE";
			this->txtANNEE->Size = System::Drawing::Size(108, 20);
			this->txtANNEE->TabIndex = 12;
			this->txtANNEE->Text = L"Entrez une année";
			// 
			// txtMTAC
			// 
			this->txtMTAC->Location = System::Drawing::Point(670, 49);
			this->txtMTAC->Margin = System::Windows::Forms::Padding(2);
			this->txtMTAC->Name = L"txtMTAC";
			this->txtMTAC->Size = System::Drawing::Size(88, 20);
			this->txtMTAC->TabIndex = 13;
			this->txtMTAC->Text = L"Entrez l\'ID client";
			this->txtMTAC->TextChanged += gcnew System::EventHandler(this, &STATISTIQUES::txtMTAC_TextChanged);
			// 
			// lblMTAC
			// 
			this->lblMTAC->AutoSize = true;
			this->lblMTAC->Location = System::Drawing::Point(668, 81);
			this->lblMTAC->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblMTAC->Name = L"lblMTAC";
			this->lblMTAC->Size = System::Drawing::Size(181, 13);
			this->lblMTAC->TabIndex = 14;
			this->lblMTAC->Text = L"Montant total des achats d\'un client :";
			// 
			// dgvPPV
			// 
			this->dgvPPV->AllowUserToOrderColumns = true;
			this->dgvPPV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPPV->Location = System::Drawing::Point(9, 214);
			this->dgvPPV->Margin = System::Windows::Forms::Padding(2);
			this->dgvPPV->Name = L"dgvPPV";
			this->dgvPPV->RowHeadersWidth = 51;
			this->dgvPPV->RowTemplate->Height = 24;
			this->dgvPPV->Size = System::Drawing::Size(296, 122);
			this->dgvPPV->TabIndex = 15;
			// 
			// dgvPMV
			// 
			this->dgvPMV->AllowUserToOrderColumns = true;
			this->dgvPMV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPMV->Location = System::Drawing::Point(9, 401);
			this->dgvPMV->Margin = System::Windows::Forms::Padding(2);
			this->dgvPMV->Name = L"dgvPMV";
			this->dgvPMV->RowHeadersWidth = 51;
			this->dgvPMV->RowTemplate->Height = 24;
			this->dgvPMV->Size = System::Drawing::Size(296, 135);
			this->dgvPMV->TabIndex = 16;
			// 
			// btnPM
			// 
			this->btnPM->Location = System::Drawing::Point(9, 10);
			this->btnPM->Margin = System::Windows::Forms::Padding(2);
			this->btnPM->Name = L"btnPM";
			this->btnPM->Size = System::Drawing::Size(143, 27);
			this->btnPM->TabIndex = 19;
			this->btnPM->Text = L"Afficher le panier moyen";
			this->btnPM->UseVisualStyleBackColor = true;
			this->btnPM->Click += gcnew System::EventHandler(this, &STATISTIQUES::btnPM_Click);
			// 
			// btnVCS
			// 
			this->btnVCS->Location = System::Drawing::Point(9, 49);
			this->btnVCS->Margin = System::Windows::Forms::Padding(2);
			this->btnVCS->Name = L"btnVCS";
			this->btnVCS->Size = System::Drawing::Size(143, 37);
			this->btnVCS->TabIndex = 20;
			this->btnVCS->Text = L"Afficher la valeur commerciale du stock";
			this->btnVCS->UseVisualStyleBackColor = true;
			this->btnVCS->Click += gcnew System::EventHandler(this, &STATISTIQUES::btnVCS_Click);
			// 
			// btnVAS
			// 
			this->btnVAS->Location = System::Drawing::Point(9, 98);
			this->btnVAS->Margin = System::Windows::Forms::Padding(2);
			this->btnVAS->Name = L"btnVAS";
			this->btnVAS->Size = System::Drawing::Size(143, 38);
			this->btnVAS->TabIndex = 21;
			this->btnVAS->Text = L"Afficher la valeur d\'achat du stock";
			this->btnVAS->UseVisualStyleBackColor = true;
			this->btnVAS->Click += gcnew System::EventHandler(this, &STATISTIQUES::btnVAS_Click);
			// 
			// btnCAM
			// 
			this->btnCAM->Location = System::Drawing::Point(388, 10);
			this->btnCAM->Margin = System::Windows::Forms::Padding(2);
			this->btnCAM->Name = L"btnCAM";
			this->btnCAM->Size = System::Drawing::Size(248, 27);
			this->btnCAM->TabIndex = 22;
			this->btnCAM->Text = L"Afficher le chiffre d\'affaire du mois choisis";
			this->btnCAM->UseVisualStyleBackColor = true;
			this->btnCAM->Click += gcnew System::EventHandler(this, &STATISTIQUES::btnCAM_Click);
			// 
			// btnMTAC
			// 
			this->btnMTAC->Location = System::Drawing::Point(670, 10);
			this->btnMTAC->Margin = System::Windows::Forms::Padding(2);
			this->btnMTAC->Name = L"btnMTAC";
			this->btnMTAC->Size = System::Drawing::Size(270, 27);
			this->btnMTAC->TabIndex = 23;
			this->btnMTAC->Text = L"Afficher le montant total des achats d\'un client";
			this->btnMTAC->UseVisualStyleBackColor = true;
			this->btnMTAC->Click += gcnew System::EventHandler(this, &STATISTIQUES::btnMTAC_Click);
			// 
			// btnAPV
			// 
			this->btnAPV->Location = System::Drawing::Point(9, 178);
			this->btnAPV->Margin = System::Windows::Forms::Padding(2);
			this->btnAPV->Name = L"btnAPV";
			this->btnAPV->Size = System::Drawing::Size(296, 32);
			this->btnAPV->TabIndex = 24;
			this->btnAPV->Text = L"Afficher les 10 articles les plus vendus";
			this->btnAPV->UseVisualStyleBackColor = true;
			this->btnAPV->Click += gcnew System::EventHandler(this, &STATISTIQUES::btnAPV_Click);
			// 
			// btnAMV
			// 
			this->btnAMV->Location = System::Drawing::Point(9, 364);
			this->btnAMV->Margin = System::Windows::Forms::Padding(2);
			this->btnAMV->Name = L"btnAMV";
			this->btnAMV->Size = System::Drawing::Size(296, 32);
			this->btnAMV->TabIndex = 25;
			this->btnAMV->Text = L"Afficher les 10 articles les moins vendus";
			this->btnAMV->UseVisualStyleBackColor = true;
			this->btnAMV->Click += gcnew System::EventHandler(this, &STATISTIQUES::btnAMV_Click);
			// 
			// btnPSSR
			// 
			this->btnPSSR->Location = System::Drawing::Point(388, 121);
			this->btnPSSR->Margin = System::Windows::Forms::Padding(2);
			this->btnPSSR->Name = L"btnPSSR";
			this->btnPSSR->Size = System::Drawing::Size(552, 32);
			this->btnPSSR->TabIndex = 26;
			this->btnPSSR->Text = L"Afficher les produits nécessitant un réapprovisionnement";
			this->btnPSSR->UseVisualStyleBackColor = true;
			this->btnPSSR->Click += gcnew System::EventHandler(this, &STATISTIQUES::btnPSSR_Click);
			// 
			// btnSIM
			// 
			this->btnSIM->Location = System::Drawing::Point(388, 364);
			this->btnSIM->Margin = System::Windows::Forms::Padding(2);
			this->btnSIM->Name = L"btnSIM";
			this->btnSIM->Size = System::Drawing::Size(552, 32);
			this->btnSIM->TabIndex = 27;
			this->btnSIM->Text = L"Afficher la simulation de valeur du stock";
			this->btnSIM->UseVisualStyleBackColor = true;
			this->btnSIM->Click += gcnew System::EventHandler(this, &STATISTIQUES::btnSIM_Click);
			// 
			// cbTVA
			// 
			this->cbTVA->FormattingEnabled = true;
			this->cbTVA->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"TVA à 5,5%", L"TVA à 10%", L"TVA à 20%" });
			this->cbTVA->Location = System::Drawing::Point(388, 411);
			this->cbTVA->Margin = System::Windows::Forms::Padding(2);
			this->cbTVA->Name = L"cbTVA";
			this->cbTVA->Size = System::Drawing::Size(276, 21);
			this->cbTVA->TabIndex = 28;
			this->cbTVA->Text = L"Sélectionnez une TVA";
			// 
			// cbMC
			// 
			this->cbMC->FormattingEnabled = true;
			this->cbMC->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Sélectionnez une marge commerciale", L"Marge commerciale de 10%",
					L"Marge commerciale de 15%"
			});
			this->cbMC->Location = System::Drawing::Point(670, 411);
			this->cbMC->Margin = System::Windows::Forms::Padding(2);
			this->cbMC->Name = L"cbMC";
			this->cbMC->Size = System::Drawing::Size(271, 21);
			this->cbMC->TabIndex = 29;
			this->cbMC->Text = L"Sélectionnez une marge commerciale";
			// 
			// lblSIM
			// 
			this->lblSIM->AutoSize = true;
			this->lblSIM->Location = System::Drawing::Point(386, 477);
			this->lblSIM->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblSIM->Name = L"lblSIM";
			this->lblSIM->Size = System::Drawing::Size(161, 13);
			this->lblSIM->TabIndex = 30;
			this->lblSIM->Text = L"Simulaton de la valeur du stock :";
			// 
			// cbRC
			// 
			this->cbRC->FormattingEnabled = true;
			this->cbRC->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Sélectionnez une remise commerciale", L"Remise commerciale de 5%",
					L"Remise commerciale de 6%"
			});
			this->cbRC->Location = System::Drawing::Point(388, 445);
			this->cbRC->Margin = System::Windows::Forms::Padding(2);
			this->cbRC->Name = L"cbRC";
			this->cbRC->Size = System::Drawing::Size(276, 21);
			this->cbRC->TabIndex = 31;
			this->cbRC->Text = L"Sélectionnez une remise commerciale";
			// 
			// cbDI
			// 
			this->cbDI->FormattingEnabled = true;
			this->cbDI->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Sélectionnez une démarque inconnue", L"Démarque inconnue de 2%",
					L"Démarque inconnue de 3%", L"Démarque inconnue de 5%"
			});
			this->cbDI->Location = System::Drawing::Point(670, 445);
			this->cbDI->Margin = System::Windows::Forms::Padding(2);
			this->cbDI->Name = L"cbDI";
			this->cbDI->Size = System::Drawing::Size(271, 21);
			this->cbDI->TabIndex = 32;
			this->cbDI->Text = L"Sélectionnez une démarque inconnue";
			// 
			// STATISTIQUES
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(949, 562);
			this->Controls->Add(this->cbDI);
			this->Controls->Add(this->cbRC);
			this->Controls->Add(this->lblSIM);
			this->Controls->Add(this->cbMC);
			this->Controls->Add(this->cbTVA);
			this->Controls->Add(this->btnSIM);
			this->Controls->Add(this->btnPSSR);
			this->Controls->Add(this->btnAMV);
			this->Controls->Add(this->btnAPV);
			this->Controls->Add(this->btnMTAC);
			this->Controls->Add(this->btnCAM);
			this->Controls->Add(this->btnVAS);
			this->Controls->Add(this->btnVCS);
			this->Controls->Add(this->btnPM);
			this->Controls->Add(this->dgvPMV);
			this->Controls->Add(this->dgvPPV);
			this->Controls->Add(this->lblMTAC);
			this->Controls->Add(this->txtMTAC);
			this->Controls->Add(this->txtANNEE);
			this->Controls->Add(this->cbMOIS);
			this->Controls->Add(this->dgvPSSR);
			this->Controls->Add(this->lblVAS);
			this->Controls->Add(this->lblVCS);
			this->Controls->Add(this->lblCAM);
			this->Controls->Add(this->lblAffichagePanierMoyen);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"STATISTIQUES";
			this->Text = L"Statistiques";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPSSR))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPPV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPMV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Panier moyen
	private: System::Void btnPM_Click(System::Object^ sender, System::EventArgs^ e) {
		FUNCTIONSTATS pm;
		pm.PanierMoyen();
		lblAffichagePanierMoyen->Text = "Panier moyen : " + pm.getPM() + " €";
	}

		   //Valeur commerciale du stock
	private: System::Void btnVCS_Click(System::Object^ sender, System::EventArgs^ e) {
		FUNCTIONSTATS vcs;
		vcs.ValeurCommercialeStock();
		lblVCS->Text = "Valeur commerciale du stock : " + vcs.getVCS() + " €";
	}

		   //Valeur d'achat du stock
	private: System::Void btnVAS_Click(System::Object^ sender, System::EventArgs^ e) {
		FUNCTIONSTATS vas;
		vas.ValeurAchatStock();
		lblVAS->Text = "Valeur d'achat du stock : " + vas.getVAS() + " €";
	}

		   //Chiffre d'affaire sur un mois
	private: System::Void btnCAM_Click(System::Object^ sender, System::EventArgs^ e) {
		FUNCTIONSTATS cam;
		String^ mois = Convert::ToString(cbMOIS->SelectedItem);
		int annee = Convert::ToInt32(txtANNEE->Text);
		cam.ChiffreAffaireMois(mois, annee);
		lblCAM->Text = "Chiffre d'affaire de " + mois + " " + annee + " : " + cam.getCAM() + " €";
	}

		   //Montant total des achats d'un client
	private: System::Void btnMTAC_Click(System::Object^ sender, System::EventArgs^ e) {
		FUNCTIONSTATS mtac;
		int idClient = Convert::ToInt32(txtMTAC->Text);
		mtac.MontantTotalAchatsClient(idClient);
		lblMTAC->Text = "Montant total des achats pour le client " + idClient + " : " + mtac.getMTAC() + " €";
	}

		   //Produits sous seuil réapprovisionnement
	private: System::Void btnPSSR_Click(System::Object^ sender, System::EventArgs^ e) {
		FUNCTIONSTATS pssr;
		SqlConnectionStringBuilder^ connStringBuilder;
		connStringBuilder = gcnew SqlConnectionStringBuilder();
		connStringBuilder->DataSource = "DESKTOP-PQR7KBN";
		connStringBuilder->InitialCatalog = "PROJET_CASTORAMA";
		connStringBuilder->IntegratedSecurity = true;
		SqlConnection^ conn = gcnew SqlConnection(Convert::ToString(connStringBuilder));
		pssr.ConnectToDB();
		String^ cmdTextPSSR = "SELECT REF_PRODUIT, DESIGNATION, QUANTITE_STOCK FROM PRODUITS WHERE QUANTITE_STOCK < SEUIL_REAPPROVISIONNEMENT";
		SqlCommand^ cmd = gcnew SqlCommand(cmdTextPSSR, conn);
		conn->Open();
		SqlDataReader^ ReaderPSSR;
		try
		{
			SqlDataAdapter^ sda = gcnew SqlDataAdapter();
			sda->SelectCommand = cmd;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bsource = gcnew BindingSource();

			bsource->DataSource = dbdataset;
			dgvPSSR->DataSource = bsource;
			sda->Update(dbdataset);
		}
		catch (Exception^)
		{

		}
		conn->Close();
	}

		   //Identifier les 10 articles les plus vendus
	private: System::Void btnAPV_Click(System::Object^ sender, System::EventArgs^ e) {
		FUNCTIONSTATS apv;
		SqlConnectionStringBuilder^ connStringBuilder;
		connStringBuilder = gcnew SqlConnectionStringBuilder();
		connStringBuilder->DataSource = "DESKTOP-PQR7KBN";
		connStringBuilder->InitialCatalog = "PROJET_CASTORAMA";
		connStringBuilder->IntegratedSecurity = true;
		SqlConnection^ conn = gcnew SqlConnection(Convert::ToString(connStringBuilder));
		apv.ConnectToDB();
		String^ cmdTextPPV = "SELECT TOP 10 REF_PRODUIT, QUANTITE_ARTICLE FROM CONTENIR ORDER BY QUANTITE_ARTICLE DESC";
		SqlCommand^ cmdPPV = gcnew SqlCommand(cmdTextPPV, conn);
		conn->Open();
		SqlDataReader^ ReaderPPV;
		try
		{
			SqlDataAdapter^ sda = gcnew SqlDataAdapter();
			sda->SelectCommand = cmdPPV;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bsource = gcnew BindingSource();

			bsource->DataSource = dbdataset;
			dgvPPV->DataSource = bsource;
			sda->Update(dbdataset);
		}
		catch (Exception^)
		{

		}
		conn->Close();
	}

		   //Identifier les 10 articles les moins vendus
	private: System::Void btnAMV_Click(System::Object^ sender, System::EventArgs^ e) {
		FUNCTIONSTATS amv;
		SqlConnectionStringBuilder^ connStringBuilder;
		connStringBuilder = gcnew SqlConnectionStringBuilder();
		connStringBuilder->DataSource = "DESKTOP-PQR7KBN";
		connStringBuilder->InitialCatalog = "PROJET_CASTORAMA";
		connStringBuilder->IntegratedSecurity = true;
		SqlConnection^ conn = gcnew SqlConnection(Convert::ToString(connStringBuilder));
		amv.ConnectToDB();
		String^ cmdTextPMV = "SELECT TOP 10 REF_PRODUIT, QUANTITE_ARTICLE FROM CONTENIR ORDER BY QUANTITE_ARTICLE";
		SqlCommand^ cmdPMV = gcnew SqlCommand(cmdTextPMV, conn);
		conn->Open();
		SqlDataReader^ ReaderPMV;
		try
		{
			SqlDataAdapter^ sda = gcnew SqlDataAdapter();
			sda->SelectCommand = cmdPMV;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bsource = gcnew BindingSource();

			bsource->DataSource = dbdataset;
			dgvPMV->DataSource = bsource;
			sda->Update(dbdataset);
		}
		catch (Exception^)
		{

		}
		conn->Close();
	}

		   //Simulation
	private: System::Void btnSIM_Click(System::Object^ sender, System::EventArgs^ e) {
		FUNCTIONSTATS sim;
		String^ tva = Convert::ToString(cbTVA->SelectedItem);
		String^ mc = Convert::ToString(cbMC->SelectedItem);
		String^ rc = Convert::ToString(cbRC->SelectedItem);
		String^ di = Convert::ToString(cbDI->SelectedItem);
		sim.Simulation(tva, mc, rc, di);
		lblSIM->Text = "Valeur du stock après simulation : " + sim.getSIM() + " €";
	}
	
private: System::Void txtMTAC_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}	
};
}