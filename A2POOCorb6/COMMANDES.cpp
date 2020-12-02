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
			"VALUES('" + this->getDATE_LIVRAISON_PREVUE() + "', '" + this->getDATE_EMISSION_FACTURE() + "', '" + this->getDATE_SOLDE_REGLEMENT() + "', '" + this->getMONTANT_HT() + "', '" + this->getMONTANT_TVA() + "', '" + this->getMONTANT_TTC() + "', '" + this->getDATE_EMISSION_FACTURE() + "');SELECT @@IDENTITY;";
	}
	String^ COMMANDES::UPDATE(void)
	{
		return "UPDATE COMMANDES " +
			"SET DATE_LIVRAISON_PREVUE = '" + this->getDATE_LIVRAISON_PREVUE() + "', DATE_EMISSION_COMMANDE = '" + this->getDATE_EMISSION_COMMANDE() + "', DATE_SOLDE_REGLEMENT'" + this->getDATE_SOLDE_REGLEMENT() + "', MONTANT_HT '" + this->getMONTANT_HT() + "', MONTANT_TVA'" + this->getMONTANT_TVA() + "', MONTANT_TTC'" + this->getMONTANT_TTC() + "', DATE_EMISSION_FACTURE'" + this->getDATE_EMISSION_FACTURE() + "' " +

			"WHERE(REF_COMMANDE = " + this->getREF_COMMANDE() + ");";
	}
	String^ COMMANDES::DELETE(void)
	{
		return "DELETE FROM COMMANDES " +
			"WHERE(REF_COMMANDE = " + this->getREF_COMMANDE() + ");";
	}
	void COMMANDES::setREF_COMMANDE(int REF_COMMANDE)
	{
		if (REF_COMMANDE > 0)
		{
			this->REF_COMMANDE = REF_COMMANDE;
		}
	}
	void COMMANDES::setDATE_LIVRAISON_PREVUE(String^ DATE_LIVRAISON_PREVUE)
	{
		if (DATE_LIVRAISON_PREVUE != "")
		{
			this->DATE_LIVRAISON_PREVUE = DATE_LIVRAISON_PREVUE;
		}
	}
	void COMMANDES::setDATE_EMISSION_COMMANDE(String^ DATE_EMISSION_COMMANDE)
	{
		if (DATE_EMISSION_COMMANDE != "")
		{
			this->DATE_EMISSION_COMMANDE = DATE_EMISSION_COMMANDE;
		}
	}
	void COMMANDES::setDATE_SOLDE_REGLEMENT(String^ DATE_SOLDE_REGLEMENT)
	{
		if (DATE_SOLDE_REGLEMENT != "")
		{
			this->DATE_SOLDE_REGLEMENT = DATE_SOLDE_REGLEMENT;
		}
	}
	void COMMANDES::setMONTANT_HT(String^ MONTANT_HT)
	{
		if (MONTANT_HT != "")
		{
			this->MONTANT_HT = MONTANT_HT;
		}
	}
	void COMMANDES::setMONTANT_TVA(String^ MONTANT_TVA)
	{
		if (MONTANT_TVA != "")
		{
			this->MONTANT_TVA = MONTANT_TVA;
		}
	}
	void COMMANDES::setMONTANT_TTC(String^ MONTANT_TTC)
	{
		if (MONTANT_TTC != "")
		{
			this->MONTANT_TTC = MONTANT_TTC;
		}
	}
	void COMMANDES::setDATE_EMISSION_FACTURE(String^ DATE_EMISSION_FACTURE)
	{
		if (DATE_EMISSION_FACTURE != "")
		{
			this->DATE_EMISSION_FACTURE = DATE_EMISSION_FACTURE;
		}
	}
	int COMMANDES::getREF_COMMANDE(void)
	{
		return this->REF_COMMANDE;
	}
	String^ COMMANDES::getDATE_LIVRAISON_PREVUE(void)
	{
		return this->DATE_LIVRAISON_PREVUE;
	}
	String^ COMMANDES::getDATE_EMISSION_COMMANDE(void)
	{
		return this->DATE_EMISSION_COMMANDE;
	}
	String^ COMMANDES::getDATE_SOLDE_REGLEMENT(void)
	{
		return this->DATE_SOLDE_REGLEMENT;
	}
	String^ COMMANDES::getMONTANT_HT(void)
	{
		return this->MONTANT_HT;
	}
	String^ COMMANDES::getMONTANT_TVA(void)
	{
		return this->MONTANT_TVA;
	}
	String^ COMMANDES::getMONTANT_TTC(void)
	{
		return this->MONTANT_TTC;
	}
	String^ COMMANDES::getDATE_EMISSION_FACTURE(void)
	{
		return this->DATE_EMISSION_FACTURE;
	}
}