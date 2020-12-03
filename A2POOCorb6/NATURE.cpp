#include "NATURE.h"

namespace NS_Composants
{
	NATURE::NATURE(void)
	{

		this->ID_NATURE = -1;
		this->INTITULE_NATURE = "RIEN";
		
	}
	String^ NATURE::SELECT(void)
	{
		return "SELECT ID_NATURE, INTITULE_NATURE" +
			"FROM NATURE;";
	}
	String^ NATURE::INSERT(void)
	{
		return "INSERT INTO NATURE " +
			"(INTITULE_NATURE) " +
			"VALUES('" + this->getINTITULE_NATURE() + "');SELECT @@IDENTITY;";
	}
	String^ NATURE::UPDATE(void)
	{
		return "UPDATE NATURE " +
			"SET INTITULE_NATURE = '" + this->getINTITULE_NATURE() + "'  " +

			"WHERE(ID_NATURE = " + this->getID_NATURE() + ");";
	}

	String^ NATURE::DELETE(void)
	{
		return "DELETE FROM NATURE " +
			"WHERE(ID_NATURE = " + this->getID_NATURE() + ");";
	}

	void NATURE::setID_NATURE(int ID_NATURE)
	{
		if (ID_NATURE > 0)
		{
			this->ID_NATURE = ID_NATURE;
		}
	}

	void NATURE::setINTITULE_NATURE(String^ INTITULE_NATURE)
	{
		if (INTITULE_NATURE != "")
		{
			this->INTITULE_NATURE = INTITULE_NATURE;
		}
	}
	

	int NATURE::getID_NATURE(void)
	{

		return this->ID_NATURE;

	}


	String^ NATURE::getINTITULE_NATURE(void)
	{
		return this->INTITULE_NATURE;
	}
	

}