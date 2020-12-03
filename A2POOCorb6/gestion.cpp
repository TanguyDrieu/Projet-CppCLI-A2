#include "gestion.h"
#include"PERSONNEL.h"
#include"ADRESSE.h"
#include"PRODUITS.h"
#include "NATURE.h"
#include"MODE_REGLEMENT.h"
#include"COULEUR.h"
#include"PAIEMENT.h"
namespace NS_Svc
{
	gestion::gestion(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->adresse = gcnew NS_Composants::ADRESSE();
		this->client = gcnew NS_Composants::CLIENT();
		this->personnel = gcnew NS_Composants::PERSONNEL();
		this->commande = gcnew NS_Composants::COMMANDES();
		this->tarif = gcnew NS_Composants::TARIF();
		//this->reglement = gcnew NS_Composants::MODE_REGLEMENT();

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
	DataSet^ gestion::listePersonnelAdresse(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personnel->SELECTPERSONNELADRESSE(), dataTableName);
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

	DataSet^ gestion::listeClientAdresse(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->client->SELECTCLIENTADRESSE(), dataTableName);
		return this->ds;
	}
	DataSet^ gestion::listeReglement(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->reglement->SELECT(), dataTableName);
		return this->ds;
	}
	DataSet^ gestion::listePaiement(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->paiement->SELECT(), dataTableName);
		return this->ds;
	}
	DataSet^ gestion::listeCouleur(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->couleur->SELECT(), dataTableName);
		return this->ds;
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////


	DataSet^ gestion::listeTarif(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->tarif->SELECT(), dataTableName);
		return this->ds;
	}


	int gestion::ajouterClient(String^ NOM_CLIENT, String^ PRENOM_CLIENT, String^ DATE_NAISSANCE_CLIENT, String^ DATE_PREMIERE_COMMANDE_CLIENT, String^ RUE_FAC, int CODE_POSTAL_FAC, String^ VILLE_FAC, String^ RUE_LIV, int CODE_POSTAL_LIV, String^ VILLE_LIV)
	{
		int id_personne;
		this->client->setNOM_CLIENT(NOM_CLIENT);
		this->client->setPRENOM_CLIENT(PRENOM_CLIENT);
		this->client->setDATE_NAISSANCE_CLIENT(DATE_NAISSANCE_CLIENT);
		this->client->setDATE_PREMIERE_COMMANDE_CLIENT(DATE_PREMIERE_COMMANDE_CLIENT);
		this->adresse->setRUE(RUE_FAC);
		this->adresse->setCODE_POSTAL(CODE_POSTAL_FAC);
		this->adresse->setVILLE(VILLE_FAC);
		this->adresse->setRUE(RUE_LIV);
		this->adresse->setCODE_POSTAL(CODE_POSTAL_LIV);
		this->adresse->setVILLE(VILLE_LIV);
		id_personne = this->cad->actionRowsID(this->client->INSERT());
		id_personne = this->cad->actionRowsID(this->adresse->INSERT());
		this->adresse->setID_CLIENT_FAC(id_personne);
		this->adresse->setID_CLIENT_LIV(id_personne);
		
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

	int gestion::ajouterAdresse(String^ RUE, int CODE_POSTAL, String^ VILLE)
	{
		int id_adresse;
		this->adresse->setRUE(RUE);
		this->adresse->setCODE_POSTAL(CODE_POSTAL);
		this->adresse->setVILLE(VILLE);
		id_adresse = this->cad->actionRowsID(this->adresse->INSERT());
		return id_adresse;
	}
	void gestion::modifierAdresse(int ID_ADRESSE, String^ RUE, int CODE_POSTAL, String^ VILLE)
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
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int gestion::ajouterProduit(String^ PRIX_HT, String^ DESIGNATION, String^ QUANTITE_STOCK, String^ SEUIL_REAPPROVISIONNEMENT, String^ TAUX_TVA)
	{
		int id_produit;
		this->produit->setPRIX_HT(PRIX_HT);
		this->produit->setDESIGNATION(DESIGNATION);
		this->produit->setQUANTITE_STOCK(QUANTITE_STOCK);
		this->produit->setSEUIL_REAPPROVISIONNEMENT(SEUIL_REAPPROVISIONNEMENT);
		this->produit->setTAUX_TVA(TAUX_TVA);
		id_produit = this->cad->actionRowsID(this->produit->INSERT());
		return id_produit;
	}
	void gestion::modifierProduit(String^ REF_PRODUIT, String^ PRIX_HT, String^ DESIGNATION, String^ QUANTITE_STOCK, String^ SEUIL_REAPPROVISIONNEMENT, String^ TAUX_TVA)
	{
		this->produit->setREF_PRODUIT(REF_PRODUIT);
		this->produit->setPRIX_HT(PRIX_HT);
		this->produit->setDESIGNATION(DESIGNATION);
		this->produit->setQUANTITE_STOCK(QUANTITE_STOCK);
		this->produit->setSEUIL_REAPPROVISIONNEMENT(SEUIL_REAPPROVISIONNEMENT);
		this->produit->setTAUX_TVA(TAUX_TVA);
		this->cad->actionRows(this->produit->UPDATE());
	}
	void gestion::supprimerProduit(String^ REF_PRODUIT)
	{
		this->produit->setREF_PRODUIT(REF_PRODUIT);
		this->cad->actionRows(this->produit->DELETE());
	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int gestion::ajouterNature(String^ INTITULE_NATURE)
	{
		int id_nature;
		this->nature->setINTITULE_NATURE(INTITULE_NATURE);
		id_nature = this->cad->actionRowsID(this->nature->INSERT());
		return id_nature;
	}
	void gestion::modifierNature(int ID_NATURE, String^ INTITULE_NATURE)
	{
		this->nature->setID_NATURE(ID_NATURE);
		this->nature->setINTITULE_NATURE(INTITULE_NATURE);
		this->cad->actionRows(this->nature->UPDATE());
	}
	void gestion::supprimerNature(int ID_NATURE)
	{
		this->nature->setID_NATURE(ID_NATURE);
		this->cad->actionRows(this->nature->DELETE());
	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int gestion::ajouterMode(String^ MODE_REGLEMENT)
	{
		int id_reglement;
		this->reglement->setMODE_REGLEMENT(MODE_REGLEMENT);
		id_reglement = this->cad->actionRowsID(this->reglement->INSERT());
		return id_reglement;
	}
	void gestion::modifierMode(int ID_MODE, String^ MODE_REGLEMENT)
	{
		this->reglement->setID_MODE(ID_MODE);
		this->reglement->setMODE_REGLEMENT(MODE_REGLEMENT);
		this->cad->actionRows(this->reglement->UPDATE());

	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int gestion::ajouterCouleur(String^ NOM_COULEUR)
	{
		int id_couleur;
		this->couleur->setNOM_COULEUR(NOM_COULEUR);
		id_couleur = this->cad->actionRowsID(this->couleur->INSERT());
		return id_couleur;
	}
	void gestion::modifierCouleur(int ID_COULEUR, String^ NOM_COULEUR)
	{
		this->couleur->setID_COULEUR(ID_COULEUR);
		this->couleur->setNOM_COULEUR(NOM_COULEUR);
		this->cad->actionRows(this->couleur->UPDATE());

	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int gestion::ajouterPaiement(String^ DATE_PAIEMENT, String^ MONTANT_PAIEMENT)
	{
		int id_paiement;
		this->paiement->setDATE_PAIEMENT(DATE_PAIEMENT);
		id_paiement = this->cad->actionRowsID(this->paiement->INSERT());
		return id_paiement;
	}
	void gestion::modifierPaiement(int ID_PAIEMENT, String^ DATE_PAIEMENT, String^ MONTANT_PAIEMENT)
	{
		this->paiement->setID_PAIEMENT(ID_PAIEMENT);
		this->paiement->setDATE_PAIEMENT(DATE_PAIEMENT);
		this->paiement->setMONTANT_PAIEMENT(MONTANT_PAIEMENT);
		this->cad->actionRows(this->paiement->UPDATE());

	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int gestion::ajouterTarif(String^ INTITULE_TARIF)
	{
		int id_tarif;
		this->tarif->setINTITULE_TARIF(INTITULE_TARIF);
		id_tarif = this->cad->actionRowsID(this->tarif->INSERT());
		return id_tarif;
	}
	void gestion::modifierTarif(int ID_TARIF, String^ INTITULE_TARIF)
	{
		this->tarif->setID_TARIF(ID_TARIF);
		this->tarif->setINTITULE_TARIF(INTITULE_TARIF);
		this->cad->actionRows(this->tarif->UPDATE());
	}
	void gestion::supprimerTarif(int ID_TARIF)
	{
		this->tarif->setID_TARIF(ID_TARIF);
		this->cad->actionRows(this->tarif->DELETE());
	}



}