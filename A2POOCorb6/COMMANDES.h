#pragma once

using namespace System;
namespace NS_Composants {




	ref class COMMANDES
	{

	private:
		String^ REF_COMMANDE;
		String^ DATE_LIVRAISON_PREVUE;
		String^ DATE_EMISSION_COMMANDE;
		String^ DATE_SOLDE_REGLEMENT;
		double MONTANT_HT;
		double MONTANT_TVA;
		double MONTANT_TTC;
		String^ DATE_EMISSION_FACTURE;
		int ID_CLIENTC;

	public:
		COMMANDES();
		String^ SELECT(void);
		String^ SELECTCOMMANDE(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);


		void setDATE_LIVRAISON_PREVUE(String^);
		void setDATE_EMISSION_COMMANDE(String^);
		
		void setDATE_SOLDE_REGLEMENT(String^);
		void setMONTANT_HT(double);
		void setMONTANT_TVA(double);
		void setMONTANT_TTC(double);
		void setDATE_EMISSION_FACTURE(String^);
		void setREF_COMMANDE(String^);
		void setID_CLIENTC(int);

		String^ getDATE_LIVRAISON_PREVUE(void);
		String^ getDATE_EMISSION_COMMANDE(void);
		String^ getDATE_SOLDE_REGLEMENT(void);
		double getMONTANT_HT(void);
		double getMONTANT_TVA(void);
		double getMONTANT_TTC(void);
		String^ getDATE_EMISSION_FACTURE(void);
		
		String^ getREF_COMMANDE(void);
		int getID_CLIENTC(void);



	};
}
