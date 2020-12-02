#include "gestion.h"
#include"PERSONNEL.h"
#include"ADRESSE.h"
namespace NS_Svc
{
	gestion::gestion(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->adresse = gcnew NS_Composants::ADRESSE();
		this->client = gcnew NS_Composants::CLIENT();
		this->personnel = gcnew NS_Composants::PERSONNEL();
		this->commande = gcnew NS_Composants::COMMANDES();
	
		this->ds = gcnew Data::DataSet();
	}
	DataSet^ gestion::listeClient(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->client->SELECT(), dataTableName);
		return this->ds;
	}
	DataSet^ gestion::listePersonnel(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personnel->SELECT(), dataTableName);
		return this->ds;
	}
	DataSet^ gestion::listeAdresse(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->adresse->SELECT(), dataTableName);
		return this->ds;
	}
	DataSet^ gestion::listeCommande(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->commande->SELECT(), dataTableName);
		return this->ds;
	}
	int gestion::ajouterClient(String^ NOM_CLIENT, String^ PRENOM_CLIENT, String^ DATE_NAISSANCE_CLIENT, String^ DATE_PREMIERE_COMMANDE_CLIENT)
	{
		int id_personne;
		this->client->setNOM_CLIENT(NOM_CLIENT);
		this->client->setPRENOM_CLIENT(PRENOM_CLIENT);
		this->client->setDATE_NAISSANCE_CLIENT(DATE_NAISSANCE_CLIENT);
		this->client->setDATE_PREMIERE_COMMANDE_CLIENT(DATE_PREMIERE_COMMANDE_CLIENT);
		id_personne = this->cad->actionRowsID(this->client->INSERT());
		return id_personne;
	}
	void gestion::modifierClient(int ID_CLIENT, String^ NOM_CLIENT, String^ PRENOM_CLIENT, String^ DATE_NAISSANCE_CLIENT, String^ DATE_PREMIERE_COMMANDE_CLIENT)
	{
		this->client->setID(ID_CLIENT);
		this->client->setNOM_CLIENT(NOM_CLIENT);
		this->client->setPRENOM_CLIENT(PRENOM_CLIENT);
		this->client->setDATE_NAISSANCE_CLIENT(DATE_NAISSANCE_CLIENT);
		this->client->setDATE_PREMIERE_COMMANDE_CLIENT(DATE_PREMIERE_COMMANDE_CLIENT);
		this->cad->actionRows(this->client->UPDATE());
	}
	void gestion::supprimerClient(int ID_CLIENT)
	{
		this->client->setID(ID_CLIENT);
		this->cad->actionRows(this->client->DELETE());
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




int gestion::ajouterPersonnel(String^ NOM_PERSONNEL, String^ PRENOM_PERSONNEL, String^ ADRESSE_MAIL_PERSONNEL, String^ DATE_EMBAUCHE)
{
	int id_personnel;
	this->personnel->setNOM_PERSONNEL(NOM_PERSONNEL);
	this->personnel->setPRENOM_PERSONNEL(PRENOM_PERSONNEL);
	this->personnel->setADRESSE_MAIL_PERSONNEL(ADRESSE_MAIL_PERSONNEL);
	this->personnel->setDATE_EMBAUCHE(DATE_EMBAUCHE);
	id_personnel = this->cad->actionRowsID(this->personnel->INSERT());
	return id_personnel;
}
void gestion::modifierPersonnel(int ID_PERSONNEL, String^ NOM_PERSONNEL, String^ PRENOM_PERSONNEL, String^ ADRESSE_MAIL_PERSONNEL, String^ DATE_EMBAUCHE)
{
	this->personnel->setID_PERSONNEL(ID_PERSONNEL);
	this->personnel->setNOM_PERSONNEL(NOM_PERSONNEL);
	this->personnel->setPRENOM_PERSONNEL(PRENOM_PERSONNEL);
	this->personnel->setADRESSE_MAIL_PERSONNEL(ADRESSE_MAIL_PERSONNEL);
	this->personnel->setDATE_EMBAUCHE(DATE_EMBAUCHE);
	this->cad->actionRows(this->personnel->UPDATE());
}
void gestion::supprimerPersonnel(int ID_PERSONNEL)
{
	this->personnel->setID_PERSONNEL(ID_PERSONNEL);
	this->cad->actionRows(this->personnel->DELETE());
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int gestion::ajouterAdresse(String^ RUE, String^ CODE_POSTAL, String^ VILLE)
	{
		int id_adresse;
		this->adresse->setRUE(RUE);
		this->adresse->setCODE_POSTAL(CODE_POSTAL);
		this->adresse->setVILLE(VILLE);
		id_adresse = this->cad->actionRowsID(this->adresse->INSERT());
		return id_adresse;
	}
	void gestion::modifierAdresse(int ID_ADRESSE, String^ RUE, String^ CODE_POSTAL, String^ VILLE)
	{
		this->adresse->setID_ADRESSE(ID_ADRESSE);
		this->adresse->setRUE(RUE);
		this->adresse->setCODE_POSTAL(CODE_POSTAL);
		this->adresse->setVILLE(VILLE);
		this->cad->actionRows(this->adresse->UPDATE());
	}
	void gestion::supprimerAdresse(int ID_ADRESSE)
	{
		this->adresse->setID_ADRESSE(ID_ADRESSE);
		this->cad->actionRows(this->adresse->DELETE());
	}
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int gestion::ajouterCommande(String^ DATE_LIVRAISON_PREVUE, String^ DATE_EMISSION_COMMANDE, String^ DATE_SOLDE_REGLEMENT, String^ MONTANT_HT, String^ MONTANT_TVA, String^ MONTANT_TTC, String^ DATE_EMISSION_FACTURE)
	{
		int ref_commande;
		this->commande->setDATE_LIVRAISON_PREVUE(DATE_LIVRAISON_PREVUE);
		this->commande->setDATE_EMISSION_COMMANDE(DATE_EMISSION_COMMANDE);
		this->commande->setDATE_SOLDE_REGLEMENT(DATE_SOLDE_REGLEMENT);
		this->commande->setMONTANT_HT(MONTANT_HT);
		this->commande->setMONTANT_TVA(MONTANT_TVA);
		this->commande->setMONTANT_TTC(MONTANT_TTC);
		this->commande->setDATE_EMISSION_FACTURE(DATE_EMISSION_FACTURE);
		ref_commande = this->cad->actionRowsID(this->commande->INSERT());
		return ref_commande;
	}
	void gestion::modifierCommande(int REF_COMMANDE, String^ DATE_LIVRAISON_PREVUE, String^ DATE_EMISSION_COMMANDE, String^ DATE_SOLDE_REGLEMENT, String^ MONTANT_HT, String^ MONTANT_TVA, String^ MONTANT_TTC, String^ DATE_EMISSION_FACTURE)
	{
		this->commande->setREF_COMMANDE(REF_COMMANDE);
		this->commande->setDATE_LIVRAISON_PREVUE(DATE_LIVRAISON_PREVUE);
		this->commande->setDATE_EMISSION_COMMANDE(DATE_EMISSION_COMMANDE);
		this->commande->setDATE_SOLDE_REGLEMENT(DATE_SOLDE_REGLEMENT);
		this->commande->setMONTANT_HT(MONTANT_HT);
		this->commande->setMONTANT_TVA(MONTANT_TVA);
		this->commande->setMONTANT_TTC(MONTANT_TTC);
		this->commande->setDATE_EMISSION_FACTURE(DATE_EMISSION_FACTURE);
		this->cad->actionRows(this->commande->UPDATE());
	}
	void gestion::supprimerCommande(int REF_COMMANDE)
	{
		this->commande->setREF_COMMANDE(REF_COMMANDE);
		this->cad->actionRows(this->commande->DELETE());
	}



}