#include "TARIF.h"


namespace NS_Composants
{
	TARIF::TARIF(void)
	{

		this->ID_TARIF = -1;
		this->INTITULE_TARIF = "RIEN";

	}
	String^ TARIF::SELECT(void)
	{
		return "SELECT ID_TARIF, INTITULE_TARIF" +
			"FROM TARIF;";
	}
	String^ TARIF::INSERT(void)
	{
		return "INSERT INTO TARIF " +
			"(ID_NATURE, REF_PRODUIT, PRIX_UNITAIRE, INTITULE_TARIF) " +
			"VALUES('" + this->getID_NATURE() + "', '" + this->getREF_PRODUIT() + "', '" + this->getPRIX_UNITAIRE() + "', '" + this->getINTITULE_TARIF() + "');SELECT @@IDENTITY;";
	}
	String^ TARIF::UPDATE(void)
	{
		return "UPDATE TARIF " +
			"SET INTITULE_TARIF = '" + this->getINTITULE_TARIF() + "'  " +

			"WHERE(ID_TARIF = " + this->getID_TARIF() + ");";
	}

	String^ TARIF::DELETE(void)
	{
		return "DELETE FROM TARIF " +
			"WHERE(ID_TARIF = " + this->getID_TARIF() + ");";
	}

	void TARIF::setID_TARIF(int ID_TARIF)
	{
		if (ID_TARIF > 0)
		{
			this->ID_TARIF = ID_TARIF;
		}
	}

	void TARIF::setID_COULEUR(int ID_COULEUR)
	{
		this->ID_COULEUR = ID_COULEUR;
	}

	void TARIF::setID_NATURE(int ID_NATURE)
	{
		this->ID_NATURE = ID_NATURE;
	}

	void TARIF::setREF_PRODUIT(String^ REF_PRODUIT)
	{
		this->REF_PRODUIT = REF_PRODUIT;
	}

	void TARIF::setPRIX_UNITAIRE(String^ PRIX_UNITAIRE)
	{
		this->PRIX_UNITAIRE = PRIX_UNITAIRE;
	}

	void TARIF::setINTITULE_TARIF(String^ INTITULE_TARIF)
	{
		if (INTITULE_TARIF != "")
		{
			this->INTITULE_TARIF = INTITULE_TARIF;
		}
	}


	int TARIF::getID_TARIF(void)
	{

		return this->ID_TARIF;

	}

	int TARIF::getID_COULEUR(void)
	{
		return this->ID_COULEUR;
	}

	int TARIF::getID_NATURE(void)
	{
		return ID_NATURE;
	}

	String^ TARIF::getREF_PRODUIT(void)
	{
		return this->REF_PRODUIT;
	}

	String^ TARIF::getPRIX_UNITAIRE(void)
	{
		return this->PRIX_UNITAIRE;
	}


	String^ TARIF::getINTITULE_TARIF(void)
	{
		return this->INTITULE_TARIF;
	}


}