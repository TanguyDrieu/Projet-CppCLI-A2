#pragma once

using namespace System;
namespace NS_Composants {




	ref class PRODUITS
	{

	private:
		int REF_PRODUIT;
		String^ PRIX_HT;
		String^ DESIGNATION;
		String^ QUANTITE_STOCK;
		String^ SEUIL_REAPPROVISIONNEMENT;
		String^ TAUX_TVA;
	

	public:
		PRODUITS();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		


		void setPRIX_HT(String^);
		void setDESIGNATION(String^);
		void setQUANTITE_STOCK(String^);
		void setSEUIL_REAPPROVISIONNEMENT(String^);
		void setTAUX_TVA(String^);
		
		void setREF_PRODUIT(int);


		String^ getPRIX_HT(void);
		String^ getDESIGNATION(void);
		String^ getQUANTITE_STOCK(void);
		String^ getSEUIL_REAPPROVISIONNEMENT(void);
		String^ getTAUX_TVA(void);
	
		int getREF_PRODUIT(void);



	};
}
