#include "CLIENT.h"
namespace NS_Composants
{
	CLIENT::CLIENT(void)
	{
		this->ID_CLIENT = -1;
		this->NOM_CLIENT = "RIEN";
		this->PRENOM_CLIENT = "RIEN";
		this->DATE_NAISSANCE_CLIENT = "RIEN";
		this->DATE_PREMIERE_COMMANDE_CLIENT = "RIEN";
	}
	String^ CLIENT::SELECT(void)
	{
		return "SELECT ID_CLIENT, NOM_CLIENT, PRENOM_CLIENT, DATE_NAISSANCE_CLIENT, DATE_PREMIERE_COMMANDE_CLIENT " +
			"FROM CLIENT;";
	}
	String^ CLIENT::INSERT(void)
	{
		return "INSERT INTO CLIENT " +
			"(NOM_CLIENT, PRENOM_CLIENT, DATE_NAISSANCE_CLIENT, DATE_PREMIERE_COMMANDE_CLIENT) " +
			"VALUES('" + this->getNOM_CLIENT() + "', '" + this->getPRENOM_CLIENT() + "', '" + this->getDATE_NAISSANCE_CLIENT()+ "', '" + this ->getDATE_PREMIERE_COMMANDE_CLIENT() + "');SELECT @@IDENTITY;";
	}
	String^ CLIENT::UPDATE(void)
	{
		return "UPDATE CLIENT " +
			"SET NOM_CLIENT = '" + this->getNOM_CLIENT() + "', PRENOM_CLIENT = '" + this->getPRENOM_CLIENT() + "', DATE_NAISSANCE_CLIENT'" + this->getDATE_NAISSANCE_CLIENT() + "', DATE_PREMIERE_COMMANDE_CLIENT '" + this->getDATE_PREMIERE_COMMANDE_CLIENT() + "' " +

			"WHERE(ID_CLIENT = " + this->getId() + ");";
	}
	String^ CLIENT::DELETE(void)
	{
		return "DELETE FROM CLIENT " +
			"WHERE(ID_CLIENT = " + this->getId() + ");";
	}
	void CLIENT::setID(int ID_CLIENT)
	{
		if (ID_CLIENT > 0)
		{
			this->ID_CLIENT = ID_CLIENT;
		}
	}
	void CLIENT::setPRENOM_CLIENT(String^ PRENOM_CLIENT)
	{
		if (PRENOM_CLIENT != "")
		{
			this->PRENOM_CLIENT = PRENOM_CLIENT;
		}
	}
	void CLIENT::setNOM_CLIENT(String^ NOM_CLIENT)
	{
		if (NOM_CLIENT != "")
		{
			this->NOM_CLIENT = NOM_CLIENT;
		}
	}
	void CLIENT::setDATE_NAISSANCE_CLIENT(String^ DATE_NAISSANCE_CLIENT)
	{
		if (DATE_NAISSANCE_CLIENT != "")
		{
			this->DATE_NAISSANCE_CLIENT = DATE_NAISSANCE_CLIENT;
		}
	}
	void CLIENT::setDATE_PREMIERE_COMMANDE_CLIENT(String^ DATE_PREMIERE_COMMANDE_CLIENT)
	{
		if (DATE_PREMIERE_COMMANDE_CLIENT != "")
		{
			this->DATE_PREMIERE_COMMANDE_CLIENT = DATE_PREMIERE_COMMANDE_CLIENT;
		}
	}
	int CLIENT::getId(void)
	{
		return this->ID_CLIENT;
	}
	String^ CLIENT::getNOM_CLIENT(void)
	{
		return this->NOM_CLIENT;
	}
	String^ CLIENT::getPRENOM_CLIENT(void)
	{
		return this->PRENOM_CLIENT;
	}
	String^ CLIENT::getDATE_NAISSANCE_CLIENT(void)
	{
	return this->DATE_NAISSANCE_CLIENT;
	}
	String^ CLIENT::getDATE_PREMIERE_COMMANDE_CLIENT(void)
	{
		return this->DATE_PREMIERE_COMMANDE_CLIENT;
	}
}

