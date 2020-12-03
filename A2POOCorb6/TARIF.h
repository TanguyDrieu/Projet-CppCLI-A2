#pragma once
using namespace System;
namespace NS_Composants {




	ref class TARIF
	{

	private:
		int ID_TARIF;
		String^ INTITULE_TARIF;


	public:
		TARIF();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);


		void setINTITULE_TARIF(String^);
		void setID_TARIF(int);


		String^ getINTITULE_TARIF(void);
		int getID_TARIF(void);



	};
}