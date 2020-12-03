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
			"(INTITULE_TARIF) " +
			"VALUES('" + this->getINTITULE_TARIF() + "');SELECT @@IDENTITY;";
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


	String^ TARIF::getINTITULE_TARIF(void)
	{
		return this->INTITULE_TARIF;
	}


}