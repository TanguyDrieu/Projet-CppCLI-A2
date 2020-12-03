#include "COULEUR.h"

namespace NS_Composants
{
	COULEUR::COULEUR(void)
	{

		this->ID_COULEUR = -1;
		this->NOM_COULEUR = "RIEN";

	}
	String^ COULEUR::SELECT(void)
	{
		return "SELECT ID_COULEUR, NOM_COULEUR" +
			"FROM COULEUR;";
	}
	String^ COULEUR::INSERT(void)
	{
		return "INSERT INTO COULEUR " +
			"(NOM_COULEUR) " +
			"VALUES('" + this->getNOM_COULEUR() + "');SELECT @@IDENTITY;";
	}
	String^ COULEUR::UPDATE(void)
	{
		return "UPDATE COULEUR " +
			"SET NOM_COULEUR = '" + this->getNOM_COULEUR() + "'  " +

			"WHERE(ID_COULEUR = " + this->getID_COULEUR() + ");";
	}

	String^ COULEUR::DELETE(void)
	{
		return "DELETE FROM COULEUR " +
			"WHERE(ID_COULEUR = " + this->getID_COULEUR() + ");";
	}

	void COULEUR::setID_COULEUR(int ID_COULEUR)
	{
		if (ID_COULEUR > 0)
		{
			this->ID_COULEUR = ID_COULEUR;
		}
	}

	void COULEUR::setNOM_COULEUR(String^ NOM_COULEUR)
	{
		if (NOM_COULEUR != "")
		{
			this->NOM_COULEUR = NOM_COULEUR;
		}
	}


	int COULEUR::getID_COULEUR(void)
	{

		return this->ID_COULEUR;

	}


	String^ COULEUR::getNOM_COULEUR(void)
	{
		return this->NOM_COULEUR;
	}


}