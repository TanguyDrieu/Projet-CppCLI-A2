#pragma once

using namespace System;
namespace NS_Composants {

	ref class PRODUITS
	{

	private:
		String^ REF_PRODUIT;
		int ID_NATURE;
		int ID_TARIF;
		String^ PRIX_HT;
		String^ DESIGNATION;
		int QUANTITE_STOCK;
		int SEUIL_REAPPROVISIONNEMENT;
		String^ TAUX_TVA;
	
	public:
		PRODUITS();
		String^ SELECT(void);
		String^ SELECTProdNatTar(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		
		void setID_NAT(int);
		void setID_TARIF(int);
		void setREF_PRODUIT(String^);
		void setPRIX_HT(String^);
		void setDESIGNATION(String^);
		void setQUANTITE_STOCK(int);
		void setSEUIL_REAPPROVISIONNEMENT(int);
		void setTAUX_TVA(String^);
		
		int getID_NAT(void);
		int getID_TARIF(void);
		String^ getREF_PRODUIT(void);
		String^ getPRIX_HT(void);
		String^ getDESIGNATION(void);
		int getQUANTITE_STOCK(void);
		int getSEUIL_REAPPROVISIONNEMENT(void);
		String^ getTAUX_TVA(void);
	};
}