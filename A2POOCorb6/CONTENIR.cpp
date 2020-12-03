#include "CONTENIR.h"


namespace NS_Composants
{
	CONTENIR::CONTENIR(void)
	{


		this->QUANTITE_ARTICLE = -1;

	}

	String^ CONTENIR::SELECT(void)
	{
		return "SELECT QUANTITE_ARTICLE " +
			"FROM COULEUR;";
	}
	String^ CONTENIR::INSERT(void)
	{
		return "INSERT INTO CONTENIR " +
			"(QUANTITE_ARTICLE) " +
			"VALUES('" + this->getQUANTITE_ARTICLE() + "');SELECT @@IDENTITY;";
	}
	


	void CONTENIR::setQUANTITE_ARTICLE(int QUANTITE_ARTICLE)
	{
		if (QUANTITE_ARTICLE > 0)
		{
			this->QUANTITE_ARTICLE = QUANTITE_ARTICLE;
		}
	}





	double CONTENIR::getQUANTITE_ARTICLE(void)
	{
		return this->QUANTITE_ARTICLE;
	}

}
