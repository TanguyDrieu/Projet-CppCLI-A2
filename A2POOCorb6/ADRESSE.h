#pragma once
using namespace System;
namespace NS_Composants {




	ref class ADRESSE
	{

	private:
		
		int ID_ADRESSE;
		int ID_CLIENT_FAC;
		int ID_CLIENT_LIV;
		String^ RUE;
		int CODE_POSTAL;
		String^ VILLE;
		


	public:
		ADRESSE();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ INSERT_FAC(void);
		String^ INSERT_LIV(void);
		String^ INSERT_FAC_LIV(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setRUE(String^);
		void setCODE_POSTAL(int);
		void setVILLE(String^);
		void setID_CLIENT_FAC(int);
		void setID_CLIENT_LIV(int);
		
		void setID_ADRESSE(int);
		String^ getRUE(void);
		int getCODE_POSTAL(void);
		String^ getVILLE(void);
		
		int getID_ADRESSE(void);
		int getID_CLIENT_FAC();
		int getID_CLIENT_LIV();



	};
}