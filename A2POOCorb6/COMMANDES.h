#pragma once

using namespace System;
namespace NS_Composants {




	ref class COMMANDES
	{

	private:
		int REF_COMMANDE;
		String^ DATE_LIVRAISON_PREVUE;
		String^ DATE_EMISSION_COMMANDE;
		String^ DATE_SOLDE_REGLEMENT;
		String^ MONTANT_HT;
		String^ MONTANT_TVA;
		String^ MONTANT_TTC;
		String^ DATE_EMISSION_FACTURE;

	public:
		COMMANDES();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);


		void setDATE_LIVRAISON_PREVUE(String^);
		void setDATE_EMISSION_COMMANDE(String^);
		
		void setDATE_SOLDE_REGLEMENT(String^);
		void setMONTANT_HT(String^);
		void setMONTANT_TVA(String^);
		void setMONTANT_TTC(String^);
		void setDATE_EMISSION_FACTURE(String^);
		void setREF_COMMANDE(int);


		String^ getDATE_LIVRAISON_PREVUE(void);
		String^ getDATE_EMISSION_COMMANDE(void);
		String^ getDATE_SOLDE_REGLEMENT(void);
		String^ getMONTANT_HT(void);
		String^ getMONTANT_TVA(void);
		String^ getMONTANT_TTC(void);
		String^ getDATE_EMISSION_FACTURE(void);
		
		int getREF_COMMANDE(void);



	};
}
