#include "PRODUITS.h"

namespace NS_Composants
{
	PRODUITS::PRODUITS(void)
	{

		this->REF_PRODUIT = "RIEN";
		this->ID_NATURE = -1;
		this->ID_TARIF = -1;
		this->PRIX_HT = -1;
		this->DESIGNATION = "RIEN";
		this->QUANTITE_STOCK = -1;
		this->SEUIL_REAPPROVISIONNEMENT = -1;
		this->TAUX_TVA = "RIEN";

	}
	
		String^ PRODUITS::SELECT(void)
		{
			return "SELECT REF_PRODUIT, ID_NATURE, ID_TARIF, PRIX_HT, DESIGNATION, QUANTITE_STOCK, SEUIL_REAPPROVISIONNEMENT, TAUX_TVA " +
				"FROM PRODUITS;";
		}
		String^ PRODUITS::INSERT(void)
		{
			return "INSERT INTO PRODUITS " +
				"(REF_PRODUIT, ID_NATURE, ID_TARIF, PRIX_HT, DESIGNATION, QUANTITE_STOCK, SEUIL_REAPPROVISIONNEMENT, TAUX_TVA) " +
				"VALUES('" + this->getREF_PRODUIT() + "', '" + this->getID_NAT() + "', '" + this->getID_TARIF() + "', '" + this->getPRIX_HT() + "', '" + this->getDESIGNATION() + "', '" + this->getQUANTITE_STOCK() + "', '" + this->getSEUIL_REAPPROVISIONNEMENT() + "', '" + this->getTAUX_TVA() + "');SELECT @@IDENTITY;";
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

		void PRODUITS::setID_NAT(int ID_NAT)
		{
			this->ID_NATURE = ID_NAT;
		}

		void PRODUITS::setID_TARIF(int ID_TARIF)
		{
			this->ID_TARIF = ID_TARIF;
		}

	void PRODUITS::setREF_PRODUIT(String^ REF_PRODUIT)
	{
		if (REF_PRODUIT != "")
		{
			this->REF_PRODUIT = REF_PRODUIT;
		}
	}

		void PRODUITS::setPRIX_HT(double PRIX_HT)
		{
			if (PRIX_HT != -1)
			{
				this->PRIX_HT = PRIX_HT;
			}
		}
		void PRODUITS::setDESIGNATION(String^ DESIGNATION)
		{
			if (DESIGNATION != "RIEN")
			{
				this->DESIGNATION = DESIGNATION;
			}
		}
		void PRODUITS::setQUANTITE_STOCK(int QUANTITE_STOCK)
		{
			if (QUANTITE_STOCK != -1)
			{
				this->QUANTITE_STOCK = QUANTITE_STOCK;
			}
		}

		void PRODUITS::setSEUIL_REAPPROVISIONNEMENT(int SEUIL_REAPPROVISIONNEMENT)
		{
			if (SEUIL_REAPPROVISIONNEMENT != -1)
			{
				this->SEUIL_REAPPROVISIONNEMENT = SEUIL_REAPPROVISIONNEMENT;
			}
		}
		void PRODUITS::setTAUX_TVA(String^ TAUX_TVA)
		{
			if (TAUX_TVA != "RIEN")
			{
				this->TAUX_TVA = TAUX_TVA;
			}
		}

		int PRODUITS::getID_NAT(void)
		{
			return this->ID_NATURE;
		}

		int PRODUITS::getID_TARIF(void)
		{
			return this->ID_TARIF;
		}

	String^ PRODUITS::getREF_PRODUIT(void)
	{

		return this->REF_PRODUIT;

	}


		double PRODUITS::getPRIX_HT(void)
		{
			return this->PRIX_HT;
		}
		String^ PRODUITS::getDESIGNATION(void)
		{
			return this->DESIGNATION;
		}
		int PRODUITS::getQUANTITE_STOCK(void)
		{
			return this->QUANTITE_STOCK;
		}
		int PRODUITS::getSEUIL_REAPPROVISIONNEMENT(void)
		{
			return this->SEUIL_REAPPROVISIONNEMENT;
		}
		String^ PRODUITS::getTAUX_TVA(void)
		{
			return this->TAUX_TVA;
		}


	}