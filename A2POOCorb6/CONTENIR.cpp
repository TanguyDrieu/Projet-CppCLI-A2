//#include "CONTENIR.h"
//
//
//namespace NS_Composants
//{
//	CONTENIR::CONTENIR(void)
//	{
//
//		
//		this->QUANTITE_ARTICLE = "RIEN";
//
//	}
//	String^ CONTENIR::SELECT(void)
//	{
//		return "SELECT QUANTITE_ARTICLE" +
//			"FROM CONTENIR;";
//	}
//	String^ CONTENIR::INSERT(void)
//	{
//		return "INSERT INTO CONTENIR " +
//			"(QUANTITE_ARTICLE) " +
//			"VALUES('" + this->getQUANTITE_ARTICLE() + "');SELECT @@IDENTITY;";
//	}
//	String^ CONTENIR::UPDATE(void)
//	{
//		return "UPDATE CONTENIR " +
//			"SET QUANTITE_ARTICLE = '" + this->getQUANTITE_ARTICLE() + "'";
//
//			
//	}
//
//	String^ CONTENIR::DELETE(void)
//	{
//		return "DELETE FROM CONTENIR" +
//			"WHERE(ID_COULEUR = " + this->getQUANTITE_ARTICLE() + ");";
//	}
//
//	void COULEUR::setID_COULEUR(int ID_COULEUR)
//	{
//		if (ID_COULEUR > 0)
//		{
//			this->ID_COULEUR = ID_COULEUR;
//		}
//	}
//
//	void COULEUR::setNOM_COULEUR(String^ NOM_COULEUR)
//	{
//		if (NOM_COULEUR != "")
//		{
//			this->NOM_COULEUR = NOM_COULEUR;
//		}
//	}
//
//
//	int COULEUR::getID_COULEUR(void)
//	{
//
//		return this->ID_COULEUR;
//
//	}
//
//
//	String^ COULEUR::getNOM_COULEUR(void)
//	{
//		return this->NOM_COULEUR;
//	}
//
//
//}