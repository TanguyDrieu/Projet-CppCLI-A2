#include "MODE_REGLEMENT.h"


namespace NS_Composants
{
	MODE_REGLEMENTS::MODE_REGLEMENTS(void)
	{

		this->ID_MODE = -1;
		this->MODE_REGLEMENT = "RIEN";

	}
	String^ MODE_REGLEMENTS::SELECT(void)
	{
		return "SELECT ID_MODE, MODE_REGLEMENT" +
			"FROM MODE_REGLEMENT;";
	}
	String^ MODE_REGLEMENTS::INSERT(void)
	{
		return "INSERT INTO MODE_REGLEMENT " +
			"(MODE_REGLEMENT) " +
			"VALUES('" + this->getMODE_REGLEMENT() + "');SELECT @@IDENTITY;";
	}
	String^ MODE_REGLEMENTS::UPDATE(void)
	{
		return "UPDATE MODE_REGLEMENT " +
			"SET MODE_REGLEMENT = '" + this->getMODE_REGLEMENT() + "'  " +

			"WHERE(ID_MODE = " + this->getID_MODE() + ");";
	}

	String^ MODE_REGLEMENTS::DELETE(void)
	{
		return "DELETE FROM MODE_REGLEMENT " +
			"WHERE(ID_MODE = " + this->getID_MODE() + ");";
	}

	void MODE_REGLEMENTS::setID_MODE(int ID_MODE)
	{
		if (ID_MODE > 0)
		{
			this->ID_MODE = ID_MODE;
		}
	}

	void MODE_REGLEMENTS::setMODE_REGLEMENT(String^ MODE_REGLEMENT)
	{
		if (MODE_REGLEMENT != "")
		{
			this->MODE_REGLEMENT = MODE_REGLEMENT;
		}
	}


	int MODE_REGLEMENTS::getID_MODE(void)
	{

		return this->ID_MODE;

	}


	String^ MODE_REGLEMENTS::getMODE_REGLEMENT(void)
	{
		return this->MODE_REGLEMENT;
	}


}