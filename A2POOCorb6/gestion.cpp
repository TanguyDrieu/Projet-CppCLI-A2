#include "gestion.h"
#include"PERSONNEL.h"
#include"ADRESSE.h"
namespace NS_Svc
{
	gestion::gestion(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->personne = gcnew NS_Composants::CLIENT();
		this->personnel = gcnew NS_Composants::PERSONNEL;
	
		this->ds = gcnew Data::DataSet();
	}
	DataSet^ gestion::listePersonnes(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT(), dataTableName);
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
	int gestion::ajouter(String^ NOM_CLIENT, String^ PRENOM_CLIENT, String^ DATE_NAISSANCE_CLIENT, String^ DATE_PREMIERE_COMMANDE_CLIENT)
	{
		int id_personne;
		this->personne->setNOM_CLIENT(NOM_CLIENT);
		this->personne->setPRENOM_CLIENT(PRENOM_CLIENT);
		this->personne->setDATE_NAISSANCE_CLIENT(DATE_NAISSANCE_CLIENT);
		this->personne->setDATE_PREMIERE_COMMANDE_CLIENT(DATE_PREMIERE_COMMANDE_CLIENT);
		id_personne = this->cad->actionRowsID(this->personne->INSERT());
		return id_personne;
	}
	void gestion::modifier(int ID_CLIENT, String^ NOM_CLIENT, String^ PRENOM_CLIENT, String^ DATE_NAISSANCE_CLIENT, String^ DATE_PREMIERE_COMMANDE_CLIENT)
	{
		this->personne->setID(ID_CLIENT);
		this->personne->setNOM_CLIENT(NOM_CLIENT);
		this->personne->setPRENOM_CLIENT(PRENOM_CLIENT);
		this->personne->setDATE_NAISSANCE_CLIENT(DATE_NAISSANCE_CLIENT);
		this->personne->setDATE_PREMIERE_COMMANDE_CLIENT(DATE_PREMIERE_COMMANDE_CLIENT);
		this->cad->actionRows(this->personne->UPDATE());
	}
	void gestion::supprimer(int ID_CLIENT)
	{
		this->personne->setID(ID_CLIENT);
		this->cad->actionRows(this->personne->DELETE());
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
	this->personne->setID(ID_PERSONNEL);
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





}