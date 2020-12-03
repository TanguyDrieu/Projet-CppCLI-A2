#include "PRODUITS.h"

namespace NS_Composants
{
	PRODUITS::PRODUITS(void)
	{

		this->REF_PRODUIT = "Rien";
		this->PRIX_HT = "RIEN";
		this->DESIGNATION = "RIEN";
		this->QUANTITE_STOCK = "RIEN";
		this->SEUIL_REAPPROVISIONNEMENT = "RIEN";
		this->TAUX_TVA = "RIEN";

	}
	String^ PRODUITS::SELECT(void)
	{
		return "SELECT REF_PRODUIT, PRIX_HT, DESIGNATION, QUANTITE_STOCK, SEUIL_REAPPROVISIONNEMENT, TAUX_TVA " +
			"FROM PRODUITS;";
	}
	String^ PRODUITS::INSERT(void)
	{
		return "INSERT INTO PRODUITS " +
			"(PRIX_HT, DESIGNATION, QUANTITE_STOCK, SEUIL_REAPPROVISIONNEMENT, TAUX_TVA) " +
			"VALUES('" + this->getPRIX_HT() + "', '" + this->getDESIGNATION() + "', '" + this->getQUANTITE_STOCK() + "', '" + this->getSEUIL_REAPPROVISIONNEMENT() + "', '" + this->getTAUX_TVA() + "');SELECT @@IDENTITY;";
	}
	String^ PRODUITS::UPDATE(void)
	{
		return "UPDATE PRODUITS " +
			"SET PRIX_HT = '" + this->getPRIX_HT() + "', DESIGNATION = '" + this->getDESIGNATION() + "', QUANTITE_STOCK = '" + this->getQUANTITE_STOCK() + "', SEUIL_REAPPROVISIONNEMENT = '" + this->getSEUIL_REAPPROVISIONNEMENT() + "', TAUX_TVA = '" + this->getTAUX_TVA() + "' " +

			"WHERE(REF_PRODUIT = " + this->getREF_PRODUIT() + ");";
	}

	String^ PRODUITS::DELETE(void)
	{
		return "DELETE FROM PRODUITS " +
			"WHERE(REF_PRODUIT = " + this->getREF_PRODUIT() + ");";
	}

	void PRODUITS::setREF_PRODUIT(int REF_PRODUIT)
	{
		if (REF_PRODUIT > 0)
		{
			this->REF_PRODUIT = REF_PRODUIT;
		}
	}

	void PRODUITS::setPRIX_HT(String^ PRIX_HT)
	{
		if (PRIX_HT != "")
		{
			this->PRIX_HT = PRIX_HT;
		}
	}
	void PRODUITS::setDESIGNATION(String^ DESIGNATION)
	{
		if (DESIGNATION != "")
		{
			this->DESIGNATION = DESIGNATION;
		}
	}
	void PRODUITS::setQUANTITE_STOCK(String^ QUANTITE_STOCK)
	{
		if (QUANTITE_STOCK != "")
		{
			this->QUANTITE_STOCK = QUANTITE_STOCK;
		}
	}

	void PRODUITS::setSEUIL_REAPPROVISIONNEMENT(String^ SEUIL_REAPPROVISIONNEMENT)
	{
		if (SEUIL_REAPPROVISIONNEMENT != "")
		{
			this->SEUIL_REAPPROVISIONNEMENT = SEUIL_REAPPROVISIONNEMENT;
		}
	}
	void PRODUITS::setTAUX_TVA(String^ TAUX_TVA)
	{
		if (TAUX_TVA != "")
		{
			this->TAUX_TVA = TAUX_TVA;
		}
	}

	int PRODUITS::getREF_PRODUIT(void)
	{

		return this->REF_PRODUIT;

	}


	String^ PRODUITS::getPRIX_HT(void)
	{
		return this->PRIX_HT;
	}
	String^ PRODUITS::getDESIGNATION(void)
	{
		return this->DESIGNATION;
	}
	String^ PRODUITS::getQUANTITE_STOCK(void)
	{
		return this->QUANTITE_STOCK;
	}
	String^ PRODUITS::getSEUIL_REAPPROVISIONNEMENT(void)
	{
		return this->SEUIL_REAPPROVISIONNEMENT;
	}
	String^ PRODUITS::getTAUX_TVA(void)
	{
		return this->TAUX_TVA;
	}


}