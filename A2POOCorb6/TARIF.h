#pragma once
using namespace System;
namespace NS_Composants {




	ref class TARIF
	{

	private:
		int ID_TARIF;
		int ID_COULEUR;
		int ID_NATURE;
		String^ REF_PRODUIT;
		String^ PRIX_UNITAIRE;
		String^ INTITULE_TARIF;


	public:
		TARIF();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setID_TARIF(int);
		void setID_COULEUR(int);
		void setID_NATURE(int);
		void setREF_PRODUIT(String^);
		void setPRIX_UNITAIRE(String^);
		void setINTITULE_TARIF(String^);

		int getID_TARIF(void);
		int getID_COULEUR(void);
		int getID_NATURE(void);
		String^ getREF_PRODUIT(void);
		String^ getPRIX_UNITAIRE(void);
		String^ getINTITULE_TARIF(void);




	};
}