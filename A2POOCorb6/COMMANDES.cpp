#include "COMMANDES.h"

namespace NS_Composants
{
	COMMANDES::COMMANDES(void)
	{
		this->REF_COMMANDE = -1;
		this->DATE_LIVRAISON_PREVUE = "RIEN";
		this->DATE_EMISSION_COMMANDE = "RIEN";
		this->DATE_SOLDE_REGLEMENT = "RIEN";
		this->MONTANT_HT = "RIEN";
		this->MONTANT_TVA = "RIEN";
		this->MONTANT_TTC = "RIEN";
		this->DATE_EMISSION_FACTURE = "RIEN";
	}
	String^ COMMANDES::SELECT(void)
	{
		return "SELECT REF_COMMANDE, DATE_LIVRAISON_PREVUE, DATE_EMISSION_FACTURE, DATE_SOLDE_REGLEMENT, MONTANT_HT, MONTANT_TVA, MONTANT_TTC, DATE_EMISSION_FACTURE " +
			"FROM COMMANDES;";
	}
	String^ COMMANDES::INSERT(void)
	{
		return "INSERT INTO COMMANDES " +
			"(DATE_LIVRAISON_PREVUE, DATE_EMISSION_FACTURE, DATE_SOLDE_REGLEMENT, MONTANT_HT, MONTANT_TVA, MONTANT_TTC, DATE_EMISSION_FACTURE) " +
			"VALUES('" + this->getDATE_LIVRAISON_() + "', '" + this->getPRENOM_PERSONNEL() + "', '" + this->getADRESSE_MAIL_PERSONNEL() + "', '" + this->getDATE_EMBAUCHE() + "');SELECT @@IDENTITY;";
	}
	String^ PERSONNEL::UPDATE(void)
	{
		return "UPDATE PERSONNEL " +
			"SET NOM_PERSONNEL = '" + this->getNOM_PERSONNEL() + "', PRENOM_PERSONNEL = '" + this->getPRENOM_PERSONNEL() + "', ADRESSE_MAIL_PERSONNEL'" + this->getADRESSE_MAIL_PERSONNEL() + "', DATE_EMBAUCHE '" + this->getDATE_EMBAUCHE() + "' " +

			"WHERE(ID_PERSONNEL = " + this->getID_PERSONNEL() + ");";
	}
	String^ PERSONNEL::DELETE(void)
	{
		return "DELETE FROM PERSONNEL " +
			"WHERE(ID_PERSONNEL = " + this->getID_PERSONNEL() + ");";
	}
	void PERSONNEL::setID_PERSONNEL(int ID_PERSONNEL)
	{
		if (ID_PERSONNEL > 0)
		{
			this->ID_PERSONNEL = ID_PERSONNEL;
		}
	}
	void PERSONNEL::setPRENOM_PERSONNEL(String^ PRENOM_PERSONNEL)
	{
		if (PRENOM_PERSONNEL != "")
		{
			this->PRENOM_PERSONNEL = PRENOM_PERSONNEL;
		}
	}
	void PERSONNEL::setNOM_PERSONNEL(String^ NOM_PERSONNEL)
	{
		if (NOM_PERSONNEL != "")
		{
			this->NOM_PERSONNEL = NOM_PERSONNEL;
		}
	}
	void PERSONNEL::setADRESSE_MAIL_PERSONNEL(String^ ADRESSE_MAIL_PERSONNEL)
	{
		if (ADRESSE_MAIL_PERSONNEL != "")
		{
			this->ADRESSE_MAIL_PERSONNEL = ADRESSE_MAIL_PERSONNEL;
		}
	}
	void PERSONNEL::setDATE_EMBAUCHE(String^ DATE_EMBAUCHE)
	{
		if (DATE_EMBAUCHE != "")
		{
			this->DATE_EMBAUCHE = DATE_EMBAUCHE;
		}
	}
	int PERSONNEL::getID_PERSONNEL(void)
	{
		return this->ID_PERSONNEL;
	}
	String^ PERSONNEL::getNOM_PERSONNEL(void)
	{
		return this->NOM_PERSONNEL;
	}
	String^ PERSONNEL::getPRENOM_PERSONNEL(void)
	{
		return this->PRENOM_PERSONNEL;
	}
	String^ PERSONNEL::getADRESSE_MAIL_PERSONNEL(void)
	{
		return this->ADRESSE_MAIL_PERSONNEL;
	}
	String^ PERSONNEL::getDATE_EMBAUCHE(void)
	{
		return this->DATE_EMBAUCHE;
	}
}