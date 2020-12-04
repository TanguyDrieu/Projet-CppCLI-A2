#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class FUNCTIONSTATS
{
public:
	//FUNCTIONSTATS();

	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStringBuilder;

	void ConnectToDB() {
		//Data Source=LAPTOP-VK6ASJHC;Initial Catalog=TestKyrsach;Integrated Security=True
		//Data Source=LAPTOP-VK6ASJHC;Initial Catalog=PROJET;Integrated Security=True
		connStringBuilder = gcnew SqlConnectionStringBuilder();
		connStringBuilder->DataSource = "DESKTOP-PQR7KBN";
		connStringBuilder->InitialCatalog = "PROJET_CASTORAMA";
		connStringBuilder->IntegratedSecurity = true;
		conn = gcnew SqlConnection(Convert::ToString(connStringBuilder));
	}

	// "dbo.TableNames"
	// Insert
public:
	int pm, cam, vcs, vas, mtac;
	double sim;

	int PanierMoyen() {
		ConnectToDB();
		String^ cmdText = "SELECT AVG(MONTANT_TTC) AS PANIER_MOYEN FROM COMMANDES";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		this->conn->Open();
		pm = Convert::ToInt32(cmd->ExecuteScalar());
		this->conn->Close();
		return pm;
	}

	int getPM() {
		return pm;
	}

	int ChiffreAffaireMois(String^ mois, int annee) {
		ConnectToDB();
		int numMois = 0;
		if (mois == "Janvier") {
			numMois = 1;
		}
		else if (mois == "Février") {
			numMois = 2;
		}
		else if (mois == "Mars") {
			numMois = 3;
		}
		else if (mois == "Avril") {
			numMois = 4;
		}
		else if (mois == "Mai") {
			numMois = 5;
		}
		else if (mois == "Juin") {
			numMois = 6;
		}
		else if (mois == "Juillet") {
			numMois = 7;
		}
		else if (mois == "Août") {
			numMois = 8;
		}
		else if (mois == "Septembre") {
			numMois = 9;
		}
		else if (mois == "Octobre") {
			numMois = 10;
		}
		else if (mois == "Novembre") {
			numMois = 11;
		}
		else if (mois == "Décembre") {
			numMois = 12;
		}
		String^ cmdText = "SELECT SUM(MONTANT_TTC) AS CHIFFRE_AFFAIRE FROM COMMANDES WHERE DATE_SOLDE_REGLEMENT BETWEEN '" + annee + "-" + mois + "-01' AND '" + annee + "-" + mois + "-31'";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		this->conn->Open();
		cam = Convert::ToInt32(cmd->ExecuteScalar());
		this->conn->Close();
		return cam;
	}

	int getCAM() {
		return cam;
	}

	int MontantTotalAchatsClient(int id) {
		ConnectToDB();
		String^ cmdText = "SELECT SUM(MONTANT_TTC) AS MONTANT_TTC FROM COMMANDES WHERE ID_CLIENT = " + id;
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		this->conn->Open();
		mtac = Convert::ToInt32(cmd->ExecuteScalar());
		this->conn->Close();
		return mtac;
	}

	int getMTAC() {
		return mtac;
	}

	int ValeurCommercialeStock() {
		ConnectToDB();
		String^ cmdText = "SELECT SUM((PRIX_HT + PRIX_HT * TAUX_TVA) * QUANTITE_STOCK) AS VALEUR_COMMERCIALE FROM PRODUITS";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		this->conn->Open();
		vcs = Convert::ToInt32(cmd->ExecuteScalar());
		this->conn->Close();
		return vcs;
	}

	int getVCS() {
		return vcs;
	}

	int ValeurAchatStock() {
		ConnectToDB();
		String^ cmdText = "SELECT SUM(PRIX_HT * QUANTITE_STOCK) AS VALEUR_ACHAT FROM PRODUITS";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		this->conn->Open();
		vas = Convert::ToInt32(cmd->ExecuteScalar());
		this->conn->Close();
		return vas;
	}

	int getVAS() {
		return vas;
	}

	double Simulation(String^ tva, String^ mc, String^ rc, String^ di) {
		ConnectToDB();
		String^ valTva = "";
		if (tva == "TVA à 20%") {
			valTva = "0.2";
		}
		else if (tva == "TVA à 10%") {
			valTva = "0.1";
		}
		else if (tva == "TVA à 5,5%") {
			valTva = "0.055";
		}
		String^ valMc = "";
		if (mc == "Marge commerciale de 15%") {
			valMc = "0.15";
		}
		else if (mc == "Marge commerciale de 10%") {
			valMc = "0.1";
		}
		String^ valRc = "";
		if (rc == "Remise commerciale de 5%") {
			valRc = "0.05";
		}
		else if (rc == "Remise commerciale de 6%") {
			valRc = "0.06";
		}
		String^ valDi = "";
		if (di == "Démarque inconnue de 2%") {
			valDi = "0.02";
		}
		else if (di == "Démarque inconnue de 3%") {
			valDi = "0.03";
		}
		else if (di == "Démarque inconnue de 5%") {
			valDi = "0.05";
		}
		String^ cmdText = "SELECT SUM((PRIX_HT + '" + valTva + "' * PRIX_HT + '" + valMc + "' * PRIX_HT - PRIX_HT * '" + valRc + "' - PRIX_HT * '" + valDi + "') * QUANTITE_STOCK) FROM PRODUITS";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		this->conn->Open();
		sim = Convert::ToDouble(cmd->ExecuteScalar());
		this->conn->Close();
		return sim;
	}

	double getSIM() {
		return sim;
	}
};