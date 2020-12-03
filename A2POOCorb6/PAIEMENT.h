#pragma once

using namespace System;
namespace NS_Composants {




	ref class PAIEMENT
	{

	private:
		int ID_PAIEMENT;
		String^ DATE_PAIEMENT;
		String^ MONTANT_PAIEMENT;


	public:
		PAIEMENT();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);


		void setDATE_PAIEMENT(String^);
		void setMONTANT_PAIEMENT(String^);
		void setID_PAIEMENT(int);


		String^ getDATE_PAIEMENT(void);
		String^ getMONTANT_PAIEMENT(void);
		int getID_PAIEMENT(void);



	};
}

