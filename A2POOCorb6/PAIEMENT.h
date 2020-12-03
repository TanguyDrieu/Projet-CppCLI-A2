#pragma once

using namespace System;
namespace NS_Composants {




	ref class PAIEMENT
	{

	private:
		int ID_PAIEMENT;
		String^ DATE_PAIEMENT;
		int MONTANT_PAIEMENT;
		int ID_MODEP;


	public:
		PAIEMENT();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);


		void setDATE_PAIEMENT(String^);
		void setMONTANT_PAIEMENT(int);
		void setID_PAIEMENT(int);
		void setID_MODEP(int);


		String^ getDATE_PAIEMENT(void);
		int getMONTANT_PAIEMENT(void);
		int getID_PAIEMENT(void);
		int getID_MODEP(void);



	};
}

