#include "ADRESSE.h"
#include"CLIENT.h"
namespace NS_Composants
{
	ADRESSE::ADRESSE(void)
	{
		
		this->ID_ADRESSE = -1;
		this->RUE = "RIEN";
		
		this->VILLE = "RIEN";
		
	}
	String^ ADRESSE::SELECT(void)
	{
		return "SELECT ID_ADRESSE, RUE, CODE_POSTAL, VILLE " +
			"FROM ADRESSE;";
	}
	String^ ADRESSE::INSERT(void)
	{
		return "INSERT INTO ADRESSE " +
			"(RUE, CODE_POSTAL, VILLE) " +
			"VALUES('" + this->getRUE() + "', '" + this->getCODE_POSTAL() + "', '" + this->getVILLE() + "');SELECT @@IDENTITY;";
	}
	String^ ADRESSE::INSERT_FAC(void)
	{
		return "INSERT INTO ADRESSE " +
			"(ID_CLIENT_FACTURATION, RUE, CODE_POSTAL, VILLE) " +
			"VALUES('" + this->getID_CLIENT_FAC() + "', '" + this->getRUE() + "', '" + this->getCODE_POSTAL() + "', '" + this->getVILLE() + "');SELECT @@IDENTITY;";
	}
	String^ ADRESSE::INSERT_LIV(void)
	{
		return "INSERT INTO ADRESSE " +
			"(ID_CLIENT_LIVRAISON, RUE, CODE_POSTAL, VILLE) " +
			"VALUES('" + this->getID_CLIENT_LIV() + "','" + this->getRUE() + "', '" + this->getCODE_POSTAL() + "', '" + this->getVILLE() + "');SELECT @@IDENTITY;";
	}
	String^ ADRESSE::INSERT_FAC_LIV(void)
	{
		return "INSERT INTO ADRESSE " +
			"(ID_CLIENT_FACTURATION, ID_CLIENT_LIVRAISON, RUE, CODE_POSTAL, VILLE) " +
			"VALUES('" + this->getID_CLIENT_FAC() + "', '" + this->getID_CLIENT_LIV() + "', '" + this->getRUE() + "', '" + this->getCODE_POSTAL() + "', '" + this->getVILLE() + "');SELECT @@IDENTITY;";
	}
	String^ ADRESSE::UPDATE(void)
	{
		return "UPDATE ADRESSE " +
			"SET RUE = '" + this->getRUE() + "', CODE_POSTAL = '" + this->getCODE_POSTAL() + "', VILLE = '" + this->getVILLE() + "' " +

			"WHERE(ID_ADRESSE = " + this->getID_ADRESSE() + ");";
	}	
	
	String^ ADRESSE::DELETE(void)
	{
		return "DELETE FROM ADRESSE " +
			"WHERE(ID_ADRESSE = " + this->getID_ADRESSE() + ");";
	}
	String^ ADRESSE::DELETEAdresseClient(void)
	{
		return "DELETE FROM ADRESSE " +
			"WHERE(ID_CLIENT_FACTURATION = " + this->getID_CLIENT_FAC() + " OR ID_CLIENT_LIVRAISON = " + this->getID_CLIENT_LIV() + ");";
	}
	
	void ADRESSE::setID_ADRESSE(int ID_ADRESSE)
	{
		if (ID_ADRESSE > 0)
		{
			this->ID_ADRESSE = ID_ADRESSE;
		}
	}

	void ADRESSE::setRUE(String^ RUE)
	{
		if (RUE != "")
		{
			this->RUE = RUE;
		}
	}
	void ADRESSE::setCODE_POSTAL(int CODE_POSTAL)
	{
		
		
			this->CODE_POSTAL = CODE_POSTAL;
		
	}
	void ADRESSE::setVILLE(String^ VILLE)
	{
		if (VILLE != "")
		{
			this->VILLE = VILLE;
		}
	}

	void ADRESSE::setID_CLIENT_FAC(int ID_CLIENT_FAC) 
	{

		this->ID_CLIENT_FAC = ID_CLIENT_FAC;

	}

	void ADRESSE::setID_CLIENT_LIV(int ID_CLIENT_LIV)
	{

		this->ID_CLIENT_LIV = ID_CLIENT_LIV;

	}


	int ADRESSE::getID_ADRESSE(void)
	{
	
		return this->ID_ADRESSE;
	
	}

	int ADRESSE::getID_CLIENT_FAC(void)
	{

		return this->ID_CLIENT_FAC;

	}

	int ADRESSE::getID_CLIENT_LIV(void)
	{

		return this->ID_CLIENT_LIV;

	}

	String^ ADRESSE::getRUE(void)
	{
		return this->RUE;
	}
	int ADRESSE::getCODE_POSTAL(void)
	{
		return this->CODE_POSTAL;
	}
	String^ ADRESSE::getVILLE(void)
	{
		return this->VILLE;
	}
	
}